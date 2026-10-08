
undefined1 FUN_100ac5540(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined1 uVar7;
  Data *pDVar8;
  Data *pDVar9;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  plVar6 = (long *)FUN_100adb590(param_1 + 0x100,*(undefined4 *)(param_1 + 0x910));
  lVar1 = *plVar6;
  if (lVar1 == 0) {
    return 0;
  }
  iVar3 = FUN_100d7b300(*(undefined4 *)(lVar1 + 0x48));
  FUN_100d7c0c0(&local_40,iVar3);
  iVar4 = FUN_100d7b000(&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ac55d8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100ac55d8:
  uVar7 = 0;
  if (((iVar3 != iVar4) && (iVar3 != -1)) && (iVar4 != -1)) {
    FUN_100adbfc0(&local_48,param_1 + 0x100,lVar1 + 0x38);
    pDVar9 = local_48;
    if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
      pDVar8 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
      do {
        lVar2 = *(long *)pDVar8;
        if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x18) & 0x41) == 0)) &&
           ((*(int *)(lVar2 + 8) != *(int *)(lVar1 + 8) &&
            ((iVar5 = FUN_100d7b300(*(undefined4 *)(lVar2 + 0x48)), iVar5 == iVar4 ||
             (pDVar9 = local_48, iVar5 == -1)))))) {
          FUN_100ac5720(param_1,iVar3,*(undefined8 *)(lVar1 + 0x38));
          uVar7 = 1;
          pDVar9 = local_48;
          goto LAB_100ac5664;
        }
        pDVar8 = pDVar8 + 8;
      } while (pDVar8 != pDVar9 + (long)*(int *)(pDVar9 + 0xc) * 8 + 0x10);
    }
    uVar7 = 0;
LAB_100ac5664:
    if (*(int *)pDVar9 != -1) {
      if (*(int *)pDVar9 != 0) {
        LOCK();
        *(int *)pDVar9 = *(int *)pDVar9 + -1;
        UNLOCK();
        if (*(int *)pDVar9 != 0) {
          return uVar7;
        }
        local_31 = 0;
        pDVar9 = local_48;
      }
      QListData::dispose(pDVar9);
    }
  }
  return uVar7;
}

