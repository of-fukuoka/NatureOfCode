var global = (function(){
	var width, height;
    
    if (window.innerHeight && window.scrollMaxY) {    
        width = document.body.scrollWidth;
        height = window.innerHeight + window.scrollMaxY;
    } else if (document.body.scrollHeight > document.body.offsetHeight){ 
        width = document.body.scrollWidth;
        height = document.body.scrollHeight;
    } else { 
        width = document.body.offsetWidth;
        height = document.body.offsetHeight;
    }

	var canvas = document.getElementById("canvas");
	var ctx = canvas.getContext("2d");

	canvas.width = width;
	canvas.height = height;
	canvas.style.border = "1px solid #ccc";

	return {ctx:ctx, width:width, height:height};
}());
