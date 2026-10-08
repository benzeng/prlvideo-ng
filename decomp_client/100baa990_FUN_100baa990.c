
long * FUN_100baa990(byte *param_1,int param_2,long *param_3)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  plVar2 = (long *)0x0;
  if (param_3 == (long *)0x0) {
    plVar2 = (long *)FUN_100bf3540(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    *(undefined4 *)((long)plVar2 + 0x14) = 1;
    *(undefined4 *)(plVar2 + 2) = 0;
    plVar2[1] = 0;
    *plVar2 = 0;
    param_3 = plVar2;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    return param_3;
  }
  uVar7 = param_2 - 1U >> 3;
  uVar8 = (ulong)uVar7;
  uVar5 = (ulong)(uVar7 + 1);
  if (((int)uVar7 < *(int *)((long)param_3 + 0xc)) ||
     (lVar3 = FUN_100bac510(param_3,uVar5), lVar3 != 0)) {
    uVar6 = param_2 - 1U & 7;
    *(uint *)(param_3 + 1) = uVar7 + 1;
    *(undefined4 *)(param_3 + 2) = 0;
    do {
      uVar6 = ~uVar6;
      uVar4 = 0;
      do {
        if (param_2 == 0) {
          do {
            if (*(long *)(*param_3 + uVar8 * 8) != 0) {
              return param_3;
            }
            *(int *)(param_3 + 1) = (int)uVar8;
            uVar8 = uVar8 - 1;
          } while (1 < (int)uVar8 + 2);
          return param_3;
        }
        param_2 = param_2 + -1;
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar4 = (ulong)bVar1 | uVar4 << 8;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0);
      uVar5 = (ulong)((int)uVar5 - 1);
      *(ulong *)(*param_3 + uVar5 * 8) = uVar4;
      uVar6 = 7;
    } while( true );
  }
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((*plVar2 != 0) && ((*(byte *)((long)plVar2 + 0x14) & 2) == 0)) {
    FUN_100bf3910();
  }
  if ((*(byte *)((long)plVar2 + 0x14) & 1) == 0) {
    *plVar2 = 0;
    return (long *)0x0;
  }
  FUN_100bf3910(plVar2);
  return (long *)0x0;
}

