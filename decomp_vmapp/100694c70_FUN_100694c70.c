
void FUN_100694c70(long *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((long)param_1 + 0x1851c) * 4 + (int)param_1[0x30a2];
  *(int *)(param_1 + 0x3123) = iVar1;
  uVar2 = iVar1 + (int)*(undefined8 *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
  *(uint *)(param_1 + 0x3123) = uVar2;
  *(int *)(param_1 + 0x3123) =
       (int)((ulong)uVar2 / *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1));
  return;
}

