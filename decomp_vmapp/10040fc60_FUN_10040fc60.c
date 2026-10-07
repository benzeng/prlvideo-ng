
void FUN_10040fc60(float *param_1,char *param_2,int param_3,float *param_4,uint param_5)

{
  long lVar1;
  float fVar2;
  double dVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  int iVar7;
  char *pcVar8;
  double dVar9;
  
  dVar3 = DAT_100b44c90;
  fVar2 = DAT_100b40bf4;
  if (param_3 != 0) {
    lVar1 = (ulong)(param_5 - 1) + 1;
    do {
      param_3 = param_3 + -1;
      if (param_5 != 0) {
        lVar6 = 0;
        pfVar5 = param_1;
        pcVar8 = param_2;
        if ((param_5 & 1) != 0) {
          dVar9 = dVar3;
          if (param_4 != (float *)0x0) {
            dVar9 = (double)*param_4;
          }
          *param_1 = (float)(int)*param_2 * fVar2 * (float)dVar9;
          pcVar8 = param_2 + 1;
          pfVar5 = param_1 + 1;
          lVar6 = 1;
        }
        if (param_5 - 1 != 0) {
          pfVar4 = param_4 + lVar6 + 1;
          iVar7 = (param_5 + 1) - ((int)lVar6 + 1);
          do {
            dVar9 = dVar3;
            if (param_4 != (float *)0x0) {
              dVar9 = (double)pfVar4[-1];
            }
            *pfVar5 = (float)(int)*pcVar8 * fVar2 * (float)dVar9;
            dVar9 = dVar3;
            if (param_4 != (float *)0x0) {
              dVar9 = (double)*pfVar4;
            }
            pfVar5[1] = (float)(int)pcVar8[1] * fVar2 * (float)dVar9;
            pfVar4 = pfVar4 + 2;
            pcVar8 = pcVar8 + 2;
            pfVar5 = pfVar5 + 2;
            iVar7 = iVar7 + -2;
          } while (iVar7 != 0);
        }
        param_1 = param_1 + lVar1;
        param_2 = param_2 + lVar1;
      }
    } while (param_3 != 0);
  }
  return;
}

