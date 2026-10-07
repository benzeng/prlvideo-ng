
void FUN_10035a5e0(long *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  bool bVar27;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar28;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  long local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int *local_70;
  int *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  void *local_40;
  
  uVar28 = (undefined4)((ulong)in_stack_fffffffffffffee8 >> 0x20);
  FUN_1002adb30(*param_1,param_1[1]);
  uVar22 = *(uint *)(param_2 + 8);
  puVar17 = (uint *)param_1[(ulong)((uVar22 >> 0xc ^ uVar22) & 0xfff ^ uVar22 >> 0x18) + 0x100d];
  while( true ) {
    if (puVar17 == (uint *)0x0) {
      return;
    }
    if (*puVar17 == uVar22) break;
    puVar17 = *(uint **)(puVar17 + 4);
  }
  lVar20 = *(long *)(puVar17 + 2);
  if (lVar20 == 0) {
    return;
  }
  if (*(uint *)(*param_1 + 0x928) <= *(uint *)(param_2 + 0x10)) {
    return;
  }
  if (*(uint *)(*param_1 + 0x928) <
      *(int *)(param_2 + 0x1c) * *(int *)(param_2 + 0x20) + *(uint *)(param_2 + 0x10)) {
    return;
  }
  lVar8 = *(long *)(lVar20 + 8);
  uVar11 = FUN_10032dee0(lVar8,*(undefined4 *)(lVar20 + 4));
  uVar12 = FUN_10032df00(lVar8,*(undefined4 *)(lVar20 + 4));
  iVar13 = *(int *)(param_2 + 0x28);
  iVar3 = *(int *)(param_2 + 0x2c);
  iVar26 = *(int *)(param_2 + 0x30);
  iVar25 = *(int *)(param_2 + 0x34);
  iVar4 = *(int *)(param_2 + 0x38);
  iVar5 = *(int *)(param_2 + 0x3c);
  iVar6 = *(int *)(param_2 + 0x40);
  iVar7 = *(int *)(param_2 + 0x44);
  local_58 = 0;
  uStack_50 = 0;
  FUN_10035b4f0(&local_48,*(undefined4 *)(param_2 + 0x24),&local_58);
  local_88 = 0;
  uStack_80 = 0;
  FUN_10035b4f0(&local_70,*(undefined4 *)(param_2 + 0x24),&local_88);
  if (*(int *)(param_2 + 0x24) != 0) {
    iVar26 = iVar26 - iVar13;
    iVar25 = iVar25 - iVar3;
    uVar22 = iVar6 - iVar4;
    uVar23 = iVar7 - iVar5;
    lVar20 = 0;
    uVar24 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar20);
      uVar14 = puVar1[1];
      uVar15 = puVar1[2];
      uVar10 = puVar1[3];
      puVar2 = (undefined4 *)((long)local_70 + lVar20);
      *puVar2 = *puVar1;
      puVar2[1] = uVar14;
      puVar2[2] = uVar15;
      puVar2[3] = uVar10;
      iVar6 = *(int *)((long)local_70 + lVar20 + 8);
      iVar7 = *(int *)((long)local_70 + lVar20 + 0xc);
      *(ulong *)((long)local_48 + lVar20) =
           CONCAT44((uint)((*(int *)((long)local_70 + lVar20 + 4) - iVar5) * iVar25) / uVar23 +
                    iVar3,(uint)((*(int *)((long)local_70 + lVar20) - iVar4) * iVar26) / uVar22 +
                          iVar13);
      *(ulong *)((long)local_48 + lVar20 + 8) =
           CONCAT44((uint)((iVar7 - iVar5) * iVar25) / uVar23 + iVar3,
                    (uint)((iVar6 - iVar4) * iVar26) / uVar22 + iVar13);
      uVar24 = uVar24 + 1;
      lVar20 = lVar20 + 0x10;
    } while (uVar24 < *(uint *)(param_2 + 0x24));
  }
  if ((*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x28) !=
       *(int *)(param_2 + 0x40) - *(int *)(param_2 + 0x38)) ||
     (local_a0 = 1,
     *(int *)(param_2 + 0x34) - *(int *)(param_2 + 0x2c) !=
     *(int *)(param_2 + 0x44) - *(int *)(param_2 + 0x3c))) {
    local_a0 = 2;
  }
  local_98 = 0x8e;
  local_90 = 0x30000000;
  local_9c = (*(byte *)(param_2 + 0x5c) & 4) != 0;
  if ((bool)local_9c) {
    local_98 = CONCAT44(*(undefined4 *)(param_2 + 0x58),*(undefined4 *)(lVar8 + 8));
  }
  iVar13 = FUN_10035db00(param_1[5],*(undefined4 *)(param_2 + 0x10),
                         *(int *)(param_2 + 0x1c) * *(int *)(param_2 + 0x20));
  uVar22 = *(uint *)(param_2 + 0xc);
  if (uVar22 == 0) {
    piVar19 = &DAT_100b3c0c4;
    uVar18 = 0;
    local_b8 = 0x8e;
    do {
      if (*piVar19 == *(int *)(param_2 + 0x14)) {
        local_b8 = *(undefined4 *)(&DAT_100b3c0c0 + uVar18 * 0x24);
        break;
      }
      uVar18 = uVar18 + 1;
      piVar19 = piVar19 + 9;
    } while (uVar18 < 0x3d);
    local_b4 = *(undefined4 *)(param_2 + 0x18);
    local_b0 = *(undefined4 *)(param_2 + 0x1c);
    local_ac = *(undefined4 *)(param_2 + 0x20);
    local_a8 = (ulong)*(uint *)(param_2 + 0x10) + *(long *)(*param_1 + 0x920);
    FUN_10035fcd0(param_1[5],lVar8,uVar11,uVar12,&local_b8,local_48,local_70,
                  *(undefined4 *)(param_2 + 0x24),&local_a0);
  }
  else {
    for (puVar17 = (uint *)param_1[(ulong)((uVar22 >> 0xc ^ uVar22) & 0xfff ^ uVar22 >> 0x18) +
                                   0x100d]; puVar17 != (uint *)0x0;
        puVar17 = *(uint **)(puVar17 + 4)) {
      if (*puVar17 == uVar22) {
        lVar20 = *(long *)(puVar17 + 2);
        if (lVar20 != 0) {
          lVar9 = *(long *)(lVar20 + 8);
          uVar14 = FUN_10032dee0(lVar9,*(undefined4 *)(lVar20 + 4));
          uVar15 = FUN_10032df00(lVar9,*(undefined4 *)(lVar20 + 4));
          *(undefined4 *)(*(long *)(lVar9 + 0x28) + (ulong)*(uint *)(lVar20 + 4) * 0xc) =
               *(undefined4 *)(param_2 + 0x10);
          uVar22 = 0;
          if (*(int *)(param_2 + 0x24) != 0) {
            lVar21 = 0;
            uVar23 = 0;
            do {
              lVar16 = (long)local_70 + lVar21;
              FUN_10035f410(param_1[5],lVar8,(long)local_48 + lVar21,uVar11,uVar12,lVar9,lVar16,
                            uVar14,uVar15,&local_a0);
              uVar28 = (undefined4)((ulong)lVar16 >> 0x20);
              uVar23 = uVar23 + 1;
              uVar22 = *(uint *)(param_2 + 0x24);
              lVar21 = lVar21 + 0x10;
            } while (uVar23 < uVar22);
          }
          local_9c = 0;
          local_98 = 0x8e;
          if (iVar13 == -1) {
            (*DAT_1011c5d48)();
          }
          else {
            if ((*(byte *)(**(long **)(lVar8 + 0x40) + 0xac) & 4) == 0) {
              bVar27 = false;
            }
            else if (*local_70 == 0) {
              if (local_70[1] == 0) {
                if ((uint)local_70[2] < *(uint *)(lVar9 + 0xc)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = *(uint *)(lVar9 + 0x10) <= (uint)local_70[3];
                }
              }
              else {
                bVar27 = false;
              }
            }
            else {
              bVar27 = false;
            }
            FUN_10035e300(param_1[5],lVar9,*(undefined4 *)(lVar20 + 4),local_70,uVar22,bVar27,
                          CONCAT44(uVar28,iVar13),&local_a0);
          }
        }
        break;
      }
    }
  }
  if (local_70 != (int *)0x0) {
    if (local_68 != local_70) {
      local_68 = (int *)((~((long)local_68 + (-0x10 - (long)local_70)) & 0xfffffffffffffff0U) +
                        (long)local_68);
    }
    operator_delete(local_70);
  }
  if (local_48 != (void *)0x0) {
    if (local_40 != local_48) {
      local_40 = (void *)((~((long)local_40 + (-0x10 - (long)local_48)) & 0xfffffffffffffff0U) +
                         (long)local_40);
    }
    operator_delete(local_48);
  }
  return;
}

