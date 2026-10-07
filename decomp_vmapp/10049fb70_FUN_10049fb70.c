
void FUN_10049fb70(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_f0;
  QVariant local_e8 [16];
  QArrayData *local_d8;
  QVariant local_d0 [16];
  QArrayData *local_c0;
  QVariant local_b8 [16];
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QVariant local_90 [16];
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QVariant local_68 [16];
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QVariant local_40 [16];
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("fullPath",8);
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
      if ((bool)local_19) goto LAB_10049fc03;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_10049fc03:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10049fc33;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10049fc33:
  QVariant::~QVariant(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10049fc6c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10049fc6c:
  local_70 = (QArrayData *)QString::fromAscii_helper("exec",4);
  FUN_1004a0ca0(local_68,param_2,&local_70);
  QVariant::toString();
  QString::toUtf8();
  std::string::assign(param_3 + 0x18);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10049fcec;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10049fcec:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10049fd1c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10049fd1c:
  QVariant::~QVariant(local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10049fd55;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10049fd55:
  local_98 = (QArrayData *)QString::fromAscii_helper("name",4);
  FUN_1004a0ca0(local_90,param_2,&local_98);
  QVariant::toString();
  QString::toUtf8();
  std::string::assign(param_3 + 0x30);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10049fde1;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_10049fde1:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10049fe11;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10049fe11:
  QVariant::~QVariant(local_90);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_19 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10049fe53;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10049fe53:
  local_c0 = (QArrayData *)QString::fromAscii_helper("bundleId",8);
  FUN_1004a0ca0(local_b8,param_2,&local_c0);
  QVariant::toString();
  QString::toUtf8();
  std::string::assign(param_3 + 0x48);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_19 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10049fef1;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_10049fef1:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_19 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10049ff27;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10049ff27:
  QVariant::~QVariant(local_b8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_19 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10049ff69;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10049ff69:
  local_d8 = (QArrayData *)QString::fromAscii_helper("kind",4);
  FUN_1004a0ca0(local_d0,param_2,&local_d8);
  uVar1 = QVariant::toUInt((bool *)local_d0);
  *(undefined4 *)(param_3 + 0x60) = uVar1;
  QVariant::~QVariant(local_d0);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_19 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10049ffeb;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10049ffeb:
  local_f0 = (QArrayData *)QString::fromAscii_helper("modifyTime",10);
  FUN_1004a0ca0(local_e8,param_2,&local_f0);
  uVar2 = QVariant::toULongLong((bool *)local_e8);
  *(undefined8 *)(param_3 + 0x68) = uVar2;
  QVariant::~QVariant(local_e8);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      UNLOCK();
      if (*(int *)local_f0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
  return;
}

