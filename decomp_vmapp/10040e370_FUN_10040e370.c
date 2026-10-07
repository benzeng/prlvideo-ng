
void FUN_10040e370(double *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  
  param_1[1] = 1.99968181261044e-313;
  *(undefined4 *)(param_1 + 4) = 0x20;
  uVar1 = *(uint *)(param_2 + 8);
  *(uint *)((long)param_1 + 0x1c) = uVar1;
  *param_1 = (double)*(uint *)(param_2 + 0xc);
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  iVar2 = (uVar1 & 0x7ffffff) << 2;
  *(int *)(param_1 + 3) = iVar2;
  *(int *)(param_1 + 2) = iVar2;
  return;
}

