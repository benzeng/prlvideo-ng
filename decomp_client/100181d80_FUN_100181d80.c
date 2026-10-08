
bool FUN_100181d80(double *param_1,double *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  double *pdVar4;
  double *pdVar5;
  
  uVar1 = *(uint *)(param_1 + 5);
  pdVar4 = param_1 + 1;
  if (uVar1 < 2) {
    pdVar4 = param_1;
  }
  uVar2 = *(uint *)(param_2 + 5);
  pdVar5 = param_2 + 1;
  if (uVar2 < 2) {
    pdVar5 = param_2;
  }
  bVar3 = true;
  if (*pdVar5 <= *pdVar4) {
    if (*pdVar4 <= *pdVar5) {
      if ((int)uVar2 <= (int)uVar1) {
        if ((int)uVar2 < (int)uVar1) {
          bVar3 = false;
        }
        else if (param_1[4] == 0.0) {
          bVar3 = false;
        }
        else if (param_2[4] == 0.0) {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)((long)param_1[4] + 0x18) < *(int *)((long)param_2[4] + 0x18);
        }
      }
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}

