/* ------------------------------------------------------------------------------------------------------------------------ */
/*                                                          ВНУТРИИГРОВОЕ МЕНЮ [ИГРА]                                       */
/* ------------------------------------------------------------------------------------------------------------------------ */

/* Размытие */
static float BLANK_InGameBlureStrength = 0.3;                                               // Сила блюра в меню ESC (0.0 - 1.0)

/* Картинка после смерти */
static bool BLANK_ShowDeadScreen    = false;                                                // Вкл/выкл экран смерти
static string BLANK_DeadScreenImage = "BlankSoftware_UIConnect/gui/data/deathscreen.edds";  // Путь к картинке при включенном экране смерти

/* Информация о сервере */
static bool BLANK_ServerInformation = true;                                                 // Вкл/выкл информацию о сервере в меню Esc.
static string BLANK_ProjectName     = "";                                                   // Имя проекта, если пусто выводит полное наименование сервера.

/* Панель онлайна/времени */
static bool BLANK_ShowOnline        = true;                                                 // Вкл/выкл счетчик онлайна в меню.
static bool BLANK_ShowTime          = true;                                                 // Вкл/выкл отображение серверного времени в меню.

/* Правила */
static bool BLANK_ShowInGameButtonRules = true;                                             // Вкл/выкл кнопку правил в внутриигровом меню.

/* Подложка для зимних карт */
static bool BLANK_SnowMapMenuAdaptaion  = false;                                            // Вкл/выкл подложку для меню
static float BLANK_SnowMenuAlpha = 1.4;                                                     // Прозрачность [0.0 - прозрачно] [2.55 - полностью черный]

/* Кнопка возродиться */
static bool BLANK_ShowRespawnButton     = true;                                             // Кнопка возродиться в бессознательном состоянии

/* ------------------------------------------------------------------------------------------------------------------------ */

/* 
BLANKSOFTWARE DayZ Modding

Discord:			https://discord.gg/xt2GGzfFY7
Telegram: 			https://t.me/blanksoftware
Telegram support:	https://t.me/blankdayz

This is private modification.
Use without express permission is prohibited and will be punished.
It is protected by copyright.
*/

/* ------------------------------------------------------------------------------------------------------------------------ */