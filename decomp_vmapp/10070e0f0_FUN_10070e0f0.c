
void FUN_10070e0f0(long param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uStack_70;
  void *local_68;
  uint *local_60;
  undefined8 *local_58;
  ulong local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  local_50 = CONCAT44(local_50._4_4_,param_2);
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar6 = -((ulong)*(uint *)((long)param_3 + 0x54) * 8 + 0xf & 0xfffffffffffffff0);
  local_40 = (long)&local_68 + lVar6;
  lVar4 = *(long *)(param_1 + 0x1a048);
  *(undefined4 *)(param_3 + 7) = 1;
  puVar9 = (undefined8 *)0x0;
  local_38 = lVar13;
  if ((ulong)*(uint *)((long)param_3 + 0x54) != 0) {
    local_60 = (uint *)(param_3 + 10);
    local_48 = (long *)(lVar4 * *param_3);
    puVar9 = (undefined8 *)0x0;
    uVar12 = 0;
    uVar2 = 0;
    do {
      uVar15 = uVar2;
      local_58 = puVar9;
      if (uVar15 - uVar12 == 0x10) {
        lVar13 = local_40 + (ulong)uVar12 * 8;
        *(undefined8 *)((long)&uStack_70 + lVar6) = 0x10070e194;
        iVar8 = FUN_10070de80(param_1,param_3,lVar13,0x10);
        uVar12 = uVar15;
        if (iVar8 == 0) {
LAB_10070e28b:
          *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | 8;
          lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
          puVar9 = local_58;
          goto LAB_10070e36c;
        }
      }
      while (puVar9 = *(undefined8 **)(param_1 + 0x30), puVar9 == (undefined8 *)0x0) {
        if (uVar12 < uVar15) {
          lVar13 = local_40 + (ulong)uVar12 * 8;
          *(undefined8 *)((long)&uStack_70 + lVar6) = 0x10070e1d2;
          iVar8 = FUN_10070de80(param_1,param_3,lVar13);
          uVar12 = uVar15;
          if (iVar8 == 0) goto LAB_10070e28b;
        }
        if (*(int *)(param_1 + 0x28) != 0) {
          *(undefined8 *)((long)&uStack_70 + lVar6) = 0x10070e1ad;
          FUN_10070dcb0(param_1,0xffffffff);
        }
      }
      *(undefined8 *)(param_1 + 0x30) = *puVar9;
      uVar14 = (ulong)uVar15;
      *(undefined8 **)(local_40 + uVar14 * 8) = puVar9 + 3;
      puVar9[1] = param_3;
      puVar9[2] = 0;
      puVar5 = *(undefined4 **)(local_40 + uVar14 * 8);
      *puVar5 = (undefined4)local_50;
      uVar2 = *(uint *)(param_3 + 1);
      uVar16 = uVar2 & 1;
      puVar5[0x12] = uVar16 + 1;
      puVar5[8] = 0;
      puVar5[10] = 0;
      *(long **)(puVar5 + 2) = local_48;
      if ((uVar2 & 0x2000) != 0) {
        uVar2 = *local_60;
        local_58 = (undefined8 *)(ulong)uVar2;
        local_50 = uVar14;
        local_48 = param_3;
        *(undefined8 *)((long)&uStack_70 + lVar6) = 0x10070e2ba;
        pvVar10 = _valloc((size_t)(ulong)uVar2);
        puVar11 = local_58;
        puVar7 = local_60;
        if (pvVar10 == (void *)0x0) {
          *(undefined8 *)((long)&uStack_70 + lVar6) = 0x10070e2f9;
          FUN_1008e3970("","AbstractFile",0,"Failed to allocate buffer");
          param_3 = local_48;
          goto LAB_10070e35d;
        }
        puVar9[2] = pvVar10;
        if (uVar16 != 0) {
          local_68 = pvVar10;
          *(undefined8 *)((long)&uStack_70 + lVar6) = 0x10070e318;
          FUN_10070b220(pvVar10,puVar7,0,puVar11);
          pvVar10 = local_68;
          puVar11 = (undefined8 *)(ulong)*puVar7;
        }
        *(void **)(*(long *)(local_40 + local_50 * 8) + 0x10) = pvVar10;
        *(ulong *)(*(long *)(local_40 + local_50 * 8) + 0x18) = (ulong)puVar11 & 0xffffffff;
        param_3 = local_48;
        break;
      }
      *(long *)(puVar5 + 4) = param_3[uVar14 * 2 + 0xb];
      uVar2 = *(uint *)(param_3 + uVar14 * 2 + 0xc);
      *(ulong *)(*(long *)(local_40 + uVar14 * 8) + 0x18) = (ulong)uVar2;
      local_48 = (long *)((long)local_48 + (ulong)uVar2);
      uVar2 = uVar15 + 1;
    } while (uVar15 + 1 < *(uint *)((long)param_3 + 0x54));
    iVar8 = (uVar15 + 1) - uVar12;
    if (uVar12 <= uVar15 + 1 && iVar8 != 0) {
      lVar13 = local_40 + (ulong)uVar12 * 8;
      *(undefined8 *)((long)&uStack_70 + lVar6) = 0x10070e359;
      iVar8 = FUN_10070de80(param_1,param_3,lVar13,iVar8);
      if (iVar8 == 0) {
LAB_10070e35d:
        *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | 8;
      }
    }
    lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
LAB_10070e36c:
  plVar1 = param_3 + 7;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    if (puVar9 == (undefined8 *)0x0) {
      param_3[4] = 0;
      if (*(long *)(param_1 + 0x18) == 0) {
        *(long **)(param_1 + 0x10) = param_3;
      }
      else {
        *(long **)(*(long *)(param_1 + 0x18) + 0x20) = param_3;
      }
      *(long **)(param_1 + 0x18) = param_3;
    }
    else {
      pvVar10 = (void *)puVar9[2];
      if (pvVar10 != (void *)0x0) {
        lVar4 = puVar9[1];
        if ((*(byte *)(lVar4 + 8) & 0xfd) == 0) {
          uVar3 = *(undefined4 *)(lVar4 + 0x50);
          *(undefined8 *)((long)&uStack_70 + lVar6) = 0x10070e3a1;
          FUN_10070b090(lVar4 + 0x50,pvVar10,0,uVar3);
          pvVar10 = (void *)puVar9[2];
        }
        *(undefined8 *)((long)&uStack_70 + lVar6) = 0x10070e3ae;
        _free(pvVar10);
        puVar9[2] = 0;
      }
      lVar4 = puVar9[1];
      *(undefined8 *)(lVar4 + 0x20) = 0;
      if (*(long *)(param_1 + 0x18) == 0) {
        *(long *)(param_1 + 0x10) = lVar4;
        *(long *)(param_1 + 0x18) = lVar4;
      }
      else {
        *(long *)(*(long *)(param_1 + 0x18) + 0x20) = lVar4;
        *(long *)(param_1 + 0x18) = lVar4;
      }
    }
  }
  if (lVar13 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&uStack_70 + lVar6) = &UNK_10070e41a;
    ___stack_chk_fail();
  }
  return;
}

