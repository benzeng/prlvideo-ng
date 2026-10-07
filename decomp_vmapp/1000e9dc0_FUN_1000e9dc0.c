
uint * FUN_1000e9dc0(uint *param_1,int param_2,short param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  uVar5 = *param_1;
  uVar2 = param_1[1];
  uVar7 = uVar2;
  if (uVar5 < uVar2) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    uVar7 = ~uVar2;
    if (~uVar2 < ~uVar5) {
      uVar7 = ~uVar5;
    }
    lVar8 = (ulong)~uVar7 << 6;
    do {
      if ((*(int *)((long)param_1 + lVar8 + -0x20) == param_2) &&
         (*(short *)((long)param_1 + lVar8 + -0x1a) == param_3)) {
        puVar1 = (uint *)((long)param_1 + lVar8 + -0x20);
        iVar3 = *(int *)((long)param_1 + lVar8 + -0x10);
        if ((iVar3 + 0xfffU ^ iVar3 + 0xfff + param_4) < 0x1000) {
          *(int *)((long)param_1 + lVar8 + -0x10) = iVar3 + param_4;
          return puVar1;
        }
        if (*(uint *)((long)param_1 + lVar8 + -0xc) < (uint)(iVar3 + param_4)) {
          return (uint *)0x0;
        }
        if (*(long *)((long)param_1 + lVar8 + 8) != 0) {
          return (uint *)0x0;
        }
        if (uVar2 < uVar5 + 1) {
          return (uint *)0x0;
        }
        LOCK();
        uVar5 = *param_1;
        *param_1 = *param_1 + 1;
        UNLOCK();
        if (param_1[1] < *param_1) {
          return (uint *)0x0;
        }
        uVar6 = (ulong)uVar5;
        *(undefined8 *)(param_1 + uVar6 * 0x10 + 0x16) = *(undefined8 *)(puVar1 + 0xe);
        *(undefined8 *)(param_1 + uVar6 * 0x10 + 0x14) = *(undefined8 *)(puVar1 + 0xc);
        *(undefined8 *)(param_1 + uVar6 * 0x10 + 0x12) = *(undefined8 *)(puVar1 + 10);
        *(undefined8 *)(param_1 + uVar6 * 0x10 + 0x10) = *(undefined8 *)(puVar1 + 8);
        *(undefined8 *)(param_1 + uVar6 * 0x10 + 0xe) = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(param_1 + uVar6 * 0x10 + 0xc) = *(undefined8 *)(puVar1 + 4);
        uVar4 = *(undefined8 *)puVar1;
        *(undefined8 *)(param_1 + uVar6 * 0x10 + 10) = *(undefined8 *)(puVar1 + 2);
        *(undefined8 *)(param_1 + uVar6 * 0x10 + 8) = uVar4;
        *(short *)(param_1 + uVar6 * 0x10 + 9) = (short)param_1[uVar6 * 0x10 + 9] + 1;
        uVar5 = *(uint *)((long)param_1 + lVar8 + -0x10);
        iVar3 = 0x1000 - (uVar5 & 0xfff);
        if ((uVar5 & 0xfff) == 0) {
          iVar3 = 0;
        }
        uVar5 = uVar5 + 0xfff & 0xfffff000;
        *(ulong *)(param_1 + uVar6 * 0x10 + 0x10) =
             *(long *)(param_1 + uVar6 * 0x10 + 0x10) + (ulong)uVar5;
        *(ulong *)(param_1 + uVar6 * 0x10 + 0x14) =
             *(long *)(param_1 + uVar6 * 0x10 + 0x14) + (ulong)uVar5;
        param_1[uVar6 * 0x10 + 0xd] = param_1[uVar6 * 0x10 + 0xd] - uVar5;
        param_1[uVar6 * 0x10 + 0xc] = param_4 - iVar3;
        *(uint *)((long)param_1 + lVar8 + -0x10) =
             *(int *)((long)param_1 + lVar8 + -0x10) + 0xfffU & 0xfffff000;
        (param_1 + uVar6 * 0x10 + 0x16)[0] = 0;
        (param_1 + uVar6 * 0x10 + 0x16)[1] = 0;
        return param_1 + uVar6 * 0x10 + 8;
      }
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
  }
  return (uint *)0x0;
}

