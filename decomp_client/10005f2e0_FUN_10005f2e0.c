
void FUN_10005f2e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_28;
  undefined1 local_1a;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_2,PTR_s_object_102269b08);
  lVar4 = (*(code *)puVar2)(uVar3,PTR_s_vmUuid_102269b10);
  if (lVar4 != 0) {
    if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
      local_28 = (QArrayData *)0x0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_28,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                          PTR_s_QStringWithString__1022696d0,lVar4);
    }
    FUN_10005f3d0(uVar1,&local_28);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  return;
}

