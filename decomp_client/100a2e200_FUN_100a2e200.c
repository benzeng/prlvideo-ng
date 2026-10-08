
undefined8 FUN_100a2e200(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 in_RCX;
  
  lVar2 = FUN_100a33d30();
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = _CGColorSpaceCreateDeviceRGB();
  lVar4 = _CGImageCreateCopyWithColorSpace(lVar2,uVar3);
  _CGColorSpaceRelease(uVar3);
  if (lVar4 == 0) {
    lVar4 = lVar2;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","CPInterceptor",2,"convertImageToFlavorEx color space not converted");
    }
  }
  else {
    _CFRelease(lVar2);
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","CPInterceptor",2,"convertImageToFlavorEx color space converted");
    }
  }
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSBitmapImageRep_10226aab0,PTR_s_alloc_102268b58);
  lVar2 = (*(code *)puVar1)(uVar3,PTR_s_initWithCGImage__10226a410,lVar4);
  if (lVar2 == 0) {
    _CFRelease(lVar4);
    return 0;
  }
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSDictionary_10226a900,PTR_s_dictionary_1022698f0);
  lVar5 = _CFStringCompare(in_RCX,*(undefined8 *)PTR__kUTTypePNG_1021e1c10,0);
  if (lVar5 == 0) {
    uVar6 = 4;
  }
  else {
    lVar5 = _CFStringCompare(in_RCX,*(undefined8 *)PTR__kUTTypeBMP_1021e1be8,0);
    if (lVar5 == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
      lVar5 = _CFStringCompare(in_RCX,*(undefined8 *)PTR__kUTTypeTIFF_1021e1c20,0);
      if (lVar5 != 0) goto LAB_100a2e380;
      uVar6 = 0;
    }
  }
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (lVar2,PTR_s_representationUsingType_properti_10226a248,uVar6,uVar3);
LAB_100a2e380:
  _CFRelease(lVar4);
  (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,PTR_s_release_1022699b8);
  return uVar6;
}

