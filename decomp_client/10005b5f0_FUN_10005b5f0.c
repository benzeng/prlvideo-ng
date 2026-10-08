
undefined8 FUN_10005b5f0(long param_1,QString *param_2)

{
  long lVar1;
  undefined8 uVar2;
  QString local_28;
  undefined1 local_1a;
  
  lVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1022699d0,
                     &cf_bundle_identifier);
  uVar2 = 6;
  if (lVar1 != 0) {
    if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
      local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_28,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                          PTR_s_QStringWithString__1022696d0,lVar1);
    }
    QString::operator=(param_2,&local_28);
    uVar2 = 0;
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_28.field0_0x0 != 0) {
          return 0;
        }
        local_1a = 0;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
  return uVar2;
}

