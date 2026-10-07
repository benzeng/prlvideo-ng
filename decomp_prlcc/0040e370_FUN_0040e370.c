
void FUN_0040e370(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_1[2];
  piVar3 = (int *)FUN_0040e360();
  iVar2 = *piVar3;
  *param_1 = *param_1 + 1;
  param_1[2] = iVar1 + iVar2 + 0xc;
  FUN_0040e290(param_1);
  return;
}

