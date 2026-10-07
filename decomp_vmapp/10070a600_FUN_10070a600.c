
undefined4
FUN_10070a600(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  
  (**(code **)(*(long *)(param_1 + -8) + 0xd0))(param_1 + -8);
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x88))
                    (*(long **)(param_1 + 8),param_2,param_3,param_4,param_5);
  (**(code **)(*(long *)(param_1 + -8) + 0xd8))(param_1 + -8);
  return uVar1;
}

