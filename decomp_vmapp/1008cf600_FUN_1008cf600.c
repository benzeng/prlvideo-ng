
undefined8 FUN_1008cf600(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_20 [3];
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0;
  }
  else {
    local_20[1] = 0;
    local_20[0] = param_2;
    lVar1 = FUN_100885dc0(*(undefined8 *)(param_1 + 0x10),local_20);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
    }
  }
  return uVar2;
}

