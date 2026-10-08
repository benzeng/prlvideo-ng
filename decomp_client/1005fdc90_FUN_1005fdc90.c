
void FUN_1005fdc90(QObject *param_1,undefined8 param_2,undefined8 *param_3,QObject param_4,
                  QObject *param_5)

{
  int *piVar1;
  
  QObject::QObject(param_1,param_5);
  *(undefined ***)param_1 = &PTR_FUN_1022207c0;
  FUN_100260700(param_1 + 0x10,param_2);
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x78) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_3 + 1);
  param_1[0x88] = param_4;
  return;
}

