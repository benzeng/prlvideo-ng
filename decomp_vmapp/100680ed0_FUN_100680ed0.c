
int FUN_100680ed0(void)

{
  char cVar1;
  int iVar2;
  undefined8 in_RCX;
  undefined1 local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined4 local_34;
  QArrayData *local_30;
  undefined *local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_34 = 7;
  iVar2 = FUN_100680070();
  if (iVar2 != 0x8000000) goto LAB_1006810ad;
  local_28 = PTR_shared_null_100ba2188;
  FUN_10051afa0(in_RCX,&local_28);
  FUN_100013180(&local_28);
  iVar2 = 0x8000000;
  if (*(uint *)(local_30 + 4) == 0) goto LAB_1006810ad;
  QByteArray::QByteArray((QByteArray *)&local_40,2,'\0');
  cVar1 = QByteArray::endsWith((QByteArray *)&local_30);
  if (cVar1 != '\0') {
    QByteArray::resize((int)&local_30);
  }
  cVar1 = QByteArray::endsWith((QByteArray *)&local_30);
  if (cVar1 != '\0') {
    QByteArray::resize((int)&local_30);
  }
  if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
  }
  QString::fromUtf16((ushort *)&local_50,(int)local_30 + (int)*(undefined8 *)(local_30 + 0x10));
  QString::normalized(&local_48,&local_50,1,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100681021;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100681021:
  QString::split(local_58,&local_48,0,0,1);
  FUN_10051afa0(in_RCX,local_58);
  FUN_100013180(local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10068107d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10068107d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006810ad;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1006810ad:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return iVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return iVar2;
}

