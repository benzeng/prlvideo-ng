
undefined8 FUN_1008cf5c0(long param_1,long param_2)

{
  undefined8 uVar1;
  long local_20 [3];
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_20[1] = 0;
    local_20[0] = param_2;
    uVar1 = FUN_100885dc0(*(undefined8 *)(param_1 + 0x10),local_20);
  }
  return uVar1;
}

