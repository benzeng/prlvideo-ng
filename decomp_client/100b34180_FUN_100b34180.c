
undefined4 FUN_100b34180(long *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100b0ed90();
  if (*(char *)((long)param_1 + 100) != '\0') {
    (**(code **)(*param_1 + 0x1c0))(param_1);
  }
  return uVar1;
}

