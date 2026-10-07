
void FUN_1004a07e0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  QArrayData *local_78;
  QVariant local_70 [16];
  QArrayData *local_60;
  QVariant local_58 [16];
  QArrayData *local_48;
  QVariant local_40 [16];
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("path",4);
  FUN_1004a0ca0(local_40,param_2,&local_48);
  QVariant::toString();
  QString::toUtf8();
  std::string::assign(param_3);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004a0870;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1004a0870:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004a08a0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004a08a0:
  QVariant::~QVariant(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004a08d9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004a08d9:
  local_60 = (QArrayData *)QString::fromAscii_helper("kind",4);
  FUN_1004a0ca0(local_58,param_2,&local_60);
  uVar1 = QVariant::toUInt((bool *)local_58);
  *(undefined4 *)(param_3 + 0x18) = uVar1;
  QVariant::~QVariant(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004a0946;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004a0946:
  local_78 = (QArrayData *)QString::fromAscii_helper("level",5);
  FUN_1004a0ca0(local_70,param_2,&local_78);
  uVar1 = QVariant::toUInt((bool *)local_70);
  *(undefined4 *)(param_3 + 0x1c) = uVar1;
  QVariant::~QVariant(local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
  return;
}

