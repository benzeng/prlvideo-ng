
undefined8 FUN_100dac710(undefined8 param_1,long param_2,undefined8 param_3,code *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  do {
    iVar1 = FUN_100dac550(param_1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_100dabea0(param_2 + 8);
    iVar1 = (*param_4)(param_3,uVar2);
  } while (iVar1 == 0);
  return 1;
}

