
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003aed40(long param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long *plVar21;
  uint uVar22;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar23 [16];
  ushort local_7a;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  uint *local_40;
  uint *local_38;
  
  lVar14 = *(long *)(param_1 + 8);
  local_48 = 1;
  puVar13 = *(undefined8 **)(lVar14 + 0xc0);
  local_40 = param_2;
  local_38 = param_2;
  if (puVar13 == *(undefined8 **)(lVar14 + 200)) {
    FUN_1003c5980(lVar14 + 0xb8,&local_48);
  }
  else {
    puVar13[1] = param_2;
    *puVar13 = CONCAT44(uStack_44,1);
    *(long *)(lVar14 + 0xc0) = *(long *)(lVar14 + 0xc0) + 0x10;
  }
  if (param_3 <= local_38) {
    return 1;
  }
  uVar15 = *local_38;
  puVar1 = local_38 + 1;
  if ((int)uVar15 < 0) {
    return 4;
  }
  uVar20 = uVar15 & 0x7ff;
  uVar11 = 2;
  local_38 = puVar1;
  if (0x8e < uVar20) {
    switch(uVar20) {
    case 0x8f:
      local_58 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      iVar10 = FUN_1003ae100();
      if (iVar10 == 0) {
        return 0;
      }
      return 3;
    default:
      return 2;
    case 0x93:
      goto switchD_1003aeede_caseD_93;
    case 0x94:
      lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
      *(uint *)(lVar14 + 0x204) = uVar15 >> 0xb & 0x3f;
      return 0;
    case 0x95:
      lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
      if (lVar14 != 0) {
        *(uint *)(lVar14 + 0x1f0) = uVar15 >> 0xb & 3;
        return 0;
      }
      lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x30))();
      if (lVar14 == 0) {
        return 0;
      }
      *(uint *)(lVar14 + 0x1e8) = uVar15 >> 0xb & 3;
      return 0;
    case 0x96:
      lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
      *(uint *)(lVar14 + 500) = uVar15 >> 0xb & 7;
      return 0;
    case 0x97:
      lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
      *(uint *)(lVar14 + 0x1f8) = uVar15 >> 0xb & 7;
      return 0;
    case 0x99:
      uVar15 = *puVar1;
      lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
      *(uint *)(lVar14 + 0x1fc) = uVar15;
      if (puVar1 < param_3) {
        return 0;
      }
      return 1;
    }
  }
  switch(uVar20) {
  case 0x58:
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    iVar10 = FUN_1003ae100();
    if (iVar10 != 0) goto LAB_1003af253;
    puVar13 = operator_new(0x28);
    *(undefined4 *)(puVar13 + 4) = 0;
    puVar13[3] = 0;
    puVar13[2] = 0;
    puVar13[1] = 0;
    *puVar13 = 0;
    **(undefined8 **)(param_1 + 0x40) = puVar13;
    *(undefined8 **)(param_1 + 0x40) = puVar13;
    uVar12 = (ulong)(uint)local_78._12_4_;
    *(char *)(puVar13 + 4) = local_78[0xc];
    *(byte *)((long)puVar13 + 0x21) = (byte)(uVar15 >> 0xb) & 0x1f;
    uVar15 = *local_38;
    switch(uVar15 & 0xf) {
    case 1:
    case 2:
    case 5:
      *(undefined1 *)((long)puVar13 + 0x22) = 8;
      bVar9 = 8;
      break;
    case 3:
      *(undefined1 *)((long)puVar13 + 0x22) = 2;
      bVar9 = 2;
      break;
    case 4:
      *(undefined1 *)((long)puVar13 + 0x22) = 1;
      bVar9 = 1;
      break;
    case 6:
      *(undefined1 *)((long)puVar13 + 0x22) = 0xb;
      bVar9 = 0xb;
      break;
    default:
      bVar9 = 0;
    }
    switch(uVar15 >> 4 & 0xf) {
    case 1:
    case 2:
    case 5:
      bVar9 = bVar9 | 8;
      break;
    case 3:
      bVar9 = bVar9 | 2;
      break;
    case 4:
      bVar9 = bVar9 | 1;
      break;
    case 6:
      *(undefined1 *)((long)puVar13 + 0x22) = 0xb;
      bVar9 = 0xb;
    default:
      goto switchD_1003afb20_default;
    }
    *(byte *)((long)puVar13 + 0x22) = bVar9;
switchD_1003afb20_default:
    switch(uVar15 >> 8 & 0xf) {
    case 1:
    case 2:
    case 5:
      bVar9 = bVar9 | 8;
      break;
    case 3:
      bVar9 = bVar9 | 2;
      break;
    case 4:
      bVar9 = bVar9 | 1;
      break;
    case 6:
      *(undefined1 *)((long)puVar13 + 0x22) = 0xb;
      bVar9 = 0xb;
    default:
      goto switchD_1003afb59_default;
    }
    *(byte *)((long)puVar13 + 0x22) = bVar9;
switchD_1003afb59_default:
    switch(uVar15 >> 0xc & 0xf) {
    case 1:
    case 2:
    case 5:
      bVar9 = bVar9 | 8;
      break;
    case 3:
      bVar9 = bVar9 | 2;
      break;
    case 4:
      bVar9 = bVar9 | 1;
      break;
    case 6:
      bVar9 = 0xb;
      break;
    default:
      goto switchD_1003afb90_default;
    }
    *(byte *)((long)puVar13 + 0x22) = bVar9;
switchD_1003afb90_default:
    lVar14 = *(long *)(param_1 + 0x18);
    uVar16 = lVar14 - *(long *)(param_1 + 0x10) >> 6;
    if (uVar16 <= (local_78._12_4_ & 0xff)) {
      uVar19 = (ulong)(local_78._12_4_ & 0xff) + 1;
      if (uVar16 < uVar19) {
        FUN_1003c5e70(param_1 + 0x10);
        uVar12 = (ulong)*(byte *)(puVar13 + 4);
      }
      else if ((uVar19 < uVar16) &&
              (lVar18 = *(long *)(param_1 + 0x10) + uVar19 * 0x40, lVar14 != lVar18)) {
        *(ulong *)(param_1 + 0x18) = (~((lVar14 + -0x40) - lVar18) & 0xffffffffffffffc0U) + lVar14;
      }
    }
    lVar14 = *(long *)(param_1 + 8);
    lVar18 = *(long *)(lVar14 + 0x78);
    uVar16 = lVar18 - *(long *)(lVar14 + 0x70) >> 3;
    if (uVar16 <= (uVar12 & 0xff)) {
      uVar19 = (uVar12 & 0xff) + 1;
      if (uVar16 < uVar19) {
        FUN_1003c6060(lVar14 + 0x70);
        lVar14 = *(long *)(param_1 + 8);
        uVar12 = (ulong)*(byte *)(puVar13 + 4);
      }
      else if ((uVar19 < uVar16) && (lVar2 = *(long *)(lVar14 + 0x70) + uVar19 * 8, lVar18 != lVar2)
              ) {
        *(ulong *)(lVar14 + 0x78) = (~((lVar18 + -8) - lVar2) & 0xfffffffffffffff8U) + lVar18;
      }
    }
    *(undefined8 **)(*(long *)(lVar14 + 0x70) + (uVar12 & 0xff) * 8) = puVar13;
    uVar11 = 0;
    break;
  case 0x59:
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    iVar10 = FUN_1003ae100();
    if (iVar10 == 0) {
      puVar13 = operator_new(0x38);
      *(undefined4 *)(puVar13 + 2) = 0;
      puVar13[1] = 0;
      *puVar13 = 0;
      *(undefined4 *)((long)puVar13 + 0x14) = 0xffffffff;
      *(undefined1 *)(puVar13 + 3) = 0;
      puVar13[6] = 0;
      puVar13[5] = 0;
      puVar13[4] = 0;
      **(undefined8 **)(param_1 + 0x50) = puVar13;
      *(undefined8 **)(param_1 + 0x50) = puVar13;
      *(undefined4 *)(puVar13 + 1) = local_68._12_4_;
      uVar12 = (ulong)(uint)local_78._12_4_;
      *(undefined4 *)((long)puVar13 + 0xc) = local_78._12_4_;
      if ((uVar15 & 0x800) != 0) {
        *(byte *)(puVar13 + 3) = *(byte *)(puVar13 + 3) | 1;
      }
      lVar14 = *(long *)(param_1 + 8);
      lVar18 = *(long *)(lVar14 + 0x90);
      uVar16 = lVar18 - *(long *)(lVar14 + 0x88) >> 3;
      if (uVar16 <= uVar12) {
        uVar19 = (ulong)(local_78._12_4_ + 1);
        if (uVar16 < uVar19) {
          FUN_1003c5c00(lVar14 + 0x88);
          lVar14 = *(long *)(param_1 + 8);
          uVar12 = (ulong)*(uint *)((long)puVar13 + 0xc);
        }
        else if ((uVar19 < uVar16) &&
                (lVar2 = *(long *)(lVar14 + 0x88) + uVar19 * 8, lVar18 != lVar2)) {
          *(ulong *)(lVar14 + 0x90) = (~((lVar18 + -8) - lVar2) & 0xfffffffffffffff8U) + lVar18;
        }
      }
      *(undefined8 **)(*(long *)(lVar14 + 0x88) + uVar12 * 8) = puVar13;
      return 0;
    }
    goto LAB_1003af253;
  case 0x5a:
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    iVar10 = FUN_1003ae100();
    if (iVar10 == 0) {
      local_7a = CONCAT11(local_78[0xc],(char)(uVar15 >> 0xb)) & 0xff0f;
      lVar14 = *(long *)(param_1 + 8);
      if (*(ushort **)(lVar14 + 0xd8) == *(ushort **)(lVar14 + 0xe0)) {
        FUN_1003c5d50(lVar14 + 0xd0,&local_7a);
        return 0;
      }
      **(ushort **)(lVar14 + 0xd8) = local_7a;
      *(long *)(lVar14 + 0xd8) = *(long *)(lVar14 + 0xd8) + 2;
      return 0;
    }
    goto LAB_1003af253;
  case 0x5b:
    puVar13 = operator_new(0x18);
    *(undefined2 *)(puVar13 + 2) = 0;
    puVar13[1] = 0;
    *puVar13 = 0;
    **(undefined8 **)(param_1 + 0x48) = puVar13;
    *(undefined8 **)(param_1 + 0x48) = puVar13;
    if (local_38 < param_3) {
      uVar15 = *local_38;
      *(uint *)(puVar13 + 1) = local_38[1];
      uVar11 = 1;
      if (local_38 + 1 < param_3) {
        *(uint *)((long)puVar13 + 0xc) = local_38[2];
        *(char *)((long)puVar13 + 0x11) = (char)(uVar15 >> 0xc);
        *(byte *)(puVar13 + 2) = (byte)uVar15 >> 4;
        uVar11 = 0;
      }
    }
    else {
      uVar11 = 1;
    }
    break;
  case 0x5c:
    lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    *(uint *)(lVar14 + 0x1dc) = uVar15 >> 0xb & 0x3f;
    uVar11 = 0;
    break;
  case 0x5d:
    lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    *(uint *)(lVar14 + 0x1d8) = uVar15 >> 0xb & 0x3f;
    uVar11 = 0;
    break;
  case 0x5e:
    uVar15 = *puVar1;
    lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    *(uint *)(lVar14 + 0x1d4) = uVar15;
    uVar11 = 0;
    break;
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    iVar10 = FUN_1003ae100();
    if (iVar10 == 0) {
      uVar3 = uVar20 - 0x60;
      uVar17 = 0;
      if ((uVar3 < 5) && (uVar17 = 0, uVar3 != 2)) {
        uVar17 = (undefined1)*local_38;
      }
      puVar13 = operator_new(0x30);
      puVar13[1] = 0;
      *puVar13 = 0;
      puVar13[2] = puVar13;
      puVar13[3] = puVar13 + 2;
      puVar13[4] = puVar13 + 2;
      *(undefined1 *)((long)puVar13 + 0x2c) = 0;
      *(undefined4 *)(puVar13 + 5) = 0;
      *(undefined1 *)((long)puVar13 + 0x2d) = 1;
      *(undefined1 *)(puVar13 + 5) = uVar17;
      *(char *)((long)puVar13 + 0x2b) = (char)((uint)local_78._0_4_ >> 0xc);
      if (local_78[8] == '\x02') {
        bVar9 = local_68[0xc];
LAB_1003af0a3:
        uVar12 = (ulong)bVar9;
        *(byte *)((long)puVar13 + 0x2a) = bVar9;
      }
      else {
        if (local_78[8] == '\x01') {
          bVar9 = local_78[0xc];
          goto LAB_1003af0a3;
        }
        uVar12 = 0;
      }
      uVar17 = 5;
      switch(uVar3) {
      case 0:
      case 3:
        *(undefined1 *)((long)puVar13 + 0x2d) = 3;
        uVar17 = 7;
        if (uVar20 != 0x61) goto switchD_1003af490_caseD_2;
      case 1:
      case 4:
        *(undefined1 *)((long)puVar13 + 0x2d) = uVar17;
      default:
switchD_1003af490_caseD_2:
        if (((uVar15 & 0x7fe) == 0x62) || (uVar20 == 100)) {
          *(byte *)((long)puVar13 + 0x2c) = (byte)(uVar15 >> 0xb) & 0xf;
        }
        if ((local_78._0_4_ & 3) == 2) {
          bVar9 = local_78[0] >> 4;
          *(byte *)((long)puVar13 + 0x29) = bVar9;
        }
        else if ((local_78._0_4_ & 3) < 2) {
          *(undefined1 *)((long)puVar13 + 0x29) = 1;
          bVar9 = 1;
        }
        else {
          bVar9 = 0;
        }
        uVar15 = (uint)local_78._0_4_ >> 0xc & 0xff;
        if (uVar15 < 0x16) {
          if (uVar15 == 1) {
            **(undefined8 **)(param_1 + 0x28) = puVar13;
            *(undefined8 **)(param_1 + 0x28) = puVar13;
            lVar14 = *(long *)(param_1 + 8);
            if ((ulong)(*(long *)(lVar14 + 0x48) - *(long *)(lVar14 + 0x40) >> 3) < uVar12 * 4 + 4)
            {
              FUN_1003c5ab0(lVar14 + 0x40);
              bVar9 = *(byte *)((long)puVar13 + 0x29);
            }
            if ((bVar9 & 1) != 0) {
              *(undefined8 **)
               (*(long *)(*(long *)(param_1 + 8) + 0x40) +
               (ulong)*(byte *)((long)puVar13 + 0x2a) * 0x20) = puVar13;
            }
            bVar9 = *(byte *)((long)puVar13 + 0x29);
            if ((bVar9 & 2) != 0) {
              *(undefined8 **)
               (*(long *)(*(long *)(param_1 + 8) + 0x40) + 8 +
               (ulong)*(byte *)((long)puVar13 + 0x2a) * 0x20) = puVar13;
            }
            if ((bVar9 & 4) != 0) {
              *(undefined8 **)
               (*(long *)(*(long *)(param_1 + 8) + 0x40) + 0x10 +
               (ulong)*(byte *)((long)puVar13 + 0x2a) * 0x20) = puVar13;
            }
            if ((bVar9 & 8) == 0) {
              bVar9 = *(byte *)((long)puVar13 + 0x2a);
            }
            else {
              bVar9 = *(byte *)((long)puVar13 + 0x2a);
              *(undefined8 **)
               (*(long *)(*(long *)(param_1 + 8) + 0x40) + 0x18 + (ulong)bVar9 * 0x20) = puVar13;
            }
            plVar21 = *(long **)(param_1 + 8);
            if (*(uint *)((long)plVar21 + 0x17c) <= (uint)bVar9) {
              *(uint *)((long)plVar21 + 0x17c) = bVar9 + 1;
            }
            if (*(char *)(puVar13 + 5) == '\x04') {
              lVar14 = (**(code **)(*plVar21 + 0x20))();
              *(undefined8 **)(lVar14 + 0x1e8) = puVar13;
            }
            else if (*(char *)(puVar13 + 5) == '\a') {
              lVar14 = (**(code **)(*plVar21 + 0x20))();
              *(undefined8 **)(lVar14 + 0x1d8) = puVar13;
            }
          }
          else if (uVar15 == 0xb) {
            lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x18))();
            *(undefined8 **)(lVar14 + 0x1c0) = puVar13;
          }
        }
        else if (uVar15 < 0x23) {
          switch(uVar15) {
          case 0x16:
            lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
            *(undefined8 **)(lVar14 + 0x1d0) = puVar13;
            break;
          case 0x17:
            lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
            *(undefined8 **)(lVar14 + 0x1c0) = puVar13;
            break;
          case 0x19:
            lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
            if (lVar14 == 0) {
              lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x30))();
              if (lVar14 != 0) {
                **(undefined8 **)(param_1 + 0x38) = puVar13;
                *(undefined8 **)(param_1 + 0x38) = puVar13;
                plVar21 = (long *)(lVar14 + 0x1d0);
                if ((ulong)(*(long *)(lVar14 + 0x1d8) - *(long *)(lVar14 + 0x1d0) >> 3) <
                    (ulong)*(byte *)((long)puVar13 + 0x2a) * 4 + 4) {
                  FUN_1003c5ab0(plVar21);
                }
                bVar9 = *(byte *)((long)puVar13 + 0x29);
                if ((bVar9 & 1) != 0) {
                  *(undefined8 **)(*plVar21 + (ulong)*(byte *)((long)puVar13 + 0x2a) * 0x20) =
                       puVar13;
                }
                if ((bVar9 & 2) != 0) {
                  *(undefined8 **)(*plVar21 + 8 + (ulong)*(byte *)((long)puVar13 + 0x2a) * 0x20) =
                       puVar13;
                }
                if ((bVar9 & 4) != 0) {
                  *(undefined8 **)(*plVar21 + 0x10 + (ulong)*(byte *)((long)puVar13 + 0x2a) * 0x20)
                       = puVar13;
                }
                bVar5 = *(byte *)((long)puVar13 + 0x2a);
                if ((bVar9 & 8) != 0) {
                  *(undefined8 **)(*plVar21 + 0x18 + (ulong)bVar5 * 0x20) = puVar13;
                }
                if (*(uint *)(lVar14 + 0x1ec) <= (uint)bVar5) {
                  *(uint *)(lVar14 + 0x1ec) = bVar5 + 1;
                }
              }
            }
            else {
              **(undefined8 **)(param_1 + 0x38) = puVar13;
              *(undefined8 **)(param_1 + 0x38) = puVar13;
              plVar21 = (long *)(lVar14 + 0x1d8);
              if ((ulong)(*(long *)(lVar14 + 0x1e0) - *(long *)(lVar14 + 0x1d8) >> 3) <
                  (ulong)*(byte *)((long)puVar13 + 0x2a) * 4 + 4) {
                FUN_1003c5ab0(plVar21);
              }
              bVar9 = *(byte *)((long)puVar13 + 0x29);
              if ((bVar9 & 1) != 0) {
                *(undefined8 **)(*plVar21 + (ulong)*(byte *)((long)puVar13 + 0x2a) * 0x20) = puVar13
                ;
              }
              if ((bVar9 & 2) != 0) {
                *(undefined8 **)(*plVar21 + 8 + (ulong)*(byte *)((long)puVar13 + 0x2a) * 0x20) =
                     puVar13;
              }
              if ((bVar9 & 4) != 0) {
                *(undefined8 **)(*plVar21 + 0x10 + (ulong)*(byte *)((long)puVar13 + 0x2a) * 0x20) =
                     puVar13;
              }
              bVar5 = *(byte *)((long)puVar13 + 0x2a);
              if ((bVar9 & 8) != 0) {
                *(undefined8 **)(*plVar21 + 0x18 + (ulong)bVar5 * 0x20) = puVar13;
              }
              if (*(uint *)(lVar14 + 0x200) <= (uint)bVar5) {
                *(uint *)(lVar14 + 0x200) = bVar5 + 1;
              }
            }
            break;
          case 0x1c:
            lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x30))();
            *(undefined8 **)(lVar14 + 0x1c0) = puVar13;
          }
        }
        else if (uVar15 == 0x23) {
          lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x20))();
          *(undefined8 **)(lVar14 + 0x1e0) = puVar13;
        }
        lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x18))();
        if (lVar14 == 0) {
          return 0;
        }
        if (*(char *)((long)puVar13 + 0x2b) != '\x01') {
          return 0;
        }
        *(undefined4 *)(lVar14 + 0x1d0) = local_78._12_4_;
        return 0;
      }
    }
    goto LAB_1003af253;
  case 0x65:
  case 0x66:
  case 0x67:
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    iVar10 = FUN_1003ae100();
    if (iVar10 == 0) {
      uVar17 = 0;
      if ((uVar15 & 0x7fe) == 0x66) {
        uVar17 = (undefined1)*local_38;
      }
      puVar13 = operator_new(0x30);
      puVar13[1] = 0;
      *puVar13 = 0;
      puVar13[2] = puVar13;
      puVar13[3] = puVar13 + 2;
      puVar13[4] = puVar13 + 2;
      *(undefined2 *)((long)puVar13 + 0x2c) = 0;
      *(undefined4 *)(puVar13 + 5) = 0;
      *(undefined1 *)(puVar13 + 5) = uVar17;
      uVar15 = (uint)local_78._0_4_ >> 0xc;
      *(char *)((long)puVar13 + 0x2b) = (char)uVar15;
      if ((uVar15 & 0xff) == 2) {
        uVar12 = (ulong)local_78[0xc];
        *(byte *)((long)puVar13 + 0x2a) = local_78[0xc];
      }
      else {
        uVar12 = 0;
      }
      if (uVar20 == 0x67) {
        *(undefined1 *)((long)puVar13 + 0x2d) = 4;
      }
      else if (uVar20 == 0x66) {
        *(undefined1 *)((long)puVar13 + 0x2d) = 2;
      }
      if ((local_78._0_4_ & 3) == 2) {
        bVar9 = local_78[0] >> 4;
        *(byte *)((long)puVar13 + 0x29) = bVar9;
      }
      else if ((local_78._0_4_ & 3) < 2) {
        *(undefined1 *)((long)puVar13 + 0x29) = 1;
        bVar9 = 1;
      }
      else {
        bVar9 = 0;
      }
      uVar15 = uVar15 & 0xff;
      if (uVar15 == 2) {
        **(undefined8 **)(param_1 + 0x30) = puVar13;
        *(undefined8 **)(param_1 + 0x30) = puVar13;
        lVar14 = *(long *)(param_1 + 8);
        if ((ulong)(*(long *)(lVar14 + 0x60) - *(long *)(lVar14 + 0x58) >> 3) < uVar12 * 4 + 4) {
          FUN_1003c5ab0(lVar14 + 0x58);
          bVar9 = *(byte *)((long)puVar13 + 0x29);
        }
        if ((bVar9 & 1) != 0) {
          *(undefined8 **)
           (*(long *)(*(long *)(param_1 + 8) + 0x58) + (ulong)*(byte *)((long)puVar13 + 0x2a) * 0x20
           ) = puVar13;
        }
        bVar9 = *(byte *)((long)puVar13 + 0x29);
        if ((bVar9 & 2) != 0) {
          *(undefined8 **)
           (*(long *)(*(long *)(param_1 + 8) + 0x58) + 8 +
           (ulong)*(byte *)((long)puVar13 + 0x2a) * 0x20) = puVar13;
        }
        if ((bVar9 & 4) != 0) {
          *(undefined8 **)
           (*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x10 +
           (ulong)*(byte *)((long)puVar13 + 0x2a) * 0x20) = puVar13;
        }
        if ((bVar9 & 8) == 0) {
          bVar9 = *(byte *)((long)puVar13 + 0x2a);
        }
        else {
          bVar9 = *(byte *)((long)puVar13 + 0x2a);
          *(undefined8 **)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x18 + (ulong)bVar9 * 0x20) =
               puVar13;
        }
        plVar21 = *(long **)(param_1 + 8);
        if (*(uint *)(plVar21 + 0x30) <= (uint)bVar9) {
          *(uint *)(plVar21 + 0x30) = bVar9 + 1;
        }
        auVar8 = _DAT_100b2ddb0;
        uVar7 = _UNK_100b2ddac;
        uVar3 = _UNK_100b2dda8;
        uVar20 = _UNK_100b2dda4;
        uVar15 = _DAT_100b2dda0;
        auVar6 = _PTR___mh_execute_header_100b2dd90;
        cVar4 = *(char *)(puVar13 + 5);
        if (cVar4 == '\x02') {
          bVar9 = *(byte *)((long)puVar13 + 0x29);
          lVar14 = 0;
          if (DAT_1011ba010 == (undefined4 *)0x0) {
            do {
              iVar10 = (int)lVar14;
              uVar22 = iVar10 + auVar6._0_4_;
              uVar24 = iVar10 + auVar6._4_4_;
              uVar25 = iVar10 + auVar6._8_4_;
              uVar26 = iVar10 + auVar6._12_4_;
              auVar23._0_4_ =
                   (uVar22 >> 7 & uVar15) +
                   (uVar22 >> 6 & uVar15) +
                   (uVar22 >> 5 & uVar15) +
                   (uVar22 >> 4 & uVar15) +
                   (uVar22 >> 3 & uVar15) +
                   (uVar22 >> 2 & uVar15) + (uVar22 >> 1 & uVar15) + (uVar22 & uVar15);
              auVar23._4_4_ =
                   (uVar24 >> 7 & uVar20) +
                   (uVar24 >> 6 & uVar20) +
                   (uVar24 >> 5 & uVar20) +
                   (uVar24 >> 4 & uVar20) +
                   (uVar24 >> 3 & uVar20) +
                   (uVar24 >> 2 & uVar20) + (uVar24 >> 1 & uVar20) + (uVar24 & uVar20);
              auVar23._8_4_ =
                   (uVar25 >> 7 & uVar3) +
                   (uVar25 >> 6 & uVar3) +
                   (uVar25 >> 5 & uVar3) +
                   (uVar25 >> 4 & uVar3) +
                   (uVar25 >> 3 & uVar3) +
                   (uVar25 >> 2 & uVar3) + (uVar25 >> 1 & uVar3) + (uVar25 & uVar3);
              auVar23._12_4_ =
                   (uVar26 >> 7 & uVar7) +
                   (uVar26 >> 6 & uVar7) +
                   (uVar26 >> 5 & uVar7) +
                   (uVar26 >> 4 & uVar7) +
                   (uVar26 >> 3 & uVar7) +
                   (uVar26 >> 2 & uVar7) + (uVar26 >> 1 & uVar7) + (uVar26 & uVar7);
              auVar23 = pshufb(auVar23,auVar8);
              *(int *)((long)&DAT_1011b9f10 + lVar14) = auVar23._0_4_;
              lVar14 = lVar14 + 4;
            } while (lVar14 != 0x100);
            DAT_1011ba010 = &DAT_1011b9f10;
            plVar21 = *(long **)(param_1 + 8);
          }
          bVar9 = *(byte *)((long)DAT_1011ba010 + (ulong)bVar9);
          lVar14 = (**(code **)(*plVar21 + 0x10))();
          if (lVar14 == 0) {
            lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x18))();
            if (lVar14 == 0) {
              lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x30))();
              if (lVar14 != 0) {
                *(int *)(lVar14 + 0x1f0) = *(int *)(lVar14 + 0x1f0) + (uint)bVar9;
              }
            }
            else {
              *(int *)(lVar14 + 0x1e0) = *(int *)(lVar14 + 0x1e0) + (uint)bVar9;
            }
          }
          else {
            *(int *)(lVar14 + 0x1c8) = *(int *)(lVar14 + 0x1c8) + (uint)bVar9;
          }
        }
        else if (cVar4 == '\x04') {
          lVar14 = (**(code **)(*plVar21 + 0x18))();
          *(undefined8 **)(lVar14 + 0x1c8) = puVar13;
        }
      }
      else if (uVar15 == 0xc) {
        lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x20))();
        *(undefined8 **)(lVar14 + 0x1c8) = puVar13;
      }
      else if (uVar15 == 0xf) {
        lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x20))();
        *(undefined8 **)(lVar14 + 0x1d0) = puVar13;
      }
      lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x20))();
      if (lVar14 != 0) {
        *(uint *)(lVar14 + 0x1c0) =
             *(uint *)(lVar14 + 0x1c0) | 1 << (*(byte *)((long)puVar13 + 0x2a) & 0x1f);
        return 0;
      }
      lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x10))();
      if (lVar14 == 0) {
        return 0;
      }
      if (*(char *)(puVar13 + 5) != '\x01') {
        return 0;
      }
      *(undefined8 **)(lVar14 + 0x1c0) = puVar13;
      return 0;
    }
LAB_1003af253:
    uVar11 = 3;
    break;
  case 0x68:
    if (*puVar1 <= *(uint *)(*(long *)(param_1 + 8) + 0x174)) {
      return 0;
    }
    *(uint *)(*(long *)(param_1 + 8) + 0x174) = *puVar1;
    return 0;
  case 0x69:
    puVar13 = operator_new(0x20);
    puVar13[3] = 0;
    *(undefined1 *)(puVar13 + 2) = 0;
    puVar13[1] = 0;
    *puVar13 = 0;
    **(undefined8 **)(param_1 + 0x58) = puVar13;
    *(undefined8 **)(param_1 + 0x58) = puVar13;
    *(uint *)((long)puVar13 + 0xc) = *local_38;
    if (param_3 <= local_38) {
      return 1;
    }
    *(uint *)(puVar13 + 1) = local_38[1];
    if (param_3 <= local_38 + 1) {
      return 1;
    }
    uVar15 = local_38[2];
    if (uVar15 == 0) {
      return 0;
    }
    *(undefined1 *)(puVar13 + 2) = 1;
    if (uVar15 < 2) {
      return 0;
    }
    *(undefined1 *)(puVar13 + 2) = 3;
    if (uVar15 < 3) {
      return 0;
    }
    *(undefined1 *)(puVar13 + 2) = 7;
    if (uVar15 < 4) {
      return 0;
    }
    *(undefined1 *)(puVar13 + 2) = 0xf;
    return 0;
  case 0x6a:
    if ((uVar15 & 0x800) == 0) {
      return 0;
    }
    *(undefined1 *)(*(long *)(param_1 + 8) + 0x184) = 1;
    return 0;
  }
  return uVar11;
switchD_1003aeede_caseD_93:
  lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  if (lVar14 != 0) {
    *(uint *)(lVar14 + 0x200) = uVar15 >> 0xb & 0x3f;
    return 0;
  }
  lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  if (lVar14 == 0) {
    return 0;
  }
  *(uint *)(lVar14 + 0x1ec) = uVar15 >> 0xb & 0x3f;
  return 0;
}

