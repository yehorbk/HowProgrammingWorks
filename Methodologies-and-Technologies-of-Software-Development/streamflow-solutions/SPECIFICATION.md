# Streamflow Solutions - специфiкацiя

## 1. Контекст

Команда досвiдчених програмiстiв пiд назвою Streamflow Solutions має на метi
розробити перший в свiтi вiдкритий стрiмiнговий сервiс за допомогою якого
звичайнi користувачi зможуть проводити публiчнi та приватнi трансляцiї.

Технологiчний стек проекту:
- Back-end: Java (Spring Framework)
- Front-end: JavaScript (Vue.js)
- Database: PostgreSQL

Середовища для розгортання:
- Front-end: Heroku
- Back-end + Database: Docker

Команда:
- Бублик Єгор - Full-stack
- Бокiй Артем - Full-stack
- Дмитрiєв Дмитро - Full-stack
- Перевалов Максим - Full-stack
- Макарицький Олег - Full-stack

## 2. Задачi  

Задачi якi вирiшує проект:
- Потокова передача аудiо та вiдео
- Зберiгання та розповсюдження аудiо та вiдео

Задачi якi **не** вирiшує проект:
- Жорстке цензурування контенту

Вимоги:
- Uptime - 365 днiв/рiк
- Резервне копiювання даних
- Затримка не бiльше 2 секунд 

## 3. Функцiональнi вимоги

1. Реєстрацiя
1. Авторизацiя
1. Створення та проведення прямих аудiо / вiдео трансляцiй (приватних / публiчних)
1. Публiкацiя аудiо / вiдео файлiв для зберiгання та розповсюдження
1. Пошук та вiдображення прямих та завантажених аудiо / вiдео файлiв
1. Перегляд, коментування та оцiнювання прямих трансляцiй
1. Отримання iнформацiї щодо актуальних оновлень користувачiв

## 4. Сценарiї

### 4.1. Реєстрацiя
1. Користувач заповнює форму з даними
1. У випадку, коли користувача з вказаною поштою не iснує - данi вiдправляються на сервер
1. На серверi створюється новий користувач та додається до бази даних
1. Користувачу на вказану пошту приходить повiдомлення про реєстрацiю

### 4.2. Авторизацiя
1. Користувач заповнює форму з даними
1. Данi обробляються сервером та порiвнюються з даними в базi даних
1. У випадку вдалої iдентифiкацiї користувача - йому надається доступ до персональних операцiй
1. У випадку невдалої iдентифiкацiї користувача - йому буде вiдображена помилка про необхiднiсть перевiрити коректнiсть введених даних

### 4.3. Публiкацiя аудiо / вiдео файлiв для зберiгання та розповсюдження
1. Користувач обирає аудiо / вiдео файл для завантаження та заповнює форму з iнформацiєю
1. Сервер отримує файл та додає до бази даних про нього iнформацiю
1. Сервер надає публiчний або приватний доступ до аудiо / вiдео файлу

### 4.4. Створення та проведення прямих аудiо / вiдео трансляцiй (приватних / публiчних)
1. Користувач заповнює форму з iнформацiєю про трансляцiю
1. Сервер створює нову трансляцiю та надає публiчний або приватний доступ до неї

### 4.5. Пошук та вiдображення прямих та завантажених аудiо / вiдео файлiв
1. Користувач обирає аудiо / вiдео у вiдкритiй бiблiотецi або за допомогою пошука та фiльтрiв
1. Сервер надає доступ користувачу до файлу та iнкрементує кiлькiсть переглядiв

### 4.6. Перегляд, коментування та оцiнювання прямих трансляцiй
1. Користувач залишає коментар або оцiнку
1. Сервер враховує данi користувача та оновлює їх в базi
1. Усi користувачi на поточнiй трансляцiї спостерiгають змiни

### 4.7. Отримання iнформацiї щодо актуальних оновлень користувачiв
1. Певний користувач, якого вiдслiдковує поточний користувач завантажує файл або розпочинає трансляцiю 
1. Сервер надсилає повiдомлення поточному користувачу на вказану пошту

## License
MIT (c) 2021 Streamflow Solutions

