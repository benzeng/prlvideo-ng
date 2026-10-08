
void FUN_1007c6d90(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_20;
  undefined1 local_12;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      return;
    }
    iVar1 = FUN_10032c830();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 == 1) {
          uVar2 = 0;
          if ((*(long *)(param_1 + 0x30) != 0) &&
             (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
            uVar2 = *(undefined8 *)(param_1 + 0x38);
          }
          FUN_10032cd60(&local_20,uVar2,0);
          if (*(int *)(local_20 + 4) == 0) {
            FUN_1007c7250(param_1,0);
          }
          else if (*(int *)(local_20 + *(long *)(local_20 + 0x10)) == 2) {
            FUN_1007c7250(param_1,1);
          }
          else if (*(int *)(local_20 + *(long *)(local_20 + 0x10)) == 3) {
            FUN_1007c7250(param_1,2);
          }
          else {
            FUN_1007c7250(param_1,0);
          }
          FUN_1007c7760(param_1);
          if (*(int *)local_20 != -1) {
            if (*(int *)local_20 != 0) {
              LOCK();
              *(int *)local_20 = *(int *)local_20 + -1;
              UNLOCK();
              if (*(int *)local_20 != 0) {
                return;
              }
              local_12 = 0;
            }
            QArrayData::deallocate(local_20,1,8);
          }
        }
        return;
      }
      uVar2 = 2;
    }
    FUN_1007c7250(param_1,uVar2);
    return;
  }
  return;
}

