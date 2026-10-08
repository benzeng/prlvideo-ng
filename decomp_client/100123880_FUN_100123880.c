
undefined1 FUN_100123880(undefined8 param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  FUN_10018f860();
  uVar3 = FUN_10018f890(param_1);
  if (10 < (uint)uVar3 - 0x806) {
    uVar1 = (uint)((ulong)uVar3 >> 8);
    if (0x10 < (uVar1 & 0xffffff)) {
      return 0;
    }
    if ((0x18200U >> (uVar1 & 0x1f) & 1) == 0) {
      return 0;
    }
  }
  if (((uint)uVar3 & 0xffffff00) == 0x1000) {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_10018d490(param_1);
    uVar3 = FUN_10016f500(uVar3);
    uVar2 = FUN_10061b4d0(uVar3,0x80);
  }
  return uVar2;
}

