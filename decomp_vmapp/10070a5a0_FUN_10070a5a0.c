
undefined4
FUN_10070a5a0(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0xd0))();
  uVar1 = (**(code **)(*(long *)param_1[2] + 0x88))
                    ((long *)param_1[2],param_2,param_3,param_4,param_5);
  (**(code **)(*param_1 + 0xd8))(param_1);
  return uVar1;
}

