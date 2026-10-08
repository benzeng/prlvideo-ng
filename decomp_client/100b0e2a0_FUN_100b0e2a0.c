
undefined8 FUN_100b0e2a0(long param_1,ulong param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_2 < *(ulong *)(param_1 + 0x50)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)(param_3 + param_2 >> 8),param_3 + param_2 <= *(ulong *)(param_1 + 0x58))
    ;
  }
  return uVar1;
}

