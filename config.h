#ifndef CONFIG_H_
#define CONFIG_H_

//#define WEBIF 1
//#define TOUCH 1
//#define WITH_SSL 1
#if defined(__linux__)
//#define HAVE_DVBAPI 1
#endif
//#define IRDETO_GUESSING 1
//#define CS_ANTICASC 1
//#define WITH_DEBUG 1
//#define WITH_LB 1
//#define CS_CACHEEX 1
//#define CW_CYCLE_CHECK 1
//#define LCDSUPPORT 1
//#define LEDSUPPORT 1
//#define IPV6SUPPORT 1
#define WITH_EMU 1
//#define MODULE_MONITOR 1
//#define MODULE_CAMD33 1
#define MODULE_CAMD35 1
//#define MODULE_CAMD35_TCP 1
//#define MODULE_NEWCAMD 1
//#define MODULE_CCCAM 1
//#define MODULE_CCCSHARE 1
//#define MODULE_GBOX 1
//#define MODULE_RADEGAST 1
//#define MODULE_SERIAL 1
//#define MODULE_CONSTCW 1
//#define MODULE_PANDORA 1
//#define MODULE_GHTTP 1

#define WITH_CARDREADER 1

#ifdef WITH_CARDREADER

#define READER_NAGRA 1
#define READER_IRDETO 1
#define READER_CONAX 1
#define READER_CRYPTOWORKS 1
#define READER_SECA 1
#define READER_VIACCESS 1
#define READER_VIDEOGUARD 1
#define READER_DRE 1
#define READER_TONGFANG 1
#define READER_BULCRYPT 1
#define READER_GRIFFIN 1
#define READER_DGCRYPT 1

//#define CARDREADER_PHOENIX 1
//#define CARDREADER_INTERNAL 1
//#define CARDREADER_MP35 1
//#define CARDREADER_SC8IN1 1
//#define CARDREADER_SMARGO 1
//#define CARDREADER_DB2COM 1
//#define CARDREADER_STINGER 1

#ifdef WITH_PCSC
#define CARDREADER_PCSC 1
#endif

#ifdef WITH_LIBUSB
#define CARDREADER_SMART 1
#endif

// CARDREADER_INTERNAL_{AZBOX,COOLAPI,SCI} are internal variables
// do not touch them
#if   defined(CARDREADER_INTERNAL) && defined(WITH_AZBOX)
#define CARDREADER_INTERNAL_AZBOX 1
#elif defined(CARDREADER_INTERNAL) && (defined(WITH_COOLAPI) || defined(WITH_SU980))
#define CARDREADER_INTERNAL_COOLAPI 1
#elif defined(CARDREADER_INTERNAL)
#define CARDREADER_INTERNAL_SCI 1
#endif

#ifdef WITH_STAPI
//#define CARDREADER_STAPI 1
#endif

#endif // WITH_CARDREADER

#endif //OSCAM_CONFIG_H_
