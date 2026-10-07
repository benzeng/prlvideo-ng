
undefined8 FUN_1005752c0(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0x1208);
  *(long **)(param_1 + 0x1208) = param_2 + 1;
  param_2[1] = param_1 + 0x1200;
  param_2[2] = (long)plVar1;
  *plVar1 = (long)(param_2 + 1);
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((uVar2 & 1) != 0) {
    *(int *)(param_1 + 0x12c8) = *(int *)(param_1 + 0x12c8) + 1;
  }
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((uVar2 & 2) != 0) {
    *(int *)(param_1 + 0x12cc) = *(int *)(param_1 + 0x12cc) + 1;
  }
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((uVar2 & 4) != 0) {
    *(int *)(param_1 + 0x12d0) = *(int *)(param_1 + 0x12d0) + 1;
  }
  return 0;
}

