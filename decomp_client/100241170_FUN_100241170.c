
undefined8 FUN_100241170(long param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int *local_28;
  int *local_20;
  undefined1 local_11;
  
  if (param_2 != (undefined8 *)0x0) {
    local_28 = (int *)PTR_shared_null_1021e15e8;
    FUN_1000341d0(&local_28,param_1 + 0x40);
    if ((int *)*param_2 != local_28) {
      local_20 = local_28;
      if (*local_28 != -1) {
        if (*local_28 == 0) {
          QListData::detach((int)&local_20);
          iVar1 = local_20[2];
          if (iVar1 != local_20[3]) {
            piVar4 = local_28 + (long)local_28[2] * 2 + 4;
            piVar5 = local_20 + (long)iVar1 * 2 + 4;
            lVar3 = (long)local_20[3] * 8 + (long)iVar1 * -8;
            do {
              piVar2 = *(int **)piVar4;
              *(int **)piVar5 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                local_11 = *piVar2 != 0;
                UNLOCK();
              }
              piVar5 = piVar5 + 2;
              piVar4 = piVar4 + 2;
              lVar3 = lVar3 + -8;
            } while (lVar3 != 0);
          }
        }
        else {
          LOCK();
          *local_28 = *local_28 + 1;
          local_11 = *local_28 != 0;
          UNLOCK();
        }
      }
      piVar4 = (int *)*param_2;
      *param_2 = local_20;
      local_20 = piVar4;
      FUN_100039a80(&local_20);
    }
    FUN_100039a80(&local_28);
  }
  return 0x3b17;
}

