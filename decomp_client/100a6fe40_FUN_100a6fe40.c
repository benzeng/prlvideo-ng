
undefined4 * FUN_100a6fe40(undefined4 *param_1,long param_2)

{
  int *piVar1;
  int *local_38;
  undefined1 local_2c;
  
  *param_1 = 10;
  *(undefined **)(param_1 + 2) = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 4) = PTR_shared_null_1021e15e8;
  QMutex::lock();
  *param_1 = *(undefined4 *)(param_2 + 8);
  QString::operator=((QString *)(param_1 + 2),(QString *)(param_2 + 0x10));
  if (*(long *)(param_1 + 4) != *(long *)(param_2 + 0x18)) {
    FUN_100a718b0(&local_38,param_2 + 0x18);
    piVar1 = *(int **)(param_1 + 4);
    *(int **)(param_1 + 4) = local_38;
    local_38 = piVar1;
    if (*piVar1 != -1) {
      if (*piVar1 != 0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_2c = *piVar1 != 0;
        UNLOCK();
        if ((bool)local_2c) goto LAB_100a6fee1;
      }
      FUN_100a71820(&local_38,piVar1);
    }
  }
LAB_100a6fee1:
  FUN_100a71530(param_2 + 0x18);
  *(undefined4 *)(param_2 + 8) = 10;
  QMutex::unlock();
  return param_1;
}

