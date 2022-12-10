package main

import (
    "fmt"
    
)

var counter int

func main() {

    counter = 0

    increaseButton := js.Global.Get("document").Call("getElementById", "inc")
    decreaseButton := js.Global.Get("document").Call("getElementById", "dec")
    resetButton := js.Global.Get("document").Call("getElementById", "res")


    increaseButton.Call("addEventListener", "click", incrementCounter)
    decreaseButton.Call("addEventListener", "click", decrementCounter)
    resetButton.Call("addEventListener", "click", resetCounter)
    increaseButton.Set("innerHTML", counter)
    decreaseButton.Set("innerHTML", counter)
    resetButton.Set("innerHTML", counter)
}

func incrementCounter() {

    counter++

    
    fmt.Println(counter)
}

func decrementCounter() {
   
    counter--

    
    fmt.Println(counter)
}

func resetCounter() {

    counter = 0

   
    fmt.Println(counter)
}
