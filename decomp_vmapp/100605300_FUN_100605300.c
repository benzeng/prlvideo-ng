
undefined1 FUN_100605300(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_3 < 0x207d001) {
    uVar2 = 0;
  }
  else if (param_3 < 0x10400001) {
    uVar2 = param_2 == 0x200;
  }
  else {
    if (param_3 < 0x200000001) {
      uVar1 = 0x1000;
    }
    else if (param_3 < 0x400000001) {
      uVar1 = 0x2000;
    }
    else if (param_3 < 0x800000001) {
      uVar1 = 0x4000;
    }
    else {
      uVar1 = 0x8000;
    }
    uVar2 = (undefined1)(uVar1 / param_2);
  }
  return uVar2;
}

