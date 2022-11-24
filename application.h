//--------------------------------------------------------------------------------------
//
// �}�l�[�W���[�A�v���P�[�V����
// Author::TAKANO
//
//--------------------------------------------------------------------------------------
#ifndef _APPLICATION_H_
#define _APPLICATION_H_

#include <d3dx9.h>

//----------------------------------------
//�O���錾
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
//�N���X��`
//�}�l�[�W���[
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
	CApplication();														//�R���X�g���N�^
	~CApplication();													//�f�X�g���N�^
	HRESULT Init(HINSTANCE hInctance, HWND hWnd, bool bWindow);			//������
	void Uninit();														//�I��
	void Update();														//�X�V
	void Draw();														//�`��
	void ReleseDustCheck();												//����R������Ă��Ȃ����m�F�p�֐�
	static CRenderer* GetRenderer();									//�`����̎擾
	static CInput* GetKyeboard();										//�L�[�{�[�h���̎擾
	static CTexture* GetTexture();										//�e�N�X�`�����̎擾
	static CTitle* GetTitle();
	static CGame* GetGame();
	static CResult* GetResult();
	static CRanking* GetRanking();
	static void SetMode(MODE mode);
	static CApplication::MODE GetMode();
	static CSound* GetSound() { return m_pSound; }						//���y���̎擾

private:
	static CRenderer* m_aRenderer;										//�����_���[�̃|�C���^�[
	static CInput* m_pInputKyeboard;									//�L�[�{�[�h�̃|�C���^�[
	static CTexture* m_pTexture;										//�e�N�X�`���̃|�C���^�[
	static CTitle* m_pTitle;
	static CGame* m_pGame;
	static CResult* m_pResult;
	static CRanking* m_pRanking;
	static MODE m_mode;
	static CSound* m_pSound;								//���y�}�l�[�W���[�̃|�C���^�[
};

#endif // !_APPLICATION_H_
