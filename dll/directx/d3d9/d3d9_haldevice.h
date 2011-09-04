/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         Odyssey ReactX
 * FILE:            dll/directx/d3d9/d3d9_haldevice.h
 * PURPOSE:         d3d9.dll internal HAL device structures
 * PROGRAMERS:      Gregor Gullwi <gbrunmar (dot) ros (at) gmail (dot) com>
 */
#ifndef _D3D9_HALDEVICE_H_
#define _D3D9_HALDEVICE_H_

#include "d3d9_puredevice.h"

#if !defined(__cplusplus) || defined(CINTERFACE)
extern IDirect3DDevice9Vtbl_INT Direct3DDevice9HAL_Vtbl;
#endif

typedef struct _D3D9HALDEVICE
{
/* 0x0000 */    D3D9PUREDEVICE PureDevice;
#ifdef D3D_DEBUG_INFO
/* N/A    - 0x0004 */   DWORD dbg0004;
/* N/A    - 0x0008 */   DWORD dbg0008;
/* N/A    - 0x000c */   DWORD dbg000c;
/* N/A    - 0x0010 */   DWORD dbg0010;
/* N/A    - 0x0014 */   DWORD dbg0014;
/* N/A    - 0x0018 */   DWORD dbg0018;
/* N/A    - 0x001c */   DWORD dbg001c;
/* N/A    - 0x0020 */   DWORD dbg0020;
/* N/A    - 0x0024 */   DWORD dbg0024;
/* N/A    - 0x0028 */   DWORD dbg0028;
/* N/A    - 0x002c */   DWORD dbg002c;
/* N/A    - 0x0030 */   DWORD dbg0030;
/* N/A    - 0x0034 */   DWORD dbg0034;
/* N/A    - 0x0038 */   DWORD dbg0038;
#endif
/* 0x2438 */    DWORD unknown002438;
/* 0x243c */    DWORD unknown00243c;
/* 0x2440 */    DWORD unknown002440;
/* 0x2444 */    DWORD unknown002444;
/* 0x2448 */    DWORD unknown002448;
/* 0x244c */    DWORD unknown00244c;
/* 0x2450 */    DWORD unknown002450;
/* 0x2454 */    DWORD unknown002454;
/* 0x2458 */    DWORD unknown002458;
/* 0x245c */    DWORD unknown00245c;
/* 0x2460 */    DWORD unknown002460;
/* 0x2464 */    DWORD unknown002464;
/* 0x2468 */    DWORD unknown002468;
/* 0x246c */    DWORD unknown00246c;
/* 0x2470 */    DWORD unknown002470;
/* 0x2474 */    DWORD unknown002474;
/* 0x2478 */    DWORD unknown002478;
/* 0x247c */    DWORD unknown00247c;
/* 0x2480 */    DWORD unknown002480;
/* 0x2484 */    DWORD unknown002484;
/* 0x2488 */    DWORD unknown002488;
/* 0x248c */    DWORD unknown00248c;
/* 0x2490 */    DWORD unknown002490;
/* 0x2494 */    DWORD unknown002494;
/* 0x2498 */    DWORD unknown002498;
/* 0x249c */    DWORD unknown00249c;
/* 0x24a0 */    DWORD unknown0024a0;
/* 0x24a4 */    DWORD unknown0024a4;
/* 0x24a8 */    DWORD unknown0024a8;
/* 0x24ac */    DWORD unknown0024ac;
/* 0x24b0 */    DWORD unknown0024b0;
/* 0x24b4 */    DWORD unknown0024b4;
/* 0x24b8 */    DWORD unknown0024b8;
/* 0x24bc */    DWORD unknown0024bc;
/* 0x24c0 */    DWORD unknown0024c0;
/* 0x24c4 */    DWORD unknown0024c4;
/* 0x24c8 */    DWORD unknown0024c8;
/* 0x24cc */    DWORD unknown0024cc;
/* 0x24d0 */    DWORD unknown0024d0;
/* 0x24d4 */    DWORD unknown0024d4;
/* 0x24d8 */    DWORD unknown0024d8;
/* 0x24dc */    DWORD unknown0024dc;
/* 0x24e0 */    DWORD unknown0024e0;
/* 0x24e4 */    DWORD unknown0024e4;
/* 0x24e8 */    DWORD unknown0024e8;
/* 0x24ec */    DWORD unknown0024ec;
/* 0x24f0 */    DWORD unknown0024f0;
/* 0x24f4 */    DWORD unknown0024f4;
/* 0x24f8 */    DWORD unknown0024f8;
/* 0x24fc */    DWORD unknown0024fc;
/* 0x2500 */    DWORD unknown002500;
/* 0x2504 */    DWORD unknown002504;
/* 0x2508 */    DWORD unknown002508;
/* 0x250c */    DWORD unknown00250c;
/* 0x2510 */    DWORD unknown002510;
/* 0x2514 */    DWORD unknown002514;
/* 0x2518 */    DWORD unknown002518;
/* 0x251c */    DWORD unknown00251c;
/* 0x2520 */    DWORD unknown002520;
/* 0x2524 */    DWORD unknown002524;
/* 0x2528 */    DWORD unknown002528;
/* 0x252c */    DWORD unknown00252c;
/* 0x2530 */    DWORD unknown002530;
/* 0x2534 */    DWORD unknown002534;
/* 0x2538 */    DWORD unknown002538;
/* 0x253c */    DWORD unknown00253c;
/* 0x2540 */    DWORD unknown002540;
/* 0x2544 */    DWORD unknown002544;
/* 0x2548 */    DWORD unknown002548;
/* 0x254c */    DWORD unknown00254c;
/* 0x2550 */    DWORD unknown002550;
/* 0x2554 */    DWORD unknown002554;
/* 0x2558 */    DWORD unknown002558;
/* 0x255c */    DWORD unknown00255c;
/* 0x2560 */    DWORD unknown002560;
/* 0x2564 */    DWORD unknown002564;
/* 0x2568 */    DWORD unknown002568;
/* 0x256c */    DWORD unknown00256c;
/* 0x2570 */    DWORD unknown002570;
/* 0x2574 */    DWORD unknown002574;
/* 0x2578 */    DWORD unknown002578;
/* 0x257c */    DWORD unknown00257c;
/* 0x2580 */    DWORD unknown002580;
/* 0x2584 */    DWORD unknown002584;
/* 0x2588 */    DWORD unknown002588;
/* 0x258c */    DWORD unknown00258c;
/* 0x2590 */    DWORD unknown002590;
/* 0x2594 */    DWORD unknown002594;
/* 0x2598 */    DWORD unknown002598;
/* 0x259c */    DWORD unknown00259c;
/* 0x25a0 */    DWORD unknown0025a0;
/* 0x25a4 */    DWORD unknown0025a4;
/* 0x25a8 */    DWORD unknown0025a8;
/* 0x25ac */    DWORD unknown0025ac;
/* 0x25b0 */    DWORD unknown0025b0;
/* 0x25b4 */    DWORD unknown0025b4;
/* 0x25b8 */    DWORD unknown0025b8;
/* 0x25bc */    DWORD unknown0025bc;
/* 0x25c0 */    DWORD unknown0025c0;
/* 0x25c4 */    DWORD unknown0025c4;
/* 0x25c8 */    DWORD unknown0025c8;
/* 0x25cc */    DWORD unknown0025cc;
/* 0x25d0 */    DWORD unknown0025d0;
/* 0x25d4 */    DWORD unknown0025d4;
/* 0x25d8 */    DWORD unknown0025d8;
/* 0x25dc */    DWORD unknown0025dc;
/* 0x25e0 */    DWORD unknown0025e0;
/* 0x25e4 */    DWORD unknown0025e4;
/* 0x25e8 */    DWORD unknown0025e8;
/* 0x25ec */    DWORD unknown0025ec;
/* 0x25f0 */    DWORD unknown0025f0;
/* 0x25f4 */    DWORD unknown0025f4;
/* 0x25f8 */    DWORD unknown0025f8;
/* 0x25fc */    DWORD unknown0025fc;

/* 0x2600 */    DWORD unknown002600;
/* 0x2604 */    DWORD unknown002604;
/* 0x2608 */    DWORD unknown002608;
/* 0x260c */    DWORD unknown00260c;
/* 0x2610 */    DWORD unknown002610;
/* 0x2614 */    DWORD unknown002614;
/* 0x2618 */    DWORD unknown002618;
/* 0x261c */    DWORD unknown00261c;
/* 0x2620 */    DWORD unknown002620;
/* 0x2624 */    DWORD unknown002624;
/* 0x2628 */    DWORD unknown002628;
/* 0x262c */    DWORD unknown00262c;
/* 0x2630 */    DWORD unknown002630;
/* 0x2634 */    DWORD unknown002634;
/* 0x2638 */    DWORD unknown002638;
/* 0x263c */    DWORD unknown00263c;
/* 0x2640 */    DWORD unknown002640;
/* 0x2644 */    DWORD unknown002644;
/* 0x2648 */    DWORD unknown002648;
/* 0x264c */    DWORD unknown00264c;
/* 0x2650 */    DWORD unknown002650;
/* 0x2654 */    DWORD unknown002654;
/* 0x2658 */    DWORD unknown002658;
/* 0x265c */    DWORD unknown00265c;
/* 0x2660 */    DWORD unknown002660;
/* 0x2664 */    DWORD unknown002664;
/* 0x2668 */    DWORD unknown002668;
/* 0x266c */    DWORD unknown00266c;
/* 0x2670 */    DWORD unknown002670;
/* 0x2674 */    DWORD unknown002674;
/* 0x2678 */    DWORD unknown002678;
/* 0x267c */    DWORD unknown00267c;
/* 0x2680 */    DWORD unknown002680;
/* 0x2684 */    DWORD unknown002684;
/* 0x2688 */    DWORD unknown002688;
/* 0x268c */    DWORD unknown00268c;
/* 0x2690 */    DWORD unknown002690;
/* 0x2694 */    DWORD unknown002694;
/* 0x2698 */    DWORD unknown002698;
/* 0x269c */    DWORD unknown00269c;
/* 0x26a0 */    DWORD unknown0026a0;
/* 0x26a4 */    DWORD unknown0026a4;
/* 0x26a8 */    DWORD unknown0026a8;
/* 0x26ac */    DWORD unknown0026ac;
/* 0x26b0 */    DWORD unknown0026b0;
/* 0x26b4 */    DWORD unknown0026b4;
/* 0x26b8 */    DWORD unknown0026b8;
/* 0x26bc */    DWORD unknown0026bc;
/* 0x26c0 */    DWORD unknown0026c0;
/* 0x26c4 */    DWORD unknown0026c4;
/* 0x26c8 */    DWORD unknown0026c8;
/* 0x26cc */    DWORD unknown0026cc;
/* 0x26d0 */    DWORD unknown0026d0;
/* 0x26d4 */    DWORD unknown0026d4;
/* 0x26d8 */    DWORD unknown0026d8;
/* 0x26dc */    DWORD unknown0026dc;
/* 0x26e0 */    DWORD unknown0026e0;
/* 0x26e4 */    DWORD unknown0026e4;
/* 0x26e8 */    DWORD unknown0026e8;
/* 0x26ec */    DWORD unknown0026ec;
/* 0x26f0 */    DWORD unknown0026f0;
/* 0x26f4 */    DWORD unknown0026f4;
/* 0x26f8 */    DWORD unknown0026f8;
/* 0x26fc */    DWORD unknown0026fc;

/* 0x2700 */    DWORD unknown002700;
/* 0x2704 */    DWORD unknown002704;
/* 0x2708 */    DWORD unknown002708;
/* 0x270c */    DWORD unknown00270c;
/* 0x2710 */    DWORD unknown002710;
/* 0x2714 */    DWORD unknown002714;
/* 0x2718 */    DWORD unknown002718;
/* 0x271c */    DWORD unknown00271c;
/* 0x2720 */    DWORD unknown002720;
/* 0x2724 */    DWORD unknown002724;
/* 0x2728 */    DWORD unknown002728;
/* 0x272c */    DWORD unknown00272c;
/* 0x2730 */    DWORD unknown002730;
/* 0x2734 */    DWORD unknown002734;
/* 0x2738 */    DWORD unknown002738;
/* 0x273c */    DWORD unknown00273c;
/* 0x2740 */    DWORD unknown002740;
/* 0x2744 */    DWORD unknown002744;
/* 0x2748 */    DWORD unknown002748;
/* 0x274c */    DWORD unknown00274c;
/* 0x2750 */    DWORD unknown002750;
/* 0x2754 */    DWORD unknown002754;
/* 0x2758 */    DWORD unknown002758;
/* 0x275c */    DWORD unknown00275c;
/* 0x2760 */    DWORD unknown002760;
/* 0x2764 */    DWORD unknown002764;
/* 0x2768 */    DWORD unknown002768;
/* 0x276c */    DWORD unknown00276c;
/* 0x2770 */    DWORD unknown002770;
/* 0x2774 */    DWORD unknown002774;
/* 0x2778 */    DWORD unknown002778;
/* 0x277c */    DWORD unknown00277c;
/* 0x2780 */    DWORD unknown002780;
/* 0x2784 */    DWORD unknown002784;
/* 0x2788 */    DWORD unknown002788;
/* 0x278c */    DWORD unknown00278c;
/* 0x2790 */    DWORD unknown002790;
/* 0x2794 */    DWORD unknown002794;
/* 0x2798 */    DWORD unknown002798;
/* 0x279c */    DWORD unknown00279c;
/* 0x27a0 */    DWORD unknown0027a0;
/* 0x27a4 */    DWORD unknown0027a4;
/* 0x27a8 */    DWORD unknown0027a8;
/* 0x27ac */    DWORD unknown0027ac;
/* 0x27b0 */    DWORD unknown0027b0;
/* 0x27b4 */    DWORD unknown0027b4;
/* 0x27b8 */    DWORD unknown0027b8;
/* 0x27bc */    DWORD unknown0027bc;
/* 0x27c0 */    DWORD unknown0027c0;
/* 0x27c4 */    DWORD unknown0027c4;
/* 0x27c8 */    DWORD unknown0027c8;
/* 0x27cc */    DWORD unknown0027cc;
/* 0x27d0 */    DWORD unknown0027d0;
/* 0x27d4 */    DWORD unknown0027d4;
/* 0x27d8 */    DWORD unknown0027d8;
/* 0x27dc */    DWORD unknown0027dc;
/* 0x27e0 */    DWORD unknown0027e0;
/* 0x27e4 */    DWORD unknown0027e4;
/* 0x27e8 */    DWORD unknown0027e8;
/* 0x27ec */    DWORD unknown0027ec;
/* 0x27f0 */    DWORD unknown0027f0;
/* 0x27f4 */    DWORD unknown0027f4;
/* 0x27f8 */    DWORD unknown0027f8;
/* 0x27fc */    DWORD unknown0027fc;

/* 0x2800 */    DWORD unknown002800;
/* 0x2804 */    DWORD unknown002804;
/* 0x2808 */    DWORD unknown002808;
/* 0x280c */    DWORD unknown00280c;
/* 0x2810 */    DWORD unknown002810;
/* 0x2814 */    DWORD unknown002814;
/* 0x2818 */    DWORD unknown002818;
/* 0x281c */    DWORD unknown00281c;
/* 0x2820 */    DWORD unknown002820;
/* 0x2824 */    DWORD unknown002824;
/* 0x2828 */    DWORD unknown002828;
/* 0x282c */    DWORD unknown00282c;
/* 0x2830 */    DWORD unknown002830;
/* 0x2834 */    DWORD unknown002834;
/* 0x2838 */    DWORD unknown002838;
/* 0x283c */    DWORD unknown00283c;
/* 0x2840 */    DWORD unknown002840;
/* 0x2844 */    DWORD unknown002844;
/* 0x2848 */    DWORD unknown002848;
/* 0x284c */    DWORD unknown00284c;
/* 0x2850 */    DWORD unknown002850;
/* 0x2854 */    DWORD unknown002854;
/* 0x2858 */    DWORD unknown002858;
/* 0x285c */    DWORD unknown00285c;
/* 0x2860 */    DWORD unknown002860;
/* 0x2864 */    DWORD unknown002864;
/* 0x2868 */    DWORD unknown002868;
/* 0x286c */    DWORD unknown00286c;
/* 0x2870 */    DWORD unknown002870;
/* 0x2874 */    DWORD unknown002874;
/* 0x2878 */    DWORD unknown002878;
/* 0x287c */    DWORD unknown00287c;
/* 0x2880 */    DWORD unknown002880;
/* 0x2884 */    DWORD unknown002884;
/* 0x2888 */    DWORD unknown002888;
/* 0x288c */    DWORD unknown00288c;
/* 0x2890 */    DWORD unknown002890;
/* 0x2894 */    DWORD unknown002894;
/* 0x2898 */    DWORD unknown002898;
/* 0x289c */    DWORD unknown00289c;
/* 0x28a0 */    DWORD unknown0028a0;
/* 0x28a4 */    DWORD unknown0028a4;
/* 0x28a8 */    DWORD unknown0028a8;
/* 0x28ac */    DWORD unknown0028ac;
/* 0x28b0 */    DWORD unknown0028b0;
/* 0x28b4 */    DWORD unknown0028b4;
/* 0x28b8 */    DWORD unknown0028b8;
/* 0x28bc */    DWORD unknown0028bc;
/* 0x28c0 */    DWORD unknown0028c0;
/* 0x28c4 */    DWORD unknown0028c4;
/* 0x28c8 */    DWORD unknown0028c8;
/* 0x28cc */    DWORD unknown0028cc;
/* 0x28d0 */    DWORD unknown0028d0;
/* 0x28d4 */    DWORD unknown0028d4;
/* 0x28d8 */    DWORD unknown0028d8;
/* 0x28dc */    DWORD unknown0028dc;
/* 0x28e0 */    DWORD unknown0028e0;
/* 0x28e4 */    DWORD unknown0028e4;
/* 0x28e8 */    DWORD unknown0028e8;
/* 0x28ec */    DWORD unknown0028ec;
/* 0x28f0 */    DWORD unknown0028f0;
/* 0x28f4 */    DWORD unknown0028f4;
/* 0x28f8 */    DWORD unknown0028f8;
/* 0x28fc */    DWORD unknown0028fc;

/* 0x2900 */    DWORD unknown002900;
/* 0x2904 */    DWORD unknown002904;
/* 0x2908 */    DWORD unknown002908;
/* 0x290c */    DWORD unknown00290c;
/* 0x2910 */    DWORD unknown002910;
/* 0x2914 */    DWORD unknown002914;
/* 0x2918 */    DWORD unknown002918;
/* 0x291c */    DWORD unknown00291c;
/* 0x2920 */    DWORD unknown002920;
/* 0x2924 */    DWORD unknown002924;
/* 0x2928 */    DWORD unknown002928;
/* 0x292c */    DWORD unknown00292c;
/* 0x2930 */    DWORD unknown002930;
/* 0x2934 */    DWORD unknown002934;
/* 0x2938 */    DWORD unknown002938;
/* 0x293c */    DWORD unknown00293c;
/* 0x2940 */    DWORD unknown002940;
/* 0x2944 */    DWORD unknown002944;
/* 0x2948 */    DWORD unknown002948;
/* 0x294c */    DWORD unknown00294c;
/* 0x2950 */    DWORD unknown002950;
/* 0x2954 */    DWORD unknown002954;
/* 0x2958 */    DWORD unknown002958;
/* 0x295c */    DWORD unknown00295c;
/* 0x2960 */    DWORD unknown002960;
/* 0x2964 */    DWORD unknown002964;
/* 0x2968 */    DWORD unknown002968;
/* 0x296c */    DWORD unknown00296c;
/* 0x2970 */    DWORD unknown002970;
/* 0x2974 */    DWORD unknown002974;
/* 0x2978 */    DWORD unknown002978;
/* 0x297c */    DWORD unknown00297c;
/* 0x2980 */    DWORD unknown002980;
/* 0x2984 */    DWORD unknown002984;
/* 0x2988 */    DWORD unknown002988;
/* 0x298c */    DWORD unknown00298c;
/* 0x2990 */    DWORD unknown002990;
/* 0x2994 */    DWORD unknown002994;
/* 0x2998 */    DWORD unknown002998;
/* 0x299c */    DWORD unknown00299c;
/* 0x29a0 */    DWORD unknown0029a0;
/* 0x29a4 */    DWORD unknown0029a4;
/* 0x29a8 */    DWORD unknown0029a8;
/* 0x29ac */    DWORD unknown0029ac;
/* 0x29b0 */    DWORD unknown0029b0;
/* 0x29b4 */    DWORD unknown0029b4;
/* 0x29b8 */    DWORD unknown0029b8;
/* 0x29bc */    DWORD unknown0029bc;
/* 0x29c0 */    DWORD unknown0029c0;
/* 0x29c4 */    DWORD unknown0029c4;
/* 0x29c8 */    DWORD unknown0029c8;
/* 0x29cc */    DWORD unknown0029cc;
/* 0x29d0 */    DWORD unknown0029d0;
/* 0x29d4 */    DWORD unknown0029d4;
/* 0x29d8 */    DWORD unknown0029d8;
/* 0x29dc */    DWORD unknown0029dc;
/* 0x29e0 */    DWORD unknown0029e0;
/* 0x29e4 */    DWORD unknown0029e4;
/* 0x29e8 */    DWORD unknown0029e8;
/* 0x29ec */    DWORD unknown0029ec;
/* 0x29f0 */    DWORD unknown0029f0;
/* 0x29f4 */    DWORD unknown0029f4;
/* 0x29f8 */    DWORD unknown0029f8;
/* 0x29fc */    DWORD unknown0029fc;

/* 0x2a00 */    DWORD unknown002a00;
/* 0x2a04 */    DWORD unknown002a04;
/* 0x2a08 */    DWORD unknown002a08;
/* 0x2a0c */    DWORD unknown002a0c;
/* 0x2a10 */    DWORD unknown002a10;
/* 0x2a14 */    DWORD unknown002a14;
/* 0x2a18 */    DWORD unknown002a18;
/* 0x2a1c */    DWORD unknown002a1c;
/* 0x2a20 */    DWORD unknown002a20;
/* 0x2a24 */    DWORD unknown002a24;
/* 0x2a28 */    DWORD unknown002a28;
/* 0x2a2c */    DWORD unknown002a2c;
/* 0x2a30 */    DWORD unknown002a30;
/* 0x2a34 */    DWORD unknown002a34;
/* 0x2a38 */    DWORD unknown002a38;
/* 0x2a3c */    DWORD unknown002a3c;
/* 0x2a40 */    DWORD unknown002a40;
/* 0x2a44 */    DWORD unknown002a44;
/* 0x2a48 */    DWORD unknown002a48;
/* 0x2a4c */    DWORD unknown002a4c;
/* 0x2a50 */    DWORD unknown002a50;
/* 0x2a54 */    DWORD unknown002a54;
/* 0x2a58 */    DWORD unknown002a58;
/* 0x2a5c */    DWORD unknown002a5c;
/* 0x2a60 */    DWORD unknown002a60;
/* 0x2a64 */    DWORD unknown002a64;
/* 0x2a68 */    DWORD unknown002a68;
/* 0x2a6c */    DWORD unknown002a6c;
/* 0x2a70 */    DWORD unknown002a70;
/* 0x2a74 */    DWORD unknown002a74;
/* 0x2a78 */    DWORD unknown002a78;
/* 0x2a7c */    DWORD unknown002a7c;
/* 0x2a80 */    DWORD unknown002a80;
/* 0x2a84 */    DWORD unknown002a84;
/* 0x2a88 */    DWORD unknown002a88;
/* 0x2a8c */    DWORD unknown002a8c;
/* 0x2a90 */    DWORD unknown002a90;
/* 0x2a94 */    DWORD unknown002a94;
/* 0x2a98 */    DWORD unknown002a98;
/* 0x2a9c */    DWORD unknown002a9c;
/* 0x2aa0 */    DWORD unknown002aa0;
/* 0x2aa4 */    DWORD unknown002aa4;
/* 0x2aa8 */    DWORD unknown002aa8;
/* 0x2aac */    DWORD unknown002aac;
/* 0x2ab0 */    DWORD unknown002ab0;
/* 0x2ab4 */    DWORD unknown002ab4;
/* 0x2ab8 */    DWORD unknown002ab8;
/* 0x2abc */    DWORD unknown002abc;
/* 0x2ac0 */    DWORD unknown002ac0;
/* 0x2ac4 */    DWORD unknown002ac4;
/* 0x2ac8 */    DWORD unknown002ac8;
/* 0x2acc */    DWORD unknown002acc;
/* 0x2ad0 */    DWORD unknown002ad0;
/* 0x2ad4 */    DWORD unknown002ad4;
/* 0x2ad8 */    DWORD unknown002ad8;
/* 0x2adc */    DWORD unknown002adc;
/* 0x2ae0 */    DWORD unknown002ae0;
/* 0x2ae4 */    DWORD unknown002ae4;
/* 0x2ae8 */    DWORD unknown002ae8;
/* 0x2aec */    DWORD unknown002aec;
/* 0x2af0 */    DWORD unknown002af0;
/* 0x2af4 */    DWORD unknown002af4;
/* 0x2af8 */    DWORD unknown002af8;
/* 0x2afc */    DWORD unknown002afc;

/* 0x2b00 */    DWORD unknown002b00;
/* 0x2b04 */    DWORD unknown002b04;
/* 0x2b08 */    DWORD unknown002b08;
/* 0x2b0c */    DWORD unknown002b0c;
/* 0x2b10 */    DWORD unknown002b10;
/* 0x2b14 */    DWORD unknown002b14;
/* 0x2b18 */    DWORD unknown002b18;
/* 0x2b1c */    DWORD unknown002b1c;
/* 0x2b20 */    DWORD unknown002b20;
/* 0x2b24 */    DWORD unknown002b24;
/* 0x2b28 */    DWORD unknown002b28;
/* 0x2b2c */    DWORD unknown002b2c;
/* 0x2b30 */    DWORD unknown002b30;
/* 0x2b34 */    DWORD unknown002b34;
/* 0x2b38 */    DWORD unknown002b38;
/* 0x2b3c */    DWORD unknown002b3c;
/* 0x2b40 */    DWORD unknown002b40;
/* 0x2b44 */    DWORD unknown002b44;
/* 0x2b48 */    DWORD unknown002b48;
/* 0x2b4c */    DWORD unknown002b4c;
/* 0x2b50 */    DWORD unknown002b50;
/* 0x2b54 */    DWORD unknown002b54;
/* 0x2b58 */    DWORD unknown002b58;
/* 0x2b5c */    DWORD unknown002b5c;
/* 0x2b60 */    DWORD unknown002b60;
/* 0x2b64 */    DWORD unknown002b64;
/* 0x2b68 */    DWORD unknown002b68;
/* 0x2b6c */    DWORD unknown002b6c;
/* 0x2b70 */    DWORD unknown002b70;
/* 0x2b74 */    DWORD unknown002b74;
/* 0x2b78 */    DWORD unknown002b78;
/* 0x2b7c */    DWORD unknown002b7c;
/* 0x2b80 */    DWORD unknown002b80;
/* 0x2b84 */    DWORD unknown002b84;
/* 0x2b88 */    DWORD unknown002b88;
/* 0x2b8c */    DWORD unknown002b8c;
/* 0x2b90 */    DWORD unknown002b90;
/* 0x2b94 */    DWORD unknown002b94;
/* 0x2b98 */    DWORD unknown002b98;
/* 0x2b9c */    DWORD unknown002b9c;
/* 0x2ba0 */    DWORD unknown002ba0;
/* 0x2ba4 */    DWORD unknown002ba4;
/* 0x2ba8 */    DWORD unknown002ba8;
/* 0x2bac */    DWORD unknown002bac;
/* 0x2bb0 */    DWORD unknown002bb0;
/* 0x2bb4 */    DWORD unknown002bb4;
/* 0x2bb8 */    DWORD unknown002bb8;
/* 0x2bbc */    DWORD unknown002bbc;
/* 0x2bc0 */    DWORD unknown002bc0;
/* 0x2bc4 */    DWORD unknown002bc4;
/* 0x2bc8 */    DWORD unknown002bc8;
/* 0x2bcc */    DWORD unknown002bcc;
/* 0x2bd0 */    DWORD unknown002bd0;
/* 0x2bd4 */    DWORD unknown002bd4;
/* 0x2bd8 */    DWORD unknown002bd8;
/* 0x2bdc */    DWORD unknown002bdc;
/* 0x2be0 */    DWORD unknown002be0;
/* 0x2be4 */    DWORD unknown002be4;
/* 0x2be8 */    DWORD unknown002be8;
/* 0x2bec */    DWORD unknown002bec;
/* 0x2bf0 */    DWORD unknown002bf0;
/* 0x2bf4 */    DWORD unknown002bf4;
/* 0x2bf8 */    DWORD unknown002bf8;
/* 0x2bfc */    DWORD unknown002bfc;

/* 0x2c00 */    DWORD unknown002c00;
/* 0x2c04 */    DWORD unknown002c04;
/* 0x2c08 */    DWORD unknown002c08;
/* 0x2c0c */    DWORD unknown002c0c;
/* 0x2c10 */    DWORD unknown002c10;
/* 0x2c14 */    DWORD unknown002c14;
/* 0x2c18 */    DWORD unknown002c18;
/* 0x2c1c */    DWORD unknown002c1c;
/* 0x2c20 */    DWORD unknown002c20;
/* 0x2c24 */    DWORD unknown002c24;
/* 0x2c28 */    DWORD unknown002c28;
/* 0x2c2c */    DWORD unknown002c2c;
/* 0x2c30 */    DWORD unknown002c30;
/* 0x2c34 */    DWORD unknown002c34;
/* 0x2c38 */    DWORD unknown002c38;
/* 0x2c3c */    DWORD unknown002c3c;
/* 0x2c40 */    DWORD unknown002c40;
/* 0x2c44 */    DWORD unknown002c44;
/* 0x2c48 */    DWORD unknown002c48;
/* 0x2c4c */    DWORD unknown002c4c;
/* 0x2c50 */    DWORD unknown002c50;
/* 0x2c54 */    DWORD unknown002c54;
/* 0x2c58 */    DWORD unknown002c58;
/* 0x2c5c */    DWORD unknown002c5c;
/* 0x2c60 */    DWORD unknown002c60;
/* 0x2c64 */    DWORD unknown002c64;
/* 0x2c68 */    DWORD unknown002c68;
/* 0x2c6c */    DWORD unknown002c6c;
/* 0x2c70 */    DWORD unknown002c70;
/* 0x2c74 */    DWORD unknown002c74;
/* 0x2c78 */    DWORD unknown002c78;
/* 0x2c7c */    DWORD unknown002c7c;
/* 0x2c80 */    DWORD unknown002c80;
/* 0x2c84 */    DWORD unknown002c84;
/* 0x2c88 */    DWORD unknown002c88;
/* 0x2c8c */    DWORD unknown002c8c;
/* 0x2c90 */    DWORD unknown002c90;
/* 0x2c94 */    DWORD unknown002c94;
/* 0x2c98 */    DWORD unknown002c98;
/* 0x2c9c */    DWORD unknown002c9c;
/* 0x2ca0 */    DWORD unknown002ca0;
/* 0x2ca4 */    DWORD unknown002ca4;
/* 0x2ca8 */    DWORD unknown002ca8;
/* 0x2cac */    DWORD unknown002cac;
/* 0x2cb0 */    DWORD unknown002cb0;
/* 0x2cb4 */    DWORD unknown002cb4;
/* 0x2cb8 */    DWORD unknown002cb8;
/* 0x2cbc */    DWORD unknown002cbc;
/* 0x2cc0 */    DWORD unknown002cc0;
/* 0x2cc4 */    DWORD unknown002cc4;
/* 0x2cc8 */    DWORD unknown002cc8;
/* 0x2ccc */    DWORD unknown002ccc;
/* 0x2cd0 */    DWORD unknown002cd0;
/* 0x2cd4 */    DWORD unknown002cd4;
/* 0x2cd8 */    DWORD unknown002cd8;
/* 0x2cdc */    DWORD unknown002cdc;
/* 0x2ce0 */    DWORD unknown002ce0;
/* 0x2ce4 */    DWORD unknown002ce4;
/* 0x2ce8 */    DWORD unknown002ce8;
/* 0x2cec */    DWORD unknown002cec;
/* 0x2cf0 */    DWORD unknown002cf0;
/* 0x2cf4 */    DWORD unknown002cf4;
/* 0x2cf8 */    DWORD unknown002cf8;
/* 0x2cfc */    DWORD unknown002cfc;

/* 0x2d00 */    DWORD unknown002d00;
/* 0x2d04 */    DWORD unknown002d04;
/* 0x2d08 */    DWORD unknown002d08;
/* 0x2d0c */    DWORD unknown002d0c;
/* 0x2d10 */    DWORD unknown002d10;
/* 0x2d14 */    DWORD unknown002d14;
/* 0x2d18 */    DWORD unknown002d18;
/* 0x2d1c */    DWORD unknown002d1c;
/* 0x2d20 */    DWORD unknown002d20;
/* 0x2d24 */    DWORD unknown002d24;
/* 0x2d28 */    DWORD unknown002d28;
/* 0x2d2c */    DWORD unknown002d2c;
/* 0x2d30 */    DWORD unknown002d30;
/* 0x2d34 */    DWORD unknown002d34;
/* 0x2d38 */    DWORD unknown002d38;
/* 0x2d3c */    DWORD unknown002d3c;
/* 0x2d40 */    DWORD unknown002d40;
/* 0x2d44 */    DWORD unknown002d44;
/* 0x2d48 */    DWORD unknown002d48;
/* 0x2d4c */    DWORD unknown002d4c;
/* 0x2d50 */    DWORD unknown002d50;
/* 0x2d54 */    DWORD unknown002d54;
/* 0x2d58 */    DWORD unknown002d58;
/* 0x2d5c */    DWORD unknown002d5c;
/* 0x2d60 */    DWORD unknown002d60;
/* 0x2d64 */    DWORD unknown002d64;
/* 0x2d68 */    DWORD unknown002d68;
/* 0x2d6c */    DWORD unknown002d6c;
/* 0x2d70 */    DWORD unknown002d70;
/* 0x2d74 */    DWORD unknown002d74;
/* 0x2d78 */    DWORD unknown002d78;
/* 0x2d7c */    DWORD unknown002d7c;
/* 0x2d80 */    DWORD unknown002d80;
/* 0x2d84 */    DWORD unknown002d84;
/* 0x2d88 */    DWORD unknown002d88;
/* 0x2d8c */    DWORD unknown002d8c;
/* 0x2d90 */    DWORD unknown002d90;
/* 0x2d94 */    DWORD unknown002d94;
/* 0x2d98 */    DWORD unknown002d98;
/* 0x2d9c */    DWORD unknown002d9c;
/* 0x2da0 */    DWORD unknown002da0;
/* 0x2da4 */    DWORD unknown002da4;
/* 0x2da8 */    DWORD unknown002da8;
/* 0x2dac */    DWORD unknown002dac;
/* 0x2db0 */    DWORD unknown002db0;
/* 0x2db4 */    DWORD unknown002db4;
/* 0x2db8 */    DWORD unknown002db8;
/* 0x2dbc */    DWORD unknown002dbc;
/* 0x2dc0 */    DWORD unknown002dc0;
/* 0x2dc4 */    DWORD unknown002dc4;
/* 0x2dc8 */    DWORD unknown002dc8;
/* 0x2dcc */    DWORD unknown002dcc;
/* 0x2dd0 */    DWORD unknown002dd0;
/* 0x2dd4 */    DWORD unknown002dd4;
/* 0x2dd8 */    DWORD unknown002dd8;
/* 0x2ddc */    DWORD unknown002ddc;
/* 0x2de0 */    DWORD unknown002de0;
/* 0x2de4 */    DWORD unknown002de4;
/* 0x2de8 */    DWORD unknown002de8;
/* 0x2dec */    DWORD unknown002dec;
/* 0x2df0 */    DWORD unknown002df0;
/* 0x2df4 */    DWORD unknown002df4;
/* 0x2df8 */    DWORD unknown002df8;
/* 0x2dfc */    DWORD unknown002dfc;

/* 0x2e00 */    DWORD unknown002e00;
/* 0x2e04 */    DWORD unknown002e04;
/* 0x2e08 */    DWORD unknown002e08;
/* 0x2e0c */    DWORD unknown002e0c;
/* 0x2e10 */    DWORD unknown002e10;
/* 0x2e14 */    DWORD unknown002e14;
/* 0x2e18 */    DWORD unknown002e18;
/* 0x2e1c */    DWORD unknown002e1c;
/* 0x2e20 */    DWORD unknown002e20;
/* 0x2e24 */    DWORD unknown002e24;
/* 0x2e28 */    DWORD unknown002e28;
/* 0x2e2c */    DWORD unknown002e2c;
/* 0x2e30 */    DWORD unknown002e30;
/* 0x2e34 */    DWORD unknown002e34;
/* 0x2e38 */    DWORD unknown002e38;
/* 0x2e3c */    DWORD unknown002e3c;
/* 0x2e40 */    DWORD unknown002e40;
/* 0x2e44 */    DWORD unknown002e44;
/* 0x2e48 */    DWORD unknown002e48;
/* 0x2e4c */    DWORD unknown002e4c;
/* 0x2e50 */    DWORD unknown002e50;
/* 0x2e54 */    DWORD unknown002e54;
/* 0x2e58 */    DWORD unknown002e58;
/* 0x2e5c */    DWORD unknown002e5c;
/* 0x2e60 */    DWORD unknown002e60;
/* 0x2e64 */    DWORD unknown002e64;
/* 0x2e68 */    DWORD unknown002e68;
/* 0x2e6c */    DWORD unknown002e6c;
/* 0x2e70 */    DWORD unknown002e70;
/* 0x2e74 */    DWORD unknown002e74;
/* 0x2e78 */    DWORD unknown002e78;
/* 0x2e7c */    DWORD unknown002e7c;
/* 0x2e80 */    DWORD unknown002e80;
/* 0x2e84 */    DWORD unknown002e84;
/* 0x2e88 */    DWORD unknown002e88;
/* 0x2e8c */    DWORD unknown002e8c;
/* 0x2e90 */    DWORD unknown002e90;
/* 0x2e94 */    DWORD unknown002e94;
/* 0x2e98 */    DWORD unknown002e98;
/* 0x2e9c */    DWORD unknown002e9c;
/* 0x2ea0 */    DWORD unknown002ea0;
/* 0x2ea4 */    DWORD unknown002ea4;
/* 0x2ea8 */    DWORD unknown002ea8;
/* 0x2eac */    DWORD unknown002eac;
/* 0x2eb0 */    DWORD unknown002eb0;
/* 0x2eb4 */    DWORD unknown002eb4;
/* 0x2eb8 */    DWORD unknown002eb8;
/* 0x2ebc */    DWORD unknown002ebc;
/* 0x2ec0 */    DWORD unknown002ec0;
/* 0x2ec4 */    DWORD unknown002ec4;
/* 0x2ec8 */    DWORD unknown002ec8;
/* 0x2ecc */    DWORD unknown002ecc;
/* 0x2ed0 */    DWORD unknown002ed0;
/* 0x2ed4 */    DWORD unknown002ed4;
/* 0x2ed8 */    DWORD unknown002ed8;
/* 0x2edc */    DWORD unknown002edc;
/* 0x2ee0 */    DWORD unknown002ee0;
/* 0x2ee4 */    DWORD unknown002ee4;
/* 0x2ee8 */    DWORD unknown002ee8;
/* 0x2eec */    DWORD unknown002eec;
/* 0x2ef0 */    DWORD unknown002ef0;
/* 0x2ef4 */    DWORD unknown002ef4;
/* 0x2ef8 */    DWORD unknown002ef8;
/* 0x2efc */    DWORD unknown002efc;

/* 0x2f00 */    DWORD unknown002f00;
/* 0x2f04 */    DWORD unknown002f04;
/* 0x2f08 */    DWORD unknown002f08;
/* 0x2f0c */    DWORD unknown002f0c;
/* 0x2f10 */    DWORD unknown002f10;
/* 0x2f14 */    DWORD unknown002f14;
/* 0x2f18 */    DWORD unknown002f18;
/* 0x2f1c */    DWORD unknown002f1c;
/* 0x2f20 */    DWORD unknown002f20;
/* 0x2f24 */    DWORD unknown002f24;
/* 0x2f28 */    DWORD unknown002f28;
/* 0x2f2c */    DWORD unknown002f2c;
/* 0x2f30 */    DWORD unknown002f30;
/* 0x2f34 */    DWORD unknown002f34;
/* 0x2f38 */    DWORD unknown002f38;
/* 0x2f3c */    DWORD unknown002f3c;
/* 0x2f40 */    DWORD unknown002f40;
/* 0x2f44 */    DWORD unknown002f44;
/* 0x2f48 */    DWORD unknown002f48;
/* 0x2f4c */    DWORD unknown002f4c;
/* 0x2f50 */    DWORD unknown002f50;
/* 0x2f54 */    DWORD unknown002f54;
/* 0x2f58 */    DWORD unknown002f58;
/* 0x2f5c */    DWORD unknown002f5c;
/* 0x2f60 */    DWORD unknown002f60;
/* 0x2f64 */    DWORD unknown002f64;
/* 0x2f68 */    DWORD unknown002f68;
/* 0x2f6c */    DWORD unknown002f6c;
/* 0x2f70 */    DWORD unknown002f70;
/* 0x2f74 */    DWORD unknown002f74;
/* 0x2f78 */    DWORD unknown002f78;
/* 0x2f7c */    DWORD unknown002f7c;
/* 0x2f80 */    DWORD unknown002f80;
/* 0x2f84 */    DWORD unknown002f84;
/* 0x2f88 */    DWORD unknown002f88;
/* 0x2f8c */    DWORD unknown002f8c;
/* 0x2f90 */    DWORD unknown002f90;
/* 0x2f94 */    DWORD unknown002f94;
/* 0x2f98 */    DWORD unknown002f98;
/* 0x2f9c */    DWORD unknown002f9c;
/* 0x2fa0 */    DWORD unknown002fa0;
/* 0x2fa4 */    DWORD unknown002fa4;
/* 0x2fa8 */    DWORD unknown002fa8;
/* 0x2fac */    DWORD unknown002fac;
/* 0x2fb0 */    DWORD unknown002fb0;
/* 0x2fb4 */    DWORD unknown002fb4;
/* 0x2fb8 */    DWORD unknown002fb8;
/* 0x2fbc */    DWORD unknown002fbc;
/* 0x2fc0 */    DWORD unknown002fc0;
/* 0x2fc4 */    DWORD unknown002fc4;
/* 0x2fc8 */    DWORD unknown002fc8;
/* 0x2fcc */    DWORD unknown002fcc;
/* 0x2fd0 */    DWORD unknown002fd0;
/* 0x2fd4 */    DWORD unknown002fd4;
/* 0x2fd8 */    DWORD unknown002fd8;
/* 0x2fdc */    DWORD unknown002fdc;
/* 0x2fe0 */    DWORD unknown002fe0;
/* 0x2fe4 */    DWORD unknown002fe4;
/* 0x2fe8 */    DWORD unknown002fe8;
/* 0x2fec */    DWORD unknown002fec;
/* 0x2ff0 */    DWORD unknown002ff0;
/* 0x2ff4 */    DWORD unknown002ff4;
/* 0x2ff8 */    DWORD unknown002ff8;
/* 0x2ffc */    DWORD unknown002ffc;

/* 0x3000 */    DWORD unknown003000;
/* 0x3004 */    DWORD unknown003004;
/* 0x3008 */    DWORD unknown003008;
/* 0x300c */    DWORD unknown00300c;
/* 0x3010 */    DWORD unknown003010;
/* 0x3014 */    DWORD unknown003014;
/* 0x3018 */    DWORD unknown003018;
/* 0x301c */    DWORD unknown00301c;
/* 0x3020 */    DWORD unknown003020;
/* 0x3024 */    DWORD unknown003024;
/* 0x3028 */    DWORD unknown003028;
/* 0x302c */    DWORD unknown00302c;
/* 0x3030 */    DWORD unknown003030;
/* 0x3034 */    DWORD unknown003034;
/* 0x3038 */    DWORD unknown003038;
/* 0x303c */    DWORD unknown00303c;
/* 0x3040 */    DWORD unknown003040;
/* 0x3044 */    DWORD unknown003044;
/* 0x3048 */    DWORD unknown003048;
/* 0x304c */    DWORD unknown00304c;
/* 0x3050 */    DWORD unknown003050;
/* 0x3054 */    DWORD unknown003054;
/* 0x3058 */    DWORD unknown003058;
/* 0x305c */    DWORD unknown00305c;
/* 0x3060 */    DWORD unknown003060;
/* 0x3064 */    DWORD unknown003064;
/* 0x3068 */    DWORD unknown003068;
/* 0x306c */    DWORD unknown00306c;
/* 0x3070 */    DWORD unknown003070;
/* 0x3074 */    DWORD unknown003074;
/* 0x3078 */    DWORD unknown003078;
/* 0x307c */    DWORD unknown00307c;
/* 0x3080 */    DWORD unknown003080;
/* 0x3084 */    DWORD unknown003084;
/* 0x3088 */    DWORD unknown003088;
/* 0x308c */    DWORD unknown00308c;
/* 0x3090 */    DWORD unknown003090;
/* 0x3094 */    DWORD unknown003094;
/* 0x3098 */    DWORD unknown003098;
/* 0x309c */    DWORD unknown00309c;
/* 0x30a0 */    DWORD unknown0030a0;
/* 0x30a4 */    DWORD unknown0030a4;
/* 0x30a8 */    DWORD unknown0030a8;
/* 0x30ac */    DWORD unknown0030ac;
/* 0x30b0 */    DWORD unknown0030b0;
/* 0x30b4 */    DWORD unknown0030b4;
/* 0x30b8 */    DWORD unknown0030b8;
/* 0x30bc */    DWORD unknown0030bc;
/* 0x30c0 */    DWORD unknown0030c0;
/* 0x30c4 */    DWORD unknown0030c4;
/* 0x30c8 */    DWORD unknown0030c8;
/* 0x30cc */    DWORD unknown0030cc;
/* 0x30d0 */    DWORD unknown0030d0;
/* 0x30d4 */    DWORD unknown0030d4;
/* 0x30d8 */    DWORD unknown0030d8;
/* 0x30dc */    DWORD unknown0030dc;
/* 0x30e0 */    DWORD unknown0030e0;
/* 0x30e4 */    DWORD unknown0030e4;
/* 0x30e8 */    DWORD unknown0030e8;
/* 0x30ec */    DWORD unknown0030ec;
/* 0x30f0 */    DWORD unknown0030f0;
/* 0x30f4 */    DWORD unknown0030f4;
/* 0x30f8 */    DWORD unknown0030f8;
/* 0x30fc */    DWORD unknown0030fc;

/* 0x3100 */    DWORD unknown003100;
/* 0x3104 */    DWORD unknown003104;
/* 0x3108 */    DWORD unknown003108;
/* 0x310c */    DWORD unknown00310c;
/* 0x3110 */    DWORD unknown003110;
/* 0x3114 */    DWORD unknown003114;
/* 0x3118 */    DWORD unknown003118;
/* 0x311c */    DWORD unknown00311c;
/* 0x3120 */    DWORD unknown003120;
/* 0x3124 */    DWORD unknown003124;
/* 0x3128 */    DWORD unknown003128;
/* 0x312c */    DWORD unknown00312c;
/* 0x3130 */    DWORD unknown003130;
/* 0x3134 */    DWORD unknown003134;
/* 0x3138 */    DWORD unknown003138;
/* 0x313c */    DWORD unknown00313c;
/* 0x3140 */    DWORD unknown003140;
/* 0x3144 */    DWORD unknown003144;
/* 0x3148 */    DWORD unknown003148;
/* 0x314c */    DWORD unknown00314c;
/* 0x3150 */    DWORD unknown003150;
/* 0x3154 */    DWORD unknown003154;
/* 0x3158 */    DWORD unknown003158;
/* 0x315c */    DWORD unknown00315c;
/* 0x3160 */    DWORD unknown003160;
/* 0x3164 */    DWORD unknown003164;
/* 0x3168 */    DWORD unknown003168;
/* 0x316c */    DWORD unknown00316c;
/* 0x3170 */    DWORD unknown003170;
/* 0x3174 */    DWORD unknown003174;
/* 0x3178 */    DWORD unknown003178;
/* 0x317c */    DWORD unknown00317c;
/* 0x3180 */    DWORD unknown003180;
/* 0x3184 */    DWORD unknown003184;
/* 0x3188 */    DWORD unknown003188;
/* 0x318c */    DWORD unknown00318c;
/* 0x3190 */    DWORD unknown003190;
/* 0x3194 */    DWORD unknown003194;
/* 0x3198 */    DWORD unknown003198;
/* 0x319c */    DWORD unknown00319c;
/* 0x31a0 */    DWORD unknown0031a0;
/* 0x31a4 */    DWORD unknown0031a4;
/* 0x31a8 */    DWORD unknown0031a8;
/* 0x31ac */    DWORD unknown0031ac;
/* 0x31b0 */    DWORD unknown0031b0;
/* 0x31b4 */    DWORD unknown0031b4;
/* 0x31b8 */    DWORD unknown0031b8;
/* 0x31bc */    DWORD unknown0031bc;
/* 0x31c0 */    DWORD unknown0031c0;
/* 0x31c4 */    DWORD unknown0031c4;
/* 0x31c8 */    DWORD unknown0031c8;
/* 0x31cc */    DWORD unknown0031cc;
/* 0x31d0 */    DWORD unknown0031d0;
/* 0x31d4 */    DWORD unknown0031d4;
/* 0x31d8 */    DWORD unknown0031d8;
/* 0x31dc */    DWORD unknown0031dc;
/* 0x31e0 */    DWORD unknown0031e0;
/* 0x31e4 */    DWORD unknown0031e4;
/* 0x31e8 */    DWORD unknown0031e8;
/* 0x31ec */    DWORD unknown0031ec;
/* 0x31f0 */    DWORD unknown0031f0;
/* 0x31f4 */    DWORD unknown0031f4;
/* 0x31f8 */    DWORD unknown0031f8;
/* 0x31fc */    DWORD unknown0031fc;

/* 0x3200 */    DWORD unknown003200;
/* 0x3204 */    DWORD unknown003204;
/* 0x3208 */    DWORD unknown003208;
/* 0x320c */    DWORD unknown00320c;
/* 0x3210 */    DWORD unknown003210;
/* 0x3214 */    DWORD unknown003214;
/* 0x3218 */    DWORD unknown003218;
/* 0x321c */    DWORD unknown00321c;
/* 0x3220 */    DWORD unknown003220;
/* 0x3224 */    DWORD unknown003224;
/* 0x3228 */    DWORD unknown003228;
/* 0x322c */    DWORD unknown00322c;
/* 0x3230 */    DWORD unknown003230;
/* 0x3234 */    DWORD unknown003234;
/* 0x3238 */    DWORD unknown003238;
/* 0x323c */    DWORD unknown00323c;
/* 0x3240 */    DWORD unknown003240;
/* 0x3244 */    DWORD unknown003244;
/* 0x3248 */    DWORD unknown003248;
/* 0x324c */    DWORD unknown00324c;
/* 0x3250 */    DWORD unknown003250;
/* 0x3254 */    DWORD unknown003254;
/* 0x3258 */    DWORD unknown003258;
/* 0x325c */    DWORD unknown00325c;
/* 0x3260 */    DWORD unknown003260;
/* 0x3264 */    DWORD unknown003264;
/* 0x3268 */    DWORD unknown003268;
/* 0x326c */    DWORD unknown00326c;
/* 0x3270 */    DWORD unknown003270;
/* 0x3274 */    DWORD unknown003274;
/* 0x3278 */    DWORD unknown003278;
/* 0x327c */    DWORD unknown00327c;
/* 0x3280 */    DWORD unknown003280;
/* 0x3284 */    DWORD unknown003284;
/* 0x3288 */    DWORD unknown003288;
/* 0x328c */    DWORD unknown00328c;
/* 0x3290 */    DWORD unknown003290;
/* 0x3294 */    DWORD unknown003294;
/* 0x3298 */    DWORD unknown003298;
/* 0x329c */    DWORD unknown00329c;
/* 0x32a0 */    DWORD unknown0032a0;
/* 0x32a4 */    DWORD unknown0032a4;
/* 0x32a8 */    DWORD unknown0032a8;
/* 0x32ac */    DWORD unknown0032ac;
/* 0x32b0 */    DWORD unknown0032b0;
/* 0x32b4 */    DWORD unknown0032b4;
/* 0x32b8 */    DWORD unknown0032b8;
/* 0x32bc */    DWORD unknown0032bc;
/* 0x32c0 */    DWORD unknown0032c0;
/* 0x32c4 */    DWORD unknown0032c4;
/* 0x32c8 */    DWORD unknown0032c8;
/* 0x32cc */    DWORD unknown0032cc;
/* 0x32d0 */    DWORD unknown0032d0;
/* 0x32d4 */    DWORD unknown0032d4;
/* 0x32d8 */    DWORD unknown0032d8;
/* 0x32dc */    DWORD unknown0032dc;
/* 0x32e0 */    DWORD unknown0032e0;
/* 0x32e4 */    DWORD unknown0032e4;
/* 0x32e8 */    DWORD unknown0032e8;
/* 0x32ec */    DWORD unknown0032ec;
/* 0x32f0 */    DWORD unknown0032f0;
/* 0x32f4 */    DWORD unknown0032f4;
/* 0x32f8 */    DWORD unknown0032f8;
/* 0x32fc */    DWORD unknown0032fc;

/* 0x3300 */    DWORD unknown003300;
/* 0x3304 */    DWORD unknown003304;
/* 0x3308 */    DWORD unknown003308;
/* 0x330c */    DWORD unknown00330c;
/* 0x3310 */    DWORD unknown003310;
/* 0x3314 */    DWORD unknown003314;
/* 0x3318 */    DWORD unknown003318;
/* 0x331c */    DWORD unknown00331c;
/* 0x3320 */    DWORD unknown003320;
/* 0x3324 */    DWORD unknown003324;
/* 0x3328 */    DWORD unknown003328;
/* 0x332c */    DWORD unknown00332c;
} D3D9HALDEVICE, FAR *LPD3D9HALDEVICE;

#endif // _D3D9_HALDEVICE_H_
