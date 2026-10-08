
undefined8 * FUN_10070fd10(undefined8 *param_1,long param_2,char param_3)

{
  int iVar1;
  Data *pDVar2;
  long lVar3;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [15];
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  if (param_3 == '\0') {
    FUN_10055d1a0(&local_70,*(long *)(param_2 + 0x10) + 0x20);
    local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
    local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
    if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
      do {
        local_58 = 1;
        FUN_10055cf40(param_1,*(undefined8 *)local_68);
        local_68 = local_68 + 8;
      } while (local_68 != local_60);
    }
    local_58 = 1;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        UNLOCK();
        if (*(int *)local_70 != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      iVar1 = *(int *)(local_70 + 0xc);
      if (iVar1 != *(int *)(local_70 + 8)) {
        lVar3 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_70 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose(local_70);
    }
  }
  else {
    FUN_100713ea0(param_1);
    FUN_10071be80(local_40,0x12000000,2,2);
    FUN_10055cf40(param_1,local_40);
    FUN_10071be80(local_50,0x4000000,4,0);
    FUN_10055cf40(param_1,local_50);
  }
  return param_1;
}

