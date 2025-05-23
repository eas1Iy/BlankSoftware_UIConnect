/* ------------------------------------------------------------------------------------------------------------------------ */
/*                                                          НАСТРОЙКИ ЗАГРУЗКИ/ОЧЕРЕДИ                                      */
/* ------------------------------------------------------------------------------------------------------------------------ */

/* Видео на экране загрузке */
static bool     BLANK_LoadingShowVideo      = false;
/*
- Используется видео по пути BS_UIConnect/gui/data/video/blank_loading.mp4
заменяем его с названием 1 в 1 и всё по сути :) 
*/

/* Панель рандомных подсказок */
static bool BLANK_ShowMessage               = true;                                       // Вкл/выкл рандомные сообщения при загрузке
static float BLANK_MSGPanelRGBAlpha         = 0.7;                                        // Прозрачность фона текста (1.0 - полностью чёрный, где 0.0 полностью прозрачный фон).

/* Подсказки [по стандарту используются ссылки для перевода из stringtable.csv] */
autoptr TStringArray BLANK_RandomMessage = {
    "#STR_blank_random_text1",
    "#STR_blank_random_text2",
    "#STR_blank_random_text3",
    "#STR_blank_random_text4",
    "#STR_blank_random_text5",
    "#STR_blank_random_text6"
};

/* Кнопка открытия правил в меню загрузки */
static bool BLANK_ShowBtnQueueRules = true;                                               // Вкл/выкл кнопку правил в очереди.

/* ------------------------------------------------------------------------------------------------------------------------ */
/*                                                          МАССИВЫ КАРТИНОК ПРИ ЗАГРУЗКЕ                                   */
/* ------------------------------------------------------------------------------------------------------------------------ */

/* Экран загрузки игры */
autoptr TStringArray BLANK_LoadingGame = {
    "BS_UIConnect/gui/data/screens/loadingscreen_1.edds",
    "BS_UIConnect/gui/data/screens/loadingscreen_2.edds",
    "BS_UIConnect/gui/data/screens/loadingscreen_3.edds",
    "BS_UIConnect/gui/data/screens/loadingscreen_4.edds",
    "BS_UIConnect/gui/data/screens/loadingscreen_5.edds"
};

/* Экран прогрузки [когда идёт обратный отсчёт] */
autoptr TStringArray BLANK_LoginGame = {
    "BS_UIConnect/gui/data/screens/loadingscreen_1.edds",
    "BS_UIConnect/gui/data/screens/loadingscreen_2.edds",
    "BS_UIConnect/gui/data/screens/loadingscreen_3.edds",
    "BS_UIConnect/gui/data/screens/loadingscreen_4.edds",
    "BS_UIConnect/gui/data/screens/loadingscreen_5.edds"
};

/* Экран очереди */
autoptr TStringArray BLANK_QueueGame = {
    "BS_UIConnect/gui/data/screens/loadingscreen_1.edds",
    "BS_UIConnect/gui/data/screens/loadingscreen_2.edds",
    "BS_UIConnect/gui/data/screens/loadingscreen_3.edds",
    "BS_UIConnect/gui/data/screens/loadingscreen_4.edds",
    "BS_UIConnect/gui/data/screens/loadingscreen_5.edds"
};

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