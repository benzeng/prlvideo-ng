
undefined4 FUN_10047ac50(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar1 = *param_2;
  lVar2 = *(long *)(lVar1 + 0x10);
  (**(code **)(*param_1 + 0x80))();
  uVar3 = 0xffffffff;
  if (*(int *)(lVar2 + 8 + lVar1) == 1) {
    uVar3 = FUN_10047acf0(param_1,param_2,param_3,param_4);
  }
  (**(code **)(*param_1 + 0x88))(param_1);
  return uVar3;
}

