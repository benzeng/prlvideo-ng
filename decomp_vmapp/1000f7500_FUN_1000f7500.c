
void FUN_1000f7500(long param_1,ulong param_2,int param_3)

{
  void *pvVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  size_t sVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong local_70;
  ulong local_60;
  long local_48;
  ulong uStack_40;
  long local_38;
  
  uVar10 = (ulong)(param_3 * 0x1000 + 0x1000) + (param_2 & 0xfffffffffffff000);
  local_60 = (param_2 & 0xfffffffffffff000) - (ulong)(uint)(param_3 * 0x1000);
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",3,"(%llx) -> %llx..%llx",param_2,local_60,uVar10 - 1);
  }
  if (uVar10 <= local_60) {
    return;
  }
LAB_1000f7590:
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  lVar13 = *(long *)(param_1 + 0x10);
  uVar5 = 0xffffffffffffffff;
  uVar4 = local_60;
  if (lVar13 != *(long *)(param_1 + 0x18)) {
    uVar5 = 0xffffffffffffffff;
    puVar7 = (uint *)(lVar13 + 0x10);
    do {
      if (DAT_1011b55f8 < 3) {
        puVar12 = (ulong *)(puVar7 + -2);
      }
      else {
        puVar12 = (ulong *)(lVar13 + 8);
        FUN_1008e3970("","vm",3,"start %llx section %llx %llx..%llx",local_60,
                      *(undefined8 *)(puVar7 + -4),*(long *)(puVar7 + -2),
                      *(long *)(puVar7 + -2) + -1 + (ulong)*puVar7);
      }
      uVar14 = *puVar12;
      if (uVar14 <= local_60) {
        if (*puVar7 + uVar14 < uVar10) {
          if (*puVar7 + uVar14 <= local_60) goto LAB_1000f7664;
          lVar13 = (local_60 - uVar14) + *(long *)(puVar7 + -4);
          uVar14 = (*puVar12 - local_60) + (ulong)*puVar7;
          local_38 = CONCAT44(local_38._4_4_,(int)uVar14);
          local_48 = lVar13;
          uStack_40 = local_60;
          if (2 < DAT_1011b55f8) {
            FUN_1008e3970("","vm",3,"partial %llx %llx..%llx new %llx->%llx",lVar13,local_60,
                          ((uVar14 & 0xffffffff) - 1) + local_60,local_60,
                          (uVar14 & 0xffffffff) + local_60);
          }
          local_70 = (uVar14 & 0xffffffff) + local_60;
        }
        else {
          lVar13 = (local_60 - uVar14) + *(long *)(puVar7 + -4);
          uVar14 = uVar10 - local_60;
          local_38 = CONCAT44(local_38._4_4_,(int)uVar14);
          local_70 = uVar10;
          local_48 = lVar13;
          uStack_40 = local_60;
          if (2 < DAT_1011b55f8) {
            FUN_1008e3970("","vm",3,"match %llx %llx..%llx",lVar13,local_60,
                          ((uVar14 & 0xffffffff) - 1) + local_60);
          }
        }
        uVar4 = local_70;
        if (lVar13 != 0) {
          plVar9 = *(long **)(param_1 + 0xbcf8);
          bVar2 = DAT_1011b55f8 < 3;
          plVar11 = plVar9;
          if (plVar9 == *(long **)(param_1 + 0xbd00)) goto LAB_1000f79ce;
          goto LAB_1000f77e0;
        }
        break;
      }
      if (uVar14 < uVar5) {
        uVar5 = uVar14;
      }
LAB_1000f7664:
      lVar13 = lVar13 + 0x18;
      puVar8 = puVar7 + 2;
      puVar7 = puVar7 + 6;
    } while (puVar8 != *(uint **)(param_1 + 0x18));
  }
  local_70 = uVar5;
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",3,"new %llx->%llx",uVar4,local_70);
  }
  goto LAB_1000f7a90;
LAB_1000f77e0:
  do {
    if (!bVar2) {
      FUN_1008e3970("","vm",3,"section %llx %llx..%llx merge %llx %llx..%llx",*plVar11,plVar11[1],
                    plVar11[1] + -1 + (ulong)*(uint *)(plVar11 + 2),lVar13,local_60,
                    (local_60 - 1) + (uVar14 & 0xffffffff));
    }
    uVar5 = plVar11[1];
    if ((uVar5 < local_60) || (uVar4 = (uVar14 & 0xffffffff) + local_60, uVar4 < uVar5)) {
      if ((uVar5 <= local_60) && (uVar4 = *(uint *)(plVar11 + 2) + uVar5, local_60 <= uVar4)) {
        local_60 = (uVar14 & 0xffffffff) + local_60;
        if (local_60 <= uVar4) {
          local_60 = uVar4;
        }
        uVar14 = local_60 - uVar5;
        local_38 = CONCAT44(local_38._4_4_,(int)uVar14);
        lVar13 = *plVar11;
        local_60 = plVar11[1];
        local_48 = lVar13;
        uStack_40 = local_60;
        if (2 < DAT_1011b55f8) {
          lVar3 = (local_60 - 1) + (uVar14 & 0xffffffff);
          goto LAB_1000f7919;
        }
        goto LAB_1000f7941;
      }
      plVar11 = plVar11 + 3;
      plVar9 = *(long **)(param_1 + 0xbd00);
    }
    else {
      uVar14 = *(uint *)(plVar11 + 2) + uVar5;
      if (*(uint *)(plVar11 + 2) + uVar5 < uVar4) {
        uVar14 = uVar4;
      }
      uVar14 = uVar14 - local_60;
      local_38 = CONCAT44(local_38._4_4_,(int)uVar14);
      if (2 < DAT_1011b55f8) {
        lVar3 = ((uVar14 & 0xffffffff) - 1) + local_60;
LAB_1000f7919:
        FUN_1008e3970("","vm",3,"merge to %llx %llx..%llx",lVar13,local_60,lVar3);
      }
LAB_1000f7941:
      pvVar1 = (void *)(((long)plVar11 - *(long *)(param_1 + 0xbcf8) & 0xfffffffffffffff8U) + 0x18 +
                       *(long *)(param_1 + 0xbcf8));
      sVar6 = *(long *)(param_1 + 0xbd00) - (long)pvVar1;
      _memmove(plVar11,pvVar1,sVar6);
      plVar9 = (long *)((sVar6 & 0xfffffffffffffff8) + (long)plVar11);
      plVar11 = *(long **)(param_1 + 0xbd00);
      if (plVar11 != plVar9) {
        plVar9 = plVar11 + ~((ulong)((long)plVar11 + (-0x18 - (long)plVar9)) / 0x18) * 3;
        *(long **)(param_1 + 0xbd00) = plVar9;
      }
      plVar11 = *(long **)(param_1 + 0xbcf8);
    }
    bVar2 = DAT_1011b55f8 < 3;
  } while (plVar11 != plVar9);
LAB_1000f79ce:
  if (!bVar2) {
    FUN_1008e3970("","vm",3,"Add %llx %llx %llx",lVar13,local_60,
                  (local_60 - 1) + (uVar14 & 0xffffffff));
    plVar9 = *(long **)(param_1 + 0xbd00);
  }
  if (plVar9 == *(long **)(param_1 + 0xbd08)) {
    FUN_1000f8400((undefined8 *)(param_1 + 0xbcf8),&local_48);
  }
  else {
    plVar9[2] = local_38;
    plVar9[1] = uStack_40;
    *plVar9 = local_48;
    *(long *)(param_1 + 0xbd00) = *(long *)(param_1 + 0xbd00) + 0x18;
  }
LAB_1000f7a90:
  local_60 = local_70;
  if (uVar10 <= local_70) {
    return;
  }
  goto LAB_1000f7590;
}

