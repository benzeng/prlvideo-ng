
undefined8 FUN_100367c10(long param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ushort *puVar6;
  ulong uVar7;
  ushort *puVar8;
  uint *puVar9;
  undefined2 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar11 = (ulong)(param_4 * param_2);
  lVar5 = (*DAT_1011c64a0)(0x8893,35000);
  plVar1 = (long *)(param_1 + 0x240);
  uVar7 = *(long *)(param_1 + 0x248) - *(long *)(param_1 + 0x240);
  lVar12 = uVar11 - uVar7;
  if (uVar7 <= uVar11 && lVar12 != 0) {
    FUN_10005a320(plVar1,lVar12);
  }
  puVar6 = (ushort *)(lVar5 + (ulong)param_5);
  if (param_4 == 4) {
    uVar13 = 0x1405;
    if ((ulong)param_2 != 0) {
      uVar3 = *(uint *)(param_1 + 0x214);
      puVar9 = (uint *)*plVar1;
      lVar5 = (ulong)param_2 << 2;
      puVar8 = puVar6;
      do {
        iVar4 = *(int *)puVar8;
        *puVar9 = iVar4 - param_3;
        if (uVar3 < (uint)(iVar4 - param_3)) {
          *(int *)(param_1 + 0x218) = (int)((ulong)((long)puVar8 - (long)puVar6) >> 2);
          break;
        }
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 2;
        lVar5 = lVar5 + -4;
      } while (lVar5 != 0);
    }
  }
  else if (param_4 == 2) {
    uVar13 = 0x1403;
    if ((ulong)param_2 != 0) {
      uVar3 = *(uint *)(param_1 + 0x214);
      puVar10 = (undefined2 *)*plVar1;
      lVar5 = (ulong)param_2 * 2;
      puVar8 = puVar6;
      do {
        uVar2 = *puVar8;
        *puVar10 = (short)((uint)uVar2 - param_3);
        if (uVar3 < ((uint)uVar2 - param_3 & 0xffff)) {
          *(int *)(param_1 + 0x218) = (int)((ulong)((long)puVar8 - (long)puVar6) >> 1);
          break;
        }
        puVar10 = puVar10 + 1;
        puVar8 = puVar8 + 1;
        lVar5 = lVar5 + -2;
      } while (lVar5 != 0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x218) = 0;
    uVar13 = 0;
  }
  (*DAT_1011c6ed0)(0x8893);
  (*DAT_1011c5708)(0x8893,*(undefined4 *)(param_1 + 0x25c));
  (*DAT_1011c57d8)(0x8893,uVar11,*(undefined8 *)(param_1 + 0x240),0x88e0);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x25c);
  return uVar13;
}

