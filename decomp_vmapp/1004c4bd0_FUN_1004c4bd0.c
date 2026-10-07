
bool FUN_1004c4bd0(long *param_1,char *param_2,QString *param_3)

{
  long lVar1;
  char cVar2;
  size_t sVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  QArrayData *local_58;
  QMapNodeBase *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  iVar5 = -1;
  if (param_2 != (char *)0x0) {
    sVar3 = _strlen(param_2);
    iVar5 = (int)sVar3;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(param_2,iVar5);
  if (*(long *)(*param_1 + 0x10) == 0) {
LAB_1004c4c77:
    lVar4 = *param_1 + 8;
  }
  else {
    lVar1 = *(long *)(*param_1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar4 = lVar1, cVar2 = operator<((QString *)(lVar4 + 0x18),&local_40), cVar2 == '\0') {
        lVar1 = *(long *)(lVar4 + 8);
        lVar6 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_1004c4c66;
      }
      lVar1 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    lVar4 = lVar6;
    if (lVar6 == 0) goto LAB_1004c4c77;
LAB_1004c4c66:
    cVar2 = operator<(&local_40,(QString *)(lVar4 + 0x18));
    if (cVar2 != '\0') goto LAB_1004c4c77;
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c4cae;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1004c4cae:
  if (lVar4 == *param_1 + 8) {
    return false;
  }
  QVariant::toMap();
  local_58 = (QArrayData *)QString::fromAscii_helper("path",4);
  FUN_1004a0bc0(&local_50,&local_58);
  QVariant::toString();
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c4d2c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004c4d2c:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c4d74;
    }
    if (*(long *)(local_50 + 0x10) != 0) {
      FUN_1004a11c0();
      QMapDataBase::freeTree(local_50,(int)*(undefined8 *)(local_50 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_50);
  }
LAB_1004c4d74:
  bVar7 = *(int *)(local_48.field0_0x0 + 4) != 0;
  if (bVar7) {
    QString::operator=(param_3,&local_48);
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return bVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return bVar7;
}

