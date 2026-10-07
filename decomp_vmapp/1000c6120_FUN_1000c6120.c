
undefined8 FUN_1000c6120(long param_1)

{
  uint uVar1;
  
  FUN_10008eb60(param_1,"SARE");
  FUN_10008eb90(param_1,param_1 + 0xf0,4);
  FUN_10008ec20(param_1,&DAT_100befeb0,0x11);
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","SareStateStart < m_uStatesNum",
                  "SerializationApp.cpp",0xae,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 1000;
  *(char **)(param_1 + 0xf0) = "SareStateStart";
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(code **)(param_1 + 0xf8) = FUN_1000c6a80;
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (uVar1 < 2) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "SareStateMonitorActive < m_uStatesNum","SerializationApp.cpp",0xaf,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 1000;
  *(char **)(param_1 + 0x128) = "SareStateMonitorActive";
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(code **)(param_1 + 0x130) = FUN_1000c6e70;
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (uVar1 < 3) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","SareStateFinish < m_uStatesNum",
                  "SerializationApp.cpp",0xb0,"stateInit");
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x188) = 1;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(char **)(param_1 + 0x160) = "SareStateFinish";
  *(undefined4 *)(param_1 + 400) = 0;
  *(code **)(param_1 + 0x168) = FUN_1000c74f0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (uVar1 < 4) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","SareStateMemcopy < m_uStatesNum",
                  "SerializationApp.cpp",0xb1,"stateInit");
  }
  *(undefined4 *)(param_1 + 0x1c0) = 1;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(char **)(param_1 + 0x198) = "SareStateMemcopy";
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(code **)(param_1 + 0x1a0) = FUN_1000c80f0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  FUN_10008ec80(param_1,0);
  return 1;
}

