
undefined8 FUN_100abade0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (**(long **)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
    uVar2 = (*(code *)puVar1)(uVar2,PTR_s_init_102268ca8);
    uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_alloc_102268b58);
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (DAT_100e11058,DAT_100e11058,uVar3,PTR_s_initWithCGImage_size__10226a290,
                       param_2);
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_autorelease_102269a10);
    uVar4 = 0;
    if (param_3 != 0) {
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_alloc_102268b58);
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (DAT_100e11058,DAT_100e11058,uVar4,PTR_s_initWithCGImage_size__10226a290,
                         param_3);
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_autorelease_102269a10);
    }
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (**(undefined8 **)(param_1 + 8),PTR_s_view_102269138);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar5,PTR_s_setNormalImage_pressed__10226a490,uVar3,uVar4);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_release_1022699b8);
    uVar2 = 1;
  }
  return uVar2;
}

