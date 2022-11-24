//------------------------------------------------------------------------------
//
//背景画面
//Author::TAKANO
//
//------------------------------------------------------------------------------
#include "bg.h"
#include "texture.h"
#include <assert.h>

//--------------------------------------
//コンストラクタ
//--------------------------------------
CBg::CBg()
{
}

//--------------------------------------
//デストラクタ
//--------------------------------------
CBg::~CBg()
{
}

//--------------------------------------
//クリエイト
//--------------------------------------
CBg* CBg::Create(D3DXVECTOR3 pos, float ObfHi, float ObfWd, CTexture::TEXTURE tex)
{
	CBg *m_pBg = new CBg;

	if (m_pBg != nullptr)
	{
		m_pBg->Init();
		m_pBg->SetObjectType(OBJTYPE_BG);
		m_pBg->Setpos(pos);
		m_pBg->SetSize(ObfHi, ObfWd);
		//テクスチャの設定
		m_pBg->SetTexture(tex);
	}

	return m_pBg;
}

//--------------------------------------
//終了
//--------------------------------------
void CBg::Uninit()
{
	CObject2D::Uninit();
}

//--------------------------------------
//背景画面の更新処理
//--------------------------------------
void CBg::Update(void)
{
	CObject2D::Update();
}

//--------------------------------------
//背景画面の描画処理
//--------------------------------------
void CBg::Draw(void)
{
	CObject2D::Draw();
}
