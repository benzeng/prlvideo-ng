
undefined8 FUN_1008d5e90(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1008d5960(param_1,0x32);
  if (lVar1 != 0) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = FUN_100821870(0x15);
  }
  uVar2 = FUN_1008d5b70(param_1,0x32,6,param_2);
  return uVar2;
}

