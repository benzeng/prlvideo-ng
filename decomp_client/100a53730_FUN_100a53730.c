
undefined8 FUN_100a53730(QString *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *self;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)puVar2)(uVar3,PTR_s_init_102268ca8);
  uVar4 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSNumberFormatter_10226aa98,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)puVar2)(uVar4,PTR_s_init_102268ca8);
  uVar4 = (*(code *)puVar2)(uVar4,PTR_s_autorelease_102269a10);
  (*(code *)puVar2)(uVar4,PTR_s_setNumberStyle__10226a2d0,1);
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar5 = (*(code *)puVar2)(uVar4,PTR_s_negativePrefix_10226a2f8);
  if (self == (undefined *)0x0) {
    local_40 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_40,(ID)self,PTR_s_QStringWithString__1022696d0,uVar5);
  }
  QString::trimmed();
  iVar1 = *(int *)(local_48 + 4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a53825;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a53825:
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (iVar1 != 0) {
    QString::trimmed();
    QString::operator=(param_1,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a53978;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
    goto LAB_100a53978;
  }
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_negativeSuffix_10226a300);
  if (puVar2 == (undefined *)0x0) {
    local_58 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,(ID)puVar2,PTR_s_QStringWithString__1022696d0,uVar4);
  }
  QString::trimmed();
  iVar1 = *(int *)(local_60 + 4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a538fb;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100a538fb:
  if (iVar1 != 0) {
    QString::trimmed();
    QString::operator=(param_1,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a53948;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
LAB_100a53948:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a53978;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100a53978:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_release_1022699b8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return 1;
}

