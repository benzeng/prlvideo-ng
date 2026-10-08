
void FUN_1002bcec0(long *param_1,int param_2,int param_3)

{
  size_t sVar1;
  int iVar2;
  QArrayData *pQVar3;
  int iVar4;
  bool bVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  iVar4 = -0x7ffffd8b;
  if (((char)param_1[0x19] == '\0') && (iVar4 = -0x7ffffff7, param_3 == 0 && param_2 == 0)) {
    iVar4 = 0;
  }
  bVar5 = iVar4 != -0x7ffffff7;
  iVar2 = (uint)bVar5 + (uint)bVar5 * 2;
  if ((iVar2 <= DAT_10230ffd0) || (!bVar5)) {
    FUN_100df99c0("","prl_client_app",iVar2,
                  "Repack process was finished with exit code %d end exit status %d",param_2);
  }
  if (-1 < iVar4) goto LAB_1002bd0de;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  QByteArray::append((char *)&local_38);
  QProcess::readAllStandardOutput();
  QByteArray::right((int)&local_40);
  QByteArray::append((QByteArray *)&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002bcfb9;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1002bcfb9:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002bcfe9;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1002bcfe9:
  QByteArray::append((char *)&local_38);
  QProcess::readAllStandardError();
  QByteArray::right((int)&local_50);
  QByteArray::append((QByteArray *)&local_38);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002bd054;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1002bd054:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002bd084;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1002bd084:
  QByteArray::append((char *)&local_38);
  pQVar3 = local_38 + *(long *)(local_38 + 0x10);
  sVar1 = _strlen((char *)pQVar3);
  FUN_100df9f70(pQVar3,sVar1 & 0xffffffff);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002bd0de;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1002bd0de:
  (**(code **)(*param_1 + 0xb0))(param_1,iVar4);
  return;
}

