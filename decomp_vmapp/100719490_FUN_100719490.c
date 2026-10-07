
int FUN_100719490(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_2[1];
  iVar3 = 1;
  uVar2 = param_1[1];
  if ((uVar1 > uVar2 || uVar2 == uVar1) && (iVar3 = -1, uVar1 <= uVar2)) {
    iVar3 = 1;
    if (*param_1 <= *param_2) {
      iVar3 = -(uint)(*param_1 < *param_2);
    }
  }
  return iVar3;
}

