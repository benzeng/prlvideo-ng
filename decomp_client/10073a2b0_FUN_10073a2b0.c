
undefined8 * FUN_10073a2b0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 local_40 [24];
  
  if (*(long *)(param_2[2] + 0x18) == 0) {
    *(undefined4 *)(param_1 + 1) = 0x80000000;
    *param_1 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x178))(local_40,param_2);
    (**(code **)(**(long **)(param_2[2] + 0x18) + 0x90))
              (param_1,*(long **)(param_2[2] + 0x18),local_40,param_4);
  }
  return param_1;
}

