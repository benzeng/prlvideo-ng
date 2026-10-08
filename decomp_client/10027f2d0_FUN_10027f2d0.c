
void FUN_10027f2d0(QObject *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined **)param_1 = PTR_DAT_1021e17d0 + 0x10;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x10) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x20) = 0x80000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined **)param_1 = &DAT_1021ef4d0;
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar2;
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar2;
  *(undefined **)(param_1 + 0x50) = PTR_shared_null_1021e12f0;
  return;
}

