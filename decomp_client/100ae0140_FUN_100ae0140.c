
undefined8 FUN_100ae0140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_1c [4];
  
  iVar1 = _GetEventKind(param_2);
  if (iVar1 < 0x6c) {
    if (iVar1 == 1) {
      uVar2 = 1;
    }
    else {
      if (iVar1 != 2) {
        return 0xffffd96e;
      }
      uVar2 = 0;
    }
    FUN_100ae3f10(param_3,uVar2);
  }
  else if (iVar1 == 0x6c) {
    FUN_100ae3f70(param_3);
  }
  else if (iVar1 == 0x6e) {
    _GetEventParameter(param_2,0x7768793f,0x6d61676e,0,4,0,local_1c);
    FUN_100ae3eb0(param_3);
  }
  return 0xffffd96e;
}

