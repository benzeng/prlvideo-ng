
cfstringStruct * FUN_100a432b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  bool bVar8;
  undefined8 local_30;
  
  pcVar3 = (cfstringStruct *)_LSCopyDefaultHandlerForURLScheme(param_2);
  if (pcVar3 == (cfstringStruct *)0x0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
    pcVar3 = (cfstringStruct *)0x0;
    uVar4 = _CFStringCreateMutableCopy(uVar1,0,param_2);
    _CFStringAppend(uVar4,&cf__);
    uVar5 = _CFURLCreateWithString(uVar1,uVar4,0);
    _CFRelease(uVar4);
    iVar2 = _LSGetApplicationForURL(uVar5,0xffffffff,0,&local_30);
    if (iVar2 == 0) {
      lVar6 = _CFBundleCreate(uVar1,local_30);
      pcVar3 = (cfstringStruct *)0x0;
      if (lVar6 != 0) {
        pcVar7 = (cfstringStruct *)_CFBundleGetIdentifier(lVar6);
        pcVar3 = (cfstringStruct *)0x0;
        if (pcVar7 != (cfstringStruct *)0x0) {
          _CFRetain(pcVar7);
          pcVar3 = pcVar7;
        }
      }
      _CFRelease(local_30);
    }
    _CFRelease(uVar5);
    bVar8 = iVar2 != 0;
  }
  else {
    bVar8 = false;
  }
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar3 = &cf_com_apple_safari;
  }
  if (bVar8) {
    pcVar3 = &cf_com_apple_safari;
  }
  return pcVar3;
}

