/* 

Добро пожаловать в папку с файлами настроек мода BlankSoftware User Interface.

Важно:
- Обратите внимание на базовые настройки мода, прежде чем вносить изменения, сделайте резервную копиью этого файла.
- Обратите внимание откуда вы упаковываете мод (рекомендую смонтировать диск "P" через DayZ Tools и папку мода сбросить в корень диска).
- Параметры необходимые для упаковки: "*.csv;*.layout;*.fnt;*.xml;*.tga;*.rvmat;*.emat;*.edds;*.paa;*.ptc;*.c;*.imageset;*.layout;*.ogg;*.json;*.mp4"
- Весь перевод текста находится в файле: stringtable.csv (не открывать через Excel), советую для редактировать ПО из пункта ниже.
- Вносить изменения в текст можно через: StringTableEditor [Гайд: https://discord.com/channels/1201511657990520872/1224962901975240774]
- При изменении логотипа обратите внимание на то что в каждом меню размер работает по-другому! А так-же при изменении
размеров логотипа учитывайте что под ним ещё находится панель с информацией о сервере.
- Кредиты изменяются так-же в файле перевода stringtable.csv либо напрямую без перевода по пути: BS_UIConnect\scripts\data\credits.json
- Не забудьте про подписание мода ключами и его наличие на стороне сервера.

ВНИМАНИЕ!
- Если вы не купили мод, пожалуйста, во избежание уведомления DMCA, не используйте, не запускайте, не публикуйте данный мод.
- Модификация имеет привязку по IP адресу, если ваш сервер не стартует с модом, обратитесь ко мне в Discord [ссылка ниже].

Website: 			:   https://blanksoftware.tech
Discord             :	https://discord.gg/xt2GGzfFY7
Telegram            : 	https://t.me/blanksoftware
Telegram support    :	https://t.me/blankdayz

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
static string BLANK_LogoPath        = "BS_UIConnect/gui/data/logo.edds";                // Путь к картинке Лого

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

/* ВИДЕО-РАСШИРЕНИЕ */
static string           BLANK_VideoKey          = "- Ключ расширения доступен для покупки в Discord -";

/* 
Вы так-же можете изменить иконку на свою, иконки хранятся по пути:
BS_UIConnect/gui/data/imagesets , просто замените на свою иконку с сохранением названия, например:
Захотел я вместо кнопки VK сделать кнопку Telegram, меняю иконку на свою с названием vk.edds , в ссылку вставляю свой Telegram.

Параметры для иконок:
- Расришение для иконки 128x128.
- Белый цвет (для работы с закрашиванием при наведении).
- Иконка выравнена по центру (в вашем исходнике).
*/

/* ------------------------------------------------------------------------------------------------------------------------ */

/* 
BLANKSOFTWARE DayZ Modding

Website: 			https://blanksoftware.tech
Discord:			https://discord.gg/xt2GGzfFY7
Telegram: 			https://t.me/blanksoftware
Telegram support:	https://t.me/blankdayz

This is private modification.
Use without express permission is prohibited and will be punished.
It is protected by copyright.
*/

/* ------------------------------------------------------------------------------------------------------------------------ */