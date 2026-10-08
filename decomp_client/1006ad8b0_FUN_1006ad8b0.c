
bool FUN_1006ad8b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  Data *pDVar4;
  int iVar5;
  long lVar6;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  Data *local_38;
  undefined1 local_29;
  
  uVar3 = FUN_1006947d0();
  FUN_100690870(&local_38,uVar3);
  FUN_10012b980(&local_58,&local_38);
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    iVar5 = 1;
    do {
      local_40 = 1;
      cVar2 = FUN_10018dbd0(param_2,**(undefined4 **)local_50);
      if (cVar2 == '\0') goto LAB_1006ad940;
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  iVar5 = 2;
LAB_1006ad940:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ad9af;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar6 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_58 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_1006ad9af:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1006ada1f;
      local_29 = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar6 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_38);
  }
LAB_1006ada1f:
  return iVar5 == 2;
}

