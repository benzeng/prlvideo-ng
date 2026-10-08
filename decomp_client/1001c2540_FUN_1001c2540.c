
undefined8 FUN_1001c2540(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_28 [2];
  
  uVar2 = 0xffffd96e;
  if ((*(long *)(param_3 + 8) != 0) && (iVar1 = _GetEventClass(param_2), iVar1 == 0x6b657962)) {
    iVar1 = _GetEventKind(param_2);
    if (iVar1 == 6) {
      iVar1 = _GetEventParameter(param_2,0x2d2d2d2d,0x686b6964,0,8,0,local_28);
      if ((iVar1 == 0) && (uVar2 = 0, local_28[0] != 0x7064686b)) {
        uVar2 = 0xffffd96e;
      }
    }
    else if (((iVar1 == 5) &&
             (iVar1 = _GetEventParameter(param_2,0x2d2d2d2d,0x686b6964,0,8,0,local_28), iVar1 == 0))
            && (local_28[0] == 0x7064686b)) {
      FUN_1001c2730();
      uVar2 = 0;
    }
  }
  return uVar2;
}

