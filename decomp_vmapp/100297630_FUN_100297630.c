
void FUN_100297630(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  ushort uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  uVar5 = *(ushort *)(param_1 + 0xff0);
  lVar9 = (ulong)*(ushort *)(param_1 + 0xfee) * 0x80 + *(long *)(param_1 + 0x1000);
  uVar12 = *(uint *)(param_1 + 0x1014);
  uVar11 = *(uint *)(lVar9 + 0x4310 + (ulong)uVar5 * 4);
  do {
    puVar3 = (uint *)(lVar9 + 0x4310 + (ulong)uVar5 * 4);
    LOCK();
    uVar4 = *puVar3;
    bVar13 = uVar11 == uVar4;
    if (bVar13) {
      *puVar3 = ~uVar12 & uVar11;
      uVar4 = uVar11;
    }
    uVar11 = uVar4;
    UNLOCK();
  } while (!bVar13);
  if (*(int *)(param_1 + 0x1014) != 0) {
    plVar1 = (long *)(param_1 + 0x137a0);
    plVar2 = (long *)(param_1 + 0x13770);
    do {
      FUN_100402c70(param_1 + 0x137b8,0xffffffff);
      plVar10 = *(long **)(param_1 + 0x137a0);
      uVar12 = *(uint *)(param_1 + 0x1014);
      if (plVar10 != plVar1) {
        do {
          plVar7 = plVar10 + 2;
          uVar11 = 0;
          plVar8 = (long *)plVar10[2];
          while (plVar8 != plVar7) {
            lVar9 = *plVar8;
            plVar6 = (long *)plVar8[1];
            *(long **)(lVar9 + 8) = plVar6;
            *plVar6 = lVar9;
            *plVar8 = (long)plVar8;
            plVar8[1] = (long)plVar8;
            uVar11 = uVar11 | 1 << (*(byte *)((long)plVar8 + -0xb) & 0x1f);
            plVar8 = (long *)*plVar7;
          }
          uVar12 = uVar12 & ~uVar11;
          plVar10[2] = (long)plVar7;
          plVar10[3] = (long)plVar7;
          lVar9 = *plVar10;
          plVar7 = (long *)plVar10[1];
          *(long **)(lVar9 + 8) = plVar7;
          *plVar7 = lVar9;
          lVar9 = *plVar2;
          *(long **)(lVar9 + 8) = plVar10;
          *plVar10 = lVar9;
          plVar10[1] = (long)plVar2;
          *plVar2 = (long)plVar10;
          plVar10 = (long *)*plVar1;
        } while (plVar10 != plVar1);
        *(uint *)(param_1 + 0x1014) = uVar12;
      }
    } while (uVar12 != 0);
  }
  return;
}

