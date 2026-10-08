
undefined8 FUN_100a43230(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = _CFStringCreateWithCString
                    (*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,"prli",0x8000100);
  iVar1 = _LSSetDefaultHandlerForURLScheme(uVar2,*(undefined8 *)(param_1 + 8));
  if (iVar1 != 0) {
    FUN_100df99c0("SIATOOL","SIAToolClient",0,
                  "CSIALogicImpl LSSetDefaultHandlerForURLScheme failed, err= [%d]",iVar1);
  }
  _CFRelease(uVar2);
  return 1;
}

