
void FUN_1009dc0f0(QThread *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102236840;
  *(undefined4 *)(param_1 + 0x10) = 0;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = 0;
  plVar2 = operator_new(0x20);
  *plVar2 = (long)&PTR_FUN_1022367e8;
  *(undefined1 *)(plVar2 + 1) = 0;
  plVar2[2] = 0;
  QMutex::QMutex((QMutex *)(plVar2 + 3),0);
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[2] = plVar2;
    *puVar3 = &PTR_FUN_10227e350;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar3;
  return;
}

