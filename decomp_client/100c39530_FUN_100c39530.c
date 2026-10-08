
undefined8 FUN_100c39530(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100c377d0();
  if ((iVar1 == 0) && (*(int *)(param_2 + 0x28) != 0)) {
    uVar2 = FUN_100c22be0(param_2 + 0x20,param_1 + 0x68,param_2 + 0x20);
    return uVar2;
  }
  return 1;
}

