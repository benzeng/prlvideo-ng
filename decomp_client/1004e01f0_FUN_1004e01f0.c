
undefined8 * FUN_1004e01f0(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  Data *pDVar6;
  undefined4 local_64;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  lVar4 = FUN_1004dddd0(param_2);
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return param_1;
  }
  FUN_1003b1f30(&local_60);
  FUN_1003bd730(&local_58,&local_60);
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
LAB_1004e0282:
      iVar1 = *(int *)(local_60 + 0xc);
      if (iVar1 != *(int *)(local_60 + 8)) {
        lVar4 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
        pDVar6 = local_60 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar6 != (void *)0x0) {
            operator_delete(*(void **)pDVar6);
          }
          pDVar6 = pDVar6 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1004e0282;
    }
    if (local_40 == 0) goto LAB_1004e0333;
  }
  if (local_50 != local_48) {
    do {
      uVar2 = **(undefined4 **)local_50;
      local_64 = uVar2;
      uVar5 = FUN_1003b0ad0(*(undefined8 *)(param_2 + 0x40));
      cVar3 = FUN_1003e5db0(uVar5,uVar2);
      if (cVar3 != '\0') {
        FUN_1003bd240(param_1,&local_64);
      }
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
  }
LAB_1004e0333:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar4 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_58 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_58);
  }
  return param_1;
}

