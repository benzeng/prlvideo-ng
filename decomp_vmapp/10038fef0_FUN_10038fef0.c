
uint FUN_10038fef0(undefined1 *param_1,int param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  bool bVar12;
  
  uVar4 = 6;
  iVar7 = (int)param_1;
  switch(*param_1) {
  case 1:
  case 2:
  case 0x2e:
  case 0x2f:
  case 0x37:
  case 0x38:
  case 0x48:
  case 0x49:
  case 0x4b:
  case 0x4c:
  case 0x5a:
  case 0x6a:
    uVar4 = (uint)*(ushort *)(param_1 + 2) * 4 + 4;
    break;
  case 3:
  case 8:
  case 0x19:
  case 0x20:
  case 0x28:
  case 0x29:
  case 0x2b:
  case 0x32:
  case 0x33:
  case 0x54:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5b:
  case 0x5f:
    uVar4 = (uint)*(ushort *)(param_1 + 2) * 8 + 4;
    break;
  default:
    uVar4 = 0;
    break;
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x15:
    break;
  case 0x11:
    uVar4 = *(ushort *)(param_1 + 2) + 8 + (uint)*(ushort *)(param_1 + 2);
    break;
  case 0x14:
  case 0x16:
    uVar4 = *(ushort *)(param_1 + 2) + 10 + (uint)*(ushort *)(param_1 + 2);
    break;
  case 0x17:
    uVar4 = (8 - iVar7) + (iVar7 + 3U & 0xfffffffc) + (*(ushort *)(param_1 + 2) + 2) * param_2;
    break;
  case 0x18:
    uVar4 = (4 - iVar7) + (iVar7 + 3U & 0xfffffffc) + param_2 * (uint)*(ushort *)(param_1 + 2) * 2;
    break;
  case 0x1a:
    uVar4 = ((uint)*(ushort *)(param_1 + 2) + (uint)*(ushort *)(param_1 + 2) * 2) * 2 + 6;
    break;
  case 0x1b:
    uVar4 = (uint)*(ushort *)(param_1 + 2) * 4 + 6;
    break;
  case 0x1c:
    uVar4 = 0x14;
    break;
  case 0x1d:
    uVar4 = 0xc;
    break;
  case 0x1e:
  case 0x27:
  case 0x31:
  case 0x34:
  case 0x3a:
  case 0x3b:
  case 0x65:
    uVar4 = ((uint)*(ushort *)(param_1 + 2) + (uint)*(ushort *)(param_1 + 2) * 2) * 4 + 4;
    break;
  case 0x1f:
    uVar4 = (uint)*(ushort *)(param_1 + 10) * 4 + 0xc;
    break;
  case 0x21:
  case 0x24:
  case 0x41:
    uVar4 = (uint)*(ushort *)(param_1 + 2) * 0x44 + 4;
    break;
  case 0x22:
    uVar1 = *(ushort *)(param_1 + 2);
    uVar4 = 4;
    if (uVar1 != 0) {
      puVar9 = param_1 + 4;
      if ((uVar1 & 1) == 0) {
        iVar7 = 0;
        uVar4 = 4;
      }
      else {
        if (*(int *)(param_1 + 8) == 2) {
          puVar9 = param_1 + 0x6c;
          iVar7 = 0x6c;
        }
        else {
          iVar7 = 4;
        }
        puVar9 = puVar9 + 8;
        uVar4 = iVar7 + 8;
        iVar7 = 1;
      }
      if (uVar1 != 1) {
        do {
          if (*(int *)(puVar9 + 4) == 2) {
            puVar9 = puVar9 + 0x68;
            uVar4 = uVar4 + 0x68;
          }
          iVar11 = uVar4 + 8;
          puVar10 = puVar9 + 8;
          if (*(int *)(puVar9 + 0xc) == 2) {
            puVar10 = puVar9 + 0x70;
            iVar11 = uVar4 + 0x70;
          }
          puVar9 = puVar10 + 8;
          uVar4 = iVar11 + 8;
          iVar7 = iVar7 + 2;
        } while (iVar7 < (int)(uint)uVar1);
      }
    }
    break;
  case 0x23:
    uVar4 = 8;
    break;
  case 0x26:
    uVar4 = ((uint)*(ushort *)(param_1 + 2) + (uint)*(ushort *)(param_1 + 2) * 8) * 4 + 4;
    break;
  case 0x2a:
    uVar4 = 0x14;
    if (*(ushort *)(param_1 + 2) != 0) {
      uVar4 = (uint)*(ushort *)(param_1 + 2) * 0x10 + 0x14;
    }
    break;
  case 0x2c:
  case 0x42:
  case 100:
    uVar4 = ((uint)*(ushort *)(param_1 + 2) + (uint)*(ushort *)(param_1 + 2) * 4) * 4 + 4;
    break;
  case 0x2d:
    puVar9 = param_1 + 4;
    uVar1 = *(ushort *)(param_1 + 2);
    if (uVar1 != 0) {
      bVar12 = (uVar1 & 1) != 0;
      if (bVar12) {
        puVar9 = puVar9 + (ulong)(uint)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8)) + 0xc;
      }
      uVar4 = (uint)bVar12;
      if (uVar1 != 1) {
        do {
          uVar6 = (ulong)(uint)(*(int *)(puVar9 + 8) + *(int *)(puVar9 + 4));
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + uVar6 + 0x14) +
                                         *(int *)(puVar9 + uVar6 + 0x10)) + 0x18 + uVar6;
          uVar4 = uVar4 + 2;
        } while ((int)uVar4 < (int)(uint)uVar1);
      }
    }
    uVar4 = (int)puVar9 - iVar7;
    break;
  case 0x30:
    puVar9 = param_1 + 4;
    uVar1 = *(ushort *)(param_1 + 2);
    if (uVar1 != 0) {
      if ((uVar1 & 3) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + 4) << 4) + 8;
          uVar4 = uVar4 + 1;
        } while ((uVar1 & 3) != uVar4);
      }
      if (2 < uVar1 - 1) {
        do {
          lVar2 = (ulong)(uint)(*(int *)(puVar9 + 4) << 4) + 8;
          lVar3 = (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + 4) << 4) + 0xc) <<
                               4) + 8 + lVar2;
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(
                                                  uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(
                                                  puVar9 + 4) << 4) + 0xc) << 4) + 0xc + lVar2) << 4
                                                  ) + 0xc + lVar3) << 4) +
                            (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(
                                                  uint)(*(int *)(puVar9 + 4) << 4) + 0xc) << 4) +
                                                  0xc + lVar2) << 4) + 0x10 + lVar3;
          uVar4 = uVar4 + 4;
        } while ((int)uVar4 < (int)(uint)uVar1);
      }
    }
    uVar4 = (int)puVar9 - iVar7;
    break;
  case 0x35:
  case 0x3c:
  case 0x40:
  case 0x52:
  case 0x6b:
    iVar7 = (uint)*(ushort *)(param_1 + 2) << 3;
    goto LAB_100390214;
  case 0x36:
    puVar9 = param_1 + 4;
    uVar1 = *(ushort *)(param_1 + 2);
    if (uVar1 != 0) {
      if ((uVar1 & 3) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          puVar9 = puVar9 + (ulong)*(uint *)(puVar9 + 4) + 8;
          uVar4 = uVar4 + 1;
        } while ((uVar1 & 3) != uVar4);
      }
      if (2 < uVar1 - 1) {
        do {
          uVar6 = (ulong)*(uint *)(puVar9 + 4);
          lVar2 = *(uint *)(puVar9 + uVar6 + 0xc) + uVar6;
          puVar9 = puVar9 + (ulong)*(uint *)(puVar9 + (ulong)*(uint *)(puVar9 + (ulong)*(uint *)(
                                                  puVar9 + uVar6 + 0xc) + 0x14 + uVar6) + 0x1c +
                                                  lVar2) + 0x20 +
                            (ulong)*(uint *)(puVar9 + (ulong)*(uint *)(puVar9 + uVar6 + 0xc) + 0x14
                                                      + uVar6) + lVar2;
          uVar4 = uVar4 + 4;
        } while ((int)uVar4 < (int)(uint)uVar1);
      }
    }
    uVar4 = (int)puVar9 - iVar7;
    break;
  case 0x39:
    puVar9 = param_1 + 4;
    uVar1 = *(ushort *)(param_1 + 2);
    if (uVar1 != 0) {
      if ((uVar1 & 3) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + 4) << 4) + 8;
          uVar4 = uVar4 + 1;
        } while ((uVar1 & 3) != uVar4);
      }
      if (2 < uVar1 - 1) {
        do {
          lVar2 = (ulong)(uint)(*(int *)(puVar9 + 4) << 4) + 8;
          lVar3 = (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + 4) << 4) + 0xc) <<
                               4) + 8 + lVar2;
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(
                                                  uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(
                                                  puVar9 + 4) << 4) + 0xc) << 4) + 0xc + lVar2) << 4
                                                  ) + 0xc + lVar3) << 4) +
                            (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(
                                                  uint)(*(int *)(puVar9 + 4) << 4) + 0xc) << 4) +
                                                  0xc + lVar2) << 4) + 0x10 + lVar3;
          uVar4 = uVar4 + 4;
        } while ((int)uVar4 < (int)(uint)uVar1);
      }
    }
    uVar4 = (int)puVar9 - iVar7;
    break;
  case 0x3d:
    puVar9 = param_1 + 4;
    uVar1 = *(ushort *)(param_1 + 2);
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        iVar11 = 0;
      }
      else {
        uVar8 = (*(uint *)(param_1 + 8) & 1) * 0x10;
        uVar4 = uVar8 + 0x1c;
        if ((*(uint *)(param_1 + 8) & 2) == 0) {
          uVar4 = uVar8;
        }
        puVar9 = puVar9 + (ulong)uVar4 + 8;
        iVar11 = 1;
      }
      if (uVar1 != 1) {
        do {
          uVar8 = (*(uint *)(puVar9 + 4) & 1) * 0x10;
          uVar4 = uVar8 + 0x1c;
          if ((*(uint *)(puVar9 + 4) & 2) == 0) {
            uVar4 = uVar8;
          }
          uVar5 = (*(uint *)(puVar9 + (ulong)uVar4 + 0xc) & 1) * 0x10;
          uVar8 = uVar5 + 0x1c;
          if ((*(uint *)(puVar9 + (ulong)uVar4 + 0xc) & 2) == 0) {
            uVar8 = uVar5;
          }
          puVar9 = puVar9 + (ulong)uVar8 + 0x10 + (ulong)uVar4;
          iVar11 = iVar11 + 2;
        } while (iVar11 < (int)(uint)uVar1);
      }
    }
    uVar4 = (int)puVar9 - iVar7;
    break;
  case 0x3e:
    puVar9 = param_1 + 4;
    uVar1 = *(ushort *)(param_1 + 2);
    if (uVar1 != 0) {
      bVar12 = (uVar1 & 1) != 0;
      if (bVar12) {
        puVar9 = puVar9 + (ulong)((*(uint *)(param_1 + 8) & 2) << 3 |
                                 (int)(*(uint *)(param_1 + 8) << 0x1f) >> 0x1f & 0xcU) + 8;
      }
      uVar4 = (uint)bVar12;
      if (uVar1 != 1) {
        do {
          uVar6 = (ulong)((*(uint *)(puVar9 + 4) & 2) << 3 |
                         (int)(*(uint *)(puVar9 + 4) << 0x1f) >> 0x1f & 0xcU);
          puVar9 = puVar9 + (ulong)((*(uint *)(puVar9 + uVar6 + 0xc) & 2) << 3 |
                                   (int)(*(uint *)(puVar9 + uVar6 + 0xc) << 0x1f) >> 0x1f & 0xcU) +
                            0x10 + uVar6;
          uVar4 = uVar4 + 2;
        } while ((int)uVar4 < (int)(uint)uVar1);
      }
    }
    uVar4 = (int)puVar9 - iVar7;
    break;
  case 0x3f:
    iVar7 = (uint)*(ushort *)(param_1 + 2) << 4;
LAB_100390214:
    uVar4 = iVar7 * 3 | 4;
    break;
  case 0x43:
    uVar4 = (uint)*(ushort *)(param_1 + 2) * 0x1c + 4;
    break;
  case 0x47:
    puVar9 = param_1 + 4;
    uVar1 = *(ushort *)(param_1 + 2);
    if (uVar1 != 0) {
      if ((uVar1 & 3) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + 4) << 3) + 8;
          uVar4 = uVar4 + 1;
        } while ((uVar1 & 3) != uVar4);
      }
      if (2 < uVar1 - 1) {
        do {
          uVar6 = (ulong)(uint)(*(int *)(puVar9 + 4) << 3);
          lVar2 = (uint)(*(int *)(puVar9 + uVar6 + 0xc) << 3) + uVar6;
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(
                                                  uint)(*(int *)(puVar9 + uVar6 + 0xc) << 3) + 0x14
                                                  + uVar6) << 3) + 0x1c + lVar2) << 3) + 0x20 +
                            (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + uVar6 + 
                                                  0xc) << 3) + 0x14 + uVar6) << 3) + lVar2;
          uVar4 = uVar4 + 4;
        } while ((int)uVar4 < (int)(uint)uVar1);
      }
    }
    uVar4 = (int)puVar9 - iVar7;
    break;
  case 0x4a:
    puVar9 = param_1 + 4;
    uVar1 = *(ushort *)(param_1 + 2);
    if (uVar1 != 0) {
      if ((uVar1 & 3) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          puVar9 = puVar9 + (ulong)*(uint *)(puVar9 + 4) + 8;
          uVar4 = uVar4 + 1;
        } while ((uVar1 & 3) != uVar4);
      }
      if (2 < uVar1 - 1) {
        do {
          uVar6 = (ulong)*(uint *)(puVar9 + 4);
          lVar2 = *(uint *)(puVar9 + uVar6 + 0xc) + uVar6;
          puVar9 = puVar9 + (ulong)*(uint *)(puVar9 + (ulong)*(uint *)(puVar9 + (ulong)*(uint *)(
                                                  puVar9 + uVar6 + 0xc) + 0x14 + uVar6) + 0x1c +
                                                  lVar2) + 0x20 +
                            (ulong)*(uint *)(puVar9 + (ulong)*(uint *)(puVar9 + uVar6 + 0xc) + 0x14
                                                      + uVar6) + lVar2;
          uVar4 = uVar4 + 4;
        } while ((int)uVar4 < (int)(uint)uVar1);
      }
    }
    uVar4 = (int)puVar9 - iVar7;
    break;
  case 0x4d:
    puVar9 = param_1 + 4;
    uVar1 = *(ushort *)(param_1 + 2);
    if (uVar1 != 0) {
      if ((uVar1 & 3) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + 4) << 4) + 8;
          uVar4 = uVar4 + 1;
        } while ((uVar1 & 3) != uVar4);
      }
      if (2 < uVar1 - 1) {
        do {
          lVar2 = (ulong)(uint)(*(int *)(puVar9 + 4) << 4) + 8;
          lVar3 = (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + 4) << 4) + 0xc) <<
                               4) + 8 + lVar2;
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(
                                                  uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(
                                                  puVar9 + 4) << 4) + 0xc) << 4) + 0xc + lVar2) << 4
                                                  ) + 0xc + lVar3) << 4) +
                            (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(
                                                  uint)(*(int *)(puVar9 + 4) << 4) + 0xc) << 4) +
                                                  0xc + lVar2) << 4) + 0x10 + lVar3;
          uVar4 = uVar4 + 4;
        } while ((int)uVar4 < (int)(uint)uVar1);
      }
    }
    uVar4 = (int)puVar9 - iVar7;
    break;
  case 0x4f:
  case 0x50:
    uVar4 = (uint)*(ushort *)(param_1 + 2) << 4 | 4;
    break;
  case 0x51:
  case 0x60:
    uVar4 = (uint)*(ushort *)(param_1 + 2) * 0x34 + 4;
    break;
  case 0x53:
    puVar9 = param_1 + 4;
    uVar1 = *(ushort *)(param_1 + 2);
    if (uVar1 != 0) {
      if ((uVar1 & 3) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + 4) << 2) + 8;
          uVar4 = uVar4 + 1;
        } while ((uVar1 & 3) != uVar4);
      }
      if (2 < uVar1 - 1) {
        do {
          uVar6 = (ulong)(uint)(*(int *)(puVar9 + 4) << 2);
          lVar2 = (uint)(*(int *)(puVar9 + uVar6 + 0xc) << 2) + uVar6;
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(
                                                  uint)(*(int *)(puVar9 + uVar6 + 0xc) << 2) + 0x14
                                                  + uVar6) << 2) + 0x1c + lVar2) << 2) + 0x20 +
                            (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + uVar6 + 
                                                  0xc) << 2) + 0x14 + uVar6) << 2) + lVar2;
          uVar4 = uVar4 + 4;
        } while ((int)uVar4 < (int)(uint)uVar1);
      }
    }
    uVar4 = (int)puVar9 - iVar7;
    break;
  case 0x55:
    uVar4 = 0xc;
    break;
  case 0x56:
    uVar4 = 8;
    break;
  case 0x5d:
    puVar9 = param_1 + 4;
    uVar1 = *(ushort *)(param_1 + 2);
    if (uVar1 != 0) {
      if ((uVar1 & 3) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + 4) << 4) + 8;
          uVar4 = uVar4 + 1;
        } while ((uVar1 & 3) != uVar4);
      }
      if (2 < uVar1 - 1) {
        do {
          lVar2 = (ulong)(uint)(*(int *)(puVar9 + 4) << 4) + 8;
          lVar3 = (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + 4) << 4) + 0xc) <<
                               4) + 8 + lVar2;
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(
                                                  uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(
                                                  puVar9 + 4) << 4) + 0xc) << 4) + 0xc + lVar2) << 4
                                                  ) + 0xc + lVar3) << 4) +
                            (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(
                                                  uint)(*(int *)(puVar9 + 4) << 4) + 0xc) << 4) +
                                                  0xc + lVar2) << 4) + 0x10 + lVar3;
          uVar4 = uVar4 + 4;
        } while ((int)uVar4 < (int)(uint)uVar1);
      }
    }
    uVar4 = (int)puVar9 - iVar7;
    break;
  case 0x5e:
    puVar9 = param_1 + 4;
    uVar1 = *(ushort *)(param_1 + 2);
    if (uVar1 != 0) {
      if ((uVar1 & 3) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + 4) << 2) + 8;
          uVar4 = uVar4 + 1;
        } while ((uVar1 & 3) != uVar4);
      }
      if (2 < uVar1 - 1) {
        do {
          uVar6 = (ulong)(uint)(*(int *)(puVar9 + 4) << 2);
          lVar2 = (uint)(*(int *)(puVar9 + uVar6 + 0xc) << 2) + uVar6;
          puVar9 = puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + (ulong)(
                                                  uint)(*(int *)(puVar9 + uVar6 + 0xc) << 2) + 0x14
                                                  + uVar6) << 2) + 0x1c + lVar2) << 2) + 0x20 +
                            (ulong)(uint)(*(int *)(puVar9 + (ulong)(uint)(*(int *)(puVar9 + uVar6 + 
                                                  0xc) << 2) + 0x14 + uVar6) << 2) + lVar2;
          uVar4 = uVar4 + 4;
        } while ((int)uVar4 < (int)(uint)uVar1);
      }
    }
    uVar4 = (int)puVar9 - iVar7;
    break;
  case 0x66:
    uVar4 = (uint)*(ushort *)(param_1 + 2) * 0x28 | 4;
    break;
  case 0x67:
    uVar4 = (uint)*(ushort *)(param_1 + 2) << 5 | 4;
    break;
  case 0x68:
    uVar4 = 4;
    break;
  case 0x69:
    uVar4 = (uint)*(ushort *)(param_1 + 2) * 0x38 | 4;
  }
  return uVar4;
}

