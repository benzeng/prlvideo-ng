
void FUN_1009cb890(QThread *param_1,undefined8 *param_2,undefined4 param_3,QThread param_4,
                  QObject *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  QThread::QThread(param_1,param_5);
  *(undefined ***)param_1 = &PTR_FUN_102236400;
  param_1[0x10] = param_4;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e1288;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x28) = param_3;
  param_1[0x2c] = (QThread)0x0;
  *(undefined4 *)(param_1 + 0x30) = 0x8000000;
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_10227e2a0;
    puVar3 = puVar2;
  }
  *(undefined8 **)(param_1 + 0x38) = puVar3;
  return;
}

