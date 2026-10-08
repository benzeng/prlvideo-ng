
void FUN_10071e790(long param_1)

{
  int iVar1;
  long *plVar2;
  Data *pDVar3;
  long lVar4;
  undefined4 local_5c;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  int local_38;
  undefined1 local_29;
  
  param_1 = param_1 + 0x20;
  FUN_100721010(&local_58,param_1);
  FUN_1000722f0(&local_50,&local_58);
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  local_38 = 1;
  if (*(int *)local_58 == -1) {
LAB_10071e855:
    if (local_48 != local_40) {
      do {
        local_5c = **(undefined4 **)local_48;
        plVar2 = (long *)FUN_100721140(param_1,&local_5c);
        lVar4 = *plVar2;
        iVar1 = *(int *)(lVar4 + 8);
        if (iVar1 != *(int *)(lVar4 + 0xc)) {
          plVar2 = (long *)(lVar4 + 0x10 + (long)iVar1 * 8);
          lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            if ((long *)*plVar2 != (long *)0x0) {
              (**(code **)(*(long *)*plVar2 + 8))();
            }
            plVar2 = plVar2 + 1;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
        local_48 = local_48 + 8;
        local_38 = 1;
      } while (local_48 != local_40);
    }
  }
  else {
    if (*(int *)local_58 == 0) {
LAB_10071e809:
      iVar1 = *(int *)(local_58 + 0xc);
      if (iVar1 != *(int *)(local_58 + 8)) {
        lVar4 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
        pDVar3 = local_58 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar3 != (void *)0x0) {
            operator_delete(*(void **)pDVar3);
          }
          pDVar3 = pDVar3 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose(local_58);
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if (!(bool)local_29) goto LAB_10071e809;
    }
    if (local_38 != 0) goto LAB_10071e855;
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10071e93f;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar4 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_50 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_10071e93f:
  FUN_100721300(param_1);
  return;
}

