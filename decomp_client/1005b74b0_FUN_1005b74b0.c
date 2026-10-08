
bool FUN_1005b74b0(void)

{
  int iVar1;
  QMapNodeBase *pQVar2;
  char cVar3;
  undefined8 uVar4;
  ulong *puVar5;
  QArrayData *local_60;
  QArrayData *local_58;
  QMapNodeBase *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QMapNodeBase *local_38;
  QMapNodeBase *local_30;
  undefined1 local_21;
  
  cVar3 = FUN_100d80630(1);
  if (cVar3 != '\0') {
    return false;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("store",5);
  uVar4 = FUN_10073fe80(&local_40);
  local_48 = (QArrayData *)QString::fromAscii_helper("os.win",6);
  FUN_100741270(&local_38,uVar4,&local_48);
  local_58 = (QArrayData *)QString::fromAscii_helper("Web Store",9);
  uVar4 = FUN_10073fe80(&local_58);
  local_60 = (QArrayData *)QString::fromAscii_helper("os.win",6);
  FUN_100741270(&local_50,uVar4,&local_60);
  if (*(int *)local_38 == 0) {
    local_30 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(local_38 + 0x10) != 0) {
      puVar5 = (ulong *)FUN_1005bfe60(*(long *)(local_38 + 0x10),local_30);
      *(ulong **)(local_30 + 0x10) = puVar5;
      *puVar5 = *puVar5 & 3 | (ulong)(local_30 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)local_38 == -1) {
    local_30 = local_38;
  }
  else {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
    local_30 = local_38;
  }
  FUN_1005c0080(&local_30,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b761f;
    }
    if (*(long *)(local_50 + 0x10) != 0) {
      FUN_1005bfc90();
      QMapDataBase::freeTree(local_50,(int)*(undefined8 *)(local_50 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_50);
  }
LAB_1005b761f:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b764f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005b764f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b767f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005b767f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b76c7;
    }
    if (*(long *)(local_38 + 0x10) != 0) {
      FUN_1005bfc90();
      QMapDataBase::freeTree(local_38,(int)*(undefined8 *)(local_38 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_38);
  }
LAB_1005b76c7:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b76f7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005b76f7:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b7727;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005b7727:
  pQVar2 = local_30;
  iVar1 = *(int *)(local_30 + 4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return iVar1 != 0;
      }
      local_21 = 0;
    }
    if (*(long *)(local_30 + 0x10) != 0) {
      FUN_1005bfc90();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
  return iVar1 != 0;
}

