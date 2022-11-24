//--------------------------------------------------------------------------------------
//
// マネージャーアプリケーション
// Author::TAKANO
//
//--------------------------------------------------------------------------------------
#ifndef _APPLICATION_H_
#define _APPLICATION_H_

#include <d3dx9.h>

//----------------------------------------
//前方宣言
//----------------------------------------
class CRenderer;
class CTexture;
class CTitle;
class CGame;
class CResult;
class CRanking;
class CInput;
class CSound;

//----------------------------------------
//クラス定義
//マネージャー
//----------------------------------------
class CApplication
{
public:
	enum MODE
	{
		MODE_TITLE = 0,
		MODE_GAME,
		MODE_RESULT,
		MODE_RANKING,
		MODE_MAX
	};
	CApplication();														//コンストラクタ
	~CApplication();													//デストラクタ
	HRESULT Init(HINSTANCE hInctance, HWND hWnd, bool bWindow);			//初期化
	void Uninit();														//終了
	void Update();														//更新
	void Draw();														//描画
	void ReleseDustCheck();												//解放漏れをしていないか確認用関数
	static CRenderer* GetRenderer();									//描画情報の取得
	static CInput* GetKyeboard();										//キーボード情報の取得
	static CTexture* GetTexture();										//テクスチャ情報の取得
	static CTitle* GetTitle();
	static CGame* GetGame();
	static CResult* GetResult();
	static CRanking* GetRanking();
	static void SetMode(MODE mode);
	static CApplication::MODE GetMode();
	static CSound* GetSound() { return m_pSound; }						//音楽情報の取得

private:
	static CRenderer* m_aRenderer;										//レンダラーのポインター
	static CInput* m_pInputKyeboard;									//キーボードのポインター
	static CTexture* m_pTexture;										//テクスチャのポインター
	static CTitle* m_pTitle;
	static CGame* m_pGame;
	static CResult* m_pResult;
	static CRanking* m_pRanking;
	static MODE m_mode;
	static CSound* m_pSound;								//音楽マネージャーのポインター
};

#endif // !_APPLICATION_H_
