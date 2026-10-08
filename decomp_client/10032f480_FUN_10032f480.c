
undefined8 FUN_10032f480(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar1 = FUN_100a4a340(*(long *)(param_1 + 0x48),param_2);
    return uVar1;
  }
  return 0x80000007;
}

