var global = (function(){
	var width = 500;
	var height = 600;
	var canvas = document.getElementById("canvas");
	var ctx = canvas.getContext("2d");

	canvas.width = width;
	canvas.height = height;
	canvas.style.border = "1px solid #ccc";

	return {ctx:ctx, width:width, height:height};
}());
