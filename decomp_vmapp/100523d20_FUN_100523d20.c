
void FUN_100523d20(undefined8 *param_1)

{
  byte bVar1;
  void *pvVar2;
  long lVar3;
  
  FUN_1004c0650();
  FUN_100519220();
  *param_1 = &PTR_FUN_100bc4e58;
  param_1[5] = &PTR_FUN_100bc4eb0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0xe),0);
  param_1[0xf] = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x10),0);
  param_1[0x11] = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x12),0);
  param_1[0x13] = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x14),0);
  pvVar2 = operator_new(0x10);
  FUN_100525cc0(pvVar2);
  param_1[0x15] = pvVar2;
  *(undefined1 *)(param_1 + 0x16) = 1;
  param_1[0x17] = 0;
  FUN_1004c0790(param_1,0x8020,0x8029);
  FUN_10051a6b0(DAT_1011c3698 + 0x10f0,4,param_1 + 5);
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    lVar3 = CVmTools::getVmCoherence();
    if (lVar3 != 0) {
      bVar1 = CVmCoherence::isShowWinSystrayInMacMenu();
      *(uint *)((long)param_1 + 0x6c) = (uint)bVar1;
    }
  }
  return;
}

