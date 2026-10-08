
ulong FUN_100b71130(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if ((*param_2 == 0) || (*(long *)(*param_2 + 0x10) == 0)) {
    uVar3 = FUN_100b93a10(0,0,0);
    return uVar3;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("%1:%2",5);
  uVar4 = 0;
  if (*param_2 != 0) {
    uVar4 = *(undefined8 *)(*param_2 + 0x10);
  }
  QString::arg(&local_40,&local_48,uVar4,0,0x20);
  QString::arg(&local_38,&local_40,*(undefined2 *)(*(long *)(*param_2 + 0x10) + 8),0,10,0x20);
  QString::toUtf8();
  pQVar5 = local_30 + *(long *)(local_30 + 0x10);
  QString::toUtf8();
  lVar1 = *(long *)(local_50 + 0x10);
  QString::toUtf8();
  uVar2 = FUN_100b93a10(pQVar5,local_50 + lVar1,local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b7124d;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100b7124d:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b7127d;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100b7127d:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b712ad;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100b712ad:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b712dd;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b712dd:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b7130d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100b7130d:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return (ulong)uVar2;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return (ulong)uVar2;
}

