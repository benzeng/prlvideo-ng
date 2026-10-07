
undefined8 FUN_10034e1f0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  
  if (*(uint *)(param_2 + 4) < 0x10) {
    return 9;
  }
  uVar8 = *(uint *)(param_2 + 8);
  puVar13 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                      (ulong)((uVar8 >> 0xc ^ uVar8) & 0xfff ^ uVar8 >> 0x18) * 8);
  while( true ) {
    if (puVar13 == (uint *)0x0) {
      return 7;
    }
    if (*puVar13 == uVar8) break;
    puVar13 = *(uint **)(puVar13 + 4);
  }
  lVar3 = *(long *)(puVar13 + 2);
  if (lVar3 == 0) {
    return 7;
  }
  lVar4 = *(long *)(lVar3 + 8);
  if ((*(ushort *)(lVar4 + 0xb0) & 0x8000) == 0) {
    if ((int)((ulong)(*(long *)(lVar4 + 0x48) - *(long *)(lVar4 + 0x40)) >> 3) != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x2778);
      uVar7 = FUN_10032dee0(lVar4,*(undefined4 *)(lVar3 + 4));
      FUN_10035e0e0(uVar5,lVar4,0,uVar7,*(undefined4 *)(param_2 + 0xc));
      return 0;
    }
    uVar8 = FUN_10032dee0(lVar4,*(undefined4 *)(lVar3 + 4));
    puVar13 = (uint *)(*(long *)(lVar4 + 0x90) + (ulong)uVar8 * 4);
    *puVar13 = *puVar13 | 1 << (*(byte *)(param_2 + 0xc) & 0x1f);
    return 0;
  }
  iVar1 = *(int *)(param_2 + 0xc);
  uVar8 = *(uint *)(lVar4 + 8);
  iVar14 = 0;
  if (0 < iVar1) {
    iVar12 = 0;
    iVar14 = 0;
    do {
      bVar11 = (byte)iVar12;
      uVar9 = *(uint *)(lVar4 + 0xc) >> (bVar11 & 0x1f);
      if (*(uint *)(lVar4 + 0xc) >> (bVar11 & 0x1f) == 0) {
        uVar9 = 1;
      }
      uVar6 = *(uint *)(lVar4 + 0x10) >> (bVar11 & 0x1f);
      if (*(uint *)(lVar4 + 0x10) >> (bVar11 & 0x1f) == 0) {
        uVar6 = 1;
      }
      if (*(uint *)(&DAT_100b3bba4 + (ulong)uVar8 * 8) < 0x1000000) {
        uVar15 = 0;
        uVar16 = 0;
        switch(uVar8) {
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x5e:
        case 0x5f:
          uVar16 = uVar9 * 2 + 3 & 0xfffffffc;
          break;
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x62:
        case 99:
          uVar16 = uVar9 + 3 & 0xfffffffc;
          break;
        case 0x5b:
        case 0x5c:
        case 0x60:
        case 0x61:
          uVar16 = uVar9 << 2;
          break;
        case 0x5d:
          uVar16 = uVar9 << 3;
          goto switchD_10034e430_caseD_53;
        case 0x65:
        case 0x66:
        case 0x6b:
        case 0x6c:
        case 0x87:
        case 0x8a:
          uVar16 = uVar9 * 2 + 6 & 0xfffffff8;
          break;
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6a:
        case 0x6d:
        case 0x6e:
        case 0x88:
        case 0x89:
        case 0x8b:
          uVar16 = uVar9 * 4 + 0xc & 0xfffffff0;
        }
        switch(uVar8) {
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x60:
        case 0x61:
        case 0x62:
        case 99:
switchD_10034e430_caseD_53:
          uVar15 = uVar16 * uVar6;
          break;
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5e:
        case 0x5f:
          uVar15 = uVar6 * uVar16 * 3 >> 1;
          break;
        case 0x5a:
          uVar15 = uVar6 * uVar16 * 2;
          break;
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6a:
        case 0x6b:
        case 0x6c:
        case 0x6d:
        case 0x6e:
        case 0x87:
        case 0x88:
        case 0x89:
        case 0x8a:
        case 0x8b:
          uVar15 = uVar16 * (uVar6 + 3 & 0xfffffffc) >> 2;
        }
      }
      else {
        uVar9 = uVar9 * (*(uint *)(&DAT_100b3bba4 + (ulong)uVar8 * 8) >> 0x18);
        if (3 < uVar8 - 0x73) {
          uVar9 = uVar9 + 3 & 0xfffffffc;
        }
        uVar15 = uVar9 * uVar6;
      }
      uVar9 = *(uint *)(lVar4 + 0x14) >> (bVar11 & 0x1f);
      if (*(uint *)(lVar4 + 0x14) >> (bVar11 & 0x1f) == 0) {
        uVar9 = 1;
      }
      iVar14 = iVar14 + uVar9 * uVar15;
      iVar12 = iVar12 + 1;
    } while (iVar1 != iVar12);
  }
  iVar12 = *(int *)(*(long *)(lVar4 + 0x28) + (ulong)*(uint *)(lVar3 + 4) * 0xc);
  iVar2 = *(int *)(*(long *)(lVar4 + 0x28) + 8);
  iVar10 = FUN_10032dee0(lVar4);
  uVar8 = *(uint *)(lVar4 + 8);
  bVar11 = (byte)iVar1;
  uVar9 = *(uint *)(lVar4 + 0xc) >> (bVar11 & 0x1f);
  if (*(uint *)(lVar4 + 0xc) >> (bVar11 & 0x1f) == 0) {
    uVar9 = 1;
  }
  uVar6 = *(uint *)(lVar4 + 0x10) >> (bVar11 & 0x1f);
  if (*(uint *)(lVar4 + 0x10) >> (bVar11 & 0x1f) == 0) {
    uVar6 = 1;
  }
  if (0xffffff < *(uint *)(&DAT_100b3bba4 + (ulong)uVar8 * 8)) {
    uVar9 = (*(uint *)(&DAT_100b3bba4 + (ulong)uVar8 * 8) >> 0x18) * uVar9;
    if (3 < uVar8 - 0x73) {
      uVar9 = uVar9 + 3 & 0xfffffffc;
    }
    uVar15 = uVar9 * uVar6;
    goto switchD_10034e567_caseD_11;
  }
  uVar15 = 0;
  uVar16 = 0;
  switch(uVar8 - 0x53) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 0xb:
  case 0xc:
    uVar16 = uVar9 * 2 + 3 & 0xfffffffc;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 0xf:
  case 0x10:
    uVar16 = uVar9 + 3 & 0xfffffffc;
    break;
  case 8:
  case 9:
  case 0xd:
  case 0xe:
    uVar16 = uVar9 << 2;
    break;
  case 10:
    uVar16 = uVar9 << 3;
    goto switchD_10034e567_caseD_0;
  case 0x12:
  case 0x13:
  case 0x18:
  case 0x19:
  case 0x34:
  case 0x37:
    uVar16 = uVar9 * 2 + 6 & 0xfffffff8;
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
    uVar16 = uVar9 * 4 + 0xc & 0xfffffff0;
  }
  switch(uVar8 - 0x53) {
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
switchD_10034e567_caseD_0:
    uVar15 = uVar16 * uVar6;
    break;
  case 4:
  case 5:
  case 6:
  case 0xb:
  case 0xc:
    uVar15 = uVar6 * uVar16 * 3 >> 1;
    break;
  case 7:
    uVar15 = uVar6 * uVar16 * 2;
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
    uVar15 = uVar16 * (uVar6 + 3 & 0xfffffffc) >> 2;
  }
switchD_10034e567_caseD_11:
  uVar8 = 1;
  if (*(uint *)(lVar4 + 0x14) >> (bVar11 & 0x1f) != 0) {
    uVar8 = *(uint *)(lVar4 + 0x14) >> (bVar11 & 0x1f);
  }
  (**(code **)(**(long **)(param_1 + 0x2778) + 0x20))
            (*(long **)(param_1 + 0x2778),lVar4,iVar12 + iVar14,iVar10 * iVar2 + iVar14,
             uVar8 * uVar15,0);
  return 0;
}

