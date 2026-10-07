
undefined8 FUN_100575490(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  lVar1 = param_2[1];
  plVar2 = (long *)param_2[2];
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  param_2[1] = (long)(param_2 + 1);
  param_2[2] = (long)(param_2 + 1);
  uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((uVar3 & 1) != 0) {
    *(int *)(param_1 + 0x12c8) = *(int *)(param_1 + 0x12c8) + -1;
  }
  uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((uVar3 & 2) != 0) {
    *(int *)(param_1 + 0x12cc) = *(int *)(param_1 + 0x12cc) + -1;
  }
  uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((uVar3 & 4) != 0) {
    *(int *)(param_1 + 0x12d0) = *(int *)(param_1 + 0x12d0) + -1;
  }
  return 0;
}

