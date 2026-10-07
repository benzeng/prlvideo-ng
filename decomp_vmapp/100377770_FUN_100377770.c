
void * FUN_100377770(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  void *pvVar10;
  long *plVar11;
  undefined1 *puVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  int local_cc;
  undefined4 local_a8 [2];
  undefined1 *local_a0;
  undefined1 *local_90;
  undefined1 local_80 [8];
  long local_78;
  long local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar6 = (*DAT_1011c5ae8)();
  lVar2 = *(long *)(param_2 + 0x618);
  lVar3 = *(long *)(param_2 + 0x620);
  lVar4 = *(long *)(param_2 + 0x628);
  iVar7 = iVar6;
  if (lVar2 != 0) {
    if ((lVar3 != 0) || (lVar4 != 0)) {
      lVar13 = lVar4;
      if (lVar3 != 0) {
        lVar13 = lVar3;
      }
      FUN_100378790(*(undefined8 *)(lVar2 + 0x1b8),lVar2,lVar13);
    }
    pvVar9 = (void *)**(long **)(lVar2 + 400);
    if (pvVar9 != (void *)0x0) {
      lVar13 = *(long *)(lVar2 + 0x1b8);
      puVar16 = *(ushort **)(lVar13 + 0x10);
      do {
        puVar15 = puVar16;
        if (puVar16 == (ushort *)0x0) {
          puVar15 = *(ushort **)(lVar13 + 8);
        }
        puVar14 = *(ushort **)((long)pvVar9 + 0x40);
        if (puVar14 == (ushort *)0x0) {
          puVar14 = *(ushort **)((long)pvVar9 + 0x38);
        }
        if ((*puVar15 == *puVar14) && (iVar7 = _memcmp(puVar15,puVar14,(ulong)*puVar15), iVar7 == 0)
           ) {
          lVar13 = *(long *)((long)pvVar9 + 0x10);
          *(undefined8 *)(lVar13 + 8) = *(undefined8 *)((long)pvVar9 + 8);
          *(long *)(*(long *)((long)pvVar9 + 8) + 0x10) = lVar13;
          *(void **)((long)pvVar9 + 8) = pvVar9;
          *(long *)((long)pvVar9 + 0x10) = lVar2 + 0x188;
          *(undefined8 *)((long)pvVar9 + 8) = *(undefined8 *)(lVar2 + 400);
          *(void **)(*(long *)(lVar2 + 400) + 0x10) = pvVar9;
          *(void **)(lVar2 + 400) = pvVar9;
          goto LAB_1003779a7;
        }
        pvVar9 = (void *)**(long **)((long)pvVar9 + 8);
      } while (pvVar9 != (void *)0x0);
    }
    pvVar9 = operator_new(0x70);
    uVar8 = FUN_1003783a0(param_1,lVar2,param_2);
    *(void **)pvVar9 = pvVar9;
    *(void **)((long)pvVar9 + 8) = pvVar9;
    *(void **)((long)pvVar9 + 0x10) = pvVar9;
    *(undefined8 *)((long)pvVar9 + 0x18) = 0;
    *(long *)((long)pvVar9 + 0x20) = (long)pvVar9 + 0x18;
    *(long *)((long)pvVar9 + 0x28) = (long)pvVar9 + 0x18;
    puVar12 = *(undefined1 **)(lVar2 + 0x1b8);
    *(undefined1 *)((long)pvVar9 + 0x30) = 0;
    *(undefined4 *)((long)pvVar9 + 0x48) = 0;
    *(undefined8 *)((long)pvVar9 + 0x40) = 0;
    *(undefined8 *)((long)pvVar9 + 0x38) = 0;
    puVar16 = *(ushort **)(puVar12 + 0x10);
    if (puVar16 == (ushort *)0x0) {
      puVar16 = *(ushort **)(puVar12 + 8);
    }
    uVar1 = *puVar16;
    *(uint *)((long)pvVar9 + 0x48) = (uint)uVar1;
    pvVar10 = operator_new__((ulong)uVar1);
    *(void **)((long)pvVar9 + 0x40) = pvVar10;
    _memcpy(pvVar10,puVar16,(ulong)uVar1);
    *(undefined1 *)((long)pvVar9 + 0x30) = *puVar12;
    *(undefined4 *)((long)pvVar9 + 0x50) = uVar8;
    *(long *)((long)pvVar9 + 0x58) = lVar2;
    *(undefined8 *)((long)pvVar9 + 0x68) = 0;
    *(undefined8 *)((long)pvVar9 + 0x60) = 0;
    *(long *)((long)pvVar9 + 0x10) = lVar2 + 0x188;
    *(undefined8 *)((long)pvVar9 + 8) = *(undefined8 *)(lVar2 + 400);
    *(void **)(*(long *)(lVar2 + 400) + 0x10) = pvVar9;
    *(void **)(lVar2 + 400) = pvVar9;
LAB_1003779a7:
    if ((iVar6 == 0) || (*(int *)((long)pvVar9 + 0x50) != 0)) {
      iVar7 = 0;
      if (iVar6 != 0) {
        FUN_10038e870(local_80,local_48,0x10);
        if (*(int *)(param_1 + 0x1c) == -1) {
          FUN_10038e8e0(local_80,"a_vDummy");
        }
        else {
          FUN_10038e8e0(local_80,"a_v%d");
        }
        (*DAT_1011c56c8)(iVar6,*(undefined4 *)(**(long **)(lVar2 + 400) + 0x50));
        if (local_78 == 0) {
          local_78 = local_68;
        }
        (*DAT_1011c56f8)(iVar6,0,local_78);
        FUN_10038e8c0(local_80);
        iVar7 = iVar6;
      }
    }
    else {
      (*DAT_1011c5b40)(iVar6);
      iVar7 = 0;
    }
  }
  local_cc = iVar7;
  if (lVar3 != 0) {
    if (lVar2 != 0) {
      FUN_100378aa0(*(undefined8 *)(lVar3 + 0x1b8),lVar3,lVar2);
    }
    if (lVar4 != 0) {
      FUN_100378790(*(undefined8 *)(lVar3 + 0x1b8),lVar3,lVar4);
    }
    plVar11 = (long *)**(long **)(lVar3 + 400);
    if (plVar11 != (long *)0x0) {
      lVar13 = *(long *)(lVar3 + 0x1b8);
      puVar16 = *(ushort **)(lVar13 + 0x10);
      do {
        puVar15 = puVar16;
        if (puVar16 == (ushort *)0x0) {
          puVar15 = *(ushort **)(lVar13 + 8);
        }
        puVar14 = (ushort *)plVar11[8];
        if (puVar14 == (ushort *)0x0) {
          puVar14 = (ushort *)plVar11[7];
        }
        if ((*puVar15 == *puVar14) && (iVar6 = _memcmp(puVar15,puVar14,(ulong)*puVar15), iVar6 == 0)
           ) {
          lVar13 = plVar11[2];
          *(long *)(lVar13 + 8) = plVar11[1];
          *(long *)(plVar11[1] + 0x10) = lVar13;
          plVar11[1] = (long)plVar11;
          goto LAB_100377c44;
        }
        plVar11 = *(long **)plVar11[1];
      } while (plVar11 != (long *)0x0);
    }
    plVar11 = operator_new(0x70);
    uVar8 = FUN_1003783a0(param_1,lVar3,param_2);
    *plVar11 = (long)plVar11;
    plVar11[1] = (long)plVar11;
    plVar11[2] = (long)plVar11;
    plVar11[3] = 0;
    plVar11[4] = (long)(plVar11 + 3);
    plVar11[5] = (long)(plVar11 + 3);
    puVar12 = *(undefined1 **)(lVar3 + 0x1b8);
    *(undefined1 *)(plVar11 + 6) = 0;
    *(undefined4 *)(plVar11 + 9) = 0;
    plVar11[8] = 0;
    plVar11[7] = 0;
    puVar16 = *(ushort **)(puVar12 + 0x10);
    if (puVar16 == (ushort *)0x0) {
      puVar16 = *(ushort **)(puVar12 + 8);
    }
    uVar1 = *puVar16;
    *(uint *)(plVar11 + 9) = (uint)uVar1;
    pvVar9 = operator_new__((ulong)uVar1);
    plVar11[8] = (long)pvVar9;
    _memcpy(pvVar9,puVar16,(ulong)uVar1);
    *(undefined1 *)(plVar11 + 6) = *puVar12;
    *(undefined4 *)(plVar11 + 10) = uVar8;
    plVar11[0xb] = lVar3;
    plVar11[0xd] = 0;
    plVar11[0xc] = 0;
LAB_100377c44:
    plVar11[2] = lVar3 + 0x188;
    plVar11[1] = *(long *)(lVar3 + 400);
    *(long **)(*(long *)(lVar3 + 400) + 0x10) = plVar11;
    *(long **)(lVar3 + 400) = plVar11;
    if ((iVar7 == 0) || ((int)plVar11[10] != 0)) {
      local_cc = 0;
      if (iVar7 != 0) {
        (*DAT_1011c56c8)(iVar7,*(undefined4 *)(*plVar11 + 0x50));
        local_cc = iVar7;
      }
    }
    else {
      (*DAT_1011c5b40)();
      local_cc = 0;
    }
  }
  if (lVar4 == 0) {
    iVar7 = 0;
    if (local_cc == 0) goto LAB_1003780b6;
    if (*(int *)(param_1 + 8) == 0) {
      uVar8 = FUN_10036d620(0,"#version 330\nvoid main() {}",0);
      *(undefined4 *)(param_1 + 8) = uVar8;
    }
    (*DAT_1011c56c8)(local_cc);
  }
  else {
    lVar13 = lVar2;
    if (lVar3 != 0) {
      lVar13 = lVar3;
    }
    FUN_100378aa0(*(undefined8 *)(lVar4 + 0x1b8),lVar4,lVar13);
    plVar11 = (long *)**(long **)(lVar4 + 400);
    if (plVar11 != (long *)0x0) {
      lVar13 = *(long *)(lVar4 + 0x1b8);
      puVar16 = *(ushort **)(lVar13 + 0x10);
      do {
        puVar15 = puVar16;
        if (puVar16 == (ushort *)0x0) {
          puVar15 = *(ushort **)(lVar13 + 8);
        }
        puVar14 = (ushort *)plVar11[8];
        if (puVar14 == (ushort *)0x0) {
          puVar14 = (ushort *)plVar11[7];
        }
        if ((*puVar15 == *puVar14) && (iVar7 = _memcmp(puVar15,puVar14,(ulong)*puVar15), iVar7 == 0)
           ) {
          lVar13 = plVar11[2];
          *(long *)(lVar13 + 8) = plVar11[1];
          *(long *)(plVar11[1] + 0x10) = lVar13;
          plVar11[1] = (long)plVar11;
          plVar11[2] = lVar4 + 0x188;
          plVar11[1] = *(long *)(lVar4 + 400);
          *(long **)(*(long *)(lVar4 + 400) + 0x10) = plVar11;
          *(long **)(lVar4 + 400) = plVar11;
          goto LAB_100377ef1;
        }
        plVar11 = *(long **)plVar11[1];
      } while (plVar11 != (long *)0x0);
    }
    plVar11 = operator_new(0x70);
    uVar8 = FUN_1003783a0(param_1,lVar4,param_2);
    *plVar11 = (long)plVar11;
    plVar11[1] = (long)plVar11;
    plVar11[2] = (long)plVar11;
    plVar11[3] = 0;
    plVar11[4] = (long)(plVar11 + 3);
    plVar11[5] = (long)(plVar11 + 3);
    puVar12 = *(undefined1 **)(lVar4 + 0x1b8);
    *(undefined1 *)(plVar11 + 6) = 0;
    *(undefined4 *)(plVar11 + 9) = 0;
    plVar11[8] = 0;
    plVar11[7] = 0;
    puVar16 = *(ushort **)(puVar12 + 0x10);
    if (puVar16 == (ushort *)0x0) {
      puVar16 = *(ushort **)(puVar12 + 8);
    }
    uVar1 = *puVar16;
    *(uint *)(plVar11 + 9) = (uint)uVar1;
    pvVar9 = operator_new__((ulong)uVar1);
    plVar11[8] = (long)pvVar9;
    _memcpy(pvVar9,puVar16,(ulong)uVar1);
    *(undefined1 *)(plVar11 + 6) = *puVar12;
    *(undefined4 *)(plVar11 + 10) = uVar8;
    plVar11[0xb] = lVar4;
    plVar11[0xd] = 0;
    plVar11[0xc] = 0;
    plVar11[2] = lVar4 + 0x188;
    plVar11[1] = *(long *)(lVar4 + 400);
    *(long **)(*(long *)(lVar4 + 400) + 0x10) = plVar11;
    *(long **)(lVar4 + 400) = plVar11;
LAB_100377ef1:
    if ((local_cc != 0) && ((int)plVar11[10] == 0)) {
      (*DAT_1011c5b40)();
      iVar7 = 0;
      goto LAB_1003780b6;
    }
    iVar7 = 0;
    if (local_cc == 0) goto LAB_1003780b6;
    (*DAT_1011c56c8)(local_cc,*(undefined4 *)(*plVar11 + 0x50));
    FUN_10038e870(local_a8,local_58,0x10);
    plVar11 = *(long **)(lVar4 + 0x18);
    if (plVar11 != (long *)0x0) {
      do {
        puVar12 = local_a0;
        if (local_a0 == (undefined1 *)0x0) {
          puVar12 = local_90;
        }
        *puVar12 = 0;
        local_a8[0] = 0;
        FUN_10038e8e0(local_a8,"ps_out%d%s",*(undefined1 *)((long)plVar11 + 0x2a),
                      (&PTR_s__100bbc2c0)[*(byte *)((long)plVar11 + 0x29)]);
        puVar12 = local_a0;
        if (local_a0 == (undefined1 *)0x0) {
          puVar12 = local_90;
        }
        (*DAT_1011c7880)(local_cc,*(undefined1 *)((long)plVar11 + 0x2a),puVar12);
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    FUN_10038e8c0(local_a8);
  }
  iVar7 = 0;
  if (local_cc != 0) {
    if (*(int *)(param_2 + 0x2748) != 0) {
      FUN_100378dc0();
    }
    cVar5 = FUN_10036d740(local_cc);
    if (lVar2 != 0) {
      (*DAT_1011c5bb8)(local_cc,*(undefined4 *)(**(long **)(lVar2 + 400) + 0x50));
    }
    if (lVar3 != 0) {
      (*DAT_1011c5bb8)(local_cc,*(undefined4 *)(**(long **)(lVar3 + 400) + 0x50));
    }
    if (lVar4 != 0) {
      (*DAT_1011c5bb8)(local_cc,*(undefined4 *)(**(long **)(lVar4 + 400) + 0x50));
    }
    iVar7 = local_cc;
    if (cVar5 == '\0') {
      (*DAT_1011c5b40)(local_cc);
      iVar7 = 0;
    }
  }
LAB_1003780b6:
  pvVar9 = operator_new(0x120);
  FUN_10037c240(pvVar9,iVar7,param_2,*(undefined8 *)(param_1 + 0x10));
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pvVar9;
}

