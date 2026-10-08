
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100ab22a0(long param_1,long *param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *extraout_RDX;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 *local_48;
  long *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  lVar13 = *(long *)(param_1 + 8);
  uVar12 = *(ulong *)(param_1 + 0x20);
  plVar5 = (long *)(lVar13 + (uVar12 >> 8) * 8);
  lVar8 = 0;
  if (*(long *)(param_1 + 0x10) != lVar13) {
    lVar8 = (uVar12 & 0xff) * 0x10 + *plVar5;
  }
  uVar7 = 0;
  if (lVar8 != param_3) {
    uVar7 = ((param_3 - *param_2 >> 4) + ((long)param_2 - (long)plVar5) * 0x20) -
            (lVar8 - *plVar5 >> 4);
  }
  lVar8 = *(long *)(param_1 + 0x28);
  if (uVar7 < lVar8 - uVar7) {
    if (uVar12 == 0) {
      FUN_100ab3790(param_1);
    }
    if (uVar7 == 0) {
      lVar13 = *(long *)(param_1 + 8);
      uVar12 = *(ulong *)(param_1 + 0x20) >> 8;
      lVar2 = 0;
      lVar8 = *(long *)(lVar13 + uVar12 * 8);
      if (*(long *)(param_1 + 0x10) != lVar13) {
        lVar2 = (*(ulong *)(param_1 + 0x20) & 0xff) * 0x10 + lVar8;
      }
      if (lVar2 == lVar8) {
        lVar2 = *(long *)(lVar13 + -8 + uVar12 * 8) + 0x1000;
      }
      uVar1 = *param_4;
      *(undefined8 *)(lVar2 + -8) = param_4[1];
      *(undefined8 *)(lVar2 + -0x10) = uVar1;
      lVar13 = *(long *)(param_1 + 0x28) + _UNK_101cd5a78;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + _DAT_101cd5a70;
      *(long *)(param_1 + 0x28) = lVar13;
    }
    else {
      lVar13 = *(long *)(param_1 + 8);
      uVar12 = *(ulong *)(param_1 + 0x20) >> 8;
      local_38 = (undefined8 *)0x0;
      lVar8 = *(long *)(lVar13 + uVar12 * 8);
      if (*(long *)(param_1 + 0x10) != lVar13) {
        local_38 = (undefined8 *)((*(ulong *)(param_1 + 0x20) & 0xff) * 0x10 + lVar8);
      }
      lVar8 = (long)local_38 - lVar8;
      lVar2 = lVar8 >> 4;
      if (lVar8 < 0x11) {
        lVar2 = 0x100 - lVar2;
        uVar6 = ((ulong)(lVar2 >> 0x3f) >> 0x38) + lVar2;
        puVar3 = (undefined8 *)
                 ((0xff - (lVar2 - (uVar6 & 0xfffffffffffff00))) * 0x10 +
                 *(long *)(lVar13 + (uVar12 - ((long)uVar6 >> 8)) * 8));
      }
      else {
        lVar2 = lVar2 + -1;
        uVar6 = ((ulong)(lVar2 >> 0x3f) >> 0x38) + lVar2;
        puVar3 = (undefined8 *)
                 ((lVar2 - (uVar6 & 0xfffffffffffff00)) * 0x10 +
                 *(long *)(lVar13 + (((long)uVar6 >> 8) + uVar12) * 8));
      }
      local_30 = param_4;
      if (local_38 == param_4) {
        local_30 = puVar3;
      }
      uVar1 = *local_38;
      puVar3[1] = local_38[1];
      *puVar3 = uVar1;
      lVar8 = *(long *)(param_1 + 0x28) + _UNK_101cd5a78;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + _DAT_101cd5a70;
      *(long *)(param_1 + 0x28) = lVar8;
      if (1 < uVar7) {
        local_40 = (long *)(lVar13 + uVar12 * 8);
        lVar8 = (long)local_38 - *local_40 >> 4;
        if ((long)local_38 - *local_40 < -0xf) {
          lVar4 = 0xfe - lVar8;
          uVar6 = ((ulong)(lVar4 >> 0x3f) >> 0x38) + lVar4;
          lVar2 = uVar12 - ((long)uVar6 >> 8);
          lVar4 = (0xff - (lVar4 - (uVar6 & 0xfffffffffffff00))) * 0x10 +
                  *(long *)(lVar13 + lVar2 * 8);
        }
        else {
          lVar4 = lVar8 + 1;
          uVar6 = ((ulong)(lVar4 >> 0x3f) >> 0x38) + lVar4;
          lVar2 = ((long)uVar6 >> 8) + uVar12;
          lVar4 = (lVar4 - (uVar6 & 0xfffffffffffff00)) * 0x10 + *(long *)(lVar13 + lVar2 * 8);
        }
        lVar10 = lVar8 + uVar7;
        if (lVar10 == 0 || SCARRY8(lVar8,uVar7) != lVar10 < 0) {
          lVar10 = 0xff - lVar10;
          uVar6 = ((ulong)(lVar10 >> 0x3f) >> 0x38) + lVar10;
          lVar8 = uVar12 - ((long)uVar6 >> 8);
          lVar10 = (0xff - (lVar10 - (uVar6 & 0xfffffffffffff00))) * 0x10 +
                   *(long *)(lVar13 + lVar8 * 8);
        }
        else {
          uVar6 = ((ulong)(lVar10 >> 0x3f) >> 0x38) + lVar10;
          lVar8 = ((long)uVar6 >> 8) + uVar12;
          lVar10 = (lVar10 - (uVar6 & 0xfffffffffffff00)) * 0x10 + *(long *)(lVar13 + lVar8 * 8);
        }
        FUN_100ab3b30(param_1,lVar13 + lVar2 * 8,lVar4,lVar13 + lVar8 * 8,lVar10,&local_30,local_40,
                      local_38);
        local_38 = extraout_RDX;
      }
      uVar1 = *local_30;
      local_38[1] = local_30[1];
      *local_38 = uVar1;
    }
  }
  else {
    lVar2 = 0;
    lVar13 = *(long *)(param_1 + 0x10) - lVar13;
    if (lVar13 != 0) {
      lVar2 = lVar13 * 0x20 + -1;
    }
    if (lVar2 - uVar12 == lVar8) {
      FUN_100ab3100(param_1);
      lVar8 = *(long *)(param_1 + 0x28);
    }
    uVar12 = lVar8 - uVar7;
    if (uVar12 == 0) {
      puVar3 = (undefined8 *)0x0;
      if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
        uVar12 = *(long *)(param_1 + 0x20) + uVar7;
        puVar3 = (undefined8 *)
                 ((uVar12 & 0xff) * 0x10 + *(long *)(*(long *)(param_1 + 8) + (uVar12 >> 8) * 8));
      }
      uVar1 = *param_4;
      puVar3[1] = param_4[1];
      *puVar3 = uVar1;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    }
    else {
      uVar6 = lVar8 + *(long *)(param_1 + 0x20);
      lVar13 = *(long *)(param_1 + 8);
      uVar11 = uVar6 >> 8;
      puVar3 = (undefined8 *)0x0;
      lVar8 = *(long *)(lVar13 + uVar11 * 8);
      if (*(long *)(param_1 + 0x10) != lVar13) {
        puVar3 = (undefined8 *)((uVar6 & 0xff) * 0x10 + lVar8);
      }
      lVar8 = (long)puVar3 - lVar8;
      lVar2 = lVar8 >> 4;
      if (lVar8 < 0x11) {
        lVar2 = 0x100 - lVar2;
        uVar6 = ((ulong)(lVar2 >> 0x3f) >> 0x38) + lVar2;
        lVar8 = uVar11 - ((long)uVar6 >> 8);
        puVar9 = (undefined8 *)
                 ((0xff - (lVar2 - (uVar6 & 0xfffffffffffff00))) * 0x10 +
                 *(long *)(lVar13 + lVar8 * 8));
      }
      else {
        lVar2 = lVar2 + -1;
        uVar6 = ((ulong)(lVar2 >> 0x3f) >> 0x38) + lVar2;
        lVar8 = ((long)uVar6 >> 8) + uVar11;
        puVar9 = (undefined8 *)
                 ((lVar2 - (uVar6 & 0xfffffffffffff00)) * 0x10 + *(long *)(lVar13 + lVar8 * 8));
      }
      local_48 = param_4;
      if (puVar9 == param_4) {
        local_48 = puVar3;
      }
      plVar5 = (long *)(lVar13 + uVar11 * 8);
      auVar14._8_8_ = puVar3;
      auVar14._0_8_ = plVar5;
      uVar1 = *puVar9;
      puVar3[1] = puVar9[1];
      *puVar3 = uVar1;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
      if (1 < uVar12) {
        lVar2 = ((long)puVar3 - *plVar5 >> 4) - uVar12;
        if (lVar2 < 1) {
          lVar2 = 0xff - lVar2;
          uVar12 = ((ulong)(lVar2 >> 0x3f) >> 0x38) + lVar2;
          lVar4 = uVar11 - ((long)uVar12 >> 8);
          lVar2 = (0xff - (lVar2 - (uVar12 & 0xfffffffffffff00))) * 0x10 +
                  *(long *)(lVar13 + lVar4 * 8);
        }
        else {
          uVar12 = ((ulong)(lVar2 >> 0x3f) >> 0x38) + lVar2;
          lVar4 = ((long)uVar12 >> 8) + uVar11;
          lVar2 = (lVar2 - (uVar12 & 0xfffffffffffff00)) * 0x10 + *(long *)(lVar13 + lVar4 * 8);
        }
        auVar14 = FUN_100ab3e80(param_1,lVar13 + lVar4 * 8,lVar2,lVar13 + lVar8 * 8,puVar9,&local_48
                                ,plVar5,puVar3);
      }
      lVar13 = auVar14._8_8_;
      if (lVar13 == *auVar14._0_8_) {
        lVar13 = auVar14._0_8_[-1] + 0x1000;
      }
      uVar1 = *local_48;
      *(undefined8 *)(lVar13 + -8) = local_48[1];
      *(undefined8 *)(lVar13 + -0x10) = uVar1;
    }
  }
  lVar13 = *(long *)(param_1 + 8);
  uVar12 = *(ulong *)(param_1 + 0x20) >> 8;
  plVar5 = (long *)(lVar13 + uVar12 * 8);
  lVar8 = 0;
  if (*(long *)(param_1 + 0x10) != lVar13) {
    lVar8 = (*(ulong *)(param_1 + 0x20) & 0xff) * 0x10 + *plVar5;
  }
  if (uVar7 != 0) {
    lVar8 = lVar8 - *plVar5 >> 4;
    lVar2 = lVar8 + uVar7;
    if (lVar2 == 0 || SCARRY8(lVar8,uVar7) != lVar2 < 0) {
      lVar2 = 0xff - lVar2;
      uVar7 = ((ulong)(lVar2 >> 0x3f) >> 0x38) + lVar2;
      lVar8 = uVar12 - ((long)uVar7 >> 8);
      plVar5 = (long *)(lVar13 + lVar8 * 8);
      lVar8 = (0xff - (lVar2 - (uVar7 & 0xfffffffffffff00))) * 0x10 + *(long *)(lVar13 + lVar8 * 8);
    }
    else {
      uVar7 = ((ulong)(lVar2 >> 0x3f) >> 0x38) + lVar2;
      lVar8 = ((long)uVar7 >> 8) + uVar12;
      plVar5 = (long *)(lVar13 + lVar8 * 8);
      lVar8 = (lVar2 - (uVar7 & 0xfffffffffffff00)) * 0x10 + *(long *)(lVar13 + lVar8 * 8);
    }
  }
  auVar15._8_8_ = lVar8;
  auVar15._0_8_ = plVar5;
  return auVar15;
}

