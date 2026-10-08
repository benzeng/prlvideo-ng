
undefined8 FUN_1007c6ac0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  local_40.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("parallels.VmExec.guest.cross",0x1c);
  iVar1 = FUN_10018f860(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 8) {
    QString::fromUtf8_helper((char *)&local_38,0x1e187d8);
    QString::operator=(&local_40,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1007c6c18;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
  else {
    iVar1 = FUN_10018f860(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 9) {
      QString::fromUtf8_helper((char *)&local_30,0x1e187fe);
      QString::operator=(&local_40,&local_30);
      if (*(int *)local_30.field0_0x0 != -1) {
        if (*(int *)local_30.field0_0x0 != 0) {
          LOCK();
          *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
          local_19 = *(int *)local_30.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1007c6c18;
        }
        QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
      }
    }
    else {
      iVar1 = FUN_10018f860(*(undefined8 *)(param_1 + 0x18));
      uVar2 = 0;
      if (iVar1 != 7) goto LAB_1007c6c38;
      QString::fromUtf8_helper((char *)&local_28,0x1e18824);
      QString::operator=(&local_40,&local_28);
      if (*(int *)local_28.field0_0x0 != -1) {
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          local_19 = *(int *)local_28.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1007c6c18;
        }
        QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
      }
    }
  }
LAB_1007c6c18:
  uVar2 = FUN_10018c280(*(undefined8 *)(param_1 + 0x18));
  uVar2 = FUN_100319bf0(uVar2);
  uVar2 = FUN_10032d8b0(uVar2,&local_40);
LAB_1007c6c38:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar2;
}

