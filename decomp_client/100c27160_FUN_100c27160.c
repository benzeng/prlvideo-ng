
uint FUN_100c27160(long *param_1,long *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  if ((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) {
    uVar6 = 0xffffffff;
    if (param_1 == (long *)0x0) {
      return (uint)(param_2 != (long *)0x0);
    }
  }
  else {
    iVar3 = (int)param_1[2];
    uVar7 = ~-(uint)(iVar3 == 0) | 1;
    if (iVar3 != (int)param_2[2]) {
      return uVar7;
    }
    iVar4 = (int)param_1[1];
    lVar8 = (long)iVar4;
    if ((int)param_2[1] < iVar4) {
      return uVar7;
    }
    uVar6 = -(uint)(iVar3 == 0) | 1;
    if ((int)param_2[1] <= iVar4) {
      lVar5 = (long)(iVar4 + -1) << 3;
      do {
        if (lVar8 < 1) {
          return 0;
        }
        puVar1 = (ulong *)(*param_1 + lVar5);
        puVar2 = (ulong *)(*param_2 + lVar5);
        if (*puVar2 < *puVar1) {
          return uVar7;
        }
        lVar8 = lVar8 + -1;
        lVar5 = lVar5 + -8;
      } while (*puVar2 <= *puVar1);
    }
  }
  return uVar6;
}

