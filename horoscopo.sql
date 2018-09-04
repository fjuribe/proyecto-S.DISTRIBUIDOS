-- phpMyAdmin SQL Dump
-- version 4.5.2
-- http://www.phpmyadmin.net
--
-- Servidor: localhost
-- Tiempo de generación: 03-09-2018 a las 05:38:02
-- Versión del servidor: 10.1.13-MariaDB
-- Versión de PHP: 5.6.20

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `horoscopo`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `galleta`
--

CREATE TABLE `galleta` (
  `id` int(11) NOT NULL,
  `mensaje` varchar(300) COLLATE utf8_spanish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

--
-- Volcado de datos para la tabla `galleta`
--

INSERT INTO `galleta` (`id`, `mensaje`) VALUES
(1, 'Vivirás tu vejez con comodidades y riquezas materiales.'),
(2, 'Confía en tu suerte, que es mucha y te rodeara de prosperidad.'),
(3, 'No todo el mundo puede recibir las mismas cosas. Se practico.'),
(4, 'Te aguarda una larga y feliz vida.'),
(5, 'Hoy es el momento de explorar: no temas.'),
(6, 'Muy pronto seras incluido en muchas reuniones, fiestas y tertulias.'),
(7, 'Cuando busques lo que mas deseas, recuerda hacer tu mejor esfuerzo.'),
(8, 'Tienes por delante un maravilloso día para triunfar; disfrútalo y compártelo.'),
(9, 'Hoy seras reconocido por tus dones especiales y lograras ser feliz por muchas horas.\r\n'),
(10, 'Tu corazón estallara de alegría con la llegada de buenas noticias.'),
(11, 'Mañana puede ser muy tarde para disfrutar lo que tienes hoy.'),
(12, 'Seras promovido en tu trabajo debido a tus logros y capacidades.'),
(13, 'Si sientes estancamiento, busca un nuevo entorno.'),
(14, 'Alégrate, un camino de hermosas pasiones te espera y debes transitarlo'),
(15, 'Nunca tendrás que preocuparte por un ingreso estable.'),
(16, 'Hoy tendrás un día de increíble alegría y brillara tu sentido del humor.'),
(17, 'Hoy compartirás las horas mas tiernas de tu vida con alguien muy amado.'),
(18, 'La rueda de la fortuna te favorecerá y estarás rodeado de prosperidad.'),
(19, 'Tendrás entera satisfacción al final de esta temporada. Prepárate.\r\n'),
(20, 'Muchos se alegraran por tus logros y a ti te mejorara la vida.\r\n'),
(21, 'Eres una persona a la que le gusta triunfar en la vida.'),
(22, 'Confía en tu buen juicio y veras que este te lleva al triunfo.'),
(23, 'Se te cumplirá un hermoso sueño y veras como otros sueños se hacen realidad.'),
(24, 'No olvides que un amigo es un regalo que te das a ti mismo.'),
(25, 'Sabes que es exactamente lo que quieres. Trabaja en ello y hazlo materializarse'),
(26, 'Siente la felicidad que espera por ti y no olvides atraparla para mantenerla contigo.'),
(27, 'Puedes aprender mucho de gente que es diferente a ti.'),
(28, 'La ansiedad nunca te ayudará.\r\n'),
(29, 'Pronto recibirás buenas noticias de tu pareja.'),
(30, 'Hay belleza en todo lo que existe, pero no todos pueden verla.'),
(31, 'Una reunión te traerá buena suerte.'),
(32, 'Todo saldrá bien.'),
(33, 'Puede que sea difícil, pero valdrá la pena al final.'),
(34, '¡Si visualizas tus sueños, se harán realidad!'),
(35, 'Abre tu mente y tu corazón a cosas buenas.'),
(36, 'No logras nada con preocuparte.'),
(37, 'Un viaje se aproxima.'),
(38, 'Sólo diviértete.'),
(39, 'Trabaja duro, pero asegúrate de divertirte después.'),
(40, '¡Si visualizas tus sueños, se harán realidad!');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `signo`
--

CREATE TABLE `signo` (
  `id_signo` int(2) NOT NULL,
  `nombre` varchar(50) COLLATE ucs2_spanish_ci NOT NULL,
  `personalidad` text CHARACTER SET utf8 COLLATE utf8_spanish_ci NOT NULL,
  `color` varchar(40) CHARACTER SET utf8 COLLATE utf8_spanish_ci NOT NULL,
  `elemento` varchar(10) CHARACTER SET utf8 COLLATE utf8_spanish_ci NOT NULL,
  `simboliza` text CHARACTER SET utf8 COLLATE utf8_spanish_ci NOT NULL,
  `semanal` text CHARACTER SET utf8 COLLATE utf8_spanish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=ucs2 COLLATE=ucs2_spanish_ci;

--
-- Volcado de datos para la tabla `signo`
--

INSERT INTO `signo` (`id_signo`, `nombre`, `personalidad`, `color`, `elemento`, `simboliza`, `semanal`) VALUES
(1, 'Leo', 'Leo es el signo más dominante del zodiaco. Son encantadores y atractivos, hay algunos que dicen que incluso adictivos y esto les hace algo peligrosos. Son líderes natos, creativos y extrovertidos, pero también bastante egocéntricos, a veces incluso prepotentes, lo que hace que siempre quieran ser el centro de atención.', 'Naranja y dorado', 'Fuego', 'a energía, la creatividad, los juegos, las especulaciones, el orgullo, la vanidad, la realeza, la diversión, los deportes, los espectáculos, la niñez, la educación, la elevación, la gloria, la fama, el poder.', 'Puedes tener un periodo importante tanto en lo romántico, como en las amistades. Inicias un periodo estupendo para recargar pilas ya que tu energía volverá a ser muy fuerte, pero trata de centrarte y no quieras acudir en pos de todo: amor, salud, trabajo, deseos. Dale a cada cosa su tiempo. Tendrás una semana de cierta tranquilidad en la que tenderás a tener todo de manera estable, posiblemente los astros todavía te favorecen. En cuanto a los afectos, los que tengan pareja lo tendrán muy positivo, pero los que no las cosas seguirán como estaban sin ser el momento adecuado para formalizar relaciones, tendrás que esperar un poco más de tiempo. Mejor día 20 y 26.'),
(2, 'Virgo', 'Los virgo son observadores y pacientes, a veces pueden incluso parecer fríos y esto hace que les cueste hacer amigos. Son metódicos y estudiosos, razonan de manera muy lógica, pero sin embargo les cuesta llegar a una solución firme. Si nos fijamos en la personalidad del hombre según su signo, son los más cariñosos y los mejores maridos.', 'Verde limón y marrón', 'Tierra', 'La búsqueda de la perfección, la crítica, el análisis, la lógica, el sistema, la laboriosidad, el detalle, las ocupaciones subalternas, el proletariado, el servicio, la salud, las artesanías, la eficiencia, las fábricas, los animales domésticos.', 'Estarás con una gran agitación y movimiento, en todas las direcciones con tendencia a los nervios. Será muy proclive a que hagas una reflexión en tu interior que haga mella por la necesidad de encontrar soluciones a asuntos que consideras que no tienes bien equilibrados en tu vida. Tendrás un ritmo que se va normalizando tanto en el trabajo y más aún en la economía. No sería de extrañar, si tienes negocio propio, el que buscaras complementar con alguien que compartir el esfuerzo, aportando un capital para realizar mejores inversiones y trabajar mejor. De todas las formas podrás disfrutar de una semana muy feliz y próspera en muchos aspectos. Mejor día 24 y 25.'),
(3, 'Libra', 'Es el signo más civilizado, amables y pacíficos, elegantes y conciliadores, esto hace que no soporten bien el conflicto y la crueldad. Sin embargo, si les sacas de quicio o te metes con ellos, pueden dejarte llorando. Su mayor defecto es que son algo frívolos y muchas veces poco leales.', 'Rosado y colores pasteles', 'Aire', 'La justicia, la equidad, el equilibrio, el principio complementario, los acuerdos, las relaciones, la belleza, la cultura artística, la armonía, el refinamiento, el otoño, la diplomacia, los contratos.', 'Si quieres seguir estando en armonía con tu pareja, debes agradecer su cariño y abnegación de lo que hace por ti, también va encaminado a los amigos, la libido estará bastante fuerte en este periodo, procura no correr riesgos innecesarios, si tomas otro camino diferente a  tu relación normal, se puede volver en tu contra, pues parece que el amor a primera vista te asalta, y no es conveniente en este momento, aunque sabes que tienes cierto encanto y que te gusta correr riesgos, no debes precipitarte porque a lo mejor no sales nada bien en el invento y podrías romper una relación muy sólida. Tiempo de la amistad, todo el mundo se acuerda de ti. Mejor día 21 y 22.'),
(4, 'Escorpión', 'Misteriosos y seductores, son muy intensos y si consiguen enfocar toda su energía de manera constructiva, son personas muy valiosas. También es cierto que está entre los signos del zodiaco más rencorosos, por no decir que es el más rencoroso de todos. Es muy crítico no solo con los demás, sino también consigo mismo.', 'rojo oscuro, verde botella', 'Agua', 'La transmutación, la renovación, el cambio, lo misterioso, las fuerzas ocultas, la magia, la muerte, la destrucción y la regeneración, las confrontaciones, la lucha, los retos, los peligros de sumerción, los dramas pasionales, las envidias, las herencias, los legados, las donaciones, las búsquedas difíciles, la interiorización, el inconsciente colectivo, el sueño.', 'Será muy interesante que te dejes asesorar por personas en las que confías acerca de los temas que más te preocupan en este momento. No cometas ningún exceso, ni de comida ni en el trabajo, porque tendrás tendencia hacia ello y si tienes que desplazarte, tómalo con mucha clama ya que las prisas no son nada aconsejables. Ten prudencia. Harás un rápido progreso hacia tus objetivos, destacará tu interés por los estudios ocultos la transformación y reinversión personal. Gozarás de una excelente salud, pero se te recomienda, trata de descansar más y hacer algún tipo de deporte para descargar la adrenalina acumulada. Mejor día 20 y 26.'),
(5, 'Sagitario', 'Uno de los signos más positivos, les encanta la aventura y lo desconocido. Espontáneos y atractivos, pero también impacientes y de fuerte temperamento. Creen en la ética y la honestidad y esto hace que a veces pequen de ser demasiado sinceros. Son capaces de sacrificarse por sus amigos y esto hace que a veces sean demasiado exigentes con ellos.', 'Azul aguamarina, violeta', 'Fuego', 'Los viajes largos, los países extranjeros, la filosofia, las leyes, la religión, los altos cargos eclesiásticos, la profecia, la mente abstracta, las aventuras, el comercio con el extranjero, la navegación intercontinental, la vida al aire libre, los ejercicios físicos, las carreras de caballos, la velocidad, las apuestas, los sabios, los estudios superiores, la independencia.', 'Continúa con lo que se te dijo en semanas pasadas, trata de continuar con tu ejercicio habitual, te pondrás en forma y llevarás un estilo de vida sano, ya sabes lo que cuenta para ti la energía y si continúas así la obtendrás. Procura estar optimista y alegre, pero no de cara a la galería si no en lo más intimo de tu ser. Sabemos que tu simpatía y tu buen talante, te pueden atraer el éxito, pero no intentes cambiar las condiciones que se te presentan, debes adaptarte a ellas lo mejor posible y en un futuro próximo llegará el momento de lanzarte a ello. No es recomendable el hacer grandes viajes, si antes no has tomado las suficientes medidas. Mejor día 21 y 22.'),
(6, 'Capricornio', 'Agradables, inteligentes y justos. Son además trabajadores, responsables y muy estables. Sin embargo, pueden tender a la excesiva melancolía e incluso rozar la depresión. Prefiere tener pocos amigos, pero sabe bien cómo conservarlos, gran amigo y consejero. Les cuesta ser felices en sus relaciones de pareja ya que son bastante celosos.', 'Negro y azúl oscuro', 'Tierra', 'La política, la tierra, los lugares elevados, las montañas, las cimas, los lugares aislados e inaccesibles, las luchas, los obstáculos e impedimentos, el karma, la mala suerte, los reveses de fortuna, las carreras brillantes, la decadencia, el tiempo, la noche, los viejos, las deformidades, el invierno, el frio, las minas, el deber cívico, las ambiciones profesionales.', 'Trata de recuperar cualquier espíritu de juego y aventura que te haga sentirte con los pies en la tierra.  No dejes de sentirte como esa persona infantil que todos llevamos dentro, somos casi incapaces de experimentar la alegría que ellos llevan. Continuarás preguntándote si lo que has hecho es lo que realmente necesitas para sentirte a gusto. Si la respuesta es afirmativa, sigue adelante pese a todas las oposiciones que puedas tener, si es negativa, o encuentras matices mejorables, entonces debes escuchar los consejos de los otros y sigue lo que te parezca de mayor sentido común. En la salud cuida de no sobrepasarte en los límites permitidos por tu cuerpo. Mejor día 25 y 26.'),
(7, 'Acuario', 'De personalidad muy fuerte, galante y conquistador. Son muy inteligentes e innovadores, capaces de expresarse de manera muy lógica y sin perder el humor. Es uno de los signos más tolerantes, pero no le engañes o conocerás su furia. Sus mayores defectos son la excentricidad y la falta de seriedad en muchas ocasiones.', 'Violeta, gris', 'Aire', 'La amistad, la sed espiritual, las fraternidades, el amor universal, el esfuerzo colectivo, los sindicatos, las revoluciones, el altruismo, el humanitarismo, el progreso, la tecnología, la cibernética, la robótica, la aviación, la electrónica, la medicina alternativa, la radiestesia, lo mental, la vibración, el ritmo, lo novedoso, los inventos, lo inconvencional, la libertad, las sociedades de cooperación y mutua ayuda, las cámaras de representantes, la democracia, la solidaridad, la unión de los pueblos.', 'Si trabajas en temas que tengan que ver con el arte, podrás tener más éxito que el acostumbrado, si no es a sí, trata de explorar sobre esta línea que te resultaría bastante ventajoso. Tendrás una nueva energía que te dará un impulso para tu salud. Estas entrando en un proceso de creatividad y explorar las alegrías que te ofrece la vida, por lo que, teniendo tu economía bastante estable, te puedes permitir dedicarte un poco más al ocio. Notarás como en salidas de ocio, teatro, cine, cenas en las que puedas pasar un buen rato es donde más a gusto te encontrarás. Una fuerte dosis de iniciativa y optimismo para afrontar cualquier obstáculo.  Mejor día 24 y 25'),
(8, 'Piscis', 'Pacientes y tranquilos, muy amables y sensibles, son capaces de lidiar de manera muy serena y reconfortante con los problemas de los demás, pero, sin embargo, puede resultar bastante egoísta y no siempre le apetece. Se guía más por las emociones que por la razón. A veces es un poco exagerado y no siempre está muy centrado en la realidad que le rodea.\r\n', 'Azul mar', 'Agua', 'Los océanos, las cosas móviles, variables, cambiantes, la hospitalidad, la bebida, el vicio, el dismulo, los engaños, la pérdida de reputación y de la libertad, los hospitales, las cárceles, las casas de reposo, los asilos, la filantropía, las instituciones piadosas, los dispensarios, las sociedades protectoras de animales, las traiciones, los suicidios, las dependencias, el escapismo, los trabajos aislados, las ciencias ocultas, las maniobras sediciosas, el espionaje, el camuflaje, la hipocresía, el martirio, el sacrificio, el servicio, el inconsciente colectivo.', 'Trata de descansar y relajarte un poco más, podrás estar algo pendiente por la salud de una persona allegada, pero piensa que la armonía no solamente es un factor importante para tu vida. Tendrás cambios muy positivos en tu profesión y vida en general. Estarás muy audaz en el tema económico, pero si tienes que aceptar contratos no los firmes antes de fin de semana. Si tienes que comunicarte con la persona amada, trata de ser muy locuaz y no de buscar rodeos, ve al grano y directamente, ya que puede haber mala interpretación en tus actos y palabras que te pueden pasar factura más adelante. Para no tener interferencias con socios, lo mejor estar en solitario. Mejor día 22 y 26.'),
(9, 'Aries', 'Adorables y muy divertidos, llenos de energía y entusiasmo. Les encantan los retos y empezar cosas nuevas, pero no les gusta recibir órdenes, esto hace que a veces sean egocéntricos, impulsivos y autoritarios. Muy independientes y dispuestos a arriesgarse, pero también algo frenéticos y alérgicos al compromiso.', 'Rojo', 'Fuego', 'los comienzos, el principio, la mañana, la primavera, los animales carnivoros, los jefes, el mando, la fuerza, la violencia, el impulso, la autoridad, la virilidad, la juventud, las armas, los accidentes en la cabeza, peligro por el hierro, el fuego y las armas.', 'Para muchos nativos del signo será un momento de mucho movimiento, así que debes tener cuidado con el estrés, ya que es un momento tradicionalmente de vacaciones, pero para muchas personas será de gran movimiento, tendrás que dar mucho y bueno ya que vas a querer aprovechar las oportunidades que la época te brinda. Aun así, deberás cuidar un poco la salud para evitar caer en el estrés antes citado, así que cuídate un poco el sistema nervioso y relájate lo que puedas. Piensa que tienes una magnifica oportunidad, por lo que conseguirás amor y lucha, comodidad y acción, esta conjunción es muy interesante para poder mejorar. Mejor día 25 y 26.'),
(10, 'Tauro', 'Son prudentes, muy estables y con gran fuerza de voluntad. Tienen muy desarrollado el sentido de la justicia y tienden a ayudar a quien lo necesita. A veces son demasiado tercos y complejos, lo que hace que sea difícil controlar su lado más colérico. Son fieles y leales, pero igualmente celosos y un poco posesivos.', 'Verde', 'Tierra', 'La fuerza de voluntad, la permanencia, la firmeza, la perseverancia, la estabilidad, la concreción, la resistencia, la fuerza, la sensualidad, la buena mesa, la forma, la música, el talento vocal, los sentimientos duraderos, la naturaleza, la agricultura, la banca.', 'La economía se te ve bastante saneada o en vías de total recuperación, continúa atendiendo a tu imagen y tu placer personal. Gozas de buena salud y sería muy interesante que practicaras algún tipo de deporte, te sentaría estupendamente. Evita en lo posible la mala alimentación, así como bebidas alcohólicas. Tus acciones acabarán dando frutos y produciendo excelentes resultados si actúas desde la madurez y no traicionas tu proceso personal, se trata sobre todo en trabajar en ti, en tu forma de ser, tus proyectos, verás como los nuevos enfoques te harán avanzar muchísimo., revisa y reflexiona sobre todo lo que has hecho últimamente. Mejor día 21 y 22.'),
(11, 'Géminis', 'Su carácter puede resultar complejo y algo contradictorio, se mueven un poco en la ambigüedad. Pueden ser amables y generosos, pero son capaces de mentirosos y manipuladores. Empiezan cada nuevo proyecto con mucho entusiasmo, pero se desaniman con facilidad. Suelen tener muchos conocidos, pero pocos buenos amigos.', 'Amarillo', 'Aire', 'El elemento aéreo, las comunicaciones, la dualidad, la iniciativa en los negocios, el comercio, el trabajo intelectual, los viajes, los hermanos, los amigos de la infancia, los escritos, los idiomas, la mente concreta.', 'Se te puede presentar una oportunidad única y especial lo que te permitirá cuidarte y mimarte. Entras a la vez en un periodo de mucha independencia personal. Trata de controlarlo bien para que te de buenos resultados. Tendrás muchas posibilidades de estrechar relación y comunicación con la familia, hermanos y amistades, que a la vez son como hermanos, para afrontar decisiones con respecto a otros miembros de más edad con estados de impotencia o de alguna enfermedad. Continuará la buena marcha positiva, aunque podrás hacerte cargo de otra ocupación administrativa relacionado con algo familiar. Podrías tener algún problema de papeleo.   Mejor día 20 y 26.'),
(12, 'Cáncer', 'Es la personalidad más rara de todo el zodiaco, cuanto menos desconcertante. Pueden ser muy tímidos, incluso aburridos y de repente sacar un lado fascinante y de lo más interesante. A veces puede parecer algo limitado, pero son capaces de ponerse en el sitio del otro y resolver cualquier situación.', 'Blanco, nacarado y plateado', 'Agua', 'La maternidad, los partos, el amor maternal, la familia, la patria, la casa, la cocina, las masas, las mujeres, los ríos, el sentimiento, la imaginación.', 'Si estas en temas que requieran cierta legalidad y piensas en mandarlo todo a paseo, ten calma, en todo caso no te precipites en las apreciaciones de la situación. Sigues en una situación estupenda para tus expectativas de futuro y asuntos profesionales, aprovecha esta oportunidad para entrar en una nueva dinámica en estos asuntos. Trata de huir de las situaciones tensas que se puedan producir a tu alrededor, ya que puedes perder los estribos con mucha facilidad y dada tu actividad frenética en estos momentos, no te conviene para nada, no darías buena imagen el tu entorno. Cuidado con las malas digestiones, que pueden estar producidas por el estrés. Mejor día 21 y 22.');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `signo_chino`
--

CREATE TABLE `signo_chino` (
  `id` int(2) NOT NULL,
  `nombre` varchar(40) COLLATE utf8_spanish_ci NOT NULL,
  `descripcion` text COLLATE utf8_spanish_ci NOT NULL,
  `planeta` varchar(15) COLLATE utf8_spanish_ci NOT NULL,
  `elemento` varchar(15) COLLATE utf8_spanish_ci NOT NULL,
  `hora_influencia` varchar(50) COLLATE utf8_spanish_ci NOT NULL,
  `signo_equivalente` varchar(50) COLLATE utf8_spanish_ci NOT NULL,
  `personalidad` text COLLATE utf8_spanish_ci NOT NULL,
  `signo_compatible` varchar(100) COLLATE utf8_spanish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

--
-- Volcado de datos para la tabla `signo_chino`
--

INSERT INTO `signo_chino` (`id`, `nombre`, `descripcion`, `planeta`, `elemento`, `hora_influencia`, `signo_equivalente`, `personalidad`, `signo_compatible`) VALUES
(1, 'Cabra', 'se presenta dócil, suave y apresurada, le cuesta expresar sus verdaderas emociones, es difícil descubrir que es lo que pasa en su interior; por eso de repente puede convertirse en un mar de lagrimas sin razón aparente. Con gran tendencia a soñar despierta, necesita sentir apoyo y una guía para poder dedicarse a lo que verdaderamente le entusiasma, vagar en su mundo interior de fantasías. Insegura, necesita sentirse amada y en un ambiente protector. ', 'Saturno', 'Tierra', 'entre las 13:00pm y la 15:00pm', 'Cáncer', 'Creativo, generoso, dócil, intuitivo y modesto, también destacan su honestidad y sinceridad con algo de timidez; se puede confiar en su nobleza y ternura; en su interior son pesimistas, inseguras e introvertidas', 'La Liebre, el Gato o el Conejo, el Cerdo o el Jabalí y el Caballo'),
(2, 'Caballo', 'Los caballos son los nómades del horóscopo chino, van de un lugar a otro, de proyecto en proyecto, necesita del movimiento y de espacios abiertos; no pueden resistirse al llamado interior de su espíritu libre y a su irrefrenable búsqueda de independencia y libertad.Utiliza cualquier estrategia desde contar chistes, hacerse el gracioso o destacar algún defecto de los presentes; cosa que le pude valer alguna mirada de reproche que ignorara sin culpa. Algunas veces resulta difícil soportarlo, debajo de su aparente diplomacia se esconde una personalidad egoísta e intolerante.', 'Marte', 'Fuego ', 'Junio', 'Géminis', 'Amable, entusiástico, independiente, inteligente, creativo, optimista, fuerte, asertivo, hablador, talentoso, alegre, activo, elocuente, aventurero, versátil, juguetón, alegre, animado, espíritu libre …', 'El Tigre y el Perro'),
(3, 'Serpiente', 'Las personas nacidas bajo su influencia se las podría llamar "encantadoras de serpientes", dotadas de la sabiduría y elegancia en los movimientos de este animal, son excelentes mediadores, embajadores o músicos virtuosos. La energía de su naturaleza despierta su instinto escurridizo, alerta para descubrir recovecos insólitos en busca de lugares oscuros llenos de misterios. Solitaria, encamina sus planes con discreción y en silencio; su astucia y capacidad de análisis la llevan a estar siempre en el lugar adecuado para no perder las oportunidades. ', 'Marte', 'Fuego', 'entre la 9:00 y las 11:00 de la mañana', 'Piscis', 'Sabia, lógica, creativa, elegante, astuta, materialista, desconfiada, quisquillosa y organizada.', 'Buey o Búfalo y Gallo.'),
(4, 'Dragón', 'El Dragón simboliza el poder y la riqueza; es el signo del emperador de China; encantador y brillante, despide vitalidad, fuerza y atrae con magnetismo y extravagancia. Las personas nacidas bajo la influencia del Dragón cautivan por su carisma personal y están acompañadas de buena suerte. Se sienten especialmente atraídos por las cosas extrañas y exóticas. ', 'Saturno', 'Tierra', 'entre la 7:00 y las 9:00 de la mañana', 'Aries', 'ambicioso, carismático, noble, magnánimo y poderoso; también puede ser despiadado, arrogante, despótico e intolerante.', 'Rata y Mono'),
(5, 'Conejo', 'La liebre algo perezosa, actúa con prudencia; es introvertida y reservada con sus cosas. Busca la comodidad y vivir rodeada de lujo, pero su falta de compromiso hace que deje pasar las oportunidades y no se arriesgue. No sirve para sacar las papas del fuego, las dificultades no son su fuerte y menos aun dirigir un equipo. Demasiado sensible para desarrollarse en ambientes competitivos o agresivos. Pero con cualidades innatas para la política y la disciplina; llena de gracia, por lo general es cultivada y educada; y tiene un gran sentido de la justicia.', 'Júpiter ', 'Madera', 'entre la 5:00 y las 7:00 de la mañana', 'Tauro', 'conservador, sensitivos, modestos, discretos, educados; por otro lado algo ingenuos, tímidos y diplomáticos. ', 'Cerdo o Jabalí y la Cabra o la Oveja'),
(6, 'Tigre', 'Los tigres son personas que necesitan de la aventura, disfrutan plenamente de la vida, siempre que encuentren nuevos retos, desafíos y acontecimientos inesperados. Pero su energía apasionada y su verdadero amor a la vida es contagiosa y estimula.', 'Jupiter', 'Madera ', 'entre la 3:00 y las 5:00 de la mañana', 'Acuario', 'Rebelde, independiente, dinámico, apasionado, osado, impredecible, impulsivo, sincero, cariñoso, generoso, humanitario, impaciente, imprudente, irascible… ', 'Caballo, Perro y Cerdo o Jabalí.'),
(7, 'Buey', 'El buey o Búfalo representa la prosperidad obtenida con el esfuerzo, la tenacidad y el trabajo. Refleja las características del animal que representa "el Buey"; paciente, incansable en el trabajo, capaz de llevar sobre sus espaldas grandes responsabilidades sin levantar una queja. Su organización y determinación en metas claras y precisas, hacen de él una fuerza imparable que se dirige con obstinación hacia sus objetivos, sorteando complicaciones y manteniendo el equilibrio interior fiel a sus metas ambiciosas. ', 'Saturno', 'Tierra', 'entre la 1:00 y las 3:00 de la mañana', ' Capricornio', 'Metódico, serio, paciente, tenaz, tranquilo, trabajador, ambicioso, tradicional, estable, practico, lógico, obstinado, rígido, intolerante… ', 'Rata, Serpiente y Gallo'),
(8, 'Rata', 'Es el primer signo o animal del horóscopo chino, ha ganado el primer puesto gracias a su astucia e inteligencia. De naturaleza escurridiza con gran raciocinio e intuición sabe sacar partido de cualquier situación. Con cualidades de líder, pionero y conquistador; utiliza su embriagador encanto para guiar a los otros según sus objetivos. Nunca muestra sus armas, es carismática y apasionada y se lleva la palma en el arte del disimulo. ', 'Mercurio', 'Agua', 'entre las 23:00 y la 1:00 de la mañana', 'Sagitario', 'Disciplinada, meticulosa, sistemática, sociable, inteligente, astuta, superambiciosa, cruel, intolerante, egoísta, trabajadora, ahorrativa…', 'Buey o Búfalo, Mono y Dragón.'),
(9, 'Cerdo', 'Los Cerdos o Jabalí son considerados los más generosos y honestos de todos los animales del horóscopo chino. Demasiado crédulo, puede ser embaucado con facilidad, no soporta la mentira, las injusticias y la mala fe. Amigo de sus amigos, es comprensivo y tolerante. Idealista le encanta el dinero, pero para gastarlo en su caprichos en compañía de amigos y familiares. ', 'Mercurio', 'Tierra', 'entre las 21:00 y las 23:00 de la noche', 'Escorpion', 'Tolerante, sensible, optimista, honesto, popular, afortunado, fiel, comprensivo y con sentido del humor ', 'La Liebre - Gato - Conejo y la Cabra u Oveja.'),
(10, 'Perro', 'a persona nacida bajo la influencia de este animal es altruista y con gran empatía; especialmente con los más necesitados o con aquellos que han sufrido algún tipo de injusticia, reacciona con rapidez y valentía. Sus amigos saben que pueden confiar en él, nadie más apropiado para guardar confidencias o permanecer al pie del cañón frente a una crisis. Los Perros nacieron para brindar felicidad, apoyo y consejos.', 'Saturno', 'Tierra ', 'entre las 19:00 y las 21:00 de la tarde', 'Libra', 'Leal, honesto, modesto, elocuente, inteligente, versátil, juguetón, bondadoso, fiel, obediente, instintivo y organizador...', 'El Caballo y el Tigre'),
(11, 'Gallo', 'El Gallo como jefe supremo del corral es orgulloso (pero de corazón blando), seguro de sí mismo, vanidoso y autoritario. Su lema es ante todo lealtad "llamar las cosas por su nombre", ser francos, abiertos y sinceros, siempre dirán la verdad y mantendrán la palabra dada. Persigue el respeto y la admiración, ante un talante arrollador se esconde un embustero que disfraza su verdadera naturaleza, teme que descubran sus puntos débiles.', 'Venus', 'Metal', 'entre la 17:00 y las 19:00 de la tarde', 'Virgo', 'Ingenioso, valiente, leal, trabajador, talentoso y generoso; también pueden ser orgullosos, curiosos, románticos y les encanta el lujo… ', 'Buey o Búfalo y Serpiente.'),
(12, 'Mono', 'ersátil y travieso, lo encontramos desempeñando profesiones como la de actores, investigadores, creativos o inventores. Encierra grandes talentos, de mente ágil e inteligente, su naturaleza creativa y excitante curiosidad le convierte en grandes genios de la improvisación. Capta lo que pasa a su alrededor con celeridad, de facilidad de palabra, puede expresarse con audacia y sorprender con sus salidas inspiradoras. Eficaz y practico a la hora de poner en acción los más grandes proyectos. ', 'Venus', 'Metal ', 'entre la 15:00 y las 17:00 de la tarde', 'Leo', 'Inteligente, ingenioso, versátil, noble, generoso e independiente, en su lado más áspero puede mostrarse cínico, inquieto, infiel, voluble…', 'La Rata , el Dragón y el Gallo');

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `galleta`
--
ALTER TABLE `galleta`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `signo`
--
ALTER TABLE `signo`
  ADD PRIMARY KEY (`id_signo`);

--
-- Indices de la tabla `signo_chino`
--
ALTER TABLE `signo_chino`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT de las tablas volcadas
--

--
-- AUTO_INCREMENT de la tabla `galleta`
--
ALTER TABLE `galleta`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=41;
--
-- AUTO_INCREMENT de la tabla `signo`
--
ALTER TABLE `signo`
  MODIFY `id_signo` int(2) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=13;
--
-- AUTO_INCREMENT de la tabla `signo_chino`
--
ALTER TABLE `signo_chino`
  MODIFY `id` int(2) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=13;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
