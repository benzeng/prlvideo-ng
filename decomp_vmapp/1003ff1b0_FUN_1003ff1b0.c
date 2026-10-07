
void FUN_1003ff1b0(undefined4 *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar6;
  undefined1 uVar7;
  
  FUN_100707520();
  uVar2 = FUN_100658fb0();
  uVar6 = 0xfa;
  if (uVar2 < 0x801) {
    uVar6 = 100;
  }
  iVar3 = FUN_1007da300("devices.hdd.boot_rcache_size",uVar6);
  *(ulong *)(param_1 + 0x34) = (ulong)(uint)(iVar3 << 0x14);
  iVar3 = FUN_1007da300("devices.hdd.error",param_2 & 0x10);
  if (iVar3 != 0) {
    *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) | 0x10;
    FUN_1008e3970("","HddUtils",0,"hdd: report error to guest");
  }
  uVar4 = FUN_1007da300("devices.hdd.boot_rcache_deadline",0x78);
  param_1[0x32] = uVar4;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  cVar1 = CVmRunTimeOptions::isOptimizeForVM();
  if ((cVar1 == '\0') || (uVar2 = 1, (*(byte *)(param_1 + 0x5b) & 1) != 0)) {
    uVar2 = (param_2 & 8) >> 3;
  }
  iVar3 = FUN_1007da300("devices.hdd.boot_rcache",uVar2);
  if (iVar3 != 0) {
    *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) | 8;
  }
  uVar6 = extraout_RDX;
  if (*(int *)(DAT_1011c3698 + 0xb50) != 0) {
    iVar3 = FUN_1003fac50();
    uVar2 = 1;
    uVar6 = extraout_RDX_00;
    if (iVar3 == 3) goto LAB_1003ff2c0;
  }
  uVar2 = (param_2 & 2) >> 1;
LAB_1003ff2c0:
  iVar3 = FUN_1007da300("devices.hdd.force_bb",uVar2,uVar6,uVar2);
  if (iVar3 != 0) {
    *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) | 2;
    FUN_1008e3970("","HddUtils",0,"hdd: read BB enabled");
  }
  iVar3 = FUN_1007da300("devices.hdd.verifier",0);
  if (iVar3 != 0) {
    FUN_100761c70();
  }
  iVar3 = FUN_1003fac50();
  uVar7 = 1;
  if (iVar3 != 2) {
    uVar7 = (undefined1)((param_2 & 4) >> 2);
  }
  iVar3 = FUN_1007da300("devices.hdd.async_flush",uVar7,extraout_RDX_01,uVar7);
  if (iVar3 != 0) {
    *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) | 4;
  }
  iVar3 = FUN_1007da300("devices.hdd.kick",0x1c00);
  param_1[0x4f] = iVar3 << 10;
  iVar3 = FUN_1007da300("devices.hdd.kick_max_wait",5);
  param_1[0x50] = iVar3 * 1000;
  uVar2 = FUN_1007da300("devices.hdd.kick_delay",2000);
  *(ulong *)(param_1 + 0x52) = (ulong)uVar2 * 1000;
  param_1[0x56] = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  uVar4 = FUN_1007da300("devices.hdd.err_max_retry",0x10);
  *param_1 = uVar4;
  uVar4 = FUN_1007da300("devices.hdd.sort",2);
  lVar5 = (**(code **)(**(long **)(param_1 + 0xe) + 0x250))();
  *(undefined4 *)(lVar5 + 8) = uVar4;
  uVar4 = FUN_1007da300("devices.hdd.early_readahead",0);
  param_1[0x5a] = uVar4;
  iVar3 = FUN_1007da300("devices.hdd.deadline",1);
  QMutex::lock();
  if ((int)DAT_101119c90 < 0) {
    DAT_101119c90 = (uint)(iVar3 != 0);
  }
  QMutex::unlock();
  return;
}

