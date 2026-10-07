
void FUN_100107c30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 2) == 1) {
    FUN_100107d30(*param_1,param_1[1]);
    return;
  }
  if (*(int *)(param_1 + 2) == 0) {
    uVar1 = *param_1;
    uVar2 = 0;
    if (*(long *)param_1[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)param_1[1] + 0x10);
    }
    QMutex::lock();
    FUN_100108040(uVar1,uVar2);
    QMutex::unlock();
    return;
  }
  return;
}

