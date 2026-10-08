
undefined8 FUN_100a586f0(QString *param_1)

{
  undefined *puVar1;
  undefined *self;
  undefined8 uVar2;
  undefined8 uVar3;
  QString local_38;
  undefined1 local_2a;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_init_102268ca8);
  uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSDateFormatter_10226aaf8,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_102268ca8);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_autorelease_102269a10);
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_AMSymbol_10226a340);
  if (self == (undefined *)0x0) {
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_38,(ID)self,PTR_s_QStringWithString__1022696d0,uVar3);
  }
  QString::operator=(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_2a = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_100a587ca;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100a587ca:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_release_1022699b8);
  return 1;
}

