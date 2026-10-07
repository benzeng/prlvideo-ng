
void FUN_1000dacf0(undefined2 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  
  *param_1 = 9;
  param_1[2] = 0xffff;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 7) = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0x10] = 0x1c04;
  param_1[0x1d] = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  if (DAT_1011c3758 == (undefined4 *)0x0) {
    puVar3 = operator_new(0x34);
    lVar1 = *(long *)(DAT_1011c3698 + 0x1938);
    *puVar3 = 7;
    plVar4 = (long *)FUN_1000dcd50(7);
    lVar7 = *plVar4;
    puVar3[0xc] = 0x400;
    uVar8 = lVar7 + 0x43fU & 0xffffffffffffffc0;
    *(long *)(puVar3 + 8) = lVar7;
    *(ulong *)(puVar3 + 6) = uVar8;
    *(ulong *)(puVar3 + 2) = uVar8 + 0x2c0;
    *(ulong *)(puVar3 + 4) = uVar8 + 0x200;
    *(long *)(puVar3 + 10) = lVar1 + 0xa0d8;
    DAT_1011c3758 = puVar3;
  }
  puVar3 = DAT_1011c3758;
  *(undefined4 *)(param_1 + 0x1e) = DAT_1011c3758[0xc];
  if (DAT_1011c3758 == (undefined4 *)0x0) {
    puVar5 = operator_new(0x34);
    lVar1 = *(long *)(DAT_1011c3698 + 0x1938);
    *puVar5 = 7;
    plVar4 = (long *)FUN_1000dcd50(7);
    lVar7 = *plVar4;
    puVar5[0xc] = 0x400;
    uVar8 = lVar7 + 0x43fU & 0xffffffffffffffc0;
    *(long *)(puVar5 + 8) = lVar7;
    *(ulong *)(puVar5 + 6) = uVar8;
    *(ulong *)(puVar5 + 2) = uVar8 + 0x2c0;
    *(ulong *)(puVar5 + 4) = uVar8 + 0x200;
    *(long *)(puVar5 + 10) = lVar1 + 0xa0d8;
    DAT_1011c3758 = puVar5;
  }
  lVar1 = *(long *)(DAT_1011c3758 + 2);
  *(ulong *)(DAT_1011c3758 + 2) = lVar1 + 0x47U & 0xffffffffffffffc0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x15) = 0x40;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x17) = 4;
  *(long *)(param_1 + 0xc) = lVar1;
  if (DAT_1011c3758 == (undefined4 *)0x0) {
    puVar5 = operator_new(0x34);
    lVar1 = *(long *)(DAT_1011c3698 + 0x1938);
    *puVar5 = 7;
    plVar4 = (long *)FUN_1000dcd50(7);
    lVar7 = *plVar4;
    puVar5[0xc] = 0x400;
    uVar8 = lVar7 + 0x43fU & 0xffffffffffffffc0;
    *(long *)(puVar5 + 8) = lVar7;
    *(ulong *)(puVar5 + 6) = uVar8;
    *(ulong *)(puVar5 + 2) = uVar8 + 0x2c0;
    *(ulong *)(puVar5 + 4) = uVar8 + 0x200;
    *(long *)(puVar5 + 10) = lVar1 + 0xa0d8;
    DAT_1011c3758 = puVar5;
  }
  lVar1 = *(long *)(DAT_1011c3758 + 2);
  *(ulong *)(DAT_1011c3758 + 2) =
       (ulong)*(uint *)(param_1 + 0x1e) + 0x3f + lVar1 & 0xffffffffffffffc0;
  uVar8 = *(ulong *)(param_1 + 0xc);
  puVar6 = (ulong *)FUN_1000dcd50(*puVar3);
  uVar2 = *puVar6;
  lVar7 = FUN_1000dcd50(*puVar3);
  if ((uVar2 <= uVar8) && (uVar8 <= uVar2 + *(long *)(lVar7 + 8))) {
    *(long *)(*(long *)(puVar3 + 10) + (uVar8 - uVar2 & 0x7fffffff8)) = lVar1;
  }
  *(long *)(param_2 + 0xa0d0) = lVar1;
  if (DAT_1011c3758 == (undefined4 *)0x0) {
    puVar3 = operator_new(0x34);
    lVar1 = *(long *)(DAT_1011c3698 + 0x1938);
    *puVar3 = 7;
    plVar4 = (long *)FUN_1000dcd50(7);
    lVar7 = *plVar4;
    puVar3[0xc] = 0x400;
    uVar8 = lVar7 + 0x43fU & 0xffffffffffffffc0;
    *(long *)(puVar3 + 8) = lVar7;
    *(ulong *)(puVar3 + 6) = uVar8;
    *(ulong *)(puVar3 + 2) = uVar8 + 0x2c0;
    *(ulong *)(puVar3 + 4) = uVar8 + 0x200;
    *(long *)(puVar3 + 10) = lVar1 + 0xa0d8;
    DAT_1011c3758 = puVar3;
  }
  plVar4 = (long *)FUN_1000dcd50(*DAT_1011c3758);
  *(long *)(param_2 + 0xa0d0) = *(long *)(param_2 + 0xa0d0) - *plVar4;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x1e);
  return;
}

