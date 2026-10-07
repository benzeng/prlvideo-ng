
void FUN_10035adb0(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulong uVar15;
  uint *puVar16;
  int *piVar17;
  uint uVar18;
  undefined8 in_stack_fffffffffffffef8;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 in_stack_ffffffffffffff00;
  undefined4 uVar21;
  undefined8 in_stack_ffffffffffffff08;
  undefined8 in_stack_ffffffffffffff10;
  undefined4 uVar22;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  uint local_38;
  
  uVar14 = (undefined4)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  uVar21 = (undefined4)((ulong)in_stack_ffffffffffffff00 >> 0x20);
  uVar18 = (uint)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  uVar22 = (undefined4)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  FUN_1002adb30(*param_1,param_1[1]);
  piVar17 = &DAT_100b3c0c4;
  uVar15 = 0;
  uVar13 = 0x8e;
  do {
    if (*piVar17 == *(int *)(param_2 + 0x18)) {
      uVar13 = *(undefined4 *)(&DAT_100b3c0c0 + uVar15 * 0x24);
      break;
    }
    uVar15 = uVar15 + 1;
    piVar17 = piVar17 + 9;
  } while (uVar15 < 0x3d);
  local_48 = 1;
  local_40 = 0x8e;
  local_38 = *(uint *)(param_2 + 0x44);
  local_44 = (local_38 & 0x10000) != 0;
  if ((bool)local_44) {
    local_40 = CONCAT44(*(undefined4 *)(param_2 + 0x68),uVar13);
  }
  uVar19 = *(undefined8 *)(param_2 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  uVar8 = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(uint *)(param_2 + 0x28);
  local_68 = uVar7;
  uStack_60 = uVar8;
  local_58 = uVar19;
  uStack_50 = uVar6;
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_2 + 0x10);
    for (puVar16 = (uint *)param_1[(ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) + 0x100d]
        ; puVar16 != (uint *)0x0; puVar16 = *(uint **)(puVar16 + 4)) {
      if (*puVar16 == uVar1) {
        lVar2 = *(long *)(puVar16 + 2);
        if (lVar2 == 0) {
          return;
        }
        uVar19 = *(undefined8 *)(lVar2 + 8);
        uVar13 = FUN_10032dee0(uVar19,*(undefined4 *)(lVar2 + 4));
        uVar14 = FUN_10032df00(uVar19,*(undefined4 *)(lVar2 + 4));
        piVar17 = &DAT_100b3c0c4;
        uVar15 = 0;
        local_98 = 0x8e;
        goto LAB_10035b0b0;
      }
    }
  }
  else {
    for (puVar16 = (uint *)param_1[(ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) + 0x100d]
        ; puVar16 != (uint *)0x0; puVar16 = *(uint **)(puVar16 + 4)) {
      if (*puVar16 == uVar1) {
        lVar2 = *(long *)(puVar16 + 2);
        if (lVar2 == 0) {
          return;
        }
        lVar3 = *(long *)(lVar2 + 8);
        iVar9 = FUN_10032dee0(lVar3,*(undefined4 *)(lVar2 + 4));
        iVar10 = FUN_10032df00(lVar3,*(undefined4 *)(lVar2 + 4));
        uVar1 = *(uint *)(param_2 + 0x10);
        if (uVar1 == 0) {
          local_7c = *(undefined4 *)(param_2 + 0x1c);
          local_78 = *(undefined4 *)(param_2 + 0x20);
          local_74 = *(undefined4 *)(param_2 + 0x24);
          local_70 = (ulong)*(uint *)(param_2 + 0x14) + *(long *)(*param_1 + 0x920);
          uVar19 = CONCAT44(uVar14,iVar10);
          local_80 = uVar13;
          FUN_10035f8c0(param_1[5],&local_80,&local_58,lVar3,&local_68,iVar9,uVar19,&local_48);
          uVar14 = (undefined4)((ulong)uVar19 >> 0x20);
        }
        else {
          puVar16 = (uint *)param_1[(ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) + 0x100d
                                   ];
          while( true ) {
            if (puVar16 == (uint *)0x0) {
              return;
            }
            if (*puVar16 == uVar1) break;
            puVar16 = *(uint **)(puVar16 + 4);
          }
          lVar4 = *(long *)(puVar16 + 2);
          if (lVar4 == 0) {
            return;
          }
          lVar5 = *(long *)(lVar4 + 8);
          iVar11 = FUN_10032dee0(lVar5,*(undefined4 *)(lVar4 + 4));
          iVar12 = FUN_10032df00(lVar5,*(undefined4 *)(lVar4 + 4));
          if (((lVar5 == lVar3) && (iVar11 == iVar9)) && (iVar12 == iVar10)) {
            local_c8 = (uint)uVar7;
            if (((local_c8 < (uint)uVar6) && (uStack_c0 = (uint)uVar8, (uint)uVar19 < uStack_c0)) &&
               ((uStack_c4 = (uint)((ulong)uVar7 >> 0x20), uStack_c4 < (uint)((ulong)uVar6 >> 0x20)
                && (uStack_bc = (uint)((ulong)uVar8 >> 0x20),
                   (uint)((ulong)uVar19 >> 0x20) < uStack_bc)))) {
              FUN_10035f7c0(param_1[5],lVar3,&local_58,iVar9,iVar10,&local_68);
              goto LAB_10035b125;
            }
          }
          puVar20 = &local_68;
          FUN_10035f410(param_1[5],lVar5,&local_58,iVar11,iVar12,lVar3,puVar20,
                        CONCAT44(uVar21,iVar9),CONCAT44(uVar18,iVar10),&local_48);
          uVar14 = (undefined4)((ulong)puVar20 >> 0x20);
        }
LAB_10035b125:
        iVar10 = FUN_10035db70(param_1[5],lVar3,*(undefined4 *)(lVar2 + 4));
        if (iVar10 != -1) {
          local_44 = 0;
          local_40 = 0x8e;
          FUN_10035e300(param_1[5],lVar3,*(undefined4 *)(lVar2 + 4),&local_68,1,0,
                        CONCAT44(uVar14,iVar10),&local_48);
          return;
        }
        uVar18 = 1 << ((byte)iVar9 & 0x1f);
        if ((*(ushort *)(lVar3 + 0xb0) & 1) != 0) {
          uVar18 = 1;
        }
        *(uint *)(lVar3 + 0xa8) = *(uint *)(lVar3 + 0xa8) | uVar18;
        return;
      }
    }
  }
  return;
  while( true ) {
    uVar15 = uVar15 + 1;
    piVar17 = piVar17 + 9;
    if (0x3c < uVar15) break;
LAB_10035b0b0:
    if (*piVar17 == *(int *)(param_2 + 0x30)) {
      local_98 = *(undefined4 *)(&DAT_100b3c0c0 + uVar15 * 0x24);
      break;
    }
  }
  local_94 = *(undefined4 *)(param_2 + 0x34);
  local_90 = *(int *)(param_2 + 0x38);
  local_8c = *(int *)(param_2 + 0x3c);
  local_88 = (ulong)*(uint *)(param_2 + 0x2c) + *(long *)(*param_1 + 0x920);
  iVar9 = FUN_10035db00(param_1[5],(ulong)*(uint *)(param_2 + 0x2c),local_90 * local_8c);
  if (iVar9 != -1) {
    FUN_10035f8d0(param_1[5],uVar19,uVar13,uVar14,&local_98,&local_58,&local_68,CONCAT44(uVar21,1),
                  (ulong)uVar18 << 0x20,CONCAT44(uVar22,iVar9),&local_48);
    return;
  }
  FUN_10035fcd0(param_1[5],uVar19,uVar13,uVar14,&local_98,&local_58,&local_68,CONCAT44(uVar21,1),
                &local_48);
  return;
}

