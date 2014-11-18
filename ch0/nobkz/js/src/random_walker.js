global.Walker = (function(){
	function Walker(){
		this.x = global.width * Math.random();
		this.y = global.height * Math.random();
	}

	Walker.prototype.display = function(){
		global.point(this.x, this.y);
	}

	Walker.prototype.step = function(){
		var choice = (Math.random() * 4).toFixed() - 1;
		if( choice == 0 ){
			this.x += 1;
		} else if( choice == 1 ) {
			this.x -= 1;
		} else if( choice == 2 ){
			this.y += 1;
		} else {
			this.y -= 1;
		}

		if( this.x < 0 ){
			this.x = 0;
		}else if( this.x > global.width ){
			this.x = width;
		}

		if( this.y < 0 ){
			this.y = 0;
		}else if( this.y > global.height ){
			this.y = global.height;
		}
	}

	return Walker;
}());


