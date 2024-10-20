/* 

Добро пожаловать в файл настроек мода BlankSoftware User Interface.

Важно:
- Обратите внимание на базовые настройки мода, прежде чем вносить изменения, сделайте резервную копиью этого файла.
- Обратите внимание откуда вы упаковываете мод (рекомендую смонтировать диск "P" через DayZ Tools и папку мода сбросить в корень диска).
- Параметры необходимые для упаковки: "*.csv;*.layout;*.fnt;*.xml;*.tga;*.rvmat;*.emat;*.edds;*.paa;*.ptc;*.c;*.imageset;*.layout;*.ogg;*.json;*.mp4"
- Весь перевод текста находится в файле: stringtable.csv (не открывать через Excel), советую для редактировать ПО из пункта ниже.
- Вносить изменения в текст можно через: StringTableEditor [Гайд: https://discord.com/channels/1201511657990520872/1224962901975240774]
- При изменении логотипа обратите внимание на то что в каждом меню размер работает по-другому! А так-же при изменении
размеров логотипа учитывайте что под ним ещё находится панель с информацией о сервере.
- Кредиты изменяются так-же в файле перевода stringtable.csv либо напрямую без перевода по пути: BlankSoftware_UIConnect\scripts\data\credits.json
- Не забудьте про подписание мода ключами и его наличие на стороне сервера.

ВНИМАНИЕ!
- Если вы не купили мод, пожалуйста, во избежание уведомления DMCA, не используйте, не запускайте, не публикуйте данный мод.
- Модификация имеет привязку по IP адресу, если ваш сервер не стартует с модом, обратитесь ко мне в Discord [ссылка ниже].
_______________________________________

Discord: https://discord.gg/xt2GGzfFY7
Telegram: https://t.me/eas1ly
_______________________________________

*/

/* ------------------------------------------------------------------------------------------------------------------------ */
/*                                                          ГЛОБАЛЬНЫЕ НАСТРОЙКИ                                            */
/* ------------------------------------------------------------------------------------------------------------------------ */

static int BLANK_UIColor            = ARGB(255,  0, 128, 255);                                     // Цвет контролов
static int BLANK_UIColorText        = ARGB(255, 51, 153, 255);                                     // Цвет текста

/* УВЕДОМЛЕНИЯ */
static bool BLANK_Notification      = true;                                                        // Вкл/выкл кастомные уведомления 

/* Настройки логотипа */
static bool BLANK_ShowLogo          = true;                                                        // Вкл/выкл лого
static bool BLANK_ColorableLogo     = true;                                                        // Вкл/выкл принудительное окрашивание лого в цвет интерфейса который указан выше
static string BLANK_LogoPath        = "BlankSoftware_UIConnect/gui/data/logo.edds";                // Путь к картинке Лого

/* Размер логотипа - Главное меню */
static float BLANK_MLogoSizeW       = 300.0;                                                       // Размер лого по длине
static float BLANK_MLogoSizeH       = 280.0;                                                       // Размер лого по высоте
/* Размер логотипа - Меню кредит */
static float BLANK_CLogoSizeW       = 0.20;                                                        // Размер лого по длине
static float BLANK_CLogoSizeH       = 0.30;                                                        // Размер лого по высоте
/* Размер логотипа - Внутриигровое меню */
static float BLANK_GLogoSizeW       = 300.0;                                                       // Размер лого по длине
static float BLANK_GLogoSizeH       = 280.0;                                                       // Размер лого по высоте

/* Социальные ссылки */
static bool BLANK_isDiscordEnabled  = true;                                                        // Вкл/выкл кнопку Дискорд
static bool BLANK_isDonateEnabled   = true;                                                        // Вкл/выкл кнопку Доната
static bool BLANK_isVKEnabled       = true;                                                        // Вкл/выкл кнопку ВК
static bool BLANK_isWebSiteEnabled  = true;                                                        // Вкл/выкл кнопку Сайта
static bool BLANK_isYouTubeEnabled  = true;                                                        // Вкл/выкл кнопку Ютуб

static string BLANK_DiscordLink     = "https://discord.gg/xt2GGzfFY7";                             // Ссылка Дискорд
static string BLANK_DonateLink      = "https://discord.gg/xt2GGzfFY7";                             // Ссылка Донат
static string BLANK_VKLink          = "https://discord.gg/xt2GGzfFY7";                             // Ссылка ВК
static string BLANK_WebSiteLink     = "https://discord.gg/xt2GGzfFY7";                             // Ссылка Сайт
static string BLANK_YouTubeLink     = "https://discord.gg/xt2GGzfFY7";                             // Ссылка Ютуб

/* 
Вы так-же можете изменить иконку на свою, иконки хранятся по пути:
BlankSoftware_UIConnect/gui/data/imagesets , просто замените на свою иконку с сохранением названия, например:
Захотел я вместо кнопки VK сделать кнопку Telegram, меняю иконку на свою с названием vk.edds , в ссылку вставляю свой Telegram.

Параметры для иконок:
- Расришение для иконки 128x128.
- Белый цвет (для работы с закрашиванием при наведении).
- Иконка выравнена по центру (в вашем исходнике).
*/

/* ------------------------------------------------------------------------------------------------------------------------ */
/*                                                          ПОДКЛЮЧЕНИЕ К ИГРОВЫМ СЕРВЕРАМ                                  */
/* ------------------------------------------------------------------------------------------------------------------------ */

/* Подключение к 1 серверу       */
static string BLANK_ServerName_1    = "Server #1";                                         // Наименование 1 сервера
static string BLANK_ServerIP_1      = "192.168.100.15";                                           // IP 1 сервера
static int BLANK_ServerPort_1       = 2302;                                                       // Порт 1 сервера
/* Подключение к 2-ому серверу     */  
static bool BLANK_ShowServer_2      = true; 
static string BLANK_ServerName_2    = "Server #2";                                         // Наименование 2 сервера
static string BLANK_ServerIP_2      = "192.168.100.15";                                           // IP 2 сервера
static int BLANK_ServerPort_2       = 2302;                                                       // Порт 2 сервера
/* Подключение к 3-ому серверу    */   
static bool BLANK_ShowServer_3      = true;                                                      // Показать 3 сервер
static string BLANK_ServerName_3    = "Server #3";                                              // Наименование 3 сервера
static string BLANK_ServerIP_3      = "192.168.100.15";                                           // IP 3 сервера
static int BLANK_ServerPort_3       = 2302;                                                       // Порт 3 сервера
/* Подключение к 4-ому серверу    */   
static bool BLANK_ShowServer_4      = false;                                                      // Показать 4 сервер
static string BLANK_ServerName_4    = "Server #4";                                              // Наименование 4 сервера
static string BLANK_ServerIP_4      = "192.168.100.15";                                           // IP 4 сервера
static int BLANK_ServerPort_4       = 2302;                                                       // Порт 4 сервера
/* Подключение к 5-ому серверу    */   
static bool BLANK_ShowServer_5      = false;                                                      // Показать 5 сервер
static string BLANK_ServerName_5    = "Server #5";                                              // Наименование 5 сервера
static string BLANK_ServerIP_5      = "192.168.100.15";                                           // IP 5 сервера
static int BLANK_ServerPort_5       = 2302;                                                       // Порт 5 сервера
/* Подключение к 6-ому серверу    */   
static bool BLANK_ShowServer_6      = false;                                                      // Показать 6 сервер
static string BLANK_ServerName_6    = "Server #6";                                              // Наименование 6 сервера
static string BLANK_ServerIP_6      = "192.168.100.15";                                           // IP 6 сервера
static int BLANK_ServerPort_6       = 2302;                                                       // Порт 6 сервера
/* Подключение к 7-ому серверу    */   
static bool BLANK_ShowServer_7      = false;                                                      // Показать 7 сервер
static string BLANK_ServerName_7    = "Server #7";                                              // Наименование 7 сервера
static string BLANK_ServerIP_7      = "192.168.100.15";                                           // IP 7 сервера
static int BLANK_ServerPort_7       = 2302;                                                       // Порт 7 сервера
/* Подключение к 8-ому серверу    */   
static bool BLANK_ShowServer_8      = false;                                                      // Показать 8 сервер
static string BLANK_ServerName_8    = "Server #8";                                              // Наименование 8 сервера
static string BLANK_ServerIP_8      = "192.168.100.15";                                           // IP 8 сервера
static int BLANK_ServerPort_8       = 2302;                                                       // Порт 8 сервера
/* Подключение к 9-ому серверу    */   
static bool BLANK_ShowServer_9      = false;                                                      // Показать 9 сервер
static string BLANK_ServerName_9    = "Server #9";                                              // Наименование 9 сервера
static string BLANK_ServerIP_9      = "192.168.100.15";                                           // IP 9 сервера
static int BLANK_ServerPort_9       = 2302;                                                       // Порт 9 сервера
/* Подключение к 10-ому серверу    */   
static bool BLANK_ShowServer_10      = false;                                                      // Показать 10 сервер
static string BLANK_ServerName_10    = "Server #10";                                              // Наименование 10 сервера
static string BLANK_ServerIP_10      = "192.168.100.15";                                           // IP 10 сервера
static int BLANK_ServerPort_10       = 2302;                                                       // Порт 10 сервера

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
/*                                                          НАСТРОЙКИ ЗАГРУЗКИ/ОЧЕРЕДИ                                      */
/* ------------------------------------------------------------------------------------------------------------------------ */

/* Панель рандомных подсказок */
static bool BLANK_ShowMessage       = true;                                                        // Вкл/выкл рандомные сообщения при загрузке
static float BLANK_MSGPanelRGBAlpha = 0.7;                                                         // Прозрачность фона текста (1.0 - полностью чёрный, где 0.0 полностью прозрачный фон).

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
static bool BLANK_ShowBtnQueueRules = true;                                                       // Вкл/выкл кнопку.

/* ------------------------------------------------------------------------------------------------------------------------ */
/*                                                          ВНУТРИИГРОВОЕ МЕНЮ [ИГРА]                                       */
/* ------------------------------------------------------------------------------------------------------------------------ */

/* Размытие */
static float BLANK_InGameBlureStrength = 0.3;                                                     // Сила блюра в меню ESC (0.0 - 1.0)

/* Картинка после смерти */
static bool BLANK_ShowDeadScreen    = false;                                                      // Вкл/выкл экран смерти
static string BLANK_DeadScreenImage = "BlankSoftware_UIConnect/gui/data/deathscreen.edds";        // Путь к картинке при включенном экране смерти

/* Информация о сервере */
static bool BLANK_ServerInformation = true;                                                       // Вкл/выкл информацию о сервере в меню Esc.
static string BLANK_ProjectName     = "";                                                         // Имя проекта, если пусто выводит полное наименование сервера.

/* Панель онлайна/времени */
static bool BLANK_ShowOnline        = true;                                                       // Вкл/выкл счетчик онлайна в меню.
static bool BLANK_ShowTime          = true;                                                       // Вкл/выкл отображение серверного времени в меню.
static float BLANK_UpdateOnlineTime = 5;                                                          // Время обновления онлайна и времени в меню.


/* Правила */
static bool BLANK_ShowInGameButtonRules = true;                                                   // Вкл/выкл кнопку правил в внутриигровом меню.

/* ------------------------------------------------------------------------------------------------------------------------ */
/*                                                          МЕНЮ ПОКИНУТЬ СЕРВЕР                                            */
/* ------------------------------------------------------------------------------------------------------------------------ */

/* Анимация игрока */
static bool BLANK_CharacterRandomAnimExit   = true;                                                       // Рандомная анимация
/* Как это работает?
Вызывается рандомная анимация, 
н.п. если у игрока нет в руках оружия
то он может лечь, сесть как у с костра и т.п.
Если же есть, анимация будет стандартная
*/

/* Размытие */
static bool BLANK_ShowLogoutBlureEFFECT = true;

/* Текст */
static bool BLANK_ShowLogoutText        = false;                                                    // Вкл/выкл текст при выходе
static bool BLANK_LTextUIColor          = false;                                                    // Вкл/выкл изменение цвета текста при выходе
static string BLANK_TxtLogout           = "Пожалуйста, не покидайте сервер во время PvP";           // Текст при выходе

/* Кнопки */
static bool BLANK_ShowBtnLogoutNow      = true;                                                     // Отключить кнопку "выйти сейчас" после нажатия кнопки "Выход"        
static bool BLANK_ShowBtnLogoutCancel   = true;                                                     // Отключить кнопку "отмена" после нажатия кнопки "Выход"

/* ------------------------------------------------------------------------------------------------------------------------ */
/*                                                          АДАПТАЦИЯ К СТОРОННИМ МОДИФИКАЦИЯМ                              */
/* ------------------------------------------------------------------------------------------------------------------------ */

/* Адаптация мода к Kastet - Spawn Menu */
static bool BLANK_KastetSpawnMenu = false;                                                         // Адаптация под мод кастета на спавн меню.

/* ------------------------------------------------------------------------------------------------------------------------ */
/*                                                          МАССИВЫ КАРТИНОК ПРИ ЗАГРУЗКЕ                                   */
/* ------------------------------------------------------------------------------------------------------------------------ */

/* Экран загрузки игры */
autoptr TStringArray BLANK_LoadingGame = {
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_1.edds",
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_2.edds",
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_3.edds",
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_4.edds",
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_5.edds"
};

/* Экран прогрузки [когда идёт обратный отсчёт] */
autoptr TStringArray BLANK_LoginGame = {
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_1.edds",
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_2.edds",
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_3.edds",
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_4.edds",
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_5.edds"
};

/* Экран очереди */
autoptr TStringArray BLANK_QueueGame = {
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_1.edds",
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_2.edds",
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_3.edds",
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_4.edds",
    "BlankSoftware_UIConnect/gui/data/screens/loadingscreen_5.edds"
};

/* ------------------------------------------------------------------------------------------------------------------------ */

/* 
blanksoftware
by eas1ly
discord: https://discord.gg/xt2GGzfFY7
*/

/* ------------------------------------------------------------------------------------------------------------------------ */