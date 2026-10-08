
undefined8 FUN_100108fe0(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined4 local_2c;
  
  if ((DAT_102311b90 != (code *)0x0) &&
     (local_2c = param_3, lVar4 = _CFNumberCreate(0,3,&local_2c), pcVar1 = DAT_102311b90, lVar4 != 0
     )) {
    uVar2 = (*DAT_1023119d8)();
    iVar3 = (*pcVar1)(uVar2,param_1,param_2,lVar4);
    _CFRelease(lVar4);
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

