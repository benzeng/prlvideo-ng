
void FUN_10040f680(long param_1,float *param_2,int param_3,float *param_4,int param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined1 *puVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  double dVar8;
  
  dVar2 = DAT_100b44c90;
  dVar1 = DAT_100b40bd0;
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      if (param_5 != 0) {
        puVar4 = (undefined1 *)(param_1 + 3);
        pfVar5 = param_2;
        pfVar7 = param_4;
        iVar6 = param_5;
        do {
          dVar8 = dVar2;
          if (param_4 != (float *)0x0) {
            dVar8 = (double)*pfVar7;
          }
          iVar3 = (int)((double)(float)dVar8 * (double)*pfVar5 * dVar1);
          puVar4[-2] = (char)((uint)iVar3 >> 8);
          puVar4[-1] = (char)((uint)iVar3 >> 0x10);
          *puVar4 = (char)((uint)iVar3 >> 0x18);
          puVar4[-3] = 0;
          pfVar5 = pfVar5 + 1;
          pfVar7 = pfVar7 + 1;
          puVar4 = puVar4 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        param_2 = param_2 + (ulong)(param_5 - 1) + 1;
        param_1 = param_1 + (ulong)(param_5 - 1) * 4 + 4;
      }
    } while (param_3 != 0);
  }
  return;
}

