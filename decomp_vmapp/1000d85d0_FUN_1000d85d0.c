
undefined4 * FUN_1000d85d0(void)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  ulong uVar5;
  
  if (DAT_1011c3758 == (undefined4 *)0x0) {
    puVar3 = operator_new(0x34);
    lVar1 = *(long *)(DAT_1011c3698 + 0x1938);
    *puVar3 = 7;
    plVar4 = (long *)FUN_1000dcd50(7);
    lVar2 = *plVar4;
    puVar3[0xc] = 0x400;
    uVar5 = lVar2 + 0x43fU & 0xffffffffffffffc0;
    *(long *)(puVar3 + 8) = lVar2;
    *(ulong *)(puVar3 + 6) = uVar5;
    *(ulong *)(puVar3 + 2) = uVar5 + 0x2c0;
    *(ulong *)(puVar3 + 4) = uVar5 + 0x200;
    *(long *)(puVar3 + 10) = lVar1 + 0xa0d8;
    DAT_1011c3758 = puVar3;
  }
  return DAT_1011c3758;
}

