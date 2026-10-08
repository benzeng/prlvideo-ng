
undefined8 FUN_100cec470(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  QArrayData *pQVar3;
  undefined8 uVar4;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("usb",3);
  local_50 = (QArrayData *)QString::fromAscii_helper("present",7);
  pcVar1 = *(code **)*param_2;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_29 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_29 = *(int *)local_50 != 0;
    UNLOCK();
  }
  local_48 = pQVar3;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
  local_58 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
  (*pcVar1)(&local_40,param_2,&local_48,&local_50,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cec53f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cec53f:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cec56f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cec56f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cec59f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cec59f:
  local_60 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
  iVar2 = QString::compare(&local_40,&local_60,0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cec5f5;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cec5f5:
  if (iVar2 == 0) {
    *(undefined2 *)(param_1 + 0x2c8) = 0x101;
    local_68.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("generic.autoconnect",0x13);
    QString::operator=(&local_38,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_29 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100cec667;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_100cec667:
    pcVar1 = *(code **)*param_2;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    local_80 = (QArrayData *)local_38.field0_0x0;
    if (1 < *(int *)local_38.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
    }
    local_78 = pQVar3;
    local_88 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
    (*pcVar1)(&local_70,param_2,&local_78,&local_80,&local_88);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100cec6f8;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100cec6f8:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100cec728;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100cec728:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_29 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100cec758;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100cec758:
    local_90 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
    iVar2 = QString::compare(&local_70,&local_90,0);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_29 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100cec7ba;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100cec7ba:
    *(bool *)(param_1 + 0x2ca) = iVar2 == 0;
    uVar4 = 0x8000000;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100cec7f9;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x2c8) = 0;
    uVar4 = 0x8117000;
  }
LAB_100cec7f9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cec829;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cec829:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cec859;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100cec859:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return uVar4;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return uVar4;
}

