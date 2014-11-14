global.Walker = (function(){
	function Walker(){
		this.x = global.width / 2;
		this.y = global.height / 2;
	}

	Walker.prototype.display = function(){
		global.point(this.x, this.y);
	}

	Walker.prototype.step = function(){
		var choice = (Math.random() * 4).toFixed() - 1;
		if( choice == 0 ){
			this.x += 3;
		} else if( choice == 1 ) {
			this.x -= 3;
		} else if( choice == 2 ){
			this.y += 3;
		} else {
			this.y -= 3;
		}
	}

	return Walker;
}());


