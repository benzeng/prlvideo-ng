
bool FUN_100a54890(QString *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *self;
  undefined8 uVar3;
  undefined8 uVar4;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)puVar2)(uVar3,PTR_s_init_102268ca8);
  uVar4 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSNumberFormatter_10226aa98,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)puVar2)(uVar4,PTR_s_init_102268ca8);
  uVar4 = (*(code *)puVar2)(uVar4,PTR_s_autorelease_102269a10);
  (*(code *)puVar2)(uVar4,PTR_s_setNumberStyle__10226a2d0,2);
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar4 = (*(code *)puVar2)(uVar4,PTR_s_currencyGroupingSeparator_10226a338);
  if (self == (undefined *)0x0) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_40,(ID)self,PTR_s_QStringWithString__1022696d0,uVar4);
  }
  QString::operator=(param_1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a54981;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100a54981:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_release_1022699b8);
  QString::trimmed();
  iVar1 = *(int *)(local_48 + 4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_100a549d0;
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a549d0:
  return iVar1 != 0;
}

