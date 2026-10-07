
undefined8 FUN_10056bc00(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x128) == param_1 + 0x128) {
    if ((*(long *)(param_1 + 0x148) == param_2) || (*(int *)(param_1 + 0x150) == 0)) {
      uVar1 = CONCAT71((int7)((ulong)(param_1 + 0x128) >> 8),1);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

