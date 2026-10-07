
undefined8 FUN_1000c0420(long param_1)

{
  long lVar1;
  uint uVar2;
  char local_32 [10];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  _sprintf(local_32,"VCPU%u",(ulong)*(uint *)(param_1 + 0x110));
  FUN_10008eb60(param_1,local_32);
  FUN_10008eb90(param_1,param_1 + 0x118,0xc);
  FUN_10008ec20(param_1,&DAT_100befd30,8);
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VcpuStateTransition < m_uStatesNum","VirtualCpu.cpp",0x5e,"stateInit");
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 1000;
  *(char **)(param_1 + 0x118) = "VcpuStateTransition";
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0xa1;
  if (uVar2 < 2) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VcpuStateUninitialized < m_uStatesNum","VirtualCpu.cpp",0x5f,"stateInit");
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 1000;
  *(char **)(param_1 + 0x150) = "VcpuStateUninitialized";
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0xa9;
  if (uVar2 < 3) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VcpuStateInitializing < m_uStatesNum","VirtualCpu.cpp",0x60,"stateInit");
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1b0) = 1;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(char **)(param_1 + 0x188) = "VcpuStateInitializing";
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0xb1;
  if (uVar2 < 4) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VcpuStateStopped < m_uStatesNum",
                  "VirtualCpu.cpp",0x62,"stateInit");
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 1000;
  *(char **)(param_1 + 0x1c0) = "VcpuStateStopped";
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0xb9;
  if (uVar2 < 5) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VcpuStateRunning < m_uStatesNum",
                  "VirtualCpu.cpp",99,"stateInit");
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x220) = 1;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(char **)(param_1 + 0x1f8) = "VcpuStateRunning";
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0xd9;
  if (uVar2 < 6) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VcpuStatePaused < m_uStatesNum",
                  "VirtualCpu.cpp",0x65,"stateInit");
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 1000;
  *(char **)(param_1 + 0x230) = "VcpuStatePaused";
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0xc1;
  if (uVar2 < 7) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VcpuStateUnpausing < m_uStatesNum"
                  ,"VirtualCpu.cpp",0x66,"stateInit");
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x290) = 1;
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(char **)(param_1 + 0x268) = "VcpuStateUnpausing";
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0xc9;
  if (uVar2 < 8) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VcpuStateFrozen < m_uStatesNum",
                  "VirtualCpu.cpp",0x68,"stateInit");
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 1000;
  *(char **)(param_1 + 0x2a0) = "VcpuStateFrozen";
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0xd1;
  if (uVar2 < 9) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VcpuStateTerminated < m_uStatesNum","VirtualCpu.cpp",0x69,"stateInit");
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x300) = 1;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(char **)(param_1 + 0x2d8) = "VcpuStateTerminated";
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(code **)(param_1 + 0x2e0) = FUN_1000c0b50;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (uVar2 < 10) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VcpuStateSaRe < m_uStatesNum",
                  "VirtualCpu.cpp",0x6a,"stateInit");
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x338) = 1;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(char **)(param_1 + 0x310) = "VcpuStateSaRe";
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0xe1;
  if (uVar2 < 0xb) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","VcpuStateProtectWs < m_uStatesNum"
                  ,"VirtualCpu.cpp",0x6b,"stateInit");
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x370) = 1;
  *(undefined4 *)(param_1 + 0x374) = 0;
  *(char **)(param_1 + 0x348) = "VcpuStateProtectWs";
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0xe9;
  if (uVar2 < 0xc) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "VcpuStateCollectGuestCtx < m_uStatesNum","VirtualCpu.cpp",0x6c,"stateInit");
  }
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  *(char **)(param_1 + 0x380) = "VcpuStateCollectGuestCtx";
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0xf1;
  FUN_10008ec80(param_1,1);
  if (lVar1 == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

