
long FUN_100a33d30(undefined8 param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_40 = *(undefined8 *)PTR__kCGImageSourceTypeIdentifierHint_1021e1978;
  uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
  local_48 = param_3;
  local_38 = lVar2;
  lVar1 = _CFDataCreateWithBytesNoCopy
                    (uVar5,param_1,(long)param_2,*(undefined8 *)PTR__kCFAllocatorNull_1021e18d8);
  lVar4 = 0;
  if (lVar1 == 0) goto LAB_100a33e94;
  lVar2 = _CFDictionaryCreate(uVar5,&local_40,&local_48,1,0,0);
  if (lVar2 == 0) {
LAB_100a33e7f:
    _CFRelease(lVar1);
    lVar4 = 0;
  }
  else {
    lVar3 = _CGImageSourceCreateWithData(lVar1,lVar2);
    if (lVar3 == 0) {
LAB_100a33e77:
      _CFRelease(lVar2);
      goto LAB_100a33e7f;
    }
    lVar4 = _CFStringCompare(param_3,*(undefined8 *)PTR__kUTTypePDF_1021e1c08,0);
    if (lVar4 == 0) {
      local_50 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageIfAbsent_1021e1970;
      local_58 = *(undefined8 *)PTR__kCFBooleanTrue_1021e18e0;
      uVar5 = _CFDictionaryCreate(uVar5,&local_50,&local_58,1,0,0);
      lVar4 = _CGImageSourceCreateThumbnailAtIndex(lVar3,0,uVar5);
      _CFRelease(uVar5);
    }
    else {
      lVar4 = _CGImageSourceCreateImageAtIndex(lVar3,0,0);
    }
    _CFRelease(lVar3);
    if (lVar4 == 0) goto LAB_100a33e77;
    _CFRelease(lVar2);
    _CFRelease(lVar1);
  }
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100a33e94:
  if (lVar2 == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

