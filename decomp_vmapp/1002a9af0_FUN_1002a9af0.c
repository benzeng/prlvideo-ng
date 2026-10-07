
undefined8 FUN_1002a9af0(long param_1,int *param_2,int *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  bool bVar16;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  uint local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar15 = *(long *)(param_1 + 0x910);
  if (*(int *)(lVar15 + 8) != 0) {
    uVar14 = (uint)*(ushort *)(lVar15 + 0xe);
    uVar12 = (uint)*(ushort *)(lVar15 + 0x10);
    uVar7 = (uint)*(byte *)(lVar15 + 0xc);
    uVar11 = 0;
    uVar5 = 0;
    if ((uint)*(ushort *)(lVar15 + 0x12) * (uint)*(ushort *)(lVar15 + 0x10) <=
        *(uint *)(param_1 + 0x928)) {
      uVar5 = (uint)*(ushort *)(lVar15 + 0x12);
    }
    iVar9 = 1;
    iVar8 = 1;
    goto LAB_1002a9e0b;
  }
  if (*(int *)(lVar15 + 0x41ec) == 0) {
    iVar8 = 1;
    uVar7 = 4;
    uVar5 = (uint)*(byte *)(lVar15 + 0x41f0);
    if (*(byte *)(lVar15 + 0x41f0) == 3) {
      uVar14 = (uint)*(byte *)(lVar15 + 0x3d73) * 8 + 8 << ((*(byte *)(lVar15 + 0x41fd) & 8) >> 3);
      iVar9 = ((*(byte *)(lVar15 + 0x41fd) & 8) >> 3) + 1;
      uVar12 = ((*(byte *)(lVar15 + 0x3d79) & 0x40) << 3 |
               (*(byte *)(lVar15 + 0x3d79) & 2) << 7 | (uint)*(byte *)(lVar15 + 0x3d84)) + 1;
      uVar5 = (*(byte *)(lVar15 + 0x3d7b) & 0x1f) + 1;
      uVar11 = 8;
      if (7 < uVar5) {
        uVar11 = uVar5;
      }
LAB_1002a9c1e:
      uVar7 = 4;
      goto LAB_1002a9e0b;
    }
    uVar11 = 0x10;
LAB_1002a9c9f:
    uVar14 = 0x280;
    uVar12 = 400;
    iVar9 = 1;
    goto LAB_1002a9e0b;
  }
  bVar4 = *(byte *)(lVar15 + 0x41e8);
  uVar5 = (uint)bVar4;
  uVar11 = 0;
  uVar14 = 0x280;
  iVar8 = 2;
  uVar12 = 400;
  if (bVar4 == 1) {
    uVar7 = 2;
  }
  else {
    if (bVar4 != 2) {
      bVar4 = *(byte *)(lVar15 + 0x3d89);
      iVar9 = 1;
      uVar7 = 4;
      uVar12 = 0x1e0;
      if (bVar4 == 0xe3) {
        uVar5 = (uint)*(byte *)(lVar15 + 0x3d86);
        if ((*(byte *)(lVar15 + 0x3d86) == 0xf) &&
           (uVar5 = (uint)*(byte *)(lVar15 + 0x3d7b), *(byte *)(lVar15 + 0x3d7b) == 0x40)) {
          uVar12 = 0x15e;
        }
        else {
          if ((*(char *)(lVar15 + 0x3d86) == '\0') &&
             (uVar5 = (uint)*(byte *)(lVar15 + 0x3d7b), *(byte *)(lVar15 + 0x3d7b) == 0xc0)) {
            uVar14 = (uint)*(byte *)(lVar15 + 0x3d73) * 8 + 8 <<
                     ((*(byte *)(lVar15 + 0x41fd) & 8) >> 3);
            iVar9 = ((*(byte *)(lVar15 + 0x41fd) & 8) >> 3) + 1;
            uVar5 = (*(byte *)(lVar15 + 0x3d79) & 2) << 7 | (uint)*(byte *)(lVar15 + 0x3d84);
            uVar12 = ((*(byte *)(lVar15 + 0x3d79) & 0x40) << 3 | uVar5) + 1;
            uVar11 = 0;
            goto LAB_1002a9c1e;
          }
          if (*(char *)(lVar15 + 0x3d86) == '\0') {
            bVar16 = *(char *)(lVar15 + 0x3d7b) == '`';
            uVar12 = 0x1e0;
            if (bVar16) {
              uVar12 = 600;
            }
            uVar5 = 800;
            uVar14 = 0x280;
            if (bVar16) {
              uVar14 = 800;
            }
          }
        }
      }
      else {
        uVar5 = (uint)bVar4;
        if (bVar4 == 0xc2) {
          if ((*(char *)(lVar15 + 0x3d86) == '\0') &&
             (uVar5 = (uint)*(byte *)(lVar15 + 0x3d7b), *(byte *)(lVar15 + 0x3d7b) == 0xc1)) {
            uVar7 = 1;
            uVar11 = 0;
            goto LAB_1002a9c9f;
          }
        }
        else if (((bVar4 == 0xa3) &&
                 (uVar5 = (uint)*(byte *)(lVar15 + 0x3d86), *(byte *)(lVar15 + 0x3d86) == 0x40)) &&
                (uVar5 = (uint)*(byte *)(lVar15 + 0x3d7b), *(byte *)(lVar15 + 0x3d7b) == 0x41))
        goto LAB_1002a9c88;
      }
      iVar8 = 1;
      goto LAB_1002a9e0b;
    }
    uVar7 = 8;
    if (*(int *)(lVar15 + 0x4224) == 0) {
      uVar14 = (uint)*(byte *)(lVar15 + 0x3d73) * 8 + 8;
      uVar12 = ((*(byte *)(lVar15 + 0x3d79) & 0x40) << 3 |
               (*(byte *)(lVar15 + 0x3d79) & 2) << 7 | (uint)*(byte *)(lVar15 + 0x3d84)) + 1;
      bVar4 = *(byte *)(lVar15 + 0x3d7b) & 0x9f;
      uVar5 = (uint)bVar4;
      iVar8 = 2 - (uint)(bVar4 == 0);
    }
  }
LAB_1002a9c88:
  iVar9 = 2;
LAB_1002a9e0b:
  uVar6 = uVar14 * 4;
  uVar2 = 0x20;
  if (*(int *)(lVar15 + 8) != 0) {
    uVar6 = uVar5;
    uVar2 = uVar7;
  }
  *param_2 = iVar9;
  *param_3 = iVar8;
  if (((*(uint *)(param_1 + 0x938) == uVar14) && (*(uint *)(param_1 + 0x93c) == uVar12)) &&
     ((*(uint *)(param_1 + 0x940) == uVar2 &&
      ((*(uint *)(param_1 + 0x934) == uVar6 && (*(uint *)(param_1 + 0x9844) == uVar11)))))) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(lVar15 + 8) == 0) {
      *(undefined4 *)(lVar15 + 0x20) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      puVar13 = (undefined8 *)(param_1 + 0x1250);
      sVar10 = 1;
      lVar15 = 0x28;
      do {
        *puVar13 = 0;
        lVar1 = *(long *)(param_1 + 0x910);
        if (((*(char *)(lVar1 + -4 + lVar15) != '\0') || (*(short *)(lVar1 + -2 + lVar15) != 0)) ||
           (*(short *)(lVar1 + lVar15) != 0)) {
          local_78 = CONCAT62(local_78._2_6_,sVar10);
          FUN_1002aa010(param_1,&local_78);
        }
        puVar13 = puVar13 + 0x11e;
        lVar15 = lVar15 + 0x414;
        sVar10 = sVar10 + 1;
      } while (lVar15 != 0x3d54);
      *(undefined8 *)(param_1 + 0x960) = 0;
      if (*(long *)(param_1 + 0x900) != 0) {
        FUN_1000d76e0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x107f8),0);
        FUN_1002a5590(param_1,*(undefined8 *)(param_1 + 0x900),0xf0000000);
      }
      *(undefined8 *)(param_1 + 0x900) = 0;
    }
    uVar5 = *(uint *)(param_1 + 0x9844);
    *(uint *)(param_1 + 0x9844) = uVar11;
    *(undefined4 *)(param_1 + 0x9848) = 0xffffffff;
    if (uVar5 != uVar11) {
      FUN_1000d79e0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x107f8),uVar11 != 0);
    }
    local_50 = 0;
    local_4e = (undefined2)uVar2;
    local_4c = (undefined2)uVar14;
    local_4a = (undefined2)uVar12;
    local_44 = 0x3c;
    local_40 = 0;
    local_3e = 0;
    lVar15 = *(long *)(param_1 + 0x910);
    local_3c = *(undefined4 *)(lVar15 + 0x18);
    local_38 = *(undefined4 *)(lVar15 + 0x1c);
    local_34 = *(undefined4 *)(lVar15 + 0x20);
    local_48 = uVar6;
    FUN_1002aa010(param_1,&local_50);
    uVar3 = 1;
  }
  return uVar3;
}

