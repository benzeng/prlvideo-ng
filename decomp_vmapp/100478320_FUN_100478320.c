
void FUN_100478320(undefined8 param_1,long *param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  
  local_38 = (int *)*param_2;
  if (local_38[3] != local_38[2]) {
    piVar5 = local_38 + (long)local_38[2] * 2 + 4;
    do {
      lVar3 = FUN_100478580(param_1,piVar5);
      if (lVar3 != 0) {
        FUN_10047cc00(lVar3,param_3);
      }
      piVar5 = piVar5 + 2;
      local_38 = (int *)*param_2;
    } while (piVar5 != local_38 + (long)local_38[3] * 2 + 4);
  }
  if (*local_38 != -1) {
    if (*local_38 == 0) {
      QListData::detach((int)&local_38);
      iVar1 = local_38[2];
      if (iVar1 != local_38[3]) {
        puVar4 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        piVar5 = local_38 + (long)iVar1 * 2 + 4;
        lVar3 = (long)local_38[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar4;
          *(int **)piVar5 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_29 = *piVar2 != 0;
            UNLOCK();
          }
          piVar5 = piVar5 + 2;
          puVar4 = puVar4 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *local_38 = *local_38 + 1;
      local_2a = *local_38 != 0;
      UNLOCK();
    }
  }
  FUN_10047c2f0(param_1,&local_38,param_3);
  FUN_100013180(&local_38);
  return;
}

