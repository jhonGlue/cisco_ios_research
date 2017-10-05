
if_pas_amdp2.h,7442
#define AMDP2_MAX_PACKET	112,3871
#define AMDP2_MAGIC_PAK_PTR	114,3924
#define AMDP2_CRC_SIZE	115,3970
#define AMDP2_LINK_UP	117,3997
#define AMDP2_LINK_DOWN	118,4022
#define AMDP2_STOP_DELAY	120,4050
#define AMDP2_RESET_DELAY	121,4092
#define AMDP2_MAX_SUSPEND_LOOP	122,4131
#define AMDP2_MAX_INIT_POLL	123,4199
#define AMDP2_VENDOR_DEVICE_ID	125,4265
#define AMDP2_LAT_TIMER_0	130,4343
#define AMDP2_LAT_TIMER_4	131,4380
#define AMDP2_LAT_TIMER_8	132,4417
#define AMDP2_LAT_TIMER_16	133,4454
#define AMDP2_LAT_TIMER_24	134,4492
#define AMDP2_LAT_TIMER_255	135,4530
typedef struct amdp2_regs_t_ amdp2_regs_t_140,4622
} amdp2_regs_t;amdp2_regs_t146,4937
#define AMDP2_CSR0	151,4986
#define AMDP2_CSR0_ERR 153,5027
#define AMDP2_CSR0_BABL 154,5096
#define AMDP2_CSR0_CERR 155,5165
#define AMDP2_CSR0_MISS 156,5240
#define AMDP2_CSR0_MERR 157,5309
#define AMDP2_CSR0_RINT 158,5368
#define AMDP2_CSR0_TINT 159,5433
#define AMDP2_CSR0_IDON 160,5501
#define AMDP2_CSR0_INTR 161,5567
#define AMDP2_CSR0_IENA 162,5628
#define AMDP2_CSR0_RXON 163,5691
#define AMDP2_CSR0_TXON 164,5761
#define AMDP2_CSR0_TDMD 165,5834
#define AMDP2_CSR0_STOP 166,5898
#define AMDP2_CSR0_STRT 167,5971
#define AMDP2_CSR0_INIT 168,6028
#define AMDP2_CSR0_ERRBITS 173,6115
#define AMDP2_CSR0_NORMAL 178,6249
#define AMDP2_CSR1 185,6425
#define AMDP2_CSR2 190,6508
#define AMDP2_CSR3 195,6554
#define AMDP2_CSR3_BABLM 197,6581
#define AMDP2_CSR3_MISSM 198,6638
#define AMDP2_CSR3_MERRM 199,6702
#define AMDP2_CSR3_RINTM 200,6766
#define AMDP2_CSR3_TINTM 201,6835
#define AMDP2_CSR3_IDONM 202,6905
#define AMDP2_CSR3_DXSUFLO 203,6976
#define AMDP2_CSR3_LAPPEN 205,7072
#define AMDP2_CSR3_DXMT2PD 207,7162
#define AMDP2_CSR3_EMBA 209,7252
#define AMDP2_CSR3_BSWP 211,7342
#define AMDP2_CSR4	217,7531
#define AMDP2_CSR4_DMAPLUS 219,7554
#define AMDP2_CSR4_DPOLL 220,7633
#define AMDP2_CSR4_AUTO_PAD_TX 221,7696
#define AMDP2_CSR4_AUTO_STRP_RX 222,7767
#define AMDP2_CSR4_MFCO 223,7844
#define AMDP2_CSR4_MFCOM 224,7920
#define AMDP2_CSR4_RCVCCOM 225,7998
#define AMDP2_CSR4_TXSTRTM 226,8037
#define AMDP2_CSR4_JABM 227,8076
#define AMDP2_CSR5	232,8172
#define AMDP2_CSR5_SINT	234,8195
#define AMDP2_CSR5_SINT_ENABLE 236,8295
#define AMDP2_CSR5_SUSPEND 237,8334
#define AMDP2_CSR8	242,8422
#define AMDP2_CSR9	243,8444
#define AMDP2_CSR10	244,8466
#define AMDP2_CSR11	245,8490
#define AMDP2_CSR12	250,8557
#define AMDP2_CSR13	251,8581
#define AMDP2_CSR14	252,8605
#define AMDP2_CSR15	257,8685
#define AMDP2_MODE_PROM 259,8710
#define AMDP2_MODE_DRCVBC	260,8773
#define AMDP2_MODE_DRCVPA	261,8839
#define AMDP2_MODE_DLNKTST 262,8912
#define AMDP2_MODE_DAPC 264,9009
#define AMDP2_MODE_MENDECL 266,9097
#define AMDP2_MODE_LRT 267,9165
#define AMDP2_MODE_TSEL 268,9241
#define AMDP2_MODE_PORTSEL_MASK 269,9315
#define AMDP2_MODE_INTL 271,9405
#define AMDP2_MODE_DRTY 272,9481
#define AMDP2_MODE_FCOLL 273,9541
#define AMDP2_MODE_DXMTFCS 274,9603
#define AMDP2_MODE_LOOP 275,9676
#define AMDP2_MODE_DTX 276,9738
#define AMDP2_MODE_DRX 277,9801
#define AMDP2_CSR28	282,9931
#define AMDP2_CSR29	287,10022
#define AMDP2_CSR34	292,10114
#define AMDP2_CSR35	297,10206
#define AMDP2_CSR47	308,10478
#define AMDP2_CSR47_POLLING_INTERVAL 309,10502
#define AMDP2_CSR76	315,10638
#define AMDP2_CSR78	321,10755
#define AMDP2_CSR80	326,10817
#define AMDP2_RXFIFO_16 328,10842
#define AMDP2_RXFIFO_64 329,10874
#define AMDP2_RXFIFO_128 330,10906
#define AMDP2_TXFIFO_START_8	332,10940
#define AMDP2_TXFIFO_START_64	333,10976
#define AMDP2_TXFIFO_START_128 334,11013
#define AMDP2_TXFIFO_START_248	335,11052
#define AMDP2_TXFIFO_WMARK_16	337,11091
#define AMDP2_TXFIFO_WMARK_64	338,11128
#define AMDP2_TXFIFO_WMARK_128	339,11165
#define AMDP2_CSR100 344,11251
#define AMDP2_CSR100_BUS_TIMEOUT 345,11286
#define AMDP2_CSR112 350,11375
#define AMDP2_BCR2	355,11478
#define AMDP2_BCR2_ASEL_ENABLE 357,11501
#define AMDP2_BCR2_ASEL_DISABLE 358,11565
#define AMDP2_BCR4	363,11643
#define AMDP2_BCR4_PSE 365,11666
#define AMDP2_BCR4_LNKSTE 366,11735
#define AMDP2_BCR4_LEDOUT 367,11796
#define AMDP2_BCR5	372,11870
#define AMDP2_BCR5_LEDDIS 374,11893
#define AMDP2_BCR6	379,11985
#define AMDP2_BCR6_LEDDIS 381,12008
#define AMDP2_BCR6_LEDPOL	382,12062
#define AMDP2_BCR6_FDLSE	383,12126
#define AMDP2_BCR7	388,12234
#define AMDP2_BCR7_LEDDIS 390,12257
#define AMDP2_BCR9	395,12356
#define AMDP2_BCR9_FDEN	397,12379
#define AMDP2_BCR18	402,12475
#define AMDP2_BCR18_MEMCMD	404,12500
#define AMDP2_BCR18_EXTREQ 405,12534
#define AMDP2_BCR18_DWIO 406,12572
#define AMDP2_BCR18_BREADE 407,12607
#define AMDP2_BCR18_BWRITE 408,12642
#define AMDP2_BCR18_LINBC 409,12677
#define AMDP2_BCR19	414,12735
#define AMDP2_BCR20	419,12792
#define AMDP2_BCR20_LANCE 421,12817
#define AMDP2_BCR20_CSRPCNET 422,12856
#define AMDP2_BCR20_SSIZE32 423,12895
#define AMDP2_BCR20_SW_STYLE3 424,12934
typedef struct amdp2_initblock_t_ amdp2_initblock_t_429,13024
} amdp2_initblock_t;amdp2_initblock_t439,13672
typedef struct amdp2_rx_desc_t_ amdp2_rx_desc_t_444,13769
} amdp2_rx_desc_t;amdp2_rx_desc_t452,14223
#define	AMDP2_RMD_OWN	454,14243
#define AMDP2_RMD_ERR	455,14306
#define AMDP2_RMD_FRAM	456,14364
#define AMDP2_RMD_OFLO	457,14416
#define AMDP2_RMD_CRC	458,14486
#define AMDP2_RMD_BUFF	459,14533
#define AMDP2_RMD_STP	460,14590
#define AMDP2_RMD_ENP	461,14659
#define AMDP2_RMD_BPE	462,14726
#define AMDP2_RMD_PAM	464,14813
#define AMDP2_RMD_LAFM	465,14873
#define AMDP2_RMD_BAM	466,14940
#define AMDP2_RMD_RES	467,15001
#define AMDP2_RMD_ERRBITS 472,15093
typedef struct amdp2_tx_control_t_ amdp2_tx_control_t_479,15299
} amdp2_tx_control_t;amdp2_tx_control_t482,15441
typedef struct amdp2_tx_desc_t_ amdp2_tx_desc_t_484,15464
} amdp2_tx_desc_t;amdp2_tx_desc_t492,15787
typedef struct amdp2_tx_shadow_t_ amdp2_tx_shadow_t_494,15807
} amdp2_tx_shadow_t;amdp2_tx_shadow_t497,15932
#define	AMDP2_TMD_OWN 499,15954
#define AMDP2_TMD_ERR 500,16018
#define AMDP2_TMD_AFCS 501,16077
#define AMDP2_TMD_MORE 502,16150
#define AMDP2_TMD_ONE 503,16221
#define AMDP2_TMD_DEF 504,16269
#define AMDP2_TMD_STP 505,16320
#define AMDP2_TMD_ENP 506,16390
#define AMDP2_TMD_BPE 507,16458
#define AMDP2_TMD_RES 508,16537
#define AMDP2_TMD0_BUFF	510,16590
#define AMDP2_TMD0_UFLO	511,16650
#define AMDP2_TMD0_EXDEF 512,16704
#define AMDP2_TMD0_LCOL	513,16767
#define AMDP2_TMD0_LCAR	514,16826
#define AMDP2_TMD0_RTRY	515,16886
#define AMDP2_TMD0_TDR	516,16951
#define AMDP2_TMD0_TRC	517,17004
#define AMDP2_TDR_SHIFT 518,17065
#define AMDP2_TMD_ERR_SUMMARY	523,17140
#define AMDP2_TMD0_ERR_SUMMARY	530,17308
#define AF_HASH(AF_HASH537,17501
typedef struct af_entry_type_ af_entry_type_542,17633
} af_entry_type;af_entry_type556,18064
typedef struct amdp2_instance_t_ amdp2_instance_t_561,18141
} amdp2_instance_t;amdp2_instance_t639,21162
#define AMDP2_ADVANCE_TX_RING_INDEX(AMDP2_ADVANCE_TX_RING_INDEX654,21488
#define AMDP2_RETRACT_TX_RING_INDEX(AMDP2_RETRACT_TX_RING_INDEX661,21671
#define AMDP2_ADVANCE_RX_RING_INDEX(AMDP2_ADVANCE_RX_RING_INDEX668,21855
#define AMDP2_RETRACT_RX_RING_INDEX(AMDP2_RETRACT_RX_RING_INDEX675,22038
static inline void amdp2_rxring_flush 686,22366
static inline void amdp2_flush_pak 697,22573
static inline void amdp2_cleanup_pak 706,22758
#define AMDP2_STATIC_INLINES_ONLY758,24544