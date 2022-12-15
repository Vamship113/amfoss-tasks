## Steps I followed to web scrapping and store data in csv file
1. Installed Rust through given document.
2. Learned basics and understood how to do web scarpping in rust from the given example link.
3. Used cargo new web_scrap to create new rust folder
4. I used reqwest and selector to send request and selector to indentity the respective data by unique tag like id , class or containers.
5. Stored the data in csv file.
6. But there was a problem I got all the values But not market cap first value.
- ![Screenshot from 2022-12-16 05-10-01](https://user-images.githubusercontent.com/92430906/207935799-b6df8f54-0f45-41b2-a9aa-d169aabf401f.png)
7. I was getting fisrt value of market cap as some different value but remaining market value are stored correctly.
