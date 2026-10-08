
undefined8 * FUN_1003b19c0(undefined8 *param_1)

{
  int iVar1;
  Data *pDVar2;
  long lVar3;
  undefined4 local_64;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  FUN_1003b0bd0(&local_60);
  FUN_1003bd730(&local_58,&local_60);
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
LAB_1003b1a3c:
      iVar1 = *(int *)(local_60 + 0xc);
      if (iVar1 != *(int *)(local_60 + 8)) {
        lVar3 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_60 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1003b1a3c;
    }
    if (local_40 == 0) goto LAB_1003b1adc;
  }
  if (local_50 != local_48) {
    do {
      local_64 = 0;
      if (**(int **)local_50 - 0xbU < 8) {
        local_64 = *(undefined4 *)(&DAT_100e1b0f0 + (long)(int)(**(int **)local_50 - 0xbU) * 4);
      }
      FUN_1003bc3f0(param_1,&local_64);
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
  }
LAB_1003b1adc:
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
      lVar3 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = local_58 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar2 != (void *)0x0) {
          operator_delete(*(void **)pDVar2);
        }
        pDVar2 = pDVar2 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_58);
  }
  return param_1;
}

