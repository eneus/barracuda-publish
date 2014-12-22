-- phpMyAdmin SQL Dump
-- version 3.4.10.1deb1
-- http://www.phpmyadmin.net
--
-- Хост: localhost
-- Час створення: Гру 18 2014 р., 10:22
-- Версія сервера: 5.5.40
-- Версія PHP: 5.4.35-1+deb.sury.org~precise+1

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- БД: `auto_database`
--

-- --------------------------------------------------------

--
-- Структура таблиці `english_russian_compliance`
--

CREATE TABLE IF NOT EXISTS `english_russian_compliance` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `russian_value` varchar(80) DEFAULT NULL,
  `english_value` varchar(80) DEFAULT NULL,
  `vacabulary_name` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=161 ;

--
-- Дамп даних таблиці `english_russian_compliance`
--

INSERT INTO `english_russian_compliance` (`id`, `russian_value`, `english_value`, `vacabulary_name`) VALUES
(1, 'Дисковые', 'Disc brake', 'brake_system'),
(2, 'Барабанные', 'Drum brake', 'brake_system'),
(3, NULL, 'Hydraulic brake', 'brake_system'),
(4, NULL, 'Pneumatic brake', 'brake_system'),
(5, 'Дисковые вентилируемые', 'Disc brake', 'brake_system'),
(7, NULL, '2+2', 'cars_body_type'),
(8, NULL, 'Combi coupé', 'cars_body_type'),
(9, 'Кабриолет', 'Convertible (Cabriolet)', 'cars_body_type'),
(10, 'Купе', 'Coupé', 'cars_body_type'),
(11, NULL, 'Coupe Utility', 'cars_body_type'),
(12, 'Внедорожник 5 дв.', 'Crossover', 'cars_body_type'),
(13, NULL, 'Hardtop', 'cars_body_type'),
(14, 'Хэтчбек 5 дв.', 'Hatchback', 'cars_body_type'),
(15, NULL, 'Hearse', 'cars_body_type'),
(16, 'Лифтбек', 'Liftback', 'cars_body_type'),
(17, NULL, 'Limousine', 'cars_body_type'),
(18, 'Минивэн', 'Minivan', 'cars_body_type'),
(19, NULL, 'Notchback', 'cars_body_type'),
(20, 'Родстер', 'Roadster', 'cars_body_type'),
(21, 'Седан', 'Sedan', 'cars_body_type'),
(22, NULL, 'Sedan delivery', 'cars_body_type'),
(23, NULL, 'Sport utility vehicle (SUV)', 'cars_body_type'),
(24, NULL, 'Stanhope body', 'cars_body_type'),
(25, 'Универсал 5 дв.', 'Station wagon', 'cars_body_type'),
(26, NULL, 'Touring car', 'cars_body_type'),
(27, NULL, 'Town car', 'cars_body_type'),
(28, 'Хэтчбек 3 дв.', 'Hatchback', 'cars_body_type'),
(29, 'Универсал 3 дв.', 'Station wagon', 'cars_body_type'),
(30, 'Внедорожник 3 дв.', 'Crossover', 'cars_body_type'),
(31, 'Внедорожник открытый', 'Crossover', 'cars_body_type'),
(32, 'Пикап Одинарная кабина', 'Pickup', 'cars_body_type'),
(33, 'Пикап Полуторная кабина', 'Pickup', 'cars_body_type'),
(34, 'Пикап Двойная кабина', 'Pickup', 'cars_body_type'),
(35, 'Компактвэн', 'Minivan', 'cars_body_type'),
(36, 'Микровэн', 'Minivan', 'cars_body_type'),
(37, NULL, 'Boxer', 'disposition_of_cylinders'),
(38, NULL, 'Diesel', 'disposition_of_cylinders'),
(39, 'Рядный', 'Inline', 'disposition_of_cylinders'),
(40, NULL, 'Rotary', 'disposition_of_cylinders'),
(41, 'V-образный', 'V-Type', 'disposition_of_cylinders'),
(42, 'W-образный', 'W-Type', 'disposition_of_cylinders'),
(43, '', 'Euro I', 'ecological_standard'),
(44, '', 'Euro II', 'ecological_standard'),
(45, 'EURO III', 'Euro III', 'ecological_standard'),
(46, 'EURO IV', 'Euro IV', 'ecological_standard'),
(47, 'EURO V', 'Euro V', 'ecological_standard'),
(48, 'EURO VI', 'Euro VI', 'ecological_standard'),
(49, 'Euro 5', 'Euro V', 'ecological_standard'),
(50, 'Euro 3', 'Euro III', 'ecological_standard'),
(51, 'Euro 4', 'Euro IV', 'ecological_standard'),
(52, 'Euro 6', 'Euro VI', 'ecological_standard'),
(53, 'Дизель', 'Diesel', 'engine_type'),
(54, 'Электро', 'Electric', 'engine_type'),
(55, NULL, 'Ethanol', 'engine_type'),
(56, 'Газ', 'Gas', 'engine_type'),
(57, 'Гибрид', 'Hybrid', 'engine_type'),
(58, NULL, 'Hydrogen', 'engine_type'),
(59, 'Ротор', 'Other', 'engine_type'),
(60, 'Бензин', 'Petrol', 'engine_type'),
(61, 'Двойной поперечный рычаг', 'Equal length A-arm (double wishbone)', 'front_suspension'),
(62, 'Независимая типа McPherson', 'MacPherson', 'front_suspension'),
(63, NULL, 'Solid beam axle', 'front_suspension'),
(64, NULL, 'Swing axle', 'front_suspension'),
(65, NULL, 'Trailing link', 'front_suspension'),
(66, NULL, 'Unequal length double A-arm', 'front_suspension'),
(67, 'McPherson', 'MacPherson', 'front_suspension'),
(68, 'Независимая, пружинная McPherson, со стабилизатором', 'MacPherson', 'front_suspension'),
(69, 'Треугольные рычаги со стойками МакФерсон', 'MacPherson', 'front_suspension'),
(70, 'Cо стойками Мак-Ферсон', 'MacPherson', 'front_suspension'),
(71, NULL, 'Central port injection', 'fuel_injection'),
(72, NULL, 'Continuous injection', 'fuel_injection'),
(73, 'Непосредственный впрыск', 'Direct injection', 'fuel_injection'),
(74, 'Распределенный впрыск', 'Multiport fuel injection', 'fuel_injection'),
(75, 'Моновпрыск', 'Single-point injection', 'fuel_injection'),
(76, 'Автоматическая', 'Automatic', 'gearbox_types'),
(77, 'Вариатор', 'CVT (Continuous variable transmission)', 'gearbox_types'),
(78, 'Прямая передача', 'DSG (Direct shift gearbox)', 'gearbox_types'),
(79, 'Механическая', 'Manual', 'gearbox_types'),
(80, NULL, 'Semi automatic', 'gearbox_types'),
(81, '', 'TipTronic', 'gearbox_types'),
(82, 'Полный', '4x4', 'linkage'),
(83, NULL, '8x8', 'linkage'),
(84, 'Передний', 'Front-drive', 'linkage'),
(85, 'Задний', 'Rear-drive', 'linkage'),
(91, 'Полный постоянный', '4x4', 'linkage'),
(92, 'Полный подключаемый', '4x4', 'linkage'),
(93, NULL, 'Cam and double lever steering gear', 'steering_gear'),
(94, NULL, 'Cam and peg steering gear', 'steering_gear'),
(95, 'Шестерня-рейка', 'Cam and roller steering gear', 'steering_gear'),
(96, NULL, 'Rack and pinion steering gear', 'steering_gear'),
(97, NULL, 'Recirculating ball nut steering gear', 'steering_gear'),
(98, 'Глобоидный червяк с рециркулирующими шариками', 'Worm and ball bearing nut steering gear', 'steering_gear'),
(99, NULL, 'Worm and roller steering gear', 'steering_gear'),
(100, 'Червячный редуктор', 'Worm and sector steering gear', 'steering_gear'),
(101, 'Карбюратор', 'Single-point injection', 'fuel_injection'),
(102, 'Дизель Common rail', 'Direct injection', 'fuel_injection'),
(103, 'Дизель', 'Direct injection', 'fuel_injection'),
(104, 'Роботизированная с двумя сцеплениями', 'Robotized', 'gearbox_types'),
(105, 'Роботизированная с одним сцеплением', 'Robotized', 'gearbox_types'),
(106, 'Роботизированная', 'Robotized', 'gearbox_types'),
(107, 'Trailing link', 'Torsion beam', 'front_suspension'),
(108, 'Пневматический упругий элемент', 'Hydropneumatic', 'front_suspension'),
(109, 'Независимая многорычажная', 'Multilink', 'front_suspension'),
(110, 'Поперечный рычаг', 'MacPherson', 'front_suspension'),
(111, 'Винтовая пружина', 'Torsion beam', 'front_suspension'),
(112, 'Независимая многорычажная пневмоподвеска', 'Multilink', 'front_suspension'),
(113, 'Многорычажная подвеска', 'Multilink', 'front_suspension'),
(114, 'Независимая, пружинная', 'Torsion beam', 'front_suspension'),
(115, 'Независимая, на двойных поперечных рычагах', 'Equal length A-arm (double wishbone)', 'front_suspension'),
(116, 'Поперечный стабилизатор', 'Torsion beam', 'front_suspension'),
(117, 'Торсион', 'Torsion beam', 'front_suspension'),
(118, 'Поворотный кулак', 'Torsion beam', 'front_suspension'),
(119, 'Независимая торсионная, на двойных поперечных рычагах', 'Torsion beam', 'front_suspension'),
(120, 'Продольный рычаг', 'Multilink', 'front_suspension'),
(121, 'Рессора', 'Torsion beam', 'front_suspension'),
(122, 'Гидропневматический элемент', 'Hydropneumatic', 'front_suspension'),
(123, 'Независимая амортизационная стойка', 'Torsion beam', 'front_suspension'),
(124, 'Несколько рычагов и тяг', 'Multilink', 'front_suspension'),
(125, 'Амортизационная стойка', 'Torsion beam', 'front_suspension'),
(126, 'Спереди, продольно', 'At the front longitudinally', 'engine_s_disposition'),
(127, 'Спереди, поперечно', 'At the front transversally', 'engine_s_disposition'),
(128, 'В середине, поперечно', 'At the back transversally', 'engine_s_disposition'),
(129, 'Седан 2 дв.', 'Sedan', 'cars_body_type'),
(130, 'В середине, продольно', 'At the back longitudinally', 'engine_s_disposition'),
(131, 'Полный', '4x4', 'linkage'),
(132, 'Внедорожник 5 дв.', 'Crossover', 'cars_body_type'),
(133, 'Универсал 5 дв.', 'Station wagon', 'cars_body_type'),
(134, 'Хэтчбек 3 дв.', 'Hatchback', 'cars_body_type'),
(135, 'Хэтчбек 5 дв.', 'Hatchback', 'cars_body_type'),
(136, 'Седан 2 дв.', 'Sedan', 'cars_body_type'),
(137, 'Внедорожник 3 дв.', 'Crossover', 'cars_body_type'),
(138, 'Универсал 3 дв.', 'Station wagon', 'cars_body_type'),
(139, '', 'A-76', 'engine_type'),
(140, 'АИ-80', 'A-80', 'engine_type'),
(141, 'АИ-92', 'A-92', 'engine_type'),
(142, 'АИ-95', 'A-95', 'engine_type'),
(143, 'АИ-98', 'A-98', 'engine_type'),
(144, 'Торсионная балка', 'Torsion beam', 'front_suspension'),
(145, 'Многорычажная независимая', 'Multilink', 'front_suspension'),
(146, 'Независимая, пружинная многорычажная, со стабилизатором', 'Multilink', 'front_suspension'),
(147, 'Независимая, на трапециевидных рычагах', 'Equal length A-arm (double wishbone)', 'front_suspension'),
(148, 'Подвеска De-Dion', 'De Dion', 'front_suspension'),
(149, 'Полузависимая', 'Torsion beam', 'front_suspension'),
(150, 'Наклонный рычаг', 'Equal length A-arm (double wishbone)', 'front_suspension'),
(151, 'Подвеска с тягой, соединяющей рычаги', 'MacPherson', 'front_suspension'),
(152, 'Полузависимая балка со стабилизатором поперечной устойчивости', 'Torsion beam', 'front_suspension'),
(153, 'полузависимая, пружинная, с гидравлическими телескопическими амортизаторами', 'Torsion beam', 'front_suspension'),
(154, 'Неразъемная балка моста', 'Banjo casing', 'front_suspension'),
(155, 'Спиральная пружина', 'Dependent on springs', 'front_suspension'),
(156, 'Четырехрычажная с раздельным расположением пружин и амортизаторов', 'Multilink', 'front_suspension'),
(157, 'Зависимая пружинная', 'Rear dependent', 'front_suspension'),
(158, 'Полунезависимая', 'Torsion beam', 'front_suspension'),
(159, 'Полунезависимая, пружинная', 'Torsion beam', 'front_suspension'),
(160, 'Нарезная скручиваемая балка', 'Torsion beam', 'front_suspension');

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
