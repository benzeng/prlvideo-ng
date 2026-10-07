
undefined8 FUN_10035cf50(long param_1,long param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  uint uVar13;
  
  piVar11 = (int *)(*(long *)(param_2 + 0x620) + 0x1dc);
  if (*(long *)(param_2 + 0x620) == 0) {
    piVar11 = (int *)(param_2 + 0x860);
  }
  uVar13 = *piVar11 - 1;
  uVar5 = 1;
  if ((uVar13 < 0xd) && ((0x1e1fU >> (uVar13 & 0x1f) & 1) != 0)) {
    pvVar6 = *(void **)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    if (pvVar6 == (void *)0x0) {
      pvVar6 = operator_new(0x40);
      *(void **)pvVar6 = pvVar6;
      *(void **)((long)pvVar6 + 8) = pvVar6;
      *(void **)((long)pvVar6 + 0x10) = pvVar6;
      *(long *)((long)pvVar6 + 0x18) = param_1 + 8;
      *(undefined4 *)((long)pvVar6 + 0x20) = 0;
      *(undefined4 *)((long)pvVar6 + 0x24) = 0x500;
      *(undefined4 *)((long)pvVar6 + 0x2c) = 0xffffffff;
      *(undefined4 *)((long)pvVar6 + 0x34) = 0xffffffff;
      *(undefined1 *)((long)pvVar6 + 0x38) = 0;
      (*DAT_1011c5e68)(1,(long)pvVar6 + 0x28);
      (*DAT_1011c5e68)(1,(long)pvVar6 + 0x30);
    }
    uVar1 = *(undefined4 *)((long)&PTR___mh_execute_header_100b3ce80 + (long)(int)uVar13 * 4);
    lVar7 = *(long *)((long)pvVar6 + 0x10);
    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)((long)pvVar6 + 8);
    *(long *)(*(long *)((long)pvVar6 + 8) + 0x10) = lVar7;
    *(void **)((long)pvVar6 + 0x10) = pvVar6;
    *(long *)((long)pvVar6 + 8) = param_1 + 0x28;
    *(undefined8 *)((long)pvVar6 + 0x10) = *(undefined8 *)(param_1 + 0x38);
    *(void **)(*(long *)(param_1 + 0x38) + 8) = pvVar6;
    *(void **)(param_1 + 0x38) = pvVar6;
    *(undefined4 *)((long)pvVar6 + 0x2c) = 0;
    *(undefined4 *)((long)pvVar6 + 0x34) = 0;
    *(undefined4 *)((long)pvVar6 + 0x24) = uVar1;
    lVar7 = **(long **)(param_1 + 0x60);
    if (lVar7 != 0) {
      iVar8 = *(int *)((long)pvVar6 + 0x20);
      do {
        iVar8 = iVar8 + 1;
        *(int *)((long)pvVar6 + 0x20) = iVar8;
        lVar7 = **(long **)(lVar7 + 0x40);
      } while (lVar7 != 0);
    }
    lVar7 = **(long **)(param_1 + 0x78);
    if (lVar7 != 0) {
      iVar8 = *(int *)((long)pvVar6 + 0x20);
      do {
        iVar8 = iVar8 + 1;
        *(void **)(lVar7 + 0x20) = pvVar6;
        lVar12 = lVar7 + 0x38;
        lVar2 = *(long *)(lVar7 + 0x48);
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar7 + 0x40);
        *(long *)(*(long *)(lVar7 + 0x40) + 0x10) = lVar2;
        *(long *)(lVar7 + 0x40) = lVar12;
        *(long *)(lVar7 + 0x48) = param_1 + 0x58;
        *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)(param_1 + 0x60);
        *(long *)(*(long *)(param_1 + 0x60) + 0x10) = lVar12;
        *(long *)(param_1 + 0x60) = lVar12;
        lVar7 = **(long **)(param_1 + 0x78);
      } while (lVar7 != 0);
      *(int *)((long)pvVar6 + 0x20) = iVar8;
    }
    uVar13 = *(uint *)(param_2 + 0x2748);
    if (uVar13 != 0) {
      do {
        uVar9 = 0;
        if (uVar13 != 0) {
          for (; (uVar13 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
        if (uVar13 == 0) {
          uVar9 = 0xffffffff;
        }
        iVar8 = *(int *)(*(long *)(param_2 + 0x2750) + 0x10 + (ulong)uVar9 * 4);
        lVar7 = *(long *)(*(long *)(param_2 + 0x2708 + (ulong)uVar9 * 0x10) + 0x60);
        lVar12 = *(long *)(lVar7 + 0x20);
        if (lVar12 != 0) {
          iVar4 = *(int *)(lVar7 + 0x18);
          iVar3 = *(int *)(lVar12 + 0x2c);
          if (iVar3 == -1) {
            (*DAT_1011c6130)(*(undefined4 *)(lVar12 + 0x28),0x8866,lVar12 + 0x2c);
            iVar3 = *(int *)(lVar12 + 0x2c);
            lVar12 = *(long *)(lVar7 + 0x20);
          }
          iVar10 = 0;
          if ((ulong)(long)*(int *)(lVar12 + 0x24) < 5) {
            iVar10 = *(int *)(&DAT_100b3cec0 + (long)*(int *)(lVar12 + 0x24) * 4);
          }
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + iVar3 * iVar4 * iVar10;
        }
        *(int *)(lVar7 + 0x18) = iVar8;
        FUN_100365cd0(lVar7,pvVar6);
        iVar4 = 0;
        if ((ulong)(long)*(int *)((long)pvVar6 + 0x24) < 5) {
          iVar4 = *(int *)(&DAT_100b3cec0 + (long)*(int *)((long)pvVar6 + 0x24) * 4);
        }
        uVar13 = uVar13 & ~(1 << ((byte)uVar9 & 0x1f));
        if (*(uint *)(*(long *)(lVar7 + 0x28) + 0xc) <
            (uint)(iVar4 * iVar8 + *(int *)(lVar7 + 0x1c))) {
          *(undefined1 *)((long)pvVar6 + 0x38) = 1;
        }
      } while (uVar13 != 0);
    }
    *param_3 = *(undefined1 *)((long)pvVar6 + 0x38);
    uVar5 = 0;
  }
  return uVar5;
}

