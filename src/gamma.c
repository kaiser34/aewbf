unsigned int gamma100[512] = {
    2,    2050,    4098,    6146,    8194,   10242,   12290,   14338,   16386,   18434,   20482,   22530,   24578,   26626,   28674,   30722,
    32770,   34818,   36866,   38914,   40962,   43010,   45058,   47106,   49154,   51202,   53250,   55298,   57346,   59394,   61442,   63490,
    65538,   67586,   69634,   71682,   73730,   75778,   77826,   79874,   81922,   83970,   86018,   88066,   90114,   92162,   94210,   96258,
    98306,  100354,  102402,  104450,  106498,  108546,  110594,  112642,  114690,  116738,  118786,  120834,  122882,  124930,  126978,  129026,
    131074,  133122,  135170,  137218,  139266,  141314,  143362,  145410,  147458,  149506,  151554,  153602,  155650,  157698,  159746,  161794,
    163842,  165890,  167938,  169986,  172034,  174082,  176130,  178178,  180226,  182274,  184322,  186370,  188418,  190466,  192514,  194562,
    196610,  198658,  200706,  202754,  204802,  206850,  208898,  210946,  212994,  215042,  217090,  219138,  221186,  223234,  225282,  227330,
    229378,  231426,  233474,  235522,  237570,  239618,  241666,  243714,  245762,  247810,  249858,  251906,  253954,  256002,  258050,  260098,
    262146,  264194,  266242,  268290,  270338,  272386,  274434,  276482,  278530,  280579,  283650,  285698,  287746,  289794,  291842,  293890,
    295938,  297986,  300034,  302082,  304130,  306178,  308226,  310274,  312322,  314370,  316418,  318466,  320514,  322562,  324610,  326658,
    328706,  330754,  332802,  334850,  336898,  338946,  340994,  343042,  345090,  347138,  349186,  351234,  353282,  355330,  357378,  359426,
    361474,  363522,  365570,  367618,  369666,  371714,  373762,  375810,  377858,  379906,  381954,  384002,  386050,  388098,  390146,  392194,
    394242,  396290,  398338,  400386,  402434,  404482,  406530,  408578,  410626,  412674,  414722,  416770,  418818,  420866,  422914,  424962,
    427010,  429058,  431106,  433154,  435202,  437250,  439298,  441346,  443394,  445442,  447490,  449538,  451586,  453634,  455682,  457730,
    459778,  461826,  463874,  465922,  467970,  470018,  472066,  474114,  476162,  478210,  480258,  482306,  484354,  486402,  488450,  490498,
    492546,  494594,  496642,  498690,  500738,  502786,  504834,  506882,  508930,  510978,  513026,  515074,  517122,  519170,  521218,  523266,
    525314,  527362,  529410,  531458,  533506,  535554,  537602,  539650,  541698,  543746,  545794,  547842,  549890,  551938,  553986,  556034,
    558082,  560130,  562178,  564226,  566274,  568322,  570370,  572418,  574466,  576514,  578562,  580610,  582658,  584706,  586754,  588802,
    590850,  592898,  594946,  596994,  599042,  601090,  603138,  605186,  607234,  609282,  611330,  613378,  615426,  617474,  619522,  621570,
    623618,  625666,  627714,  629762,  631810,  633858,  635906,  637954,  640002,  642050,  644098,  646146,  648194,  650242,  652290,  654338,
    656386,  658434,  660482,  662530,  664578,  666626,  668674,  670722,  672770,  674818,  676866,  678914,  680962,  683010,  685058,  687106,
    689154,  691202,  693250,  695298,  697346,  699394,  701442,  703490,  705538,  707586,  709634,  711682,  713730,  715778,  717826,  719874,
    721922,  723970,  726018,  728066,  730114,  732162,  734210,  736258,  738306,  740354,  742402,  744450,  746498,  748546,  750594,  752642,
    754690,  756738,  758786,  760834,  762882,  764930,  766977,  768002,  770050,  772098,  774146,  776194,  778242,  780290,  782338,  784386,
    786434,  788482,  790530,  792578,  794626,  796674,  798722,  800770,  802818,  804866,  806914,  808962,  811010,  813058,  815106,  817154,
    819202,  821250,  823298,  825346,  827394,  829442,  831490,  833538,  835586,  837634,  839682,  841730,  843778,  845826,  847874,  849922,
    851970,  854018,  856066,  858114,  860162,  862210,  864258,  866306,  868354,  870402,  872450,  874498,  876546,  878594,  880642,  882690,
    884738,  886786,  888834,  890882,  892930,  894978,  897026,  899074,  901122,  903170,  905218,  907266,  909314,  911362,  913410,  915458,
    917506,  919554,  921602,  923650,  925698,  927746,  929794,  931842,  933890,  935938,  937986,  940034,  942082,  944130,  946178,  948226,
    950274,  952322,  954370,  956418,  958466,  960514,  962562,  964610,  966658,  968706,  970754,  972802,  974850,  976898,  978946,  980994,
    983042,  985090,  987138,  989186,  991234,  993282,  995330,  997378,  999426, 1001474, 1003522, 1005570, 1007618, 1009666, 1011714, 1013762,
    1015810, 1017858, 1019906, 1021954, 1024002, 1026050, 1028098, 1030146, 1032194, 1034242, 1036290, 1038338, 1040386, 1042434, 1044482, 1046528
};

unsigned int gamma20[512] = {
        2,    2050,    4098,    6146,    8194,   10242,   12290,   14338,   16386,   18434,   20482,   22530,   24578,   26626,   28674,   30722,
    32770,   34818,   36866,   38914,   40962,   43011,   46082,   48130,   50178,   52226,   54274,   56322,   58370,   60418,   62466,   64514,
    66562,   68610,   70658,   72706,   74754,   76802,   78850,   80898,   82946,   84994,   87042,   89090,   91139,   94210,   96258,   98306,
    100354,  102402,  104450,  106498,  108546,  110594,  112642,  114690,  116738,  118786,  120834,  122882,  124930,  126978,  129026,  131074,
    133122,  135170,  137218,  139266,  141314,  143362,  145411,  148482,  150530,  152578,  154626,  156674,  158722,  160770,  162818,  164866,
    166914,  168962,  171010,  173058,  175106,  177154,  179202,  181250,  183298,  185346,  187394,  189442,  191490,  193538,  195586,  197634,
    199682,  201730,  203778,  205826,  207874,  209923,  212994,  215042,  217090,  219138,  221186,  223234,  225282,  227330,  229378,  231426,
    233474,  235522,  237570,  239618,  241666,  243714,  245762,  247810,  249858,  251906,  253954,  256002,  258050,  260098,  262146,  264194,
    266242,  268290,  270338,  272386,  274434,  276482,  278530,  280578,  282626,  284674,  286722,  288770,  290819,  293890,  295938,  297986,
    300034,  302082,  304130,  306178,  308226,  310274,  312322,  314370,  316418,  318466,  320514,  322562,  324610,  326658,  328706,  330754,
    332802,  334850,  336898,  338946,  340994,  343042,  345090,  347138,  349186,  351234,  353282,  355330,  357378,  359426,  361474,  363522,
    365570,  367618,  369666,  371714,  373762,  375810,  377858,  379906,  381954,  384002,  386050,  388098,  390146,  392194,  394242,  396290,
    398338,  400386,  402434,  404482,  406530,  408578,  410626,  412674,  414722,  416770,  418818,  420867,  423938,  425986,  428034,  430082,
    432130,  434178,  436226,  438274,  440322,  442370,  444418,  446466,  448514,  450562,  452610,  454658,  456706,  458754,  460802,  462850,
    464898,  466946,  468994,  471042,  473090,  475138,  477186,  479234,  481282,  483330,  485378,  487426,  489474,  491522,  493570,  495618,
    497666,  499714,  501762,  503810,  505858,  507906,  509954,  512002,  514050,  516098,  518146,  520194,  522242,  524290,  526338,  528386,
    530434,  532482,  534530,  536578,  538626,  540674,  542722,  544770,  546818,  548866,  550914,  552962,  555010,  557058,  559106,  561154,
    563202,  565250,  567298,  569346,  571394,  573442,  575490,  577538,  579586,  581634,  583682,  585730,  587778,  589826,  591874,  593922,
    595970,  598018,  600066,  602114,  604162,  606210,  608258,  610306,  612354,  614402,  616450,  618498,  620546,  622594,  624642,  626690,
    628737,  629762,  631810,  633858,  635906,  637954,  640002,  642050,  644098,  646146,  648194,  650242,  652290,  654338,  656386,  658434,
    660482,  662530,  664578,  666626,  668674,  670722,  672770,  674818,  676866,  678914,  680962,  683010,  685058,  687106,  689154,  691202,
    693250,  695298,  697346,  699394,  701442,  703490,  705538,  707586,  709634,  711682,  713730,  715778,  717826,  719874,  721922,  723970,
    726018,  728066,  730114,  732162,  734210,  736258,  738306,  740354,  742402,  744450,  746498,  748546,  750594,  752642,  754690,  756738,
    758785,  759810,  761858,  763906,  765954,  768002,  770050,  772098,  774146,  776194,  778242,  780290,  782338,  784386,  786434,  788482,
    790530,  792578,  794626,  796674,  798722,  800770,  802818,  804866,  806914,  808962,  811010,  813058,  815106,  817154,  819202,  821250,
    823298,  825346,  827394,  829442,  831490,  833538,  835586,  837634,  839681,  840706,  842754,  844802,  846850,  848898,  850946,  852994,
    855042,  857090,  859138,  861186,  863234,  865282,  867330,  869378,  871426,  873474,  875522,  877570,  879618,  881666,  883714,  885762,
    887810,  889858,  891906,  893954,  896002,  898050,  900098,  902145,  903170,  905218,  907266,  909314,  911362,  913410,  915458,  917506,
    919554,  921602,  923650,  925698,  927746,  929794,  931842,  933890,  935938,  937986,  940034,  942082,  944130,  946178,  948226,  950274,
    952322,  954370,  956417,  957442,  959490,  961538,  963586,  965634,  967682,  969730,  971778,  973826,  975874,  977922,  979970,  982018,
    984066,  986114,  988162,  990210,  992258,  994306,  996354,  998402, 1000450, 1002498, 1004545, 1005570, 1007618, 1009666, 1011714, 1013762,
    1015810, 1017858, 1019906, 1021954, 1024002, 1026050, 1028098, 1030146, 1032194, 1034242, 1036290, 1038338, 1040386, 1042434, 1044482, 1046528
};

unsigned int gamma_hdr011[512] = {
    8,    8200,   16392,   24583,   31752,   39943,   47112,   55303,   62471,   69639,   76806,   82951,   90118,   96263,  103430,  109574,
    115718,  121862,  128005,  133126,  139270,  145413,  150533,  155654,  161797,  166917,  172037,  177157,  182277,  187397,  192516,  196613,
    201732,  205829,  210948,  215045,  220164,  224260,  228356,  232452,  236549,  241667,  244740,  248836,  252932,  257028,  261124,  265219,
    268292,  272387,  275460,  279555,  282628,  286723,  289795,  292868,  296963,  300035,  303107,  306179,  309251,  312324,  316419,  319490,
    321539,  324611,  327683,  330755,  333827,  336899,  339970,  342019,  345091,  348162,  350211,  353282,  355331,  358402,  360451,  363522,
    365571,  368642,  370691,  373762,  375810,  377859,  380930,  382978,  385026,  387074,  389123,  392194,  394242,  396290,  398338,  400386,
    402434,  404482,  406530,  408578,  410626,  412674,  414722,  416770,  418818,  420866,  422914,  424961,  425986,  428034,  430082,  432130,
    434177,  435202,  437250,  439298,  441345,  442370,  444418,  446465,  447490,  449538,  451585,  452610,  454657,  455682,  457729,  458754,
    460802,  462849,  463874,  465921,  466946,  468993,  470017,  471042,  473089,  474114,  476161,  477186,  479233,  480257,  481282,  483329,
    484354,  486401,  487425,  488450,  490497,  491521,  492545,  493570,  495617,  496641,  497666,  499713,  500737,  501761,  502786,  504833,
    505857,  506881,  507906,  509953,  510977,  512001,  513025,  514050,  516097,  517121,  518145,  519169,  520193,  521217,  522242,  524289,
    525313,  526337,  527361,  528385,  529409,  530433,  531458,  533505,  534529,  535553,  536577,  537601,  538625,  539649,  540673,  541697,
    542721,  543745,  544769,  545794,  547841,  548865,  549889,  550913,  551937,  552961,  553985,  555009,  556033,  557057,  558081,  559105,
    560129,  561153,  562177,  563201,  564225,  565249,  566273,  567297,  568321,  569345,  570369,  571393,  572417,  573441,  574465,  575489,
    576513,  577537,  578561,  579585,  580609,  581633,  582657,  583681,  584705,  585729,  586753,  587777,  588801,  589825,  590849,  591873,
    592897,  593921,  594945,  595969,  596993,  598017,  599041,  600065,  601089,  602113,  603137,  604161,  605185,  606209,  607232,  607233,
    608257,  609281,  610305,  611329,  612353,  613377,  614401,  615425,  616449,  617473,  618498,  620545,  621569,  622593,  623617,  624641,
    625665,  626689,  627713,  628737,  629761,  630785,  631809,  632833,  633857,  634881,  635905,  636929,  637953,  638977,  640001,  641025,
    642049,  643073,  644097,  645121,  646146,  648193,  649217,  650241,  651265,  652289,  653313,  654337,  655361,  656385,  657409,  658434,
    660481,  661505,  662529,  663553,  664577,  665601,  666625,  667650,  669697,  670721,  671745,  672769,  673793,  674817,  675842,  677889,
    678913,  679937,  680961,  681986,  684033,  685057,  686081,  687105,  688130,  690177,  691201,  692225,  693249,  694274,  696321,  697345,
    698369,  699394,  701441,  702465,  703490,  705537,  706561,  707585,  708610,  710657,  711681,  712706,  714753,  715777,  716802,  718849,
    719873,  720898,  722945,  723969,  724994,  727041,  728065,  729090,  731137,  732162,  734209,  735233,  736258,  738305,  739330,  741377,
    742402,  744449,  745474,  747521,  748545,  749570,  751617,  752642,  754689,  755714,  757761,  758786,  760834,  762881,  763906,  765953,
    766978,  769025,  770050,  772097,  773122,  775170,  777217,  778242,  780289,  781314,  783362,  785409,  786434,  788482,  790529,  791554,
    793602,  795649,  796674,  798722,  800770,  802817,  803842,  805890,  807937,  808962,  811010,  813058,  815106,  817153,  818178,  820226,
    822274,  824322,  826369,  827394,  829442,  831490,  833538,  835586,  837634,  839682,  841729,  842754,  844802,  846850,  848898,  850946,
    852994,  855042,  857090,  859138,  861186,  863234,  865282,  867330,  869378,  871426,  873474,  875522,  877570,  879619,  882690,  884738,
    886786,  888834,  890882,  892930,  894979,  898050,  900098,  902146,  904194,  906243,  909314,  911362,  913410,  915459,  918530,  920578,
    922626,  924675,  927746,  929794,  931843,  934914,  936963,  940034,  942082,  944131,  947202,  949251,  952322,  954370,  956419,  959490,
    961539,  964610,  966659,  969730,  971779,  974851,  977922,  979971,  983042,  985091,  988162,  990211,  993283,  996354,  998403, 1001475,
    1004546, 1006595, 1009667, 1012739, 1015810, 1017859, 1020931, 1024003, 1027074, 1029123, 1032195, 1035267, 1038339, 1041411, 1044483, 1047552
};

unsigned int gamma_hdr01[512] = {
    8,    8200,   16392,   24583,   31752,   39943,   47112,   55303,   62471,   69638,   75783,   82951,   90118,   96262,  102406,  108550,
    114694,  120838,  126982,  133126,  139269,  144389,  149510,  155653,  160773,  165893,  171013,  176133,  181253,  186372,  190469,  195589,
    200708,  204804,  208901,  214020,  218116,  222212,  226308,  230404,  234500,  238596,  242692,  246788,  250883,  253956,  258052,  262147,
    265220,  269315,  272387,  275460,  279555,  282627,  285699,  288772,  292867,  295939,  299011,  302083,  305154,  307203,  310275,  313347,
    316419,  319490,  321539,  324611,  327682,  329731,  332802,  334851,  337922,  339971,  343042,  345091,  348162,  350210,  352259,  355330,
    357378,  359426,  361474,  363522,  365571,  368642,  370690,  372738,  374786,  376834,  378882,  380929,  381954,  384002,  386050,  388098,
    390146,  392193,  393218,  395266,  397314,  399361,  400386,  402434,  404481,  405506,  407553,  408578,  410625,  411650,  413697,  414722,
    416769,  417794,  419841,  420866,  422913,  423937,  424962,  427009,  428033,  429058,  431105,  432129,  433153,  434178,  436225,  437249,
    438273,  439298,  441345,  442369,  443393,  444417,  445441,  446465,  447489,  448513,  449537,  450562,  452609,  453633,  454657,  455681,
    456705,  457729,  458752,  458753,  459777,  460801,  461825,  462849,  463873,  464897,  465921,  466945,  467968,  467969,  468993,  470017,
    471041,  472065,  473088,  473089,  474113,  475137,  476160,  476161,  477185,  478209,  479232,  479233,  480257,  481280,  481281,  482305,
    483329,  484352,  484353,  485377,  486400,  486401,  487424,  487425,  488449,  489472,  489473,  490497,  491520,  491521,  492544,  492545,
    493568,  493569,  494593,  495616,  495617,  496640,  496641,  497664,  497665,  498688,  498689,  499712,  499713,  500736,  500737,  501760,
    501761,  502784,  502785,  503808,  503809,  504832,  504833,  505856,  505857,  506880,  506881,  507904,  507905,  508928,  508928,  508929,
    509952,  509953,  510976,  510977,  512000,  512001,  513024,  513024,  513025,  514048,  514049,  515072,  515072,  515073,  516096,  516097,
    517120,  517121,  518144,  518144,  518145,  519168,  519169,  520192,  520192,  520193,  521216,  521217,  522240,  522240,  522241,  523264,
    523265,  524288,  524288,  524289,  525312,  525313,  526336,  526336,  526337,  527360,  527361,  528384,  528384,  528385,  529408,  529409,
    530432,  530433,  531456,  531456,  531457,  532480,  532481,  533504,  533504,  533505,  534528,  534529,  535552,  535553,  536576,  536577,
    537600,  537600,  537601,  538624,  538625,  539648,  539649,  540672,  540673,  541696,  541697,  542720,  542721,  543744,  543745,  544768,
    544769,  545792,  545793,  546816,  546817,  547840,  547841,  548864,  548865,  549888,  549889,  550912,  550913,  551937,  552960,  552961,
    553984,  553985,  555008,  555009,  556033,  557056,  557057,  558081,  559104,  559105,  560128,  560129,  561153,  562176,  562177,  563201,
    564225,  565248,  565249,  566273,  567296,  567297,  568321,  569345,  570368,  570369,  571393,  572417,  573440,  573441,  574465,  575489,
    576513,  577537,  578560,  578561,  579585,  580609,  581633,  582657,  583681,  584705,  585729,  586753,  587776,  587777,  588801,  589825,
    590849,  591873,  592897,  593922,  595969,  596993,  598017,  599041,  600065,  601089,  602113,  603137,  604161,  605186,  607233,  608257,
    609281,  610306,  612353,  613377,  614401,  615426,  617473,  618497,  619522,  621569,  622593,  623618,  625665,  626690,  628737,  629762,
    631809,  632834,  634881,  635906,  637953,  638978,  641025,  642050,  644098,  646145,  647170,  649218,  651266,  653313,  654338,  656386,
    658434,  660482,  662530,  664577,  665602,  667650,  669698,  671746,  673794,  675842,  677891,  680962,  683010,  685058,  687106,  689154,
    691203,  694274,  696322,  698371,  701442,  703491,  706562,  708611,  711682,  713731,  716802,  718851,  721923,  724994,  727043,  730115,
    733187,  736259,  739330,  741379,  744451,  747523,  750595,  753668,  757763,  760835,  763907,  766980,  771075,  774147,  777220,  781315,
    784388,  788484,  792579,  795652,  799748,  803844,  807940,  812036,  816132,  820228,  824324,  828420,  832517,  837636,  841732,  845829,
    850949,  856068,  860165,  865285,  870405,  875525,  880645,  885765,  890886,  897029,  902149,  907270,  913414,  919558,  925702,  931846,
    937990,  944134,  950278,  956423,  963591,  970758,  976903,  984071,  991240,  999431, 1006600, 1014791, 1021960, 1030152, 1038345, 1047552
};

unsigned int gamma01[512] = {
    8,    8200,   16392,   24584,   32775,   39944,   48135,   55303,   62472,   70663,   77831,   84998,   91143,   98311,  105478,  111623,
    118790,  124934,  131078,  137222,  143366,  149510,  155654,  161798,  167941,  173062,  179205,  184326,  190469,  195589,  200710,  206853,
    211973,  217093,  222213,  227333,  232453,  237573,  242692,  246789,  251909,  257028,  261125,  266244,  270341,  275460,  279557,  284676,
    288772,  292868,  296965,  302084,  306180,  310276,  314372,  318468,  322564,  326660,  330756,  334852,  338948,  343043,  346116,  350212,
    354307,  357380,  361476,  365571,  368644,  372739,  375812,  379907,  382980,  387075,  390148,  394243,  397315,  400388,  404483,  407555,
    410628,  414723,  417795,  420867,  423939,  427011,  430084,  434179,  437251,  440323,  443395,  446467,  449539,  452611,  455683,  458754,
    460803,  463875,  466947,  470019,  473091,  476163,  479234,  481283,  484355,  487427,  490498,  492547,  495619,  498690,  500739,  503811,
    506882,  508931,  512002,  514051,  517122,  519171,  522242,  524291,  527362,  529411,  532482,  534531,  537602,  539651,  542722,  544770,
    546819,  549890,  551939,  555010,  557058,  559107,  562178,  564226,  566274,  568323,  571394,  573442,  575490,  577539,  580610,  582658,
    584706,  586754,  588803,  591874,  593922,  595970,  598018,  600066,  602114,  604162,  606210,  608258,  610307,  613378,  615426,  617474,
    619522,  621570,  623618,  625666,  627714,  629762,  631810,  633858,  635905,  636930,  638978,  641026,  643074,  645122,  647170,  649218,
    651266,  653314,  655361,  656386,  658434,  660482,  662530,  664578,  666625,  667650,  669698,  671746,  673794,  675841,  676866,  678914,
    680962,  683009,  684034,  686082,  688130,  690177,  691202,  693250,  695297,  696322,  698370,  700417,  701442,  703490,  705537,  706562,
    708610,  710657,  711682,  713730,  715777,  716802,  718849,  719874,  721922,  723969,  724994,  727041,  728066,  730114,  732161,  733186,
    735233,  736258,  738305,  739330,  741377,  742402,  744449,  745474,  747521,  748546,  750593,  751618,  753665,  754690,  756737,  757762,
    759809,  760834,  762881,  763906,  765953,  766978,  769025,  770049,  771074,  773121,  774146,  776193,  777217,  778242,  780289,  781314,
    783361,  784385,  785410,  787457,  788482,  790529,  791553,  792578,  794625,  795649,  796674,  798721,  799745,  800770,  802817,  803841,
    804866,  806913,  807937,  808962,  811009,  812033,  813057,  814082,  816129,  817153,  818178,  820225,  821249,  822273,  823298,  825345,
    826369,  827393,  828418,  830465,  831489,  832513,  833538,  835585,  836609,  837633,  838658,  840705,  841729,  842753,  843777,  844802,
    846849,  847873,  848897,  849921,  850946,  852993,  854017,  855041,  856065,  857090,  859137,  860161,  861185,  862209,  863233,  864257,
    865282,  867329,  868353,  869377,  870401,  871425,  872449,  873474,  875521,  876545,  877569,  878593,  879617,  880641,  881665,  882689,
    883714,  885761,  886785,  887809,  888833,  889857,  890881,  891905,  892929,  893953,  894977,  896002,  898049,  899073,  900097,  901121,
    902145,  903169,  904193,  905217,  906241,  907265,  908289,  909313,  910337,  911361,  912385,  913409,  914433,  915457,  916481,  917505,
    918529,  919553,  920577,  921601,  922625,  923649,  924673,  925697,  926721,  927745,  928769,  929793,  930817,  931841,  932865,  933889,
    934913,  935937,  936961,  937985,  939009,  940033,  941057,  942081,  943105,  944129,  945153,  946177,  947201,  948225,  949249,  950273,
    951297,  952321,  953345,  954369,  955393,  956416,  956417,  957441,  958465,  959489,  960513,  961537,  962561,  963585,  964609,  965633,
    966657,  967681,  968704,  968705,  969729,  970753,  971777,  972801,  973825,  974849,  975873,  976897,  977920,  977921,  978945,  979969,
    980993,  982017,  983041,  984065,  985088,  985089,  986113,  987137,  988161,  989185,  990209,  991233,  992256,  992257,  993281,  994305,
    995329,  996353,  997377,  998400,  998401,  999425, 1000449, 1001473, 1002497, 1003520, 1003521, 1004545, 1005569, 1006593, 1007617, 1008640,
    1008641, 1009665, 1010689, 1011713, 1012737, 1013760, 1013761, 1014785, 1015809, 1016833, 1017856, 1017857, 1018881, 1019905, 1020929, 1021953,
    1022976, 1022977, 1024001, 1025025, 1026049, 1027072, 1027073, 1028097, 1029121, 1030144, 1030145, 1031169, 1032193, 1033217, 1034240, 1034241,
    1035265, 1036289, 1037313, 1038336, 1038337, 1039361, 1040385, 1041408, 1041409, 1042433, 1043457, 1044480, 1044481, 1045505, 1046529, 1047552
};
