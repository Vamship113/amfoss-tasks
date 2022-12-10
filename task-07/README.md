## Attempted but not able to complete 
### below are the steps I followed
- Cloned the repository 
- installed go 
- In main.go I added the functions onclick for increment,decrease and reset
- In html I added Onclick="function()" for each click events
- generated wasm_exec.js using     1. $ GOOS=js GOARCH=wasm go build -o main.wasm 2. cd task-07ARCH=wasm go build -o main.wasm, ls "$(go env GOROOT)/misc/wasm/wasm_exec.js" . 3. go run .dex.html&
- tried running go file but failed
 
![Screenshot from 2022-12-11 03-04-46](https://user-images.githubusercontent.com/92430906/206864223-fbd29fb2-962f-4f42-9e1d-5a0bf568c4d3.jpg)
 
 
#### After this i was stucked and didn't get any idea since onclick events are not working

