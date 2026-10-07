
void FUN_1000a2c60(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  CVmOpticalDisk *this;
  void *pvVar4;
  long lVar5;
  CHostHardwareInfo *this_00;
  undefined8 uVar6;
  long *local_40 [2];
  
  FUN_10008e910();
  *param_1 = (long)&PTR_FUN_100baa110;
  param_1[0x1e] = param_2;
  param_1[0x1f] = param_3;
  param_1[0x21] = 0;
  puVar2 = PTR_shared_null_100ba20d0;
  param_1[0x25] = (long)PTR_shared_null_100ba20d0;
  FUN_100083820(param_1 + 0x28);
  plVar1 = param_1 + 0x216;
  FUN_100408fa0(plVar1);
  param_1[0x21a] = 0;
  this = operator_new(0xf0);
  CVmOpticalDisk::CVmOpticalDisk(this);
  param_1[0x21c] = (long)this;
  FUN_100519c60(param_1 + 0x21e,param_1);
  pvVar4 = operator_new(0x10);
  FUN_1000d7310(pvVar4);
  lVar5 = FUN_1000b4f10(pvVar4);
  param_1[0x221] = lVar5;
  param_1[0x227] = 0;
  param_1[0x226] = 0;
  param_1[0x225] = 0;
  param_1[0x224] = 0;
  param_1[0x223] = 0;
  *(undefined1 *)(param_1 + 0x22a) = 1;
  param_1[0x22b] = 0;
  param_1[0x22e] = (long)puVar2;
  param_1[0x32a] = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x32b),0);
  FUN_1003fcaa0();
  param_1[0x34a] = 0;
  param_1[0x349] = 0;
  param_1[0x348] = 0;
  FUN_1000991a0();
  *(undefined4 *)(param_1 + 0x358) = 1;
  *(undefined4 *)((long)param_1 + 0x1ac4) = 0;
  *(undefined4 *)(param_1 + 0x20fa) = 0;
  param_1[0x20fb] = 0;
  *(undefined4 *)(param_1 + 0x20fc) = 0xffffffff;
  param_1[0x2106] = 0;
  param_1[0x2103] = 0;
  param_1[0x2102] = 0;
  param_1[0x2101] = 0;
  param_1[0x2100] = 0;
  param_1[0x20ff] = 0;
  FUN_100470d10(param_1 + 0x2108,param_1);
  param_1[0x212c] = 0;
  param_1[0x2130] = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x2131),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x2132));
  *(undefined1 *)(param_1 + 0x2133) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x2134),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x2135));
  *(undefined4 *)(param_1 + 0x2136) = 0;
  param_1[0x213b] = (long)puVar2;
  *(undefined2 *)((long)param_1 + 0x109ec) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x213e),0);
  FUN_100409080(plVar1);
  *(undefined1 *)(param_1 + 0x21d) = 0;
  *(undefined1 *)((long)param_1 + 0x10e9) = 0;
  DAT_1011c3698 = param_1;
  *(undefined4 *)(param_1 + 0x21b) = 1;
  if (DAT_1011b6688 == '\0') {
    iVar3 = ___cxa_guard_acquire(&DAT_1011b6688);
    if (iVar3 != 0) {
      CVmConfiguration::CVmConfiguration((CVmConfiguration *)&DAT_1011b6590);
      ___cxa_atexit(PTR__CVmConfiguration_100ba20f8,&DAT_1011b6590,0x100000000);
      ___cxa_guard_release(&DAT_1011b6688);
    }
  }
  param_1[0x22] = (long)&DAT_1011b6590;
  if (DAT_1011b67f0 == '\0') {
    iVar3 = ___cxa_guard_acquire(&DAT_1011b67f0);
    if (iVar3 != 0) {
      CDispCommonPreferences::CDispCommonPreferences((CDispCommonPreferences *)&DAT_1011b6690);
      ___cxa_atexit(PTR__CDispCommonPreferences_100ba2120,&DAT_1011b6690,0x100000000);
      ___cxa_guard_release(&DAT_1011b67f0);
    }
  }
  param_1[0x23] = (long)&DAT_1011b6690;
  if (DAT_1011b68d0 == '\0') {
    iVar3 = ___cxa_guard_acquire(&DAT_1011b68d0);
    if (iVar3 != 0) {
      CParallelsNetworkConfig::CParallelsNetworkConfig((CParallelsNetworkConfig *)&DAT_1011b67f8);
      ___cxa_atexit(PTR__CParallelsNetworkConfig_100ba2128,&DAT_1011b67f8,0x100000000);
      ___cxa_guard_release(&DAT_1011b68d0);
    }
  }
  param_1[0x24] = (long)&DAT_1011b67f8;
  this_00 = operator_new(0x1c8);
  CHostHardwareInfo::CHostHardwareInfo(this_00);
  local_40[0] = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (local_40[0] == (long *)0x0) {
    local_40[0] = (long *)0x0;
    (**(code **)(*(long *)this_00 + 0x88))(this_00);
  }
  else {
    *(undefined4 *)(local_40[0] + 1) = 1;
    local_40[0][2] = (long)this_00;
    *local_40[0] = (long)&PTR_FUN_100bfbb80;
  }
  uVar6 = 0;
  if (param_1[0x221] != 0) {
    uVar6 = *(undefined8 *)(param_1[0x221] + 0x10);
  }
  FUN_1000d7320(uVar6,local_40);
  param_1[0x229] = 0;
  *(undefined4 *)((long)param_1 + 0x1abc) = 0;
  param_1[0x34b] = 0;
  param_1[0x2107] = 0;
  param_1[0x359] = 0;
  param_1[0x356] = 0;
  ___bzero(param_1 + 0x302,0x110);
  param_1[0x328] = 0;
  param_1[0x327] = 0;
  param_1[0x326] = 0;
  param_1[0x325] = 0;
  ___bzero(param_1 + 0x331,0xb8);
  *(undefined4 *)(param_1 + 0x329) = 3;
  *(undefined1 *)(param_1 + 0x357) = 0;
  *(undefined1 *)((long)param_1 + 0x109e4) = 0;
  pvVar4 = operator_new(0x460);
  FUN_1000c63b0(pvVar4,param_1);
  param_1[0x2139] = (long)pvVar4;
  param_1[0x2105] = 0;
  param_1[0x2104] = 0;
  pvVar4 = operator_new(0x58);
  FUN_100533f50(pvVar4,param_1);
  param_1[0x212f] = (long)pvVar4;
  param_1[0x20fe] = 0;
  param_1[0x20fd] = 0;
  *(undefined4 *)((long)param_1 + 0x1164) = 0;
  *(undefined4 *)(param_1 + 0x22d) = 0;
  *(undefined4 *)(param_1 + 0x213a) = 0;
  *(undefined1 *)(param_1 + 0x222) = 0;
  pvVar4 = operator_new(0x28);
  FUN_100107e20(pvVar4);
  param_1[0x34c] = (long)pvVar4;
  pvVar4 = operator_new(0x20);
  FUN_10010bb60(pvVar4);
  param_1[0x34d] = (long)pvVar4;
  FUN_10078be60(param_1 + 0x35a,0x20);
  pvVar4 = operator_new(0x68);
  FUN_1000f8760(pvVar4,param_1);
  param_1[0x20fb] = (long)pvVar4;
  DAT_100bf0094 = param_1[0x2139];
  DAT_100bf00ad = DAT_100bf00ad | 1;
  FUN_100409080(plVar1);
  (**(code **)(*param_1 + 0x98))(param_1);
  QThread::start(param_1,7);
  if (local_40[0] != (long *)0x0) {
    LOCK();
    plVar1 = local_40[0] + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_40[0] + 0x10))();
    }
  }
  return;
}

