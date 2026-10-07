
void FUN_1002b13c0(long param_1,int *param_2,int *param_3,short *param_4,short *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  iVar1 = 0;
  lVar7 = 0x984;
  iVar3 = 0;
  iVar5 = 0;
  iVar6 = 0;
  do {
    iVar4 = *(int *)(param_1 + -4 + lVar7);
    iVar2 = *(int *)(param_1 + lVar7);
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
    iVar4 = iVar4 + *(int *)(param_1 + -0x4c + lVar7);
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    iVar3 = iVar4;
    iVar2 = iVar2 + *(int *)(param_1 + -0x48 + lVar7);
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    iVar1 = iVar2;
    lVar7 = lVar7 + 0x8f0;
  } while (lVar7 != 0x9884);
  *param_4 = (short)iVar3 - (short)iVar6;
  *param_5 = (short)iVar1 - (short)iVar5;
  *param_2 = iVar6;
  *param_3 = iVar5;
  return;
}

