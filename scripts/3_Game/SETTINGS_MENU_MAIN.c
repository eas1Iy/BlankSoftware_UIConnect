/* ------------------------------------------------------------------------------------------------------------------------ */
/*                                                          НАСТРОЙКИ ГЛАВНОГО МЕНЮ                                         */
/* ------------------------------------------------------------------------------------------------------------------------ */

/* Логотип - позиция */
static bool             BLANK_LogoPosition_Left = true;                                                       // Позиция лого (true - слева / false - справа)

/* Кнопка играть */
static int              BLANK_PlayButton_ID      = 1;                                                          // Вариация кнопки играть (0 - кнопка иконка, 1 - кнопка текстовая справа снизу "Играть")

/* Статистика/информация */
static int              BLANK_MenuPanel_ID       = 2;                                                          // Переключатель панелей в главном меню
/* 
0 - статистика и информация отключена
1 - включена панель с информацией
2 - включена панель с статистикой
*/

/* Положение игрока в главном меню */
static int              BLANK_CharacterAnimation = 0;                                                          // Анимация персонажа в гл. меню (0-4)
/* 
Анимации персонажа:
0 - Cтоит
1 - Сидит вариация №1
2 - Сидит вариация №2
3 - Машет руками
4 - Делает деб [циклична]
*/

/* Текст с информацией */
static bool             BLANK_Info_Show       = false;
static string           BLANK_Info_Upper      = "Информация об обновлениях";
static string           BLANK_Info_Link       = "https://blanksoftware.ru/blanksoftware/";
static string           BLANK_Info_File       = "message.txt";
static string           BLANK_Info_WithoutInt = "#STR_BLANK_MAINMENU_NOCONNECT";

/* Заставка */
static bool             BLANK_ImageMainMenu     = false;                                                    // Изображение вместо сцены [true/false]
autoptr TStringArray    BLANK_ImageMain         = {                                                         // Путь к изображениям, можно несколько, выберется рандомная
                                                "BlankSoftware_UIConnect/gui/data/background/image_1.edds",
                                                "BlankSoftware_UIConnect/gui/data/background/image_2.edds"
};

/* Видео в главном меню */
static string           BLANK_VideoKey        = "- buy code in ticket discord -";
static bool             BLANK_DisableSceneSound = false;
static bool             BLANK_ShowMiniVideo     = false;                                                      // Вкл/выкл мини-видео в гл. меню.
static bool             BLANK_ShowVideoMenu     = false;                                                      // Вкл/выкл видео в главном меню
static bool             BLANK_ShowVideoByMap    = false;                                                      // Вкл/выкл видео в зависимости от карты

/* 
Замена видео:
Обратите внимание на параметры:
- Если у вас включен параметр BLANK_ShowVideoByMap, значит видео включается в зависимости от карты
например у нас карта называется "namalsk", мы должны поставить видео по пути BlankSoftware_UIConnect/gui/data/video/
с названием blanksoftware_namalsk.mp4, если название другое, соответственно ставим другое вместо namalsk.

- Если параметр выше не включен, будет использоваться видео BlankSoftware_UIConnect/gui/data/video/blanksoftware.mp4
заменяем его с названием 1 в 1 и всё по сути :)

- Для настройки звука в случае если он работает некорректно измените файл музыки по пути 
BlankSoftware_UIConnect/gui/sound/MainMenu.ogg на ваш звук и не забудьте включить 
параметр BLANK_IsMusicEnabled = true; - обязательно!
*/

/* Музыка в главном меню */
static bool BLANK_IsMusicEnabled    = true;                                                       // Вкл/выкл кастомную музыку
/* 
BlankSoftware_UIConnect\gui\sound файл MainMenu.ogg
Меняем на свой с названием 1 в 1!
*/

/* Настройки кредитов */
static bool BLANK_ShowBtnCredits    = true;                                                       // Вкл/выкл кнопку кредитов

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