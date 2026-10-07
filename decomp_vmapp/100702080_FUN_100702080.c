
void FUN_100702080(long *param_1)

{
  undefined4 uVar1;
  
  if ((int)param_1[2] == 0) {
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
    *(undefined4 *)(param_1 + 2) = uVar1;
  }
  return;
}

