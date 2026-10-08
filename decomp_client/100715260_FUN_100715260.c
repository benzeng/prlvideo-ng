
undefined1  [16] FUN_100715260(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  Data *pDVar3;
  long lVar4;
  undefined1 auVar5 [16];
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_29;
  
  FUN_10055d1a0(&local_58,param_1);
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      puVar1 = *(undefined8 **)local_50;
      iVar2 = FUN_10071bf10(puVar1);
      if (iVar2 == param_2) {
        local_30 = *(undefined4 *)(puVar1 + 1);
        local_38 = *puVar1;
        if (*(int *)local_58 == -1) goto LAB_10071535e;
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          UNLOCK();
          if (*(int *)local_58 != 0) goto LAB_10071535e;
          local_29 = 0;
        }
        iVar2 = *(int *)(local_58 + 0xc);
        if (iVar2 != *(int *)(local_58 + 8)) {
          lVar4 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar2 * -8;
          pDVar3 = local_58 + (long)iVar2 * 8 + 8;
          do {
            if (*(void **)pDVar3 != (void *)0x0) {
              operator_delete(*(void **)pDVar3);
            }
            pDVar3 = pDVar3 + -8;
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0);
        }
        QListData::dispose(local_58);
        goto LAB_10071535e;
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10071534f;
    }
    iVar2 = *(int *)(local_58 + 0xc);
    if (iVar2 != *(int *)(local_58 + 8)) {
      lVar4 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = local_58 + (long)iVar2 * 8 + 8;
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
LAB_10071534f:
  FUN_10071be80(&local_38,0,0,0);
LAB_10071535e:
  auVar5._8_4_ = local_30;
  auVar5._0_8_ = local_38;
  auVar5._12_4_ = 0;
  return auVar5;
}

