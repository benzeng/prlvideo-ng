
undefined8 FUN_10038ead0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = param_2[2];
  iVar1 = *param_3;
  if (iVar1 < iVar9) {
    iVar2 = *param_2;
    iVar3 = param_3[2];
    if (iVar2 < iVar3) {
      iVar4 = param_2[3];
      iVar5 = param_3[1];
      if (iVar5 < iVar4) {
        iVar6 = param_2[1];
        iVar7 = param_3[3];
        if (iVar6 < iVar7) {
          if (iVar1 <= iVar2) {
            iVar1 = iVar2;
          }
          iVar10 = iVar9;
          if (iVar3 <= iVar9) {
            iVar10 = iVar3;
          }
          if (iVar3 < iVar2) {
            iVar10 = iVar9;
          }
          if (iVar5 <= iVar6) {
            iVar5 = iVar6;
          }
          iVar9 = iVar4;
          if (iVar7 <= iVar4) {
            iVar9 = iVar7;
          }
          if (iVar7 < iVar6) {
            iVar9 = iVar4;
          }
          *param_1 = iVar1;
          param_1[2] = iVar10;
          param_1[1] = iVar5;
          param_1[3] = iVar9;
          uVar8 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
        }
        else {
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0;
      }
    }
    else {
      uVar8 = 0;
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

