package main

import (
    "github.com/gopherjs/gopherjs/js"
)

var value=0
func main() {
    increaseButton := js.Global.Get("document").Call("getElementById", "inc")

    // Define a function to be called when the "inc" button is clicked
    increaseCounter := func(event *js.Object) {
        // Get the current value of the "counter" element
        counter := js.Global.Get("document").Call("getElementById", "counter")
        value := counter.Get("value").Int()

        // Increment the value of the "counter" element
        counter.Set("value", value+1)
    }

    // Attach the "increaseCounter" function as a click event listener
    // to the "inc" button
    increaseButton.Call("addEventListener", "click", increaseCounter)
}

