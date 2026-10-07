
undefined8
FUN_1004e5f50(long *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)((long)param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 6) = param_3;
  *(uint *)((long)param_1 + 0x34) = param_4;
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if ((iVar1 != 2) && (uVar2 = FUN_1004e30b0(param_1[4],param_2,param_3,param_4), (int)uVar2 != 0))
  {
    return uVar2;
  }
  if ((param_4 & 0x1000) != 0) {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  (**(code **)(*param_1 + 0x40))(param_1,param_5);
  return 0;
}

