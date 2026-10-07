
byte FUN_10000be50(long param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
LAB_10000be7b:
    _strlen((char *)param_2);
    pbVar4 = param_2;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
    pbVar4 = (byte *)0x0;
    if (param_2 != (byte *)0x0) goto LAB_10000be7b;
  }
  QString::fromUtf8_helper((char *)&local_30,(int)pbVar4);
  QString::normalized(&local_28,&local_30,1,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10000bed8;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10000bed8:
  cVar1 = QtPrivate::QStringList_contains(param_1 + 0x38,&local_28,0);
  if (cVar1 != '\0') {
    bVar2 = 0;
    goto LAB_10000bfaf;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("uninstall ",10);
  iVar3 = QString::indexOf(&local_28,&local_38,0,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10000bf4d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10000bf4d:
  if (iVar3 != -1) {
    bVar2 = 0;
    goto LAB_10000bfaf;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("com.",4);
  bVar2 = QString::startsWith(&local_28,&local_40,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10000bfac;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10000bfac:
  bVar2 = bVar2 ^ 1;
LAB_10000bfaf:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return bVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return bVar2;
}

