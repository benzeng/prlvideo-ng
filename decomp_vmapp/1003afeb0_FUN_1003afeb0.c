
int FUN_1003afeb0(long param_1,uint *param_2,uint *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ushort *puVar13;
  byte *pbVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long *plVar19;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  uint *local_40;
  uint *local_38;
  
  lVar10 = *(long *)(param_1 + 8);
  local_48 = 2;
  puVar4 = *(undefined8 **)(lVar10 + 0xc0);
  local_40 = param_2;
  local_38 = param_2;
  if (puVar4 == *(undefined8 **)(lVar10 + 200)) {
    FUN_1003c5980(lVar10 + 0xb8,&local_48);
  }
  else {
    puVar4[1] = param_2;
    *puVar4 = CONCAT44(uStack_44,2);
    *(long *)(lVar10 + 0xc0) = *(long *)(lVar10 + 0xc0) + 0x10;
  }
  pvVar9 = operator_new(0x58);
  lVar10 = FUN_1003a7de0(*param_2 & 0x7ff);
  FUN_1003aa9b0(pvVar9,(*(ushort *)(lVar10 + 0x1c) & 0xf) + (*(ushort *)(lVar10 + 0x1c) >> 4 & 0xf))
  ;
  lVar10 = *(long *)(param_1 + 8);
  *(long *)((long)pvVar9 + 8) = lVar10 + 0xe8;
  *(undefined8 *)((long)pvVar9 + 0x10) = *(undefined8 *)(lVar10 + 0xf8);
  *(void **)(*(long *)(lVar10 + 0xf8) + 8) = pvVar9;
  *(void **)(lVar10 + 0xf8) = pvVar9;
  *(int *)((long)pvVar9 + 0x34) =
       (int)((ulong)(*(long *)(lVar10 + 0xc0) - *(long *)(lVar10 + 0xb8)) >> 4) + -1;
  uVar8 = *param_2;
  uVar17 = uVar8 & 0x7ff;
  *(short *)((long)pvVar9 + 0x4c) = (short)uVar17;
  uVar18 = *(uint3 *)((long)pvVar9 + 0x54) & 0xffff9fff;
  uVar15 = (ushort)uVar8 & 0x2000 | (ushort)uVar18 | (ushort)(uVar8 >> 4) & 0x4000;
  *(char *)((long)pvVar9 + 0x56) = (char)(*(uint3 *)((long)pvVar9 + 0x54) >> 0x10);
  *(ushort *)((long)pvVar9 + 0x54) = uVar15;
  if (uVar17 == 0x3d) {
    uVar17 = uVar8 >> 0xb & 3;
    if (uVar17 != 0) {
      if (uVar17 != 1) {
        if (uVar17 == 2) {
          *(undefined1 *)((long)pvVar9 + 0x4e) = 1;
        }
        goto joined_r0x0001003b0047;
      }
      *(char *)((long)pvVar9 + 0x56) = (char)(uVar18 >> 0x10);
      *(ushort *)((long)pvVar9 + 0x54) = uVar15 | 0x8000;
    }
  }
  else {
    if (uVar17 != 0x6f) goto joined_r0x0001003b0047;
    uVar17 = uVar8 >> 0xb & 3;
    if (uVar17 == 1) {
      *(undefined1 *)((long)pvVar9 + 0x4e) = 1;
      goto joined_r0x0001003b0047;
    }
    if (uVar17 != 0) goto joined_r0x0001003b0047;
  }
  *(undefined1 *)((long)pvVar9 + 0x4e) = 8;
joined_r0x0001003b0047:
  while (bVar6 = param_3 <= param_2, (int)uVar8 < 0) {
    param_2 = param_2 + 1;
    if (bVar6) {
      return 1;
    }
    local_38 = param_2;
    FUN_1003aace0(pvVar9,*param_2);
    uVar8 = *param_2;
  }
  if (bVar6) {
    return 1;
  }
  local_38 = param_2 + 1;
  if ((*(int *)((long)pvVar9 + 0x48) == 0) || (param_3 <= local_38)) {
    plVar19 = *(long **)(param_1 + 8);
  }
  else {
    uVar8 = 0;
    uVar17 = 1;
    lVar10 = 0x28;
    do {
      local_58 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      iVar7 = FUN_1003ae100();
      if (iVar7 != 0) {
        return 3;
      }
      lVar5 = *(long *)((long)pvVar9 + 0x40);
      lVar2 = lVar5 + -0x28 + lVar10;
      if ((local_58[0xc] & 1) == 0) {
        if (local_68._4_4_ == 0 && local_58._4_4_ == 0) {
          FUN_1003a7bd0(lVar2,local_78);
          lVar11 = (**(code **)(**(long **)(param_1 + 8) + 0x18))();
          cVar3 = *(char *)(lVar5 + 0x10 + lVar10);
          if ((lVar11 == 0) || (cVar3 != '\x01')) {
            if (cVar3 == '\b') {
              lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x88) +
                                (ulong)*(uint *)(lVar5 + 4 + lVar10) * 8);
              *(byte *)(lVar11 + 0x18) = *(byte *)(lVar11 + 0x18) | 2;
              uVar18 = *(uint *)(lVar5 + lVar10);
              uVar16 = *(uint *)(lVar11 + 0x14);
              if (uVar18 <= *(uint *)(lVar11 + 0x14)) {
                uVar16 = uVar18;
              }
              *(uint *)(lVar11 + 0x14) = uVar16;
              if (uVar18 < *(uint *)(lVar11 + 0x10)) {
                uVar18 = *(uint *)(lVar11 + 0x10);
              }
              *(uint *)(lVar11 + 0x10) = uVar18;
            }
          }
          else {
            *(int *)(lVar5 + lVar10) =
                 local_78._12_4_ * *(int *)(*(long *)(param_1 + 8) + 0x17c) + local_68._12_4_;
          }
        }
        else {
          uVar8 = uVar8 + 1;
          if ((local_78[0] & 0xc) == 0) {
            iVar7 = FUN_1003b0560(param_1,lVar2,local_78);
            if (iVar7 != 0) {
              return iVar7;
            }
          }
          else {
            FUN_1003b0860(param_1,lVar2,local_78);
          }
        }
      }
      else {
        pbVar14 = (byte *)(lVar5 + 0x11 + lVar10);
        *pbVar14 = *pbVar14 | 1;
        *(undefined1 *)(lVar5 + 0x10 + lVar10) = 4;
        if (local_78[8] != 0) {
          if (local_78[8] == 1) {
            puVar1 = (undefined4 *)(lVar5 + lVar10);
            *puVar1 = local_78._12_4_;
            puVar1[1] = local_78._12_4_;
            puVar1[2] = local_78._12_4_;
            puVar1[3] = local_78._12_4_;
          }
          else {
            _memcpy((void *)(lVar5 + lVar10),local_78 + 0xc,(ulong)(local_78[8] - 1) * 4 + 4);
          }
        }
      }
      if (((uVar17 != 1) && ((*(byte *)(lVar5 + 0x11 + lVar10) & 1) == 0)) &&
         ((*(byte *)(lVar5 + 0xd + lVar10) & 5) == 0)) {
        FUN_1003aa7f0(lVar2);
      }
      if (*(uint *)((long)pvVar9 + 0x48) <= uVar17) break;
      lVar10 = lVar10 + 0x40;
      uVar17 = uVar17 + 1;
    } while (local_38 < param_3);
    plVar19 = *(long **)(param_1 + 8);
    if (*(uint *)(plVar19 + 0x2e) < uVar8) {
      *(uint *)(plVar19 + 0x2e) = uVar8;
    }
  }
  uVar15 = *(ushort *)((long)pvVar9 + 0x4c);
  uVar8 = (uint)uVar15;
  if (uVar15 < 0x6c) {
    if (uVar15 < 0x45) {
      if (uVar15 - 0x2d < 2) {
        uVar12 = (ulong)*(uint *)(*(long *)((long)pvVar9 + 0x40) + 0xa8);
        *(undefined1 *)((long)pvVar9 + 0x4e) =
             *(undefined1 *)(*(long *)(plVar19[0xe] + uVar12 * 8) + 0x22);
        puVar13 = (ushort *)(uVar12 * 0x40 + *(long *)(param_1 + 0x10));
        if (uVar15 == 0x2e) {
          if ((*(ushort *)((long)pvVar9 + 0x54) & 1) != 0) {
            *puVar13 = *puVar13 | 0x200;
            return 0;
          }
          *puVar13 = *puVar13 | 0x10;
          return 0;
        }
        if (uVar8 == 0x2d) {
          if ((*(ushort *)((long)pvVar9 + 0x54) & 1) != 0) {
            *puVar13 = *puVar13 | 0x100;
            return 0;
          }
          *puVar13 = *puVar13 | 8;
          return 0;
        }
        return 0;
      }
      if (uVar8 == 0x2c) {
        uVar8 = *(uint *)(*(long *)((long)pvVar9 + 0x40) + 0x28);
        if (*(uint *)(plVar19 + 0x2f) <= uVar8) {
          *(uint *)(plVar19 + 0x2f) = uVar8 + 1;
          return 0;
        }
        return 0;
      }
      if (uVar15 != 0x3d) {
        return 0;
      }
      puVar13 = (ushort *)
                ((ulong)*(uint *)(*(long *)((long)pvVar9 + 0x40) + 0xa8) * 0x40 +
                *(long *)(param_1 + 0x10));
      if (*(char *)((long)pvVar9 + 0x4e) == '\x01') {
        *(byte *)puVar13 = (byte)*puVar13 | 2;
        return 0;
      }
      if (*(char *)((long)pvVar9 + 0x4e) == '\b') {
        if ((*(ushort *)((long)pvVar9 + 0x54) & 0x8000) != 0) {
          *puVar13 = *puVar13 | 4;
          return 0;
        }
        *puVar13 = *puVar13 | 1;
        return 0;
      }
      return 0;
    }
    if (5 < uVar8 - 0x45) {
      return 0;
    }
  }
  else if (1 < uVar15 - 0x6c) {
    if (uVar15 == 0x6e) {
      cVar3 = *(char *)(*(long *)((long)pvVar9 + 0x40) + 0x78);
      if (cVar3 == '\a') {
        puVar13 = (ushort *)
                  (*(long *)(param_1 + 0x10) +
                  (ulong)*(uint *)(*(long *)((long)pvVar9 + 0x40) + 0x68) * 0x40);
        *puVar13 = *puVar13 | 0x20;
        return 0;
      }
      if (cVar3 == '\x0e') {
        lVar10 = (**(code **)(*plVar19 + 0x20))();
        *(byte *)(lVar10 + 0x1f0) = *(byte *)(lVar10 + 0x1f0) | 1;
        return 0;
      }
      return 0;
    }
    if (uVar8 != 0x6f) {
      return 0;
    }
    cVar3 = *(char *)(*(long *)((long)pvVar9 + 0x40) + 0x78);
    if (cVar3 == '\a') {
      pbVar14 = (byte *)((ulong)*(uint *)(*(long *)((long)pvVar9 + 0x40) + 0x68) * 0x40 +
                        *(long *)(param_1 + 0x10));
      if (*(char *)((long)pvVar9 + 0x4e) == '\x01') {
        *pbVar14 = *pbVar14 | 0x80;
        return 0;
      }
      if (*(char *)((long)pvVar9 + 0x4e) == '\b') {
        *pbVar14 = *pbVar14 | 0x40;
        return 0;
      }
      return 0;
    }
    if (cVar3 != '\x0e') {
      return 0;
    }
    if (*(char *)((long)pvVar9 + 0x4e) != '\x01') {
      if (*(char *)((long)pvVar9 + 0x4e) == '\b') {
        lVar10 = (**(code **)(*plVar19 + 0x20))();
        *(byte *)(lVar10 + 0x1f0) = *(byte *)(lVar10 + 0x1f0) | 2;
        return 0;
      }
      return 0;
    }
    lVar10 = (**(code **)(*plVar19 + 0x20))();
    *(byte *)(lVar10 + 0x1f0) = *(byte *)(lVar10 + 0x1f0) | 4;
    return 0;
  }
  FUN_1003b0d10(param_1,pvVar9);
  return 0;
}

