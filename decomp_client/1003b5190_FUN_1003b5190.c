
ulong FUN_1003b5190(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_1 == 0x1c) {
    uVar1 = FUN_1003b0b10(param_2);
    uVar2 = FUN_1003c0990(uVar1);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

