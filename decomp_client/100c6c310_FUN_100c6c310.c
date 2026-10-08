
undefined8 FUN_100c6c310(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  uVar2 = FUN_100c6fc00();
  FUN_100c14fa0(lVar1 + 4,uVar2,param_2,**(undefined4 **)(param_1 + 0x78));
  return 1;
}

