
void FUN_10040fa20(float *param_1,long param_2,int param_3,float *param_4,int param_5)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  byte *pbVar4;
  int iVar5;
  float *pfVar6;
  double dVar7;
  
  dVar3 = DAT_100b44c90;
  dVar2 = DAT_100b40bd8;
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      if (param_5 != 0) {
        pfVar1 = param_1 + (ulong)(param_5 - 1) + 1;
        pbVar4 = (byte *)(param_2 + 3);
        pfVar6 = param_4;
        iVar5 = param_5;
        do {
          dVar7 = dVar3;
          if (param_4 != (float *)0x0) {
            dVar7 = (double)*pfVar6;
          }
          *param_1 = (float)((double)(float)dVar7 *
                            (double)(int)((uint)*pbVar4 << 0x18 |
                                         (uint)pbVar4[-1] << 0x10 | (uint)pbVar4[-2] << 8) * dVar2);
          param_1 = param_1 + 1;
          pfVar6 = pfVar6 + 1;
          pbVar4 = pbVar4 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        param_2 = param_2 + (ulong)(param_5 - 1) * 4 + 4;
        param_1 = pfVar1;
      }
    } while (param_3 != 0);
  }
  return;
}

