
/* Function Stack Size: 0x18 bytes */

char PDBarButtonItem::isFloppyImage_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  QArrayData *local_30;
  undefined1 local_22;
  
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_currentEvent_102269640);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_modifierFlags_102269650);
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  cVar1 = '\x01';
  if ((uVar4 & 0x40000) == 0) {
    if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
      local_30 = (QArrayData *)0x0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_30,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                          PTR_s_QStringWithString__1022696d0,uVar2);
    }
    cVar1 = FUN_100db9660(&local_30);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_22 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_22) goto LAB_100023926;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_100023926:
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  return cVar1;
}

