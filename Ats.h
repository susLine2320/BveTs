// �ȉ��� ifdef �u���b�N�� DLL ����ȒP�ɃG�N�X�|�[�g������}�N�����쐬����W���I�ȕ��@�ł��B 
// ���� DLL ���̂��ׂẴt�@�C���̓R�}���h���C���Œ�`���ꂽ ATS_EXPORTS �V���{��
// �ŃR���p�C������܂��B���̃V���{���͂��� DLL ���g�p����ǂ̃v���W�F�N�g��ł�����`�łȂ�
// ��΂Ȃ�܂���B���̕��@�ł̓\�[�X�t�@�C���ɂ��̃t�@�C�����܂ނ��ׂẴv���W�F�N�g�� DLL 
// ����C���|�[�g���ꂽ���̂Ƃ��� ATS_API �֐����Q�Ƃ��A���̂��߂��� DLL �͂��̃}�N 
// ���Œ�`���ꂽ�V���{�����G�N�X�|�[�g���ꂽ���̂Ƃ��ĎQ�Ƃ��܂��B
//#pragma data_seg(".shared")
//#pragma data_seg()

#define ATS_BEACON_S 0 // S�����O
#define ATS_BEACON_SN 1 // SN����
#define ATS_BEACON_SNRED 2 // SN��o���h�~
#define ATS_BEACON_P 3 // P��~�M��
#define ATS_BEACON_EMG 4 // P����(���)
#define ATS_BEACON_SVC 5 // P����(��p)
#define ATS_BEACON_SPDLIM 6 // P����푬�x����
#define ATS_BEACON_SPDMAX 7 // P�ō����x
#define ATS_BEACON_SPP 8 // ��ԉw�ʉߖh�~���u

int g_emgBrake; // ���m�b�`
int g_svcBrake; // ��p�ő�m�b�`
int g_brakeNotch; // �u���[�L�m�b�`
int g_powerNotch; // �͍s�m�b�`
int g_reverser; // ���o�[�T
bool g_pilotlamp; // �p�C���b�g�����v
int g_time; // ���ݎ���
float g_speed; // ���x�v�̑��x[km/h]
int g_deltaT; // �t���[������[ms/frame]
int atoCgS; //�^�]�ؑփX�C�b�`
int atoSWitch; //�p�^�[���ؑփX�C�b�`
bool atodrive;
bool ats8;
bool ats24;
int ats35;
int ats40;
int ats67;
int ats71;
int ats80;
int ats83;
int ats84;
int ats85;
int ats87;
int ats88;
int ats89;
int ats90;
int ats93;
bool ats94;
bool ats95;
bool ats97;
bool ats98;
bool ats99;
bool ats100;
int ats126;
int ats127;
int ats128;
int ats129;
int ats130;
bool ats136;
bool ats138;
int ats139;
int ats140;
int ats141;
int ats142;
int ats143;
int ats144;
int ats145;
int ats146;
int ats147;
int ats148;
int ats149;
int ats150;
int ats170;
int ats178;
int ats179;
int ats180;
int ats183;
int ats184;
int ats242;
int ats243;
int ats244;
int ats188;
int ats189;
int ats190;
int ats191;
int ats195;
int ats196;
int ats197;
int ats198;
int ats199;
int ats200;
int ats207;
int ats208;
int ats209;
int ats215;
int ats216;
int ats217;
int ats218;
int ats219;
int ats220;
int ats221;
int ats222;
int ats223;
int ats224;
int ats225;
int ats226;
int ats227;
int ats228;
int ats229;
int ats230;
int ats231;
int ats233;
bool ats255;
int s21;
int s25;
int s26;
int s54;
int s55;
int s67;
int s68;
int s89;

ATS_HANDLES g_output; // �o��
