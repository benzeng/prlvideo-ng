
char FUN_1002c1d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  undefined1 local_78 [24];
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  int local_3c;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  iVar2 = FUN_1002c6e30(param_2);
  if (iVar2 != 0) {
    return '\x02';
  }
  cVar1 = FUN_1006d81f0(1);
  if (cVar1 != '\0') {
    return '\x02';
  }
  iVar2 = FUN_1002c2250();
  if (iVar2 == 0) {
    if (DAT_1011c568c < 0) {
      return '\0';
    }
    FUN_1008e3970("","USB",0,"Can\'t eject usb device");
    return '\0';
  }
  iVar2 = FUN_1002bcd80();
  if (iVar2 != 0) {
    FUN_10006a060(local_78);
    FUN_10006a120(local_78,param_3,0);
    local_98 = (void *)0x0;
    pvStack_90 = (void *)0x0;
    local_88 = 0;
    FUN_1000648b0(DAT_1011c3650,0x80000471,&local_98,local_78);
    if (local_98 != (void *)0x0) {
      if (pvStack_90 != local_98) {
        pvStack_90 = (void *)((~((long)pvStack_90 + (-4 - (long)local_98)) & 0xfffffffffffffffcU) +
                             (long)pvStack_90);
      }
      operator_delete(local_98);
    }
    FUN_10006a680(local_78);
    return '\0';
  }
  if (local_3c == 0) {
    bVar3 = false;
    goto LAB_1002c2071;
  }
  QString::QString(&local_38,0x7c);
  QString::section(&local_48,param_2,&local_38,1,1,0);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002c1ef4;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1002c1ef4:
  local_50 = (QArrayData *)QString::fromAscii_helper("0830",4);
  iVar2 = QString::compare(&local_48,&local_50,1);
  bVar3 = true;
  if (iVar2 != 0) {
    QString::QString(&local_30,0x7c);
    QString::section(&local_58,param_2,&local_30,5,5,0);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002c1f81;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_1002c1f81:
    local_60 = (QArrayData *)QString::fromAscii_helper("PalmSN12345678",0xe);
    iVar2 = QString::compare(&local_58,&local_60,1);
    bVar3 = iVar2 == 0;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002c1fdd;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1002c1fdd:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002c200d;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_1002c200d:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002c203d;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002c203d:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_1002c2071;
      local_21 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002c2071:
  return bVar3 * '\x02' + '\x01';
}

