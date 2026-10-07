
int FUN_1000c4920(long param_1,byte *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  
  uVar8 = (ulong)(*(ushort *)(param_2 + 0xe) >> 0xe);
  bVar2 = *param_2;
  piVar1 = (int *)(param_1 + 0x438 + uVar8 * 4);
  *piVar1 = *piVar1 + 1;
  iVar14 = 0;
  if (bVar2 >> 2 != 0) {
    plVar15 = (long *)(param_1 + 0x18 + uVar8 * 8);
    plVar16 = (long *)(param_1 + 0x38 + uVar8 * 0x100);
    iVar14 = 0;
    uVar8 = (ulong)(bVar2 >> 2);
    do {
      uVar12 = *(ulong *)(param_3 + -8 + uVar8 * 8);
      lVar3 = *(long *)((long)plVar16 + (uVar12 >> 0xb & 0xf8));
      if (lVar3 != 0) {
        for (lVar13 = *(long *)(lVar3 + 8); lVar13 != lVar3; lVar13 = *(long *)(lVar13 + 8)) {
          plVar9 = *(long **)(lVar13 + 0x10);
          iVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,param_2);
          if (iVar6 != 0) goto LAB_1000c4b1f;
          uVar12 = *(ulong *)(param_3 + -8 + uVar8 * 8);
        }
      }
      plVar9 = (long *)FUN_1000c46a0(param_1,param_2,uVar12);
      if (plVar9 == (long *)0x0) {
        return iVar14;
      }
      pvVar10 = (void *)*plVar15;
      if (pvVar10 == (void *)0x0) {
        pvVar10 = operator_new(0x18);
        *(void **)pvVar10 = pvVar10;
        *(void **)((long)pvVar10 + 8) = pvVar10;
        *(undefined8 *)((long)pvVar10 + 0x10) = 0;
        *plVar15 = (long)pvVar10;
      }
      puVar11 = operator_new(0x18);
      puVar11[2] = plVar9;
      *puVar11 = pvVar10;
      puVar4 = *(undefined8 **)((long)pvVar10 + 8);
      puVar11[1] = puVar4;
      *puVar4 = puVar11;
      *(undefined8 **)((long)pvVar10 + 8) = puVar11;
      *(long *)((long)pvVar10 + 0x10) = *(long *)((long)pvVar10 + 0x10) + 1;
      uVar12 = (**(code **)(*plVar9 + 0x28))(plVar9);
      iVar6 = (**(code **)(*plVar9 + 0x28))(plVar9);
      iVar7 = (**(code **)(*plVar9 + 0x30))(plVar9);
      if (((uint)(uVar12 >> 0xe) & 0x1f) <= ((uint)(iVar6 + 0x7ffff + iVar7) >> 0xe & 0x1f)) {
        uVar12 = uVar12 >> 0xe & 0x1f;
        do {
          pvVar10 = (void *)plVar16[uVar12];
          if (pvVar10 == (void *)0x0) {
            pvVar10 = operator_new(0x18);
            *(void **)pvVar10 = pvVar10;
            *(void **)((long)pvVar10 + 8) = pvVar10;
            *(undefined8 *)((long)pvVar10 + 0x10) = 0;
            plVar16[uVar12] = (long)pvVar10;
          }
          puVar11 = operator_new(0x18);
          puVar11[2] = plVar9;
          *puVar11 = pvVar10;
          puVar4 = *(undefined8 **)((long)pvVar10 + 8);
          puVar11[1] = puVar4;
          *puVar4 = puVar11;
          *(undefined8 **)((long)pvVar10 + 8) = puVar11;
          *(long *)((long)pvVar10 + 0x10) = *(long *)((long)pvVar10 + 0x10) + 1;
          iVar6 = (**(code **)(*plVar9 + 0x28))(plVar9);
          iVar7 = (**(code **)(*plVar9 + 0x30))(plVar9);
          uVar12 = uVar12 + 1;
        } while ((uint)uVar12 <= ((uint)(iVar6 + 0x7ffff + iVar7) >> 0xe & 0x1f));
      }
LAB_1000c4b1f:
      iVar14 = iVar14 + 1;
      *(int *)(plVar9 + 6) = (int)plVar9[6] + 1;
      plVar16 = plVar9 + 8;
      plVar15 = plVar9 + 7;
      bVar5 = 1 < (long)uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar5);
  }
  *(int *)(param_1 + 0x44c) = *(int *)(param_1 + 0x44c) + 1;
  return iVar14;
}

