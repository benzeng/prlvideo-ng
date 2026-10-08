
void FUN_100745730(QObject *param_1,undefined8 param_2,undefined8 *param_3,QObject *param_4)

{
  int *piVar1;
  undefined1 auVar2 [16];
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f6220;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x28] = (QObject)0x1;
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar2;
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar2;
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined **)(param_1 + 0x68) = PTR_shared_null_1021e12f0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}

