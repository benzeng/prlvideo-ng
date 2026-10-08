
undefined8 FUN_100bce2a0(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (param_2 != (undefined1 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = 0;
    if (((uint)uVar1 & 0xff000000) == 0x3000000) {
      *param_2 = (char)((ulong)uVar1 >> 8);
      param_2[1] = (char)uVar1;
      uVar2 = 2;
    }
  }
  return uVar2;
}

