/* ------------------------------------------------------------------------------------------------------------------------ */
/*                                                          НАСТРОЙКИ ГЛАВНОГО МЕНЮ                                         */
/* ------------------------------------------------------------------------------------------------------------------------ */

/* Логотип - позиция */
static bool BLANK_LogoPosition_Left = true;                                                       // Позиция лого (true - слева / false - справа)

/* Кнопка играть */
static int BLANK_PlayButton_ID      = 0;                                                          // Вариация кнопки играть (0 - кнопка иконка, 1 - кнопка текстовая справа снизу "Играть")

/* Статистика/информация */
static int BLANK_MenuPanel_ID       = 2;                                                          // Переключатель панелей в главном меню
/* 
0 - статистика и информация отключена
1 - включена панель с информацией
2 - включена панель с статистикой
*/

/* Положение игрока в главном меню */
static int BLANK_CharacterAnimation = 0;                                                          // Анимация персонажа в гл. меню (0-4)
/* 
Анимации персонажа:
0 - Cтоит
1 - Сидит вариация №1
2 - Сидит вариация №2
3 - Машет руками
4 - Делает деб [циклична]
*/

static bool BLANK_ImageMainMenu     = false;                                                     // Изображение вместо сцены [true/false]
static string BLANK_ImagePath       = "BlankSoftware_UIConnect/gui/data/background.edds";        // Путь к изображению

/* Видео в главном меню */
static string BLANK_VideoKey        = "- buy key in discord -";
static bool BLANK_DisableSceneSound = false;
static bool BLANK_ShowMiniVideo     = false;                                                      // Вкл/выкл мини-видео в гл. меню.
static bool BLANK_ShowVideoMenu     = false;                                                      // Вкл/выкл видео в главном меню

/* 
Заменить видео?
- BlankSoftware_UIConnect/gui/data/video/blanksoftware.mp4 , если будете заменяться, меняйте на название файла 1 в 1!
Музыка? Звук? (Если вы используете не длинное видео до ~2 минут, можете не заморачиваться, иначе читайте инструкцию ниже)
- Для настройки звука измените файл музыки по пути BlankSoftware_UIConnect/gui/sound/MainMenu.ogg на ваш звук
и не забудьте включить параметр BLANK_IsMusicEnabled = true; - обязательно!
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