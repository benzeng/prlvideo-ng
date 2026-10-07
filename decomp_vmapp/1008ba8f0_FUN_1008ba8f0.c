
undefined8 FUN_1008ba8f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1008c1440(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_1008c1000(*(undefined8 *)(param_1 + 0x28),lVar1);
    return uVar2;
  }
  return 0;
}

