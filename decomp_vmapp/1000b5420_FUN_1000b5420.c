
undefined8 FUN_1000b5420(long param_1)

{
  uint uVar1;
  
  FUN_10008eb60(param_1,"VM");
  FUN_10008eb90(param_1,param_1 + 0x1180,0x16);
  FUN_10008ec10(param_1,param_1 + 0x1650,0xb);
  FUN_10008ec20(param_1,&DAT_100befa70,0x2c);
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmStateNone < m_uStatesNum",
                  "VirtualPCStates.cpp",200,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x11a8) = 0;
  *(undefined4 *)(param_1 + 0x11ac) = 1000;
  *(char **)(param_1 + 0x1180) = "VmStateNone";
  *(undefined4 *)(param_1 + 0x11b0) = 0;
  *(code **)(param_1 + 0x1188) = FUN_1000b66f0;
  *(undefined8 *)(param_1 + 0x1190) = 0;
  if (uVar1 < 2) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmStateInit < m_uStatesNum",
                  "VirtualPCStates.cpp",0xc9,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x11e0) = 1;
  *(undefined4 *)(param_1 + 0x11e4) = 0;
  *(char **)(param_1 + 0x11b8) = "VmStateInit";
  *(undefined4 *)(param_1 + 0x11e8) = 0;
  *(code **)(param_1 + 0x11c0) = FUN_1000b6900;
  *(undefined8 *)(param_1 + 0x11c8) = 0;
  if (uVar1 < 3) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmStateInitMemory < m_uStatesNum",
                  "VirtualPCStates.cpp",0xca,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1218) = 1;
  *(undefined4 *)(param_1 + 0x121c) = 0;
  *(char **)(param_1 + 0x11f0) = "VmStateInitMemory";
  *(undefined4 *)(param_1 + 0x1220) = 0;
  *(code **)(param_1 + 0x11f8) = FUN_1000b6c50;
  *(undefined8 *)(param_1 + 0x1200) = 0;
  if (uVar1 < 4) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmStateInitFinish < m_uStatesNum",
                  "VirtualPCStates.cpp",0xcb,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1250) = 1;
  *(undefined4 *)(param_1 + 0x1254) = 0;
  *(char **)(param_1 + 0x1228) = "VmStateInitFinish";
  *(undefined4 *)(param_1 + 0x1258) = 0;
  *(code **)(param_1 + 0x1230) = FUN_1000b7260;
  *(undefined8 *)(param_1 + 0x1238) = 0;
  if (uVar1 < 0x12) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmStatePausing < m_uStatesNum",
                  "VirtualPCStates.cpp",0xce,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1560) = 0;
  *(undefined4 *)(param_1 + 0x1564) = 1000;
  *(char **)(param_1 + 0x1538) = "VmStatePausing";
  *(undefined4 *)(param_1 + 0x1568) = 0;
  *(code **)(param_1 + 0x1540) = FUN_1000b75c0;
  *(undefined8 *)(param_1 + 0x1548) = 0;
  *(code **)(param_1 + 0x1550) = FUN_1000b7770;
  *(undefined8 *)(param_1 + 0x1558) = 0;
  if (uVar1 < 0xf) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmStateRunning < m_uStatesNum",
                  "VirtualPCStates.cpp",0xd0,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x14b8) = 0;
  *(undefined4 *)(param_1 + 0x14bc) = 1000;
  *(char **)(param_1 + 0x1490) = "VmStateRunning";
  *(undefined4 *)(param_1 + 0x14c0) = 0;
  *(code **)(param_1 + 0x1498) = FUN_1000b7880;
  *(undefined8 *)(param_1 + 0x14a0) = 0;
  *(code **)(param_1 + 0x14a8) = FUN_1000b8d70;
  *(undefined8 *)(param_1 + 0x14b0) = 0;
  if (uVar1 < 0x13) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmStateDbgdumpCreating < m_uStatesNum","VirtualPCStates.cpp",0xd1,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1598) = 0;
  *(undefined4 *)(param_1 + 0x159c) = 1000;
  *(char **)(param_1 + 0x1570) = "VmStateDbgdumpCreating";
  *(undefined4 *)(param_1 + 0x15a0) = 0;
  *(code **)(param_1 + 0x1578) = FUN_1000b8dc0;
  *(undefined8 *)(param_1 + 0x1580) = 0;
  if (uVar1 < 6) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmStateFrozen < m_uStatesNum",
                  "VirtualPCStates.cpp",0xd3,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x12c0) = 0;
  *(undefined4 *)(param_1 + 0x12c4) = 1000;
  *(char **)(param_1 + 0x1298) = "VmStateFrozen";
  *(undefined4 *)(param_1 + 0x12c8) = 0;
  *(code **)(param_1 + 0x12a0) = FUN_1000b92d0;
  *(undefined8 *)(param_1 + 0x12a8) = 0;
  if (uVar1 < 5) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmStatePaused < m_uStatesNum",
                  "VirtualPCStates.cpp",0xd5,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1288) = 0;
  *(undefined4 *)(param_1 + 0x128c) = 1000;
  *(char **)(param_1 + 0x1260) = "VmStatePaused";
  *(undefined4 *)(param_1 + 0x1290) = 0;
  *(code **)(param_1 + 0x1268) = FUN_1000b9720;
  *(undefined8 *)(param_1 + 0x1270) = 0;
  *(code **)(param_1 + 0x1278) = FUN_1000ba380;
  *(undefined8 *)(param_1 + 0x1280) = 0;
  if (uVar1 < 7) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmStateSuspendedPaused < m_uStatesNum","VirtualPCStates.cpp",0xd6,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x12f8) = 0;
  *(undefined4 *)(param_1 + 0x12fc) = 1000;
  *(char **)(param_1 + 0x12d0) = "VmStateSuspendedPaused";
  *(undefined4 *)(param_1 + 0x1300) = 0;
  *(code **)(param_1 + 0x12d8) = FUN_1000b9720;
  *(undefined8 *)(param_1 + 0x12e0) = 0;
  if (uVar1 < 8) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmStateSuspending < m_uStatesNum",
                  "VirtualPCStates.cpp",0xd7,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1330) = 0;
  *(undefined4 *)(param_1 + 0x1334) = 1000;
  *(char **)(param_1 + 0x1308) = "VmStateSuspending";
  *(undefined4 *)(param_1 + 0x1338) = 0;
  *(code **)(param_1 + 0x1310) = FUN_1000ba3d0;
  *(undefined8 *)(param_1 + 0x1318) = 0;
  if (uVar1 < 9) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmStateResuming < m_uStatesNum",
                  "VirtualPCStates.cpp",0xd8,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1368) = 0;
  *(undefined4 *)(param_1 + 0x136c) = 1000;
  *(char **)(param_1 + 0x1340) = "VmStateResuming";
  *(undefined4 *)(param_1 + 0x1370) = 0;
  *(code **)(param_1 + 0x1348) = FUN_1000ba620;
  *(undefined8 *)(param_1 + 0x1350) = 0;
  if (uVar1 < 10) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmStateSnapshotReverting < m_uStatesNum","VirtualPCStates.cpp",0xd9,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x13a0) = 0;
  *(undefined4 *)(param_1 + 0x13a4) = 1000;
  *(char **)(param_1 + 0x1378) = "VmStateSnapshotReverting";
  *(undefined4 *)(param_1 + 0x13a8) = 0;
  *(code **)(param_1 + 0x1380) = FUN_1000baa50;
  *(undefined8 *)(param_1 + 5000) = 0;
  if (uVar1 < 0xb) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmStateSnapshotTaking < m_uStatesNum","VirtualPCStates.cpp",0xda,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x13d8) = 0;
  *(undefined4 *)(param_1 + 0x13dc) = 1000;
  *(char **)(param_1 + 0x13b0) = "VmStateSnapshotTaking";
  *(undefined4 *)(param_1 + 0x13e0) = 0;
  *(code **)(param_1 + 0x13b8) = FUN_1000bad80;
  *(undefined8 *)(param_1 + 0x13c0) = 0;
  if (uVar1 < 0x14) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmStateSnapshotDeleting < m_uStatesNum","VirtualPCStates.cpp",0xdb,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x15d0) = 0;
  *(undefined4 *)(param_1 + 0x15d4) = 1000;
  *(char **)(param_1 + 0x15a8) = "VmStateSnapshotDeleting";
  *(undefined4 *)(param_1 + 0x15d8) = 0;
  *(code **)(param_1 + 0x15b0) = FUN_1000bb1b0;
  *(undefined8 *)(param_1 + 0x15b8) = 0;
  if (uVar1 < 0x11) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmStateSaReAsyncCopying < m_uStatesNum","VirtualPCStates.cpp",0xdc,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1528) = 0;
  *(undefined4 *)(param_1 + 0x152c) = 1000;
  *(char **)(param_1 + 0x1500) = "VmStateSaReAsyncCopying";
  *(undefined4 *)(param_1 + 0x1530) = 0;
  *(code **)(param_1 + 0x1508) = FUN_1000bb650;
  *(undefined8 *)(param_1 + 0x1510) = 0;
  if (uVar1 < 0x10) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmStateBalloon < m_uStatesNum",
                  "VirtualPCStates.cpp",0xde,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x14f0) = 0;
  *(undefined4 *)(param_1 + 0x14f4) = 1000;
  *(char **)(param_1 + 0x14c8) = "VmStateBalloon";
  *(undefined4 *)(param_1 + 0x14f8) = 0;
  *(code **)(param_1 + 0x14d0) = FUN_1000bbad0;
  *(undefined8 *)(param_1 + 0x14d8) = 0;
  *(code **)(param_1 + 0x14e0) = FUN_1000bbbc0;
  *(undefined8 *)(param_1 + 0x14e8) = 0;
  if (uVar1 < 0x16) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmStateCommitUnfinished < m_uStatesNum","VirtualPCStates.cpp",0xdf,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1640) = 0;
  *(undefined4 *)(param_1 + 0x1644) = 1000;
  *(char **)(param_1 + 0x1618) = "VmStateCommitUnfinished";
  *(undefined4 *)(param_1 + 0x1648) = 0;
  *(code **)(param_1 + 0x1620) = FUN_1000bbc80;
  *(undefined8 *)(param_1 + 0x1628) = 0;
  if (uVar1 < 0x15) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmStateProblemReport < m_uStatesNum","VirtualPCStates.cpp",0xe2,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1608) = 0;
  *(undefined4 *)(param_1 + 0x160c) = 1000;
  *(char **)(param_1 + 0x15e0) = "VmStateProblemReport";
  *(undefined4 *)(param_1 + 0x1610) = 0;
  *(code **)(param_1 + 0x15e8) = FUN_1000bbda0;
  *(undefined8 *)(param_1 + 0x15f0) = 0;
  *(code **)(param_1 + 0x15f8) = FUN_1000bc2b0;
  *(undefined8 *)(param_1 + 0x1600) = 0;
  if (uVar1 < 0xc) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmStateStopAndRestore < m_uStatesNum","VirtualPCStates.cpp",0xe4,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1410) = 1;
  *(undefined4 *)(param_1 + 0x1414) = 0;
  *(char **)(param_1 + 0x13e8) = "VmStateStopAndRestore";
  *(undefined4 *)(param_1 + 0x1418) = 0;
  *(code **)(param_1 + 0x13f0) = FUN_1000bc3a0;
  *(undefined8 *)(param_1 + 0x13f8) = 0;
  if (uVar1 < 0xd) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmStateStopped < m_uStatesNum",
                  "VirtualPCStates.cpp",0xe5,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1448) = 1;
  *(undefined4 *)(param_1 + 0x144c) = 0;
  *(char **)(param_1 + 0x1420) = "VmStateStopped";
  *(undefined4 *)(param_1 + 0x1450) = 0;
  *(code **)(param_1 + 0x1428) = FUN_1000bc460;
  *(undefined8 *)(param_1 + 0x1430) = 0;
  if (uVar1 < 0xe) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmStateWaitForDeinit < m_uStatesNum","VirtualPCStates.cpp",0xe8,"stateInit");
  }
  *(undefined4 *)(param_1 + 0x1480) = 0;
  *(undefined4 *)(param_1 + 0x1484) = 1000;
  *(char **)(param_1 + 0x1458) = "VmStateWaitForDeinit";
  *(undefined4 *)(param_1 + 0x1488) = 0;
  *(code **)(param_1 + 0x1460) = FUN_1000bcd00;
  *(undefined8 *)(param_1 + 0x1468) = 0;
  *(code **)(param_1 + 0x1470) = FUN_1000bcd90;
  *(undefined8 *)(param_1 + 0x1478) = 0;
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmTimerDelayedReset < m_uTimersNum","VirtualPCStates.cpp",0xea,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x165c) = 0;
  *(undefined4 *)(param_1 + 0x1670) = 0;
  *(undefined4 *)(param_1 + 0x1674) = 0;
  *(char **)(param_1 + 0x1650) = "VmTimerDelayedReset";
  *(undefined4 *)(param_1 + 0x1658) = 0;
  if (uVar1 < 2) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmTimerToolsCDTimer < m_uTimersNum","VirtualPCStates.cpp",0xeb,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x1684) = 0;
  *(undefined4 *)(param_1 + 0x1698) = 0;
  *(undefined4 *)(param_1 + 0x169c) = 0;
  *(char **)(param_1 + 0x1678) = "VmTimerToolsCDTimer";
  *(undefined4 *)(param_1 + 0x1680) = 1;
  if (uVar1 < 3) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmTimerPause < m_uTimersNum",
                  "VirtualPCStates.cpp",0xec,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x16ac) = 0;
  *(undefined4 *)(param_1 + 0x16c0) = 0;
  *(undefined4 *)(param_1 + 0x16c4) = 0;
  *(char **)(param_1 + 0x16a0) = "VmTimerPause";
  *(undefined4 *)(param_1 + 0x16a8) = 2;
  if (uVar1 < 4) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmTimerShutdown < m_uTimersNum",
                  "VirtualPCStates.cpp",0xed,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x16d4) = 0;
  *(undefined4 *)(param_1 + 0x16e8) = 0;
  *(undefined4 *)(param_1 + 0x16ec) = 0;
  *(char **)(param_1 + 0x16c8) = "VmTimerShutdown";
  *(undefined4 *)(param_1 + 0x16d0) = 3;
  if (uVar1 < 5) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmTimerShutdownAcpi < m_uTimersNum","VirtualPCStates.cpp",0xee,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x16fc) = 0;
  *(undefined4 *)(param_1 + 0x1710) = 0;
  *(undefined4 *)(param_1 + 0x1714) = 0;
  *(char **)(param_1 + 0x16f0) = "VmTimerShutdownAcpi";
  *(undefined4 *)(param_1 + 0x16f8) = 4;
  if (uVar1 < 6) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmTimerEverySecond < m_uTimersNum"
                  ,"VirtualPCStates.cpp",0xef,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x1724) = 0;
  *(undefined4 *)(param_1 + 0x1738) = 0;
  *(undefined4 *)(param_1 + 0x173c) = 0;
  *(char **)(param_1 + 0x1718) = "VmTimerEverySecond";
  *(undefined4 *)(param_1 + 0x1720) = 5;
  if (uVar1 < 7) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmTimerHddCheck < m_uTimersNum",
                  "VirtualPCStates.cpp",0xf0,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x174c) = 0;
  *(undefined4 *)(param_1 + 0x1760) = 0;
  *(undefined4 *)(param_1 + 0x1764) = 0;
  *(char **)(param_1 + 0x1740) = "VmTimerHddCheck";
  *(undefined4 *)(param_1 + 0x1748) = 6;
  if (uVar1 < 8) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmTimerBalloon < m_uTimersNum",
                  "VirtualPCStates.cpp",0xf1,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x1774) = 0;
  *(undefined4 *)(param_1 + 0x1788) = 0;
  *(undefined4 *)(param_1 + 0x178c) = 0;
  *(char **)(param_1 + 0x1768) = "VmTimerBalloon";
  *(undefined4 *)(param_1 + 6000) = 7;
  if (uVar1 < 9) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmTimerWaitForDeinit < m_uTimersNum","VirtualPCStates.cpp",0xf2,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x179c) = 0;
  *(undefined4 *)(param_1 + 0x17b0) = 0;
  *(undefined4 *)(param_1 + 0x17b4) = 0;
  *(char **)(param_1 + 0x1790) = "VmTimerWaitForDeinit";
  *(undefined4 *)(param_1 + 0x1798) = 8;
  if (uVar1 < 10) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VmTimerPaused < m_uTimersNum",
                  "VirtualPCStates.cpp",0xf3,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x17c4) = 0;
  *(undefined4 *)(param_1 + 0x17d8) = 0;
  *(undefined4 *)(param_1 + 0x17dc) = 0;
  *(char **)(param_1 + 0x17b8) = "VmTimerPaused";
  *(undefined4 *)(param_1 + 0x17c0) = 9;
  if (uVar1 < 0xb) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VmTimerTestStatOnProblemReport < m_uTimersNum","VirtualPCStates.cpp",0xf4,
                  "stateInit");
  }
  *(undefined4 *)(param_1 + 0x17ec) = 0;
  *(undefined4 *)(param_1 + 0x1800) = 0;
  *(undefined4 *)(param_1 + 0x1804) = 0;
  *(char **)(param_1 + 0x17e0) = "VmTimerTestStatOnProblemReport";
  *(undefined4 *)(param_1 + 0x17e8) = 10;
  FUN_10008ec80(param_1,0);
  return 1;
}

