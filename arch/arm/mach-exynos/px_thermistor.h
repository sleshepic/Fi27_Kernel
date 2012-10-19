/*
 * arch/arm/mach-s5pv310/px_thermistor.h
 */

#ifndef __PX_THERMISTOR_H__
#define __PX_THERMISTOR_H__

#if defined(CONFIG_MACH_P2)
/* temperature table for ADC CH 7 */
struct sec_therm_adc_table adc_temp_table[] = {
	{  240,  700 },
	{  291,  650 },
	{  346,  600 },
	{  405,  550 },
	{  473,  500 },
	{  492,  490 },
	{  507,  480 },
	{  526,  470 },
	{  537,  460 },
	{  555,  450 },
	{  577,  440 },
	{  595,  430 },
	{  612,  420 },
	{  631,  410 },
	{  650,  400 },
	{  746,  350 },
	{  843,  300 },
};
#elif defined(CONFIG_MACH_P8)
/* temperature table for ADC CH 7 */
struct sec_therm_adc_table adc_temp_table[] = {
	{  289,  700 },
	{  332,  650 },
	{  395,  600 },
	{  459,  550 },
	{  531,  500 },
	{  537,  490 },
	{  562,  480 },
	{  579,  470 },
	{  599,  460 },
	{  615,  450 },
	{  630,  440 },
	{  651,  430 },
	{  668,  420 },
	{  685,  410 },
	{  706,  400 },
	{  793,  350 },
	{  915,  300 },
};
#elif defined(CONFIG_MACH_P8LTE)
/* temperature table for ADC CH 7 */
struct sec_therm_adc_table adc_temp_table[] = {
	{  203,  700 },
	{  245,  650 },
	{  295,  600 },
	{  355,  550 },
	{  418,  500 },
	{  436,  490 },
	{  451,  480 },
	{  470,  470 },
	{  485,  460 },
	{  510,  450 },
	{  526,  440 },
	{  546,  430 },
	{  560,  420 },
	{  581,  410 },
	{  596,  400 },
	{  693,  350 },
	{  710,  340 },
	{  734,  330 },
	{  750,  320 },
	{  770,  310 },
	{  792,  300 },
};
#elif defined(CONFIG_MACH_P4)
/* temperature table for ADC CH 7 */
struct sec_therm_adc_table adc_temp_table[] = {
	{  276,  700 },
	{  321,  650 },
	{  394,  600 },
	{  437,  550 },
	{  505,  500 },
	{  531,  490 },
	{  534,  480 },
	{  549,  470 },
	{  573,  460 },
	{  588,  450 },
	{  610,  440 },
	{  627,  430 },
	{  650,  420 },
	{  663,  410 },
	{  687,  400 },
	{  788,  350 },
	{  903,  300 },
};
#else /* end of P2 */
/* temperature table for ADC CH 7 */
struct sec_therm_adc_table adc_temp_table[] = {
	/* ADC, Temperature */
	{  165,  800 },
	{  173,  790 },
	{  179,  780 },
	{  185,  770 },
	{  191,  760 },
	{  197,  750 },
	{  203,  740 },
	{  209,  730 },
	{  215,  720 },
	{  221,  710 },
	{  227,  700 },
	{  236,  690 },
	{  247,  680 },
	{  258,  670 },
	{  269,  660 },
	{  281,  650 },
	{  296,  640 },
	{  311,  630 },
	{  326,  620 },
	{  341,  610 },
	{  356,  600 },
	{  372,  590 },
	{  386,  580 },
	{  400,  570 },
	{  414,  560 },
	{  428,  550 },
	{  442,  540 },
	{  456,  530 },
	{  470,  520 },
	{  484,  510 },
	{  498,  500 },
	{  508,  490 },
	{  517,  480 },
	{  526,  470 },
	{  535,  460 },
	{  544,  450 },
	{  553,  440 },
	{  562,  430 },
	{  576,  420 },
	{  594,  410 },
	{  612,  400 },
	{  630,  390 },
	{  648,  380 },
	{  666,  370 },
	{  684,  360 },
	{  702,  350 },
	{  725,  340 },
	{  749,  330 },
	{  773,  320 },
	{  797,  310 },
	{  821,  300 },
	{  847,  290 },
	{  870,  280 },
	{  893,  270 },
	{  916,  260 },
	{  939,  250 },
	{  962,  240 },
	{  985,  230 },
	{ 1008,  220 },
	{ 1031,  210 },
	{ 1054,  200 },
	{ 1081,  190 },
	{ 1111,  180 },
	{ 1141,  170 },
	{ 1171,  160 },
	{ 1201,  150 },
	{ 1231,  140 },
	{ 1261,  130 },
	{ 1291,  120 },
	{ 1321,  110 },
	{ 1351,  100 },
	{ 1358,   90 },
	{ 1364,   80 },
	{ 1370,   70 },
	{ 1376,   60 },
	{ 1382,   50 },
	{ 1402,   40 },
	{ 1422,   30 },
	{ 1442,   20 },
	{ 1462,   10 },
	{ 1482,    0 },
	{ 1519,  -10 },
	{ 1528,  -20 },
	{ 1546,  -30 },
	{ 1563,  -40 },
	{ 1587,  -50 },
	{ 1601,  -60 },
	{ 1614,  -70 },
	{ 1625,  -80 },
	{ 1641,  -90 },
	{ 1663,  -100 },
	{ 1680,  -110 },
	{ 1695,  -120 },
	{ 1710,  -130 },
	{ 1725,  -140 },
	{ 1740,  -150 },
	{ 1755,  -160 },
	{ 1770,  -170 },
	{ 1785,  -180 },
	{ 1800,  -190 },
	{ 1815,  -200 },
};
#endif

#endif /* __PX_THERMISTOR_H__ */
