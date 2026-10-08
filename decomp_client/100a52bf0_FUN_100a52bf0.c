
undefined8 FUN_100a52bf0(QString *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_init_102268ca8);
  uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumberFormatter_10226aa98,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_102268ca8);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_autorelease_102269a10);
  (*(code *)puVar1)(uVar3,PTR_s_setNumberStyle__10226a2d0,1);
  local_40 = (QArrayData *)QString::fromAscii_helper("%1",2);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_maximumFractionDigits_10226a2f0);
  QString::arg(&local_38,&local_40,uVar3,0,10,0x20);
  QString::operator=(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a52ce6;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100a52ce6:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a52d16;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a52d16:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_release_1022699b8);
  return 1;
}

