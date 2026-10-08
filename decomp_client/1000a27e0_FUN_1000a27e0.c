
void FUN_1000a27e0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_48 [39];
  undefined1 local_21;
  
  FUN_1000a3d00(local_48,0);
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_50,(char *)(local_58 + *(long *)(local_58 + 0x10)),-1)
  ;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a2853;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1000a2853:
  FUN_1000a3be0(local_48,local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(local_50 + 4),0x2014)
  ;
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_60,(char *)(local_68 + *(long *)(local_68 + 0x10)),-1)
  ;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a28c1;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1000a28c1:
  FUN_1000a3be0(local_48,local_60 + *(long *)(local_60 + 0x10),*(undefined4 *)(local_60 + 4),0x2015)
  ;
  uVar2 = FUN_100a67f30(local_48);
  uVar1 = FUN_100a67f40(local_48);
  FUN_1000a2110(param_1,2,6,uVar2,uVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a293a;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1000a293a:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a296a;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1000a296a:
  FUN_100a681d0(local_48);
  return;
}

