namespace game_framework {
	/*
	*遊戲角色
	*/


	class Character_madeline {
	public:
		Character_madeline();
		int  GetX1();					// 擦子左上角 x 座標
		int  GetY1();					// 擦子左上角 y 座標
		int  GetX2();					// 擦子右下角 x 座標
		int  GetY2();					// 擦子右下角 y 座標
		void Initialize();				// 設定擦子為初始值
		void LoadBitmap();				// 載入圖形
		void OnMove();					// 移動擦子
		void OnShow();					// 將擦子圖形貼到畫面
		void SetMovingDown(bool flag);	// 設定是否正在往下移動
		void SetMovingLeft(bool flag);	// 設定是否正在往左移動
		void SetMovingRight(bool flag); // 設定是否正在往右移動
		void SetMovingUp(bool flag);	// 設定是否正在往上移動
		void SetXY(int nx, int ny);		// 設定擦子左上角座標
	private:
		//		madeline
		CMovingBitmap SpriteStand;			//靜止
		CMovingBitmap SpriteLookUp;			//向上看
		CMovingBitmap SpriteLookDown;		//向下看
		CAnimation SpriteLeft;				//往左
		CAnimation SpriteRight;				//往右



		int x, y;					// 擦子左上角座標
		bool isMovingDown;			// 是否正在往下移動
		bool isMovingLeft;			// 是否正在往左移動
		bool isMovingRight;			// 是否正在往右移動
		bool isMovingUp;			// 是否正在往上移動

		bool isInAir;				// 是否在空中，決定可以跳躍的條件

		
		bool isRising;			// true表上升、false表下降
		int jumpVelocity;		// 跳躍的力度
		int velocity;			// 目前的速度(點/次)

		int floor;				// 地板的Y座標 暫時性
	};


}