
byte FUN_1005cbf40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  QFileInfo local_60 [8];
  QFileInfo local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  lVar4 = FUN_10015d0a0(param_1,param_3);
  if ((lVar4 != 0) && (iVar3 = FUN_10018bce0(lVar4), iVar3 != 3)) {
    return 0;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  QString::arg(&local_30,&local_38,param_2,0,0x20);
  QString::arg(&local_28,&local_30,param_3,0,0x20);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005cbfe4;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005cbfe4:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005cc014;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005cc014:
  local_50 = (QArrayData *)QString::fromAscii_helper("%1/%2.pvm",9);
  QString::arg(&local_48,&local_50,param_2,0,0x20);
  QString::arg(&local_40,&local_48,param_3,0,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005cc089;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005cc089:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005cc0b9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005cc0b9:
  QFileInfo::QFileInfo(local_58,&local_28);
  cVar1 = QFileInfo::exists();
  if (cVar1 == '\0') {
    QFileInfo::QFileInfo(local_60,&local_40);
    bVar2 = QFileInfo::exists();
    QFileInfo::~QFileInfo(local_60);
    bVar2 = bVar2 ^ 1;
  }
  else {
    bVar2 = 0;
  }
  QFileInfo::~QFileInfo(local_58);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005cc134;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005cc134:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return bVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return bVar2;
}

