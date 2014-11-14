var width = 500;
var height = 600;
var canvas = document.getElementById("canvas");
var ctx = canvas.getContext("2d");

canvas.style.width = width + "px";
canvas.style.height = height + "px";
canvas.style.border = "1px solid #ccc";

function point(x,y){
  ctx.beginPath();
  ctx.moveTo(x, y);
  ctx.lineTo(x+1, y+1);
  ctx.stroke();
}

function stroke(){
	
}

