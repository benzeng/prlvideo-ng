
void FUN_100361640(long param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  bool bVar7;
  char cVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  byte bVar17;
  uint uVar18;
  byte bVar19;
  uint uVar20;
  ulong uVar21;
  undefined4 uVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  undefined *in_stack_fffffffffffffec8;
  byte local_f0;
  uint local_dc;
  uint local_bc;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  long local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  cVar8 = FUN_100360430(param_1,param_3,*param_2 & 1,(*param_2 & 6) != 0);
  uVar22 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  if (cVar8 == '\0') {
    return;
  }
  lVar16 = *(long *)(param_1 + 0x98);
  lVar4 = *(long *)(lVar16 + 0x60);
  lVar5 = *(long *)(lVar16 + 0x100);
  piVar6 = *(int **)(param_2 + 4);
  if (lVar4 == 0) {
    bVar17 = 0;
  }
  else {
    bVar17 = (byte)*param_2 & 1;
  }
  if (lVar5 == 0) {
    bVar19 = 0;
LAB_1003616f7:
    local_f0 = 0;
    bVar24 = false;
  }
  else {
    bVar19 = (byte)((*param_2 & 4) >> 2);
    if ((*param_2 & 2) == 0) goto LAB_1003616f7;
    bVar24 = *(int *)(lVar5 + 8) == 0x23;
    local_f0 = 1;
  }
  uVar23 = *(uint *)(lVar16 + 0x110);
  if (bVar17 != 0) {
    if (param_2[6] == 0) {
      bVar25 = false;
    }
    else {
      bVar25 = true;
      if (((*piVar6 == 0) && (piVar6[1] == 0)) && (piVar6[2] == *(int *)(lVar4 + 0xc))) {
        bVar25 = piVar6[3] != *(int *)(lVar4 + 0x10);
      }
    }
    uVar14 = uVar23 & 0xffffffef;
    uVar11 = (ulong)uVar14;
    if (uVar14 != 0) {
      uVar21 = 0;
      do {
        if ((uVar11 & 1) != 0) {
          lVar16 = *(long *)(param_1 + 0x98);
          lVar12 = uVar21 * 0x20;
          lVar13 = *(long *)(lVar16 + 0x58 + lVar12);
          uVar14 = *(uint *)(lVar16 + 0x6c + lVar12);
          uVar9 = (ulong)uVar14;
          uVar18 = *(uint *)(lVar16 + 0x68 + lVar12);
          if (bVar25) {
            lVar13 = *(long *)(lVar13 + 0x88);
            uVar20 = *(uint *)(lVar13 + uVar9 * 4);
            if ((uVar20 >> (uVar18 & 0x1f) & 1) == 0) {
              in_stack_fffffffffffffec8 = &DAT_100b3c980;
              (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                        (*(long **)(param_1 + 0x20),*(undefined8 *)(lVar16 + 0x60 + lVar12),0,uVar14
                         ,1,uVar18,&DAT_100b3c980);
              goto LAB_100361829;
            }
          }
          else {
            lVar13 = *(long *)(lVar13 + 0x88);
            uVar20 = *(uint *)(lVar13 + uVar9 * 4);
          }
          *(uint *)(lVar13 + uVar9 * 4) = 1 << ((byte)uVar18 & 0x1f) | uVar20;
        }
LAB_100361829:
        uVar22 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 0x20);
        uVar11 = uVar11 >> 1;
        uVar21 = (ulong)((int)uVar21 + 1);
      } while ((int)uVar11 != 0);
    }
  }
  if ((bVar19 | local_f0) == 1) {
    if (param_2[6] == 0) {
      lVar16 = *(long *)(param_1 + 0x98) + 0xf0;
      bVar25 = false;
LAB_100361933:
      puVar1 = (uint *)(*(long *)(*(long *)(lVar16 + 8) + 0x88) +
                       (ulong)*(uint *)(lVar16 + 0x1c) * 4);
      *puVar1 = *puVar1 | 1 << (*(byte *)(lVar16 + 0x18) & 0x1f);
    }
    else {
      if (((*piVar6 == 0) && (piVar6[1] == 0)) && (piVar6[2] == *(int *)(lVar5 + 0xc))) {
        lVar13 = *(long *)(param_1 + 0x98);
        lVar16 = lVar13 + 0xf0;
        if (piVar6[3] == *(int *)(lVar5 + 0x10)) {
          bVar25 = false;
          goto LAB_100361933;
        }
      }
      else {
        lVar13 = *(long *)(param_1 + 0x98);
        lVar16 = lVar13 + 0xf0;
      }
      bVar25 = true;
      if ((*(uint *)(*(long *)(*(long *)(lVar13 + 0xf8) + 0x88) +
                    (ulong)*(uint *)(lVar13 + 0x10c) * 4) >> (*(uint *)(lVar13 + 0x108) & 0x1f) & 1)
          != 0) goto LAB_100361933;
      (**(code **)(**(long **)(param_1 + 0x20) + 0x20))
                (0,*(long **)(param_1 + 0x20),*(undefined8 *)(lVar13 + 0x100),0,
                 (ulong)*(uint *)(lVar13 + 0x10c),1,*(uint *)(lVar13 + 0x108),CONCAT44(uVar22,1),
                 (*(byte *)(*(long *)(lVar13 + 0xf8) + 0xac) & 2) >> 1,0);
      bVar25 = true;
    }
    if (bVar24 != false) {
      lVar16 = *(long *)(param_1 + 0x98);
      uVar11 = (ulong)*(uint *)(lVar16 + 0xec);
      uVar14 = *(uint *)(lVar16 + 0xe8);
      if (bVar25) {
        lVar13 = *(long *)(*(long *)(lVar16 + 0xd8) + 0x88);
        uVar18 = *(uint *)(lVar13 + uVar11 * 4);
        if ((uVar18 >> (uVar14 & 0x1f) & 1) == 0) {
          (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                    (*(long **)(param_1 + 0x20),*(undefined8 *)(lVar16 + 0xe0),0,
                     *(uint *)(lVar16 + 0xec),1,uVar14,&DAT_100b3c980);
          goto LAB_1003619cf;
        }
      }
      else {
        lVar13 = *(long *)(*(long *)(lVar16 + 0xd8) + 0x88);
        uVar18 = *(uint *)(lVar13 + uVar11 * 4);
      }
      *(uint *)(lVar13 + uVar11 * 4) = 1 << ((byte)uVar14 & 0x1f) | uVar18;
    }
  }
LAB_1003619cf:
  if (bVar17 == 0) {
    uVar22 = 0;
    local_bc = 0xffffffff;
    local_dc = 0;
    uVar14 = 0;
  }
  else {
    local_dc = FUN_10032df40(lVar4,*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x6c),
                             *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x68));
    if ((lVar4 == 0) || ((*(ushort *)(lVar4 + 0xb0) & 1) != 0)) {
LAB_100361ab3:
      local_bc = 0xffffffff;
    }
    else {
      uVar14 = *(uint *)(*(long *)(param_1 + 0x38) + 0x9830);
      if (uVar14 == 0) goto LAB_100361ab3;
      uVar22 = *(undefined4 *)(*(long *)(lVar4 + 0x28) + (ulong)local_dc * 0xc);
      iVar15 = *(int *)(lVar4 + 0x10) *
               *(int *)(*(long *)(lVar4 + 0x28) + 4 + (ulong)local_dc * 0xc);
      cVar8 = FUN_1002ad170(*(long *)(param_1 + 0x38),0,uVar22,iVar15);
      local_bc = 0;
      while (cVar8 == '\0') {
        local_bc = local_bc + 1;
        if (uVar14 <= local_bc) goto LAB_100361ab3;
        cVar8 = FUN_1002ad170(*(undefined8 *)(param_1 + 0x38),local_bc,uVar22,iVar15);
      }
    }
    uVar14 = *(uint *)(lVar4 + 8);
    if (*(int *)(param_3 + 0x8578) == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = 1;
      if ((int)uVar14 < 0x66) {
        if (uVar14 < 9) {
          uVar14 = 0x10a >> (uVar14 & 0x1f);
joined_r0x000100361b24:
          if ((uVar14 & 1) != 0) goto LAB_100361b29;
        }
      }
      else if (uVar14 - 0x66 < 0xd) {
        uVar14 = 0x1015 >> (uVar14 - 0x66 & 0x1f);
        goto joined_r0x000100361b24;
      }
      uVar22 = 0;
    }
LAB_100361b29:
    FUN_100361450();
    uVar14 = 0x4000;
  }
  if (local_f0 != 0) {
    (*DAT_1011c5ba0)(1);
    puVar10 = *(ulong **)(param_1 + 0xa0);
    *puVar10 = *puVar10 | *(ulong *)(*(long *)puVar10[1] + 0x70);
    (*DAT_1011c5848)(SUB84((double)(float)param_2[2],0));
    uVar14 = uVar14 | 0x100;
  }
  if (bVar19 != 0) {
    (*DAT_1011c6b18)(0xffffffff);
    puVar10 = *(ulong **)(param_1 + 0xa0);
    *puVar10 = *puVar10 | *(ulong *)(*(long *)puVar10[1] + 0x1d8);
    (*DAT_1011c5858)(param_2[3]);
    uVar14 = uVar14 | 0x400;
  }
  if ((bVar17 | bVar24) == 1) {
    (*DAT_1011c5970)(1,1,1,1);
    puVar10 = *(ulong **)(param_1 + 0xa0);
    *puVar10 = *puVar10 | *(ulong *)(*(long *)puVar10[1] + 0x540);
  }
  bVar25 = false;
  if ((((lVar5 != 0) && (lVar4 != 0)) && (*param_2 == 1)) &&
     (bVar25 = true, *(int *)(lVar4 + 0xc) == *(int *)(lVar5 + 0xc))) {
    bVar25 = *(int *)(lVar4 + 0x10) != *(int *)(lVar5 + 0x10);
  }
  FUN_100385b50(*(undefined8 *)(param_1 + 0x90),uVar23 & 0xffffffef,uVar22,bVar25 ^ 1);
  if ((param_2[6] == 0) ||
     (((lVar5 != 0 && ((*param_2 & 2) != 0)) &&
      (((*piVar6 == 0 && ((piVar6[1] == 0 && (piVar6[2] == *(int *)(lVar5 + 0xc))))) &&
       (piVar6[3] == *(int *)(lVar5 + 0x10))))))) {
    (*DAT_1011c5bc0)(0xc11);
    (*DAT_1011c5820)(uVar14);
    bVar7 = true;
    if (local_bc != 0xffffffff) {
      local_68 = *(undefined4 *)(lVar4 + 0xc);
      local_64 = *(undefined4 *)(lVar4 + 0x10);
      local_70 = 0;
      local_6c = 0;
      local_88 = 1;
      local_78 = 0;
      local_84 = 0;
      local_80 = 0x8e;
      local_48 = *(undefined4 *)(lVar4 + 8);
      local_3c = *(undefined4 *)(*(long *)(lVar4 + 0x28) + 4 + (ulong)local_dc * 0xc);
      local_38 = (ulong)*(uint *)(*(long *)(lVar4 + 0x28) + (ulong)local_dc * 0xc) +
                 *(long *)(*(long *)(param_1 + 0x38) + 0x920);
      local_44 = local_68;
      local_40 = local_64;
      uVar22 = FUN_10032dee0(lVar4);
      FUN_10035f8d0(param_1,lVar4,uVar22,0,&local_48,&local_70,&local_70,1,0,local_bc,&local_88);
      bVar7 = true;
    }
  }
  else {
    (*DAT_1011c5c78)(0xc11);
    uVar23 = param_2[6];
    if ((ulong)uVar23 == 0) {
      bVar7 = false;
    }
    else {
      uVar11 = 0;
      lVar16 = 0xc;
      do {
        lVar5 = *(long *)(param_2 + 4);
        iVar15 = *(int *)(lVar5 + -0xc + lVar16);
        iVar3 = *(int *)(lVar5 + -8 + lVar16);
        (*DAT_1011c69c8)(iVar15,iVar3,*(int *)(lVar5 + -4 + lVar16) - iVar15,
                         *(int *)(lVar5 + lVar16) - iVar3);
        (*DAT_1011c5820)(uVar14);
        if (local_bc != 0xffffffff) {
          puVar2 = (undefined4 *)(lVar5 + -0xc + lVar16);
          local_98 = *puVar2;
          uStack_94 = puVar2[1];
          uStack_90 = puVar2[2];
          uStack_8c = puVar2[3];
          local_b0 = 1;
          local_ac = 0;
          local_a8 = 0x8e;
          local_a0 = 0x10000000;
          if (uVar11 == param_2[6] - 1) {
            local_a0 = 0x20000000;
          }
          local_60 = *(undefined4 *)(lVar4 + 8);
          local_5c = *(undefined4 *)(lVar4 + 0xc);
          local_58 = *(undefined4 *)(lVar4 + 0x10);
          local_54 = *(undefined4 *)(*(long *)(lVar4 + 0x28) + 4 + (ulong)local_dc * 0xc);
          local_50 = (ulong)*(uint *)(*(long *)(lVar4 + 0x28) + (ulong)local_dc * 0xc) +
                     *(long *)(*(long *)(param_1 + 0x38) + 0x920);
          uVar22 = FUN_10032dee0(lVar4,local_dc);
          FUN_10035f8d0(param_1,lVar4,uVar22,0,&local_60,&local_98,&local_98,1,0,local_bc,&local_b0)
          ;
        }
        uVar11 = uVar11 + 1;
        lVar16 = lVar16 + 0x10;
      } while (uVar11 < uVar23);
      bVar7 = false;
    }
  }
  if (bVar24 == false) {
    if (bVar25 == false && (*(byte *)(*(long *)(param_1 + 0x98) + 0x110) & 0x10) == 0) {
      puVar10 = *(ulong **)(param_1 + 0xa0);
      uVar11 = *puVar10;
      lVar16 = *(long *)puVar10[1];
      goto LAB_10036207f;
    }
  }
  else {
    FUN_100385b50(*(undefined8 *)(param_1 + 0x90),0x10,0,1);
    (*DAT_1011c5830)(param_2[2],DAT_100b39678,DAT_100b39678,DAT_100b39678);
    if (bVar7) {
      (*DAT_1011c5820)(0x4000);
    }
    else {
      lVar16 = 0xc;
      for (uVar23 = param_2[6]; uVar23 != 0; uVar23 = uVar23 - 1) {
        lVar4 = *(long *)(param_2 + 4);
        iVar15 = *(int *)(lVar4 + -0xc + lVar16);
        iVar3 = *(int *)(lVar4 + -8 + lVar16);
        (*DAT_1011c69c8)(iVar15,iVar3,*(int *)(lVar4 + -4 + lVar16) - iVar15,
                         *(int *)(lVar4 + lVar16) - iVar3);
        (*DAT_1011c5820)(0x4000);
        lVar16 = lVar16 + 0x10;
      }
    }
  }
  puVar10 = *(ulong **)(param_1 + 0xa0);
  lVar16 = *(long *)puVar10[1];
  uVar11 = *puVar10 | *(ulong *)(lVar16 + 0x3010);
  *puVar10 = uVar11;
LAB_10036207f:
  *puVar10 = uVar11 | *(ulong *)(lVar16 + 0x570);
  return;
}

