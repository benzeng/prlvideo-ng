
undefined8 FUN_100891110(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  uVar2 = FUN_100894680();
  FUN_100839da0(lVar1 + 4,uVar2,param_2,**(undefined4 **)(param_1 + 0x78));
  return 1;
}

