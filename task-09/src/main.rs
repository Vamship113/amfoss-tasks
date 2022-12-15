use scraper::{Html, Selector};
fn main() {
    let url =  "https://crypto.com/price";
    let response = reqwest::blocking::get(url).expect("Could not load url.");
    let body = response.text().expect("No response body found.");
    let document = Html::parse_document(&body);
    let crypto_selector = Selector::parse("tr.css-1cxc880").expect("Could not create selector.");
    let name_selector = Selector::parse("div.css-ttxvk0>p").expect("Could not create selector.");
    let price_selector = Selector::parse("div.css-0").expect("Could not create selector.");
    let h24_selector = Selector::parse("div.css-16q9pr7>p").expect("Could not create selector.");
    let h24v_selector = Selector::parse("td.css-1nh9lk8").expect("Could not create selector.");
    let mark_selector = Selector::parse("tr.css-1cxc880 :nth-child(7)").expect("Could not create selector.");
    let mut wtr = csv::Writer::from_path("crypto.csv").expect("Could not create file.");
    wtr.write_record(&["Name","Price","24H change","24H volume","Market Cap"]).expect("Could not write header.");

    for element in document.select(&crypto_selector) {

    let book_name_element = element.select(&name_selector).next().expect("Could not select book name.");
    let name = book_name_element.text().collect::<String>();
    let price_element = element.select(&price_selector).next().expect("Could not find price");
    let price = price_element.text().collect::<String>();
    let h24_element = element.select(&h24_selector).next().expect("Could not h24");
    let h24 = h24_element.text().collect::<String>();
    let h24v_element = element.select(&h24v_selector).next().expect("Could not find h24v");
    let h24v = h24v_element.text().collect::<String>();
    let mark_element = element.select(&mark_selector).next().expect("Could not find mark");
    let mark = mark_element.text().collect::<String>();
    wtr.write_record([&name, &price,&h24,&h24v,&mark]).expect("Could not create selector.");
    println!("{}",mark)
    } 
    wtr.flush().expect("Could not close file");
    println!("Done ");
    // println!("{}",body);
} 
