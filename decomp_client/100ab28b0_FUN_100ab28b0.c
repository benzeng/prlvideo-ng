
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100ab28b0(long param_1,long *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  lVar4 = *(long *)(param_1 + 8);
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar8 = uVar3 >> 8;
  plVar5 = (long *)(lVar4 + uVar8 * 8);
  lVar11 = 0;
  if (*(long *)(param_1 + 0x10) != lVar4) {
    lVar11 = (uVar3 & 0xff) * 0x10 + *plVar5;
  }
  plVar12 = plVar5;
  if (lVar11 == param_3) {
    lVar9 = *plVar5;
    bVar1 = true;
    uVar7 = 0;
  }
  else {
    lVar2 = (param_3 - *param_2 >> 4) + ((long)param_2 - (long)plVar5) * 0x20;
    lVar9 = *plVar5;
    uVar13 = lVar2 - (lVar11 - lVar9 >> 4);
    bVar1 = true;
    uVar7 = 0;
    param_3 = lVar11;
    if (uVar13 != 0) {
      uVar7 = uVar13;
      if (lVar2 < 1) {
        lVar2 = 0xff - lVar2;
        uVar13 = ((ulong)(lVar2 >> 0x3f) >> 0x38) + lVar2;
        lVar6 = uVar8 - ((long)uVar13 >> 8);
        lVar9 = *(long *)(lVar4 + lVar6 * 8);
        param_3 = (0xff - (lVar2 - (uVar13 & 0xfffffffffffff00))) * 0x10 + lVar9;
        bVar1 = false;
        plVar12 = (long *)(lVar4 + lVar6 * 8);
      }
      else {
        uVar13 = ((ulong)(lVar2 >> 0x3f) >> 0x38) + lVar2;
        lVar6 = ((long)uVar13 >> 8) + uVar8;
        lVar9 = *(long *)(lVar4 + lVar6 * 8);
        param_3 = (lVar2 - (uVar13 & 0xfffffffffffff00)) * 0x10 + lVar9;
        bVar1 = false;
        plVar12 = (long *)(lVar4 + lVar6 * 8);
      }
    }
  }
  lVar9 = param_3 - lVar9;
  lVar6 = lVar9 >> 4;
  lVar2 = lVar6 + 1;
  if (uVar7 < *(long *)(param_1 + 0x28) - 1U >> 1) {
    if (lVar9 < -0xf) {
      lVar6 = 0xfe - lVar6;
      uVar3 = ((ulong)(lVar6 >> 0x3f) >> 0x38) + lVar6;
      plVar10 = plVar12 + -((long)uVar3 >> 8);
      lVar4 = (0xff - (lVar6 - (uVar3 & 0xfffffffffffff00))) * 0x10 + *plVar10;
    }
    else {
      uVar3 = ((ulong)(lVar2 >> 0x3f) >> 0x38) + lVar2;
      lVar4 = (long)uVar3 >> 8;
      plVar10 = plVar12 + lVar4;
      lVar4 = (lVar2 - (uVar3 & 0xfffffffffffff00)) * 0x10 + plVar12[lVar4];
    }
    FUN_100ab4290(plVar5,lVar11,plVar12,param_3,plVar10,lVar4);
    uVar3 = *(long *)(param_1 + 0x20) + _DAT_101cd5a80;
    lVar4 = *(long *)(param_1 + 0x28) + _UNK_101cd5a88;
    *(ulong *)(param_1 + 0x20) = uVar3;
    *(long *)(param_1 + 0x28) = lVar4;
    if (0x1ff < uVar3) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      uVar3 = *(long *)(param_1 + 0x20) - 0x100;
      *(ulong *)(param_1 + 0x20) = uVar3;
    }
  }
  else {
    if (lVar9 < -0xf) {
      lVar6 = 0xfe - lVar6;
      uVar8 = ((ulong)(lVar6 >> 0x3f) >> 0x38) + lVar6;
      plVar5 = plVar12 + -((long)uVar8 >> 8);
      lVar11 = (0xff - (lVar6 - (uVar8 & 0xfffffffffffff00))) * 0x10 + *plVar5;
    }
    else {
      uVar8 = ((ulong)(lVar2 >> 0x3f) >> 0x38) + lVar2;
      lVar11 = (long)uVar8 >> 8;
      plVar5 = plVar12 + lVar11;
      lVar11 = (lVar2 - (uVar8 & 0xfffffffffffff00)) * 0x10 + plVar12[lVar11];
    }
    uVar3 = uVar3 + *(long *)(param_1 + 0x28);
    lVar9 = 0;
    plVar10 = (long *)(lVar4 + (uVar3 >> 8) * 8);
    if (*(long *)(param_1 + 0x10) != lVar4) {
      lVar9 = (uVar3 & 0xff) * 0x10 + *plVar10;
    }
    FUN_100ab43e0(plVar5,lVar11,plVar10,lVar9,plVar12,param_3);
    lVar4 = *(long *)(param_1 + 0x28) + -1;
    *(long *)(param_1 + 0x28) = lVar4;
    lVar11 = 0;
    lVar9 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
    if (lVar9 != 0) {
      lVar11 = lVar9 * 0x20 + -1;
    }
    uVar3 = *(ulong *)(param_1 + 0x20);
    if (0x1ff < (lVar11 - uVar3) - lVar4) {
      operator_delete(*(void **)(*(long *)(param_1 + 0x10) + -8));
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
      uVar3 = *(ulong *)(param_1 + 0x20);
    }
  }
  lVar4 = *(long *)(param_1 + 8);
  uVar8 = uVar3 >> 8;
  plVar5 = (long *)(lVar4 + uVar8 * 8);
  lVar11 = 0;
  if (*(long *)(param_1 + 0x10) != lVar4) {
    lVar11 = (uVar3 & 0xff) * 0x10 + *plVar5;
  }
  if (!bVar1) {
    lVar11 = lVar11 - *plVar5 >> 4;
    lVar9 = lVar11 + uVar7;
    if (lVar9 == 0 || SCARRY8(lVar11,uVar7) != lVar9 < 0) {
      lVar9 = 0xff - lVar9;
      uVar3 = ((ulong)(lVar9 >> 0x3f) >> 0x38) + lVar9;
      lVar11 = uVar8 - ((long)uVar3 >> 8);
      plVar5 = (long *)(lVar4 + lVar11 * 8);
      lVar11 = (0xff - (lVar9 - (uVar3 & 0xfffffffffffff00))) * 0x10 + *(long *)(lVar4 + lVar11 * 8)
      ;
    }
    else {
      uVar3 = ((ulong)(lVar9 >> 0x3f) >> 0x38) + lVar9;
      lVar11 = ((long)uVar3 >> 8) + uVar8;
      plVar5 = (long *)(lVar4 + lVar11 * 8);
      lVar11 = (lVar9 - (uVar3 & 0xfffffffffffff00)) * 0x10 + *(long *)(lVar4 + lVar11 * 8);
    }
  }
  auVar14._8_8_ = lVar11;
  auVar14._0_8_ = plVar5;
  return auVar14;
}

