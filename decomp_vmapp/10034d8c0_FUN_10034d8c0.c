
undefined8 FUN_10034d8c0(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  uint *local_38;
  
  if (*(uint *)(param_2 + 4) < 0x1c) {
    return 9;
  }
  uVar13 = *(uint *)(param_2 + 8);
  puVar16 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                      (ulong)((uVar13 >> 0xc ^ uVar13) & 0xfff ^ uVar13 >> 0x18) * 8);
  while( true ) {
    if (puVar16 == (uint *)0x0) {
      return 7;
    }
    if (*puVar16 == uVar13) break;
    puVar16 = *(uint **)(puVar16 + 4);
  }
  lVar4 = *(long *)(puVar16 + 2);
  if (lVar4 == 0) {
    return 7;
  }
  lVar5 = *(long *)(lVar4 + 8);
  if (*(int *)(param_2 + 0x14) == 4) goto LAB_10034dd40;
  if ((*(ushort *)(lVar5 + 0xb0) & 0x8000) == 0) {
    if (*(int *)(lVar5 + 0x24) == 1) {
      if (*(char *)(lVar5 + 0xb4) != '\0') {
        FUN_100362eb0(*(undefined8 *)(param_1 + 0x2778),lVar5,0,0);
      }
      FUN_100362cd0(*(undefined8 *)(param_1 + 0x2778),lVar5,
                    *(undefined4 *)(*(long *)(lVar5 + 0x28) + (ulong)*(uint *)(lVar4 + 4) * 0xc),0,
                    *(undefined4 *)(lVar5 + 0xc));
    }
    else if ((int)((ulong)(*(long *)(lVar5 + 0x48) - *(long *)(lVar5 + 0x40)) >> 3) != 0) {
      bVar14 = *(byte *)(param_2 + 0x10);
      local_48 = *(uint *)(lVar5 + 0xc) >> (bVar14 & 0x1f);
      if (*(uint *)(lVar5 + 0xc) >> (bVar14 & 0x1f) == 0) {
        local_48 = 1;
      }
      local_44 = *(uint *)(lVar5 + 0x10) >> (bVar14 & 0x1f);
      if (*(uint *)(lVar5 + 0x10) >> (bVar14 & 0x1f) == 0) {
        local_44 = 1;
      }
      local_3c = *(uint *)(lVar5 + 0x14) >> (bVar14 & 0x1f);
      if (*(uint *)(lVar5 + 0x14) >> (bVar14 & 0x1f) == 0) {
        local_3c = 1;
      }
      local_50 = 0;
      local_4c = 0;
      local_40 = 0;
      uVar6 = *(undefined8 *)(param_1 + 0x2778);
      uVar11 = FUN_10032dee0(lVar5,*(undefined4 *)(lVar4 + 4));
      FUN_10035e890(uVar6,lVar5,&local_50,uVar11,*(undefined4 *)(param_2 + 0x10));
    }
    goto LAB_10034dd40;
  }
  uVar13 = *(uint *)(lVar4 + 4);
  uVar10 = FUN_10032dee0(lVar5,(ulong)uVar13);
  uVar22 = *(uint *)(param_2 + 0x10);
  if ((*(uint *)(*(long *)(lVar5 + 0x90) + (ulong)uVar10 * 4) >> (uVar22 & 0x1f) & 1) != 0)
  goto LAB_10034dd40;
  uVar2 = *(uint *)(lVar5 + 8);
  uVar3 = *(uint *)(lVar5 + 0xc);
  uVar23 = *(uint *)(lVar5 + 0x10);
  uVar24 = *(uint *)(lVar5 + 0x14);
  uVar12 = *(uint *)(&DAT_100b3bba4 + (ulong)uVar2 * 8);
  iVar20 = 0;
  if (0 < (int)uVar22) {
    uVar15 = 0;
    iVar20 = 0;
    do {
      bVar14 = (byte)uVar15;
      uVar19 = uVar3 >> (bVar14 & 0x1f);
      if (uVar3 >> (bVar14 & 0x1f) == 0) {
        uVar19 = 1;
      }
      uVar9 = uVar23 >> (bVar14 & 0x1f);
      if (uVar23 >> (bVar14 & 0x1f) == 0) {
        uVar9 = 1;
      }
      if (uVar12 < 0x1000000) {
        uVar21 = 0;
        uVar18 = 0;
        switch(uVar2 - 0x53) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 0xb:
        case 0xc:
          uVar18 = uVar19 * 2 + 3 & 0xfffffffc;
          break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 0xf:
        case 0x10:
          uVar18 = uVar19 + 3 & 0xfffffffc;
          break;
        case 8:
        case 9:
        case 0xd:
        case 0xe:
          uVar18 = uVar19 << 2;
          break;
        case 10:
          uVar18 = uVar19 << 3;
          goto switchD_10034dbae_caseD_0;
        case 0x12:
        case 0x13:
        case 0x18:
        case 0x19:
        case 0x34:
        case 0x37:
          uVar18 = uVar19 * 2 + 6 & 0xfffffff8;
          break;
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x1a:
        case 0x1b:
        case 0x35:
        case 0x36:
        case 0x38:
          uVar18 = uVar19 * 4 + 0xc & 0xfffffff0;
        }
        switch(uVar2 - 0x53) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 8:
        case 9:
        case 10:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
switchD_10034dbae_caseD_0:
          uVar21 = uVar18 * uVar9;
          break;
        case 4:
        case 5:
        case 6:
        case 0xb:
        case 0xc:
          uVar21 = uVar9 * uVar18 * 3 >> 1;
          break;
        case 7:
          uVar21 = uVar9 * uVar18 * 2;
          break;
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
          uVar21 = uVar18 * (uVar9 + 3 & 0xfffffffc) >> 2;
        }
      }
      else {
        uVar19 = uVar19 * (uVar12 >> 0x18);
        if (3 < uVar2 - 0x73) {
          uVar19 = uVar19 + 3 & 0xfffffffc;
        }
        uVar21 = uVar19 * uVar9;
      }
      uVar19 = uVar24 >> (bVar14 & 0x1f);
      if (uVar24 >> (bVar14 & 0x1f) == 0) {
        uVar19 = 1;
      }
      iVar20 = iVar20 + uVar19 * uVar21;
      uVar15 = uVar15 + 1;
    } while (uVar22 != uVar15);
  }
  bVar14 = (byte)uVar22;
  uVar22 = uVar3 >> (bVar14 & 0x1f);
  if (uVar3 >> (bVar14 & 0x1f) == 0) {
    uVar22 = 1;
  }
  uVar3 = uVar23 >> (bVar14 & 0x1f);
  if (uVar23 >> (bVar14 & 0x1f) == 0) {
    uVar3 = 1;
  }
  if (uVar12 < 0x1000000) {
    uVar23 = 0;
    uVar12 = 0;
    switch(uVar2 - 0x53) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 0xb:
    case 0xc:
      uVar12 = uVar22 * 2 + 3 & 0xfffffffc;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xf:
    case 0x10:
      uVar12 = uVar22 + 3 & 0xfffffffc;
      break;
    case 8:
    case 9:
    case 0xd:
    case 0xe:
      uVar12 = uVar22 << 2;
      break;
    case 10:
      uVar12 = uVar22 << 3;
      goto switchD_10034dce0_caseD_0;
    case 0x12:
    case 0x13:
    case 0x18:
    case 0x19:
    case 0x34:
    case 0x37:
      uVar12 = uVar22 * 2 + 6 & 0xfffffff8;
      break;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1a:
    case 0x1b:
    case 0x35:
    case 0x36:
    case 0x38:
      uVar12 = uVar22 * 4 + 0xc & 0xfffffff0;
    }
    switch(uVar2 - 0x53) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 8:
    case 9:
    case 10:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
switchD_10034dce0_caseD_0:
      uVar23 = uVar12 * uVar3;
      break;
    case 4:
    case 5:
    case 6:
    case 0xb:
    case 0xc:
      uVar23 = uVar3 * uVar12 * 3 >> 1;
      break;
    case 7:
      uVar23 = uVar3 * uVar12 * 2;
      break;
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
      uVar23 = uVar12 * (uVar3 + 3 & 0xfffffffc) >> 2;
    }
  }
  else {
    uVar22 = (uVar12 >> 0x18) * uVar22;
    if (3 < uVar2 - 0x73) {
      uVar22 = uVar22 + 3 & 0xfffffffc;
    }
    uVar23 = uVar22 * uVar3;
  }
  uVar24 = uVar24 >> (bVar14 & 0x1f);
  uVar22 = 1;
  if (uVar24 != 0) {
    uVar22 = uVar24;
  }
  FUN_100362cd0(*(undefined8 *)(param_1 + 0x2778),lVar5,
                *(int *)(*(long *)(lVar5 + 0x28) + (ulong)uVar13 * 0xc) + iVar20,
                uVar10 * *(int *)(*(long *)(lVar5 + 0x28) + 8) + iVar20,uVar22 * uVar23);
LAB_10034dd40:
  uVar13 = *(uint *)(param_2 + 8);
  uVar22 = *(uint *)(param_2 + 0xc);
  if (uVar13 != uVar22) {
    lVar7 = *(long *)(param_1 + 0x2780);
    puVar1 = (undefined8 *)(lVar7 + 0x8058);
    puVar16 = (uint *)(lVar7 + 0x8068 +
                      (ulong)((uVar13 >> 0xc ^ uVar13) & 0xfff ^ uVar13 >> 0x18) * 8);
    do {
      puVar17 = puVar16;
      puVar8 = *(uint **)puVar17;
      if (puVar8 == (uint *)0x0) {
        local_38 = (uint *)0x0;
        goto LAB_10034de15;
      }
      puVar16 = puVar8 + 4;
    } while (*puVar8 != uVar13);
    *(undefined8 *)puVar17 = *(undefined8 *)(puVar8 + 4);
    local_38 = *(uint **)(puVar8 + 2);
    *(undefined8 *)(puVar8 + 4) = *puVar1;
    *puVar1 = puVar8;
    if (local_38 != (uint *)0x0) {
      uVar13 = 0;
      for (puVar16 = *(uint **)(lVar7 + 0x58 +
                               (ulong)((uVar22 >> 0xc ^ uVar22) & 0xfff ^ uVar22 >> 0x18) * 8);
          puVar16 != (uint *)0x0; puVar16 = *(uint **)(puVar16 + 2)) {
        if (*puVar16 == uVar22) {
          uVar13 = puVar16[1];
          break;
        }
      }
      *(uint *)(*(long *)(*(long *)(local_38 + 2) + 0x28) + (ulong)local_38[1] * 0xc) = uVar13;
      *local_38 = uVar22;
      FUN_10035b3c0(puVar1,uVar22,&local_38);
    }
LAB_10034de15:
    uVar13 = FUN_10032dee0(lVar5,*(undefined4 *)(lVar4 + 4));
    puVar16 = (uint *)(*(long *)(lVar5 + 0x90) + (ulong)uVar13 * 4);
    *puVar16 = *puVar16 | 1 << (*(byte *)(param_2 + 0x10) & 0x1f);
  }
  return 0;
}

