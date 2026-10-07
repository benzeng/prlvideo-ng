
undefined1 FUN_1000e9810(undefined8 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = _CGColorSpaceCreateDeviceRGB();
  lVar3 = _CGDataProviderCreateWithCFData(*param_1);
  lVar4 = _CGImageCreate(*(undefined4 *)(param_1 + 2),*(undefined4 *)((long)param_1 + 0x14),8,0x20,
                         *(undefined4 *)(param_1 + 3),lVar2,0x2006,lVar3,0,1,0);
  lVar5 = _CGImageDestinationCreateWithData(param_1[1],*(undefined8 *)PTR__kUTTypePNG_100ba25b0,1,0)
  ;
  _CGImageDestinationAddImage(lVar5,lVar4,0);
  uVar1 = _CGImageDestinationFinalize(lVar5);
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  return uVar1;
}

