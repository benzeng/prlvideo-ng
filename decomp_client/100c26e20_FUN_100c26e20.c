
long * FUN_100c26e20(byte *param_1,int param_2,long *param_3)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar7;
  uint uVar8;
  ulong uVar6;
  
  plVar2 = (long *)0x0;
  if (param_3 == (long *)0x0) {
    plVar2 = (long *)FUN_100bf3540(0x18,"bn_lib.c",0x110);
    if (plVar2 == (long *)0x0) {
      FUN_100c62ee0(3,0x71,0x41,"bn_lib.c",0x111);
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
  uVar8 = param_2 - 1U >> 3;
  uVar7 = (ulong)uVar8;
  uVar5 = uVar8 + 1;
  uVar6 = (ulong)uVar5;
  if ((*(int *)((long)param_3 + 0xc) <= (int)uVar8) && (*(int *)((long)param_3 + 0xc) < (int)uVar5))
  {
    lVar3 = FUN_100c26860(param_3);
    if (lVar3 == 0) {
      if (plVar2 == (long *)0x0) {
        return (long *)0x0;
      }
      if ((*plVar2 != 0) && ((*(byte *)((long)plVar2 + 0x14) & 2) == 0)) {
        FUN_100bf3910();
      }
      if ((*(uint *)((long)plVar2 + 0x14) & 1) == 0) {
        *(uint *)((long)plVar2 + 0x14) = *(uint *)((long)plVar2 + 0x14) | 0x8000;
        *plVar2 = 0;
        return (long *)0x0;
      }
      FUN_100bf3910(plVar2);
      return (long *)0x0;
    }
    if (*param_3 != 0) {
      FUN_100bf3910();
    }
    *param_3 = lVar3;
    *(uint *)((long)param_3 + 0xc) = uVar5;
  }
  uVar8 = param_2 - 1U & 7;
  *(uint *)(param_3 + 1) = uVar5;
  *(undefined4 *)(param_3 + 2) = 0;
  do {
    uVar8 = ~uVar8;
    uVar4 = 0;
    do {
      if (param_2 == 0) {
        goto LAB_100c26f40;
      }
      param_2 = param_2 + -1;
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar4 = (ulong)bVar1 | uVar4 << 8;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0);
    uVar6 = (ulong)((int)uVar6 - 1);
    *(ulong *)(*param_3 + uVar6 * 8) = uVar4;
    uVar8 = 7;
  } while( true );
  while (uVar7 = uVar7 - 1, 1 < (int)uVar7 + 2) {
LAB_100c26f40:
    if (*(long *)(*param_3 + uVar7 * 8) != 0) break;
  }
  *(int *)(param_3 + 1) = (int)uVar7 + 1;
  return param_3;
}

