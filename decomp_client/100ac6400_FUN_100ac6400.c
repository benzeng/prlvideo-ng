
void FUN_100ac6400(long param_1)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  Data *pDVar8;
  int iVar9;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  cVar3 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
  if (cVar3 == '\0') {
    return;
  }
  if ((*(char *)(*(long *)(param_1 + 0xa30) + 0x10) == '\0') && (*(char *)(param_1 + 0xaa6) == '\0')
     ) {
    return;
  }
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar4 = FUN_100d7b000(&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ac648f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100ac648f:
  plVar6 = (long *)FUN_100adb590(param_1 + 0x100,*(undefined4 *)(param_1 + 0x910));
  lVar1 = *plVar6;
  iVar5 = 1;
  if (lVar1 != 0) {
    iVar5 = FUN_100d7b300(*(undefined4 *)(lVar1 + 0x48));
  }
  iVar9 = 1;
  if (0 < iVar5) {
    iVar9 = iVar5;
  }
  FUN_100ac81e0(&local_48,param_1 + 0xb00);
  iVar5 = *(int *)(local_48 + 8);
  if (iVar5 == *(int *)(local_48 + 0xc)) {
    bVar2 = false;
  }
  else {
    pDVar8 = local_48 + (long)iVar5 * 8 + 0x10;
    lVar7 = (long)*(int *)(local_48 + 0xc) * 8 + (long)iVar5 * -8;
    do {
      bVar2 = true;
      if (*(int *)pDVar8 == iVar4) goto LAB_100ac6513;
      pDVar8 = pDVar8 + 8;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
    bVar2 = false;
  }
LAB_100ac6513:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ac6535;
    }
    QListData::dispose(local_48);
  }
LAB_100ac6535:
  if (bVar2) {
    if (lVar1 == 0) {
      FUN_100ac5720(param_1,iVar9,*(undefined8 *)(param_1 + 0xab4));
    }
    else {
      FUN_100ad1ae0(param_1,lVar1);
    }
  }
  return;
}

