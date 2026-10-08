
void FUN_1005e5ff0(QObject *param_1,long param_2,QObject *param_3)

{
  int *piVar1;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f4640;
  FUN_100283580(param_1 + 0x10,param_2);
  piVar1 = *(int **)(param_2 + 0x58);
  *(int **)(param_1 + 0x68) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_2 + 0x60);
  *(int **)(param_1 + 0x70) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_2 + 0x68);
  *(int **)(param_1 + 0x78) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_2 + 0x70);
  *(int **)(param_1 + 0x80) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_2 + 0x78);
  *(int **)(param_1 + 0x88) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

