
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040f760(undefined2 *param_1,float *param_2,int param_3,float *param_4,int param_5)

{
  undefined2 uVar1;
  long lVar2;
  undefined2 *puVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  double dVar7;
  
  if (param_3 != 0) {
    lVar2 = (ulong)(param_5 - 1) + 1;
    do {
      param_3 = param_3 + -1;
      puVar3 = param_1;
      if (param_5 != 0) {
        puVar3 = param_1 + lVar2;
        pfVar4 = param_4;
        pfVar6 = param_2;
        iVar5 = param_5;
        do {
          dVar7 = DAT_100b44c90;
          if (param_4 != (float *)0x0) {
            dVar7 = (double)*pfVar4;
          }
          uVar1 = _lrintf(*pfVar6 * _DAT_100b40be8 * (float)dVar7 + _DAT_100b40be4);
          *param_1 = uVar1;
          pfVar6 = pfVar6 + 1;
          param_1 = param_1 + 1;
          pfVar4 = pfVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        param_2 = param_2 + lVar2;
      }
      param_1 = puVar3;
    } while (param_3 != 0);
  }
  return;
}

