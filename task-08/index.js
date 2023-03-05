const soundFiles = {
  "w": "sounds/tom-1.mp3",
  "a": "sounds/tom-2.mp3",
  "s": "sounds/tom-3.mp3",
  "d": "sounds/tom-4.mp3",
  "j": "sounds/snare.mp3",
  "k": "sounds/crash.mp3",
  "l": "sounds/kick-bass.mp3"
};

for (let i = 0; i < 7; i++) {
  document.querySelectorAll(".drum")[i].addEventListener("click", function() {
    const button = this.innerHTML;
    playSound(button);
    animateButton(button);
  });
}

document.addEventListener("keypress", function(event) {
  const key = event.key;
  playSound(key);
  animateButton(key);
});

function playSound(key) {
  const soundFile = soundFiles[key];
  if (soundFile) {
    const audio = new Audio(soundFile);
    audio.play();
  } else {
    console.log(key);
  }
}

function animateButton(button) {
  const activeButton = document.querySelector("." + button);
  activeButton.classList.add("pressed");
  setTimeout(function() {
    activeButton.classList.remove("pressed");
  }, 100);
}
