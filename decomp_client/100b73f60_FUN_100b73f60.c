
long FUN_100b73f60(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  QMapNodeBase *pQVar4;
  ulong *puVar5;
  QMapNodeBase *pQVar6;
  QMapNodeBase *local_48;
  QMapNodeBase *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_2 == param_1) {
    return param_1;
  }
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x74,"GetLicenseKey");
  }
  local_38 = *(QArrayData **)(param_2 + 8);
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  pQVar4 = *(QMapNodeBase **)(param_2 + 0x18);
  if (*(int *)pQVar4 == 0) {
    pQVar4 = (QMapNodeBase *)QMapDataBase::createData();
    lVar2 = *(long *)(*(long *)(param_2 + 0x18) + 0x10);
    local_40 = pQVar4;
    if (lVar2 != 0) {
      puVar5 = (ulong *)FUN_1006f3350(lVar2,pQVar4);
      *(ulong **)(pQVar4 + 0x10) = puVar5;
      *puVar5 = *puVar5 & 3 | (ulong)(pQVar4 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else {
    local_40 = pQVar4;
    if (*(int *)pQVar4 != -1) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      pQVar4 = *(QMapNodeBase **)(param_2 + 0x18);
      local_40 = pQVar4;
    }
  }
  pQVar6 = *(QMapNodeBase **)(param_2 + 0x20);
  if (*(int *)pQVar6 == 0) {
    pQVar6 = (QMapNodeBase *)QMapDataBase::createData();
    lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 0x10);
    local_48 = pQVar6;
    if (lVar2 != 0) {
      puVar5 = (ulong *)FUN_1006f3350(lVar2,pQVar6);
      *(ulong **)(pQVar6 + 0x10) = puVar5;
      *puVar5 = *puVar5 & 3 | (ulong)(pQVar6 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else {
    local_48 = pQVar6;
    if (*(int *)pQVar6 != -1) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + 1;
      local_29 = *(int *)pQVar6 != 0;
      UNLOCK();
      pQVar6 = *(QMapNodeBase **)(param_2 + 0x20);
      local_48 = pQVar6;
    }
  }
  iVar3 = FUN_100b61850(param_1,&local_38,&local_40,&local_48);
  if (iVar3 == 0) {
    FUN_100b60910(param_1,&local_38);
  }
  uVar1 = *(uint *)(param_2 + 0x120);
  if ((uVar1 < 9) && ((0x1f2U >> (uVar1 & 0x1f) & 1) != 0)) {
    *(uint *)(param_1 + 0x120) = uVar1;
    FUN_100b93c80();
  }
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_29 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b74135;
    }
    if (*(long *)(pQVar6 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar6,(int)*(undefined8 *)(pQVar6 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar6);
  }
LAB_100b74135:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b74177;
    }
    if (*(long *)(pQVar4 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_100b74177:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

