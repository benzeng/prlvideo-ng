
undefined4
FUN_100698e90(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x100))();
  uVar1 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,param_4,param_5);
  (**(code **)(*param_1 + 0x108))(param_1);
  return uVar1;
}

