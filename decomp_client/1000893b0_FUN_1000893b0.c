
undefined8 FUN_1000893b0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  QPixmap local_80 [32];
  QPixmap local_60 [32];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  FUN_10008c2a0(local_60,param_1,0);
  FUN_10008c2a0(local_80,param_1,1);
  FUN_10008c3f0(local_60,local_80);
  local_40 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithUnsignedInt__102269200,
                        0);
  local_30 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_imageWithQPixmap__1022691f8,
                        local_60);
  local_38 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithUnsignedInt__102269200,
                        1);
  local_28 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_imageWithQPixmap__1022691f8,
                        local_80);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSDictionary_10226a900,
                     PTR_s_dictionaryWithObjects_forKeys_co_1022698c8,&local_30,&local_40,2);
  QPixmap::~QPixmap(local_80);
  QPixmap::~QPixmap(local_60);
  if (lVar1 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

