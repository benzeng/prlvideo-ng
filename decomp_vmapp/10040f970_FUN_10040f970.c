
void FUN_10040f970(float *param_1,int *param_2,int param_3,float *param_4,int param_5)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  double dVar8;
  
  dVar3 = DAT_100b44c90;
  dVar2 = DAT_100b40bd8;
  if (param_3 != 0) {
    lVar6 = (ulong)(param_5 - 1) + 1;
    do {
      param_3 = param_3 + -1;
      if (param_5 != 0) {
        pfVar1 = param_1 + lVar6;
        pfVar4 = param_4;
        piVar5 = param_2;
        iVar7 = param_5;
        do {
          dVar8 = dVar3;
          if (param_4 != (float *)0x0) {
            dVar8 = (double)*pfVar4;
          }
          *param_1 = (float)((double)(float)dVar8 * (double)*piVar5 * dVar2);
          piVar5 = piVar5 + 1;
          param_1 = param_1 + 1;
          pfVar4 = pfVar4 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        param_2 = param_2 + lVar6;
        param_1 = pfVar1;
      }
    } while (param_3 != 0);
  }
  return;
}

