![BLANKSOFTWARE](https://i.postimg.cc/Nf5H6wph/download4.gif)
# BlankSoftware UI Connect
Модификация коннект для основного мода на интерфейс DayZ Standalone [BlankSoftwareUI]. <!-- описание репозитория -->

<!--Установка-->
## Установка [Для клиентов]
У вас должны быть установлены [зависимости проекта](https://github.com/OkulusDev/Oxygen#зависимости)

- У вас есть BlankSoftware_UI.pbo и папка BlankSoftware_UIConnect, все изменения в моде производятся посредством редактирования BlankSoftware_UIConnect.
- Для того чтобы изменить мод под себя, открываем BlankSoftware_UIConnect и редактируем то что вам нужно, далее упаковываем с помощью ваших программ (например Addon Builder, PBO Project, PBO Tools, Mikero Tools [ВНИМАНИЕ! Не нужно упаковывать через PBO Manager!!]).
- Подписываем BlankSoftware_UI.pbo и BlankSoftware_UIConnect.pbo своим ключом через DS Utils (DayZ Tools).
- Закидываем оба полученных пбо и их связанные ключи в ваш клиентский мод.
- Готово.

<!--Пользовательская документация-->
## Внимание
- При упаковке BlankSoftware_UIConnect обратите внимание на параметры сохраняемых файлов, укажите следующие:
```*.csv;*.layout;*.fnt;*.xml;*.tga;*.rvmat;*.emat;*.edds;*.paa;*.ptc;*.c;*.imageset;*.layout;*.ogg;*.json;*.mp4```
- Редактирование почти любого текста производится посредством редактирования файла перевода stringtable.csv в корне BlankSoftware_UIConnect,
советую для редактирования использовать программу String Table Editor, ссылка на гайд: [DISCORD](https://discord.com/channels/1201511657990520872/1224962901975240774)

<!-- Измнение -->
## Изменение:
Разберем файл настроек:
BlankSoftware_UIConnect\scripts\3_Game\, файл Settings.c

Базовые параметры:
true - правильно (верно, т.е. вкл)
false - ложь (не верно, т.е. выкл)

В файле Settings.c подписаны настройки.

Так-же для редактирование кредитов (типо титры в гл. меню), отредактируйте файл:
BlankSoftware_UIConnect\scripts\data\, файл credits.json
(обратите внимание, что в этом файле почти всё использовуется в форме #.... , это означает что это строка перевода из файла stringtable.csv в корне BlankSoftware_UIConnect,
читайте пометку "Внимание" для того чтобы узнать как это изменить под себя)

<!--Поддержка-->
## Поддержка
Если у вас возникли сложности или вопросы по использованию модификации, создайте 
[тикет](https://discord.com/channels/1201511657990520872/1201549016136163429) в моём [discord](https://discord.gg/xt2GGzfFY7) канале.

<!--зависимости-->
## Зависимости
Этот мод полностью зависит от своего ядра в виде BlankSoftware_UI.pbo!


Использование без ядра невозможно.

<!-- Использование -->
## Политика использования

ВНИМАНИЕ!
- Если вы не купили мод, пожалуйста, во избежание уведомления DMCA, не используйте, не запускайте, не публикуйте данный мод.
- Модификация (ядро) имеет привязку по IP адресу, если ваш сервер не стартует с модом, обратитесь ко мне в Discord [ссылка ниже].

## Изображения
Ниже будут предоставлены скриншоты последней на **23.09.2024** версии мода.
![BLANKSOFTWARE](https://i.postimg.cc/CxcYjJsz/1.png)
![BLANKSOFTWARE](https://i.postimg.cc/FK1vGcTG/Day-Z-Screenshot-2024-08-21-19-33-16-14.png)
![BLANKSOFTWARE](https://i.postimg.cc/X7TYrsx3/Day-Z-Screenshot-2024-08-21-19-33-35-17.png)
![BLANKSOFTWARE](https://i.postimg.cc/bJ2ntZbF/Day-Z-Screenshot-2024-08-21-19-44-05-51.png)
![BLANKSOFTWARE](https://i.postimg.cc/vm4gJ4PH/Day-Z-Screenshot-2024-08-21-19-44-14-62.png)
![BLANKSOFTWARE](https://i.postimg.cc/fyc0818c/Day-Z-Screenshot-2024-08-21-19-44-23-12.png)
