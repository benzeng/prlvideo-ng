
void FUN_10035ca80(undefined8 *param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_2 + 0x28);
  if (0 < param_3 - *(int *)(param_1 + 9)) {
    *(int *)(param_1 + 9) = param_3;
  }
  FUN_1002fcd60(*param_1,param_1 + 9,uVar1,4);
  return;
}

