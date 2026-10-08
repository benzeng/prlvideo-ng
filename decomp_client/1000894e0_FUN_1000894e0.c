
undefined8 FUN_1000894e0(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_a8;
  QPixmap local_a0 [32];
  QArrayData *local_80;
  QPixmap local_78 [39];
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  ResourceUtils::getOsIconPath(&local_80,param_1,param_2,4);
  QPixmap::QPixmap(local_78,&local_80,0,0);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_51 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_10008955e;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10008955e:
  ResourceUtils::getOsIconPath(&local_a8,param_1,param_2,2);
  QPixmap::QPixmap(local_a0,&local_a8,0,0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_51 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_1000895c2;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1000895c2:
  FUN_10008c3f0(local_78,local_a0);
  local_50 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithUnsignedInt__102269200,
                        0);
  local_40 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_imageWithQPixmap__1022691f8,
                        local_78);
  local_48 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithUnsignedInt__102269200,
                        1);
  local_38 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_imageWithQPixmap__1022691f8,
                        local_a0);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSDictionary_10226a900,
                     PTR_s_dictionaryWithObjects_forKeys_co_1022698c8,&local_40,&local_50,2);
  QPixmap::~QPixmap(local_a0);
  QPixmap::~QPixmap(local_78);
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

