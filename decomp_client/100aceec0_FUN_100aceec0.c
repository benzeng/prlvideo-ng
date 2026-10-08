
void FUN_100aceec0(QObject *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  QObject *pQVar1;
  code *pcVar2;
  QObject QVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  CVmCoherence *pCVar6;
  void *pvVar7;
  long local_40 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10223a810;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  uVar5 = FUN_100acd680(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  uVar5 = FUN_100319390(param_3);
  FUN_10018c2b0(uVar5);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  pCVar6 = (CVmCoherence *)CVmTools::getVmCoherence();
  CVmCoherence::CVmCoherence((CVmCoherence *)(param_1 + 0x28),pCVar6);
  uVar5 = FUN_100319390(param_3);
  FUN_10018c250(local_40,uVar5);
  if (local_40[0] != 0) {
    _PrlHandle_Free(local_40[0]);
  }
  *(long *)(param_1 + 0xf0) = local_40[0];
  *(undefined8 *)(param_1 + 0xf8) = param_4;
  pQVar1 = param_1 + 0x100;
  FUN_100adb3d0(pQVar1);
  FUN_100add7a0(param_1 + 0x920,pQVar1,*(undefined8 *)(param_1 + 0xf8));
  param_1[0x978] = (QObject)0x0;
  QMutex::QMutex((QMutex *)(param_1 + 0x980),1);
  FUN_1003193e0(param_1 + 0x988,param_3);
  FUN_100ae57b0(param_1 + 0x990);
  *(undefined4 *)(param_1 + 0x9a0) = 0;
  *(undefined4 *)(param_1 + 0x9a4) = 0;
  *(undefined4 *)(param_1 + 0x9a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9ac) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x9b0) = 0;
  uVar5 = FUN_100ac8c80(param_1 + 0x920,pQVar1);
  *(undefined8 *)(param_1 + 0x9b8) = uVar5;
  FUN_100ad9bb0(param_1 + 0x9c0,param_1,*(undefined8 *)(param_1 + 0xf0));
  uVar5 = FUN_100adad90();
  *(undefined8 *)(param_1 + 0xa30) = uVar5;
  FUN_100ade420(param_1 + 0xa38);
  *(undefined4 *)(param_1 + 0xa50) = 0;
  pvVar7 = operator_new(0x40);
  FUN_100ade610(pvVar7);
  *(void **)(param_1 + 0xa58) = pvVar7;
  QTimer::QTimer((QTimer *)(param_1 + 0xa60),(QObject *)0x0);
  QTimer::QTimer((QTimer *)(param_1 + 0xa80),(QObject *)0x0);
  *(undefined4 *)(param_1 + 0xaa0) = 0;
  param_1[0xaa4] = (QObject)0x0;
  param_1[0xaaa] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0xaa6) = 0;
  *(undefined8 *)(param_1 + 0xac0) = 0x3ff0000000000000;
  param_1[0xac8] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0xacc) = 0;
  *(undefined **)(param_1 + 0xad8) = PTR_shared_null_1021e1288;
  param_1[0xae0] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0xae4) = 0xffffffff;
  FUN_100acf3e0(param_1);
  pcVar2 = *(code **)(*(long *)param_1 + 0x100);
  uVar5 = FUN_100319390(*(undefined8 *)(param_1 + 0x20));
  FUN_10018c2b0(uVar5);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar4 = CVmCommonOptions::getVmColor();
  (*pcVar2)(param_1,uVar4);
  QVar3 = (QObject)CVmCoherence::isUseBorders();
  if (QVar3 != param_1[0xaa4]) {
    param_1[0xaa4] = QVar3;
    FUN_100ae32c0(param_1);
  }
  QVar3 = (QObject)CVmCoherence::isCoherenceButtonVisibility();
  if (QVar3 != param_1[0xaa5]) {
    param_1[0xaa5] = QVar3;
    FUN_100ae32e0(param_1);
  }
  FUN_100acfd60(param_1);
  return;
}

