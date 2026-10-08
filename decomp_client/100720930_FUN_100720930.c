
undefined8 FUN_100720930(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100152280();
  if (*(int *)(*param_2 + 4) == 0) {
    param_2 = (long *)(param_1 + 0x18);
  }
  lVar2 = FUN_1001548f0(uVar1,param_2);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10018c280(lVar2);
  }
  return uVar1;
}

