
void FUN_10040f830(undefined1 *param_1,float *param_2,int param_3,float *param_4,uint param_5)

{
  long lVar1;
  float fVar2;
  double dVar3;
  float *pfVar4;
  undefined1 *puVar5;
  long lVar6;
  int iVar7;
  float *pfVar8;
  double dVar9;
  
  dVar3 = DAT_100b44c90;
  fVar2 = DAT_100b40bec;
  if (param_3 != 0) {
    lVar1 = (ulong)(param_5 - 1) + 1;
    do {
      param_3 = param_3 + -1;
      if (param_5 != 0) {
        lVar6 = 0;
        puVar5 = param_1;
        pfVar8 = param_2;
        if ((param_5 & 1) != 0) {
          dVar9 = dVar3;
          if (param_4 != (float *)0x0) {
            dVar9 = (double)*param_4;
          }
          *param_1 = (char)(int)(*param_2 * fVar2 * (float)dVar9);
          pfVar8 = param_2 + 1;
          puVar5 = param_1 + 1;
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
            *puVar5 = (char)(int)(*pfVar8 * fVar2 * (float)dVar9);
            dVar9 = dVar3;
            if (param_4 != (float *)0x0) {
              dVar9 = (double)*pfVar4;
            }
            puVar5[1] = (char)(int)(pfVar8[1] * fVar2 * (float)dVar9);
            pfVar4 = pfVar4 + 2;
            pfVar8 = pfVar8 + 2;
            puVar5 = puVar5 + 2;
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

