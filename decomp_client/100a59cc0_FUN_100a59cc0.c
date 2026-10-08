
undefined1 FUN_100a59cc0(QString *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSCalendar_10226aa90,PTR_s_currentCalendar_10226a2c0);
  iVar2 = (*(code *)puVar1)(uVar3,PTR_s_firstWeekday_10226a350);
  iVar4 = 6;
  if ((iVar2 + -2 != -1) && (iVar4 = iVar2 + -2, 7 < iVar2 - 1U)) {
    return 0;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_28,&local_30,(long)iVar4,0,10,0x20);
  QString::operator=(param_1,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a59d84;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_100a59d84:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return 1;
}

