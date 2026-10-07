
int FUN_100476a20(long param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  int *local_30;
  int *local_28;
  undefined1 local_19;
  
  FUN_100478620(&local_30,param_1 + 0x18);
  local_28 = local_30;
  if (*local_30 != -1) {
    if (*local_30 == 0) {
      QListData::detach((int)&local_28);
      iVar1 = local_28[2];
      if (iVar1 != local_28[3]) {
        local_30 = local_30 + (long)local_30[2] * 2 + 4;
        piVar5 = local_28 + (long)iVar1 * 2 + 4;
        lVar4 = (long)local_28[3] * 8 + (long)iVar1 * -8;
        do {
          piVar3 = *(int **)local_30;
          *(int **)piVar5 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_19 = *piVar3 != 0;
            UNLOCK();
          }
          piVar5 = piVar5 + 2;
          local_30 = local_30 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_30 = *local_30 + 1;
      local_19 = *local_30 != 0;
      UNLOCK();
    }
  }
  FUN_100013180(&local_30);
  FUN_1004792a0(param_1 + 0x18);
  FUN_100478320(param_1,&local_28,*(int *)(*(long *)(param_1 + 0x18) + 0x14) == 0);
  iVar1 = local_28[3];
  iVar2 = local_28[2];
  FUN_100013180(&local_28);
  return iVar1 - iVar2;
}

