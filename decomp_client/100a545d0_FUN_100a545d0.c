
undefined8 FUN_100a545d0(QString *param_1)

{
  undefined *puVar1;
  undefined *self;
  undefined8 uVar2;
  undefined8 uVar3;
  QString local_40;
  undefined1 local_32;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_init_102268ca8);
  uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumberFormatter_10226aa98,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_102268ca8);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_autorelease_102269a10);
  (*(code *)puVar1)(uVar3,PTR_s_setNumberStyle__10226a2d0,2);
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_currencySymbol_10226a328);
  if (self == (undefined *)0x0) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_40,(ID)self,PTR_s_QStringWithString__1022696d0,uVar3);
  }
  QString::operator=(param_1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_100a546c1;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100a546c1:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_release_1022699b8);
  return 1;
}

