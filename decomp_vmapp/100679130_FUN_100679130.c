
int FUN_100679130(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  int *piVar6;
  short sVar7;
  undefined8 *puVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  undefined2 *puVar18;
  long lVar19;
  ulong uVar20;
  ushort uVar21;
  ushort uVar22;
  uint uVar23;
  ushort uVar24;
  size_t sVar25;
  size_t sVar26;
  undefined2 *puVar27;
  ulong uVar28;
  uint *puVar29;
  int local_e0;
  uint local_d8;
  ulong local_d0;
  undefined2 *local_b0;
  undefined2 *local_a8;
  ulong local_a0;
  undefined2 *local_88;
  QArrayData *local_50;
  int local_44;
  int local_40;
  int local_3c;
  ushort local_36;
  ushort local_34;
  undefined1 local_31;
  
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  if (*(long *)(param_1 + 8) == 0) {
LAB_1006792f9:
    FUN_1008e3970("","WinRegistry",0,"OA00002.32:");
    return 0x8158002;
  }
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
  if (puVar8 == (undefined8 *)0x0) {
    FUN_1008e3970("","WinRegistry",0,"OA00004.10:");
    goto LAB_1006792f9;
  }
  puVar29 = (uint *)*puVar8;
  if ((1 < *puVar29) || (*(long *)(puVar29 + 4) != 0x18)) {
    QByteArray::reallocData(puVar8,puVar29[1] + 1,puVar29[2] >> 0x1f);
    puVar29 = (uint *)*puVar8;
  }
  lVar9 = *(long *)(puVar29 + 4);
  if ((long)puVar29 + lVar9 == 0) goto LAB_1006792f9;
  if (param_3 == 0xffffffff) {
    iVar14 = FUN_10067c2a0(*(undefined8 *)(param_1 + 8));
    param_3 = iVar14 + 0x1004;
  }
  uVar17 = (ulong)param_3;
  lVar1 = uVar17 + lVar9;
  if (*(short *)((long)puVar29 + lVar1) != 0x6b6e) {
    FUN_1008e3970("","WinRegistry",0,"OA00002.33:");
    return 0x8158009;
  }
  lVar3 = lVar9 + 0x14 + uVar17;
  if (*(int *)((long)puVar29 + lVar3) == 0) {
    FUN_1008e3970("","WinRegistry",0,"OA00002.34:");
    return 0x8158010;
  }
  QString::toLatin1();
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  uVar15 = FUN_100675f40(param_1,(long)puVar29 + lVar1,local_50 + *(long *)(local_50 + 0x10),
                         &local_34,&local_36);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067928a;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10067928a:
  if (uVar15 == 0xffffffff) {
    FUN_1008e3970("","WinRegistry",0,"OA00002.35:");
    return 0x815800d;
  }
  uVar28 = (ulong)uVar15;
  lVar2 = lVar9 + uVar28;
  if ((*(int *)((long)puVar29 + lVar2 + 0x24) != 0) ||
     (*(int *)((long)puVar29 + lVar9 + 0x14 + uVar28) != 0)) {
    FUN_1008e3970("","WinRegistry",0,"OA00002.36:");
    return 0x8158011;
  }
  lVar4 = lVar9 + 0x1c + uVar17;
  local_d8 = *(int *)((long)puVar29 + lVar1 + 0x1c) + 0x1004;
  uVar17 = (ulong)local_d8;
  sVar7 = *(short *)((long)puVar29 + uVar17 + lVar9);
  if (sVar7 == 0x6972) {
    puVar27 = (undefined2 *)(uVar17 + lVar9 + (long)puVar29);
    if (puVar27 != (undefined2 *)0x0) {
      sVar7 = *(short *)((long)puVar29 +
                        (ulong)(*(int *)(puVar27 + (ulong)local_36 * 2 + 2) + 0x1004U) + lVar9);
      bVar11 = true;
      uVar17 = (ulong)(*(int *)(puVar27 + (ulong)local_36 * 2 + 2) + 0x1004U);
      goto LAB_10067940c;
    }
    *(int *)((long)puVar29 + lVar3) = *(int *)((long)puVar29 + lVar3) + -1;
    bVar10 = false;
    local_b0 = (undefined2 *)0x0;
    local_e0 = 0;
    iVar16 = 0;
    local_a8 = (undefined2 *)0x0;
    bVar13 = false;
    local_88 = (undefined2 *)0x0;
    bVar12 = false;
LAB_100679cd7:
    if (local_40 != 0) {
      *(int *)((long)puVar29 + lVar4) = local_40 + -0x1000;
    }
    if (local_3c != 0) {
      *(int *)((long)puVar29 + lVar4) = local_3c + -0x1000;
    }
    if ((!bVar10 && !bVar12) && (*(int *)((long)puVar29 + lVar3) == 0)) {
      *(undefined4 *)((long)puVar29 + lVar4) = 0xffffffff;
    }
  }
  else {
    bVar11 = false;
    local_d8 = 0;
    puVar27 = (undefined2 *)0x0;
LAB_10067940c:
    if (sVar7 == 0x666c) {
LAB_10067942e:
      uVar20 = (ulong)*(ushort *)((long)puVar29 + lVar9 + uVar17 + 2);
      local_d0 = uVar17;
      if (uVar20 == 1) {
        local_a0 = 0;
        local_a8 = (undefined2 *)0x0;
        uVar17 = 0;
LAB_100679573:
        local_b0 = (undefined2 *)0x0;
        sVar25 = 0;
        goto LAB_1006797ca;
      }
      lVar1 = lVar9 + 2 + uVar17;
      local_a0 = uVar20 * 8 + 0xfffffffc;
      local_a8 = operator_new__(local_a0 & 0xfffffffc);
      *local_a8 = *(undefined2 *)((long)puVar29 + lVar9 + uVar17);
      local_a8[1] = *(short *)((long)puVar29 + lVar1) + -1;
      uVar23 = (uint)*(ushort *)((long)puVar29 + lVar1);
      if (*(ushort *)((long)puVar29 + lVar1) != 0) {
        lVar19 = 0;
        uVar24 = 0;
        do {
          if ((uint)local_34 != ((uint)lVar19 & 0xffff)) {
            *(undefined4 *)(local_a8 + (ulong)uVar24 * 4 + 2) =
                 *(undefined4 *)((long)puVar29 + lVar19 * 8 + uVar17 + lVar9 + 4);
            *(undefined4 *)(local_a8 + (ulong)uVar24 * 4 + 4) =
                 *(undefined4 *)((long)puVar29 + lVar19 * 8 + uVar17 + lVar9 + 8);
            uVar24 = uVar24 + 1;
            uVar23 = (uint)*(ushort *)((long)puVar29 + lVar1);
          }
          lVar19 = lVar19 + 1;
        } while (((uint)lVar19 & 0xffff) < uVar23);
        goto LAB_100679534;
      }
      sVar26 = 0;
      if (bVar11) {
        sVar25 = 0;
        local_b0 = (undefined2 *)0x0;
        local_e0 = 0;
        puVar18 = local_a8;
        goto LAB_1006797d9;
      }
      bVar12 = false;
      local_88 = (undefined2 *)0x0;
      bVar13 = false;
      bVar11 = false;
      local_e0 = 0;
      local_b0 = (undefined2 *)0x0;
      sVar25 = 0;
    }
    else {
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0;
      local_d0 = 0;
      if (sVar7 == 0x686c) goto LAB_10067942e;
LAB_100679534:
      if (sVar7 == 0x696c) {
        lVar1 = lVar9 + uVar17;
        uVar20 = (ulong)*(ushort *)((long)puVar29 + lVar1 + 2);
        if (uVar20 == 1) goto LAB_100679573;
        lVar19 = lVar9 + 2 + uVar17;
        sVar25 = uVar20 << 2;
        local_b0 = operator_new__(sVar25);
        *local_b0 = *(undefined2 *)((long)puVar29 + lVar1);
        local_b0[1] = *(short *)((long)puVar29 + lVar19) + -1;
        uVar24 = *(ushort *)((long)puVar29 + lVar19);
        if (uVar24 != 0) {
          puVar5 = (undefined4 *)((long)puVar29 + lVar1 + 4);
          if ((uVar24 & 1) == 0) {
            uVar22 = 0;
            uVar21 = 0;
          }
          else {
            if (local_34 != 0) {
              *(undefined4 *)(local_b0 + 2) = *puVar5;
            }
            uVar22 = (ushort)(local_34 != 0);
            uVar21 = 1;
          }
          if (uVar24 != 1) {
            uVar20 = (ulong)uVar21;
            do {
              if ((uint)local_34 != ((uint)uVar20 & 0xffff)) {
                *(undefined4 *)(local_b0 + (ulong)uVar22 * 2 + 2) =
                     *(undefined4 *)((long)puVar29 + uVar20 * 4 + uVar17 + lVar9 + 4);
                uVar22 = uVar22 + 1;
              }
              if (((uint)(uVar20 + 1) & 0xffff) != (uint)local_34) {
                *(undefined4 *)(local_b0 + (ulong)uVar22 * 2 + 2) = puVar5[uVar20 + 1 & 0xffff];
                uVar22 = uVar22 + 1;
              }
              uVar20 = uVar20 + 2;
            } while (((uint)uVar20 & 0xffff) < (uint)uVar24);
          }
        }
      }
      else {
        local_b0 = (undefined2 *)0x0;
        sVar25 = 0;
        uVar17 = 0;
      }
LAB_1006797ca:
      local_e0 = (int)uVar17;
      puVar18 = local_a8;
      if (bVar11) {
LAB_1006797d9:
        bVar11 = true;
        bVar13 = false;
        if ((puVar18 == (undefined2 *)0x0) && (local_b0 == (undefined2 *)0x0)) {
          if ((ulong)(ushort)puVar27[1] == 1) {
            local_88 = (undefined2 *)0x0;
            sVar26 = 0;
          }
          else {
            sVar26 = (ulong)(ushort)puVar27[1] << 2;
            local_a8 = operator_new__(sVar26);
            *local_a8 = *puVar27;
            local_a8[1] = puVar27[1] + -1;
            uVar24 = puVar27[1];
            if (uVar24 != 0) {
              if ((uVar24 & 1) == 0) {
                uVar17 = 0;
                uVar22 = 0;
              }
              else {
                if (local_36 != 0) {
                  *(undefined4 *)(local_a8 + 2) = *(undefined4 *)(puVar27 + 2);
                }
                uVar17 = (ulong)(local_36 != 0);
                uVar22 = 1;
              }
              if (uVar24 != 1) {
                uVar20 = (ulong)uVar22;
                do {
                  if ((uint)local_36 != ((uint)uVar20 & 0xffff)) {
                    *(undefined4 *)(local_a8 + (uVar17 & 0xffff) * 2 + 2) =
                         *(undefined4 *)(puVar27 + uVar20 * 2 + 2);
                    uVar17 = (ulong)((int)uVar17 + 1);
                  }
                  if (((uint)(uVar20 + 1) & 0xffff) != (uint)local_36) {
                    *(undefined4 *)(local_a8 + (uVar17 & 0xffff) * 2 + 2) =
                         *(undefined4 *)(puVar27 + (uVar20 + 1 & 0xffff) * 2 + 2);
                    uVar17 = (ulong)((int)uVar17 + 1);
                  }
                  uVar20 = uVar20 + 2;
                } while (((uint)uVar20 & 0xffff) < (uint)uVar24);
              }
            }
            iVar14 = FUN_10067cc50(*(undefined8 *)(param_1 + 8),sVar26,&local_44);
            if (iVar14 != 0x8000000) {
              FUN_1008e3970("","WinRegistry",0,"OA00002.37:\t%x;\t%d",sVar26,iVar14);
              goto LAB_100679fae;
            }
            bVar11 = true;
            bVar13 = true;
            local_88 = local_a8;
          }
        }
        else {
          local_88 = (undefined2 *)0x0;
          sVar26 = 0;
        }
      }
      else {
        local_88 = (undefined2 *)0x0;
        bVar11 = false;
        bVar13 = false;
        sVar26 = 0;
      }
      local_a8 = puVar18;
      bVar12 = false;
      if (local_b0 == (undefined2 *)0x0) {
        local_b0 = (undefined2 *)0x0;
      }
      else {
        iVar14 = FUN_10067cc50(*(undefined8 *)(param_1 + 8),sVar25,&local_40);
        bVar12 = true;
        if (iVar14 != 0x8000000) {
          FUN_1008e3970("","WinRegistry",0,"OA00002.38:\t%x;\t%d",sVar25,iVar14);
          if ((bVar13) &&
             (FUN_10067ce20(*(undefined8 *)(param_1 + 8),local_44), local_88 != (undefined2 *)0x0))
          {
            operator_delete__(local_88);
          }
          operator_delete__(local_b0);
          if (local_a8 == (undefined2 *)0x0) {
            return iVar14;
          }
          goto LAB_100679fae;
        }
      }
    }
    iVar16 = (int)local_d0;
    bVar10 = false;
    puVar18 = (undefined2 *)0x0;
    if (local_a8 != (undefined2 *)0x0) {
      iVar14 = FUN_10067cc50(*(undefined8 *)(param_1 + 8),local_a0 & 0xffffffff,&local_3c);
      bVar10 = true;
      puVar18 = local_a8;
      if (iVar14 != 0x8000000) {
        FUN_1008e3970("","WinRegistry",0,"OA00002.39:\t%x;\t%d",local_a0 & 0xffffffff,iVar14);
        if ((bVar13) &&
           (FUN_10067ce20(*(undefined8 *)(param_1 + 8),local_44), local_88 != (undefined2 *)0x0)) {
          operator_delete__(local_88);
        }
        if ((local_b0 != (undefined2 *)0x0) && (bVar12)) {
          operator_delete__(local_b0);
        }
        goto LAB_100679fae;
      }
    }
    if (bVar13) {
      _memcpy((void *)((ulong)(local_44 + 4) + lVar9 + (long)puVar29),local_88,sVar26);
      bVar13 = true;
      if (!bVar12) goto LAB_100679bea;
LAB_100679bc9:
      _memcpy((void *)((ulong)(local_40 + 4) + lVar9 + (long)puVar29),local_b0,sVar25);
      bVar12 = true;
    }
    else {
      bVar13 = false;
      if (bVar12) goto LAB_100679bc9;
LAB_100679bea:
      bVar12 = false;
    }
    if (!bVar10) {
      *(int *)((long)puVar29 + lVar3) = *(int *)((long)puVar29 + lVar3) + -1;
    }
    else {
      _memcpy((void *)((ulong)(local_3c + 4) + lVar9 + (long)puVar29),puVar18,local_a0 & 0xffffffff)
      ;
      *(int *)((long)puVar29 + lVar3) = *(int *)((long)puVar29 + lVar3) + -1;
    }
    bVar10 = bVar10;
    local_a8 = puVar18;
    if (!bVar11) goto LAB_100679cd7;
    if ((local_88 != (undefined2 *)0x0) || ((puVar27[1] != 1 || bVar12) || bVar10)) {
      if (bVar10 || bVar12) {
        if (local_40 != 0) {
          *(int *)(puVar27 + (ulong)local_36 * 2 + 2) = local_40 + -0x1000;
        }
        if (local_3c != 0) {
          *(int *)(puVar27 + (ulong)local_36 * 2 + 2) = local_3c + -0x1000;
        }
      }
      else {
        *(int *)((long)puVar29 + lVar4) = local_44 + -0x1000;
      }
    }
    else {
      *(undefined4 *)((long)puVar29 + lVar4) = 0xffffffff;
      local_88 = (undefined2 *)0x0;
    }
  }
  if ((local_d8 != 0) && (bVar13)) {
    FUN_10067ce20(*(undefined8 *)(param_1 + 8),local_d8 - 4);
  }
  if ((bool)(local_e0 != 0 & bVar12)) {
    FUN_10067ce20(*(undefined8 *)(param_1 + 8),local_e0 + -4);
  }
  if ((bool)(iVar16 != 0 & bVar10)) {
    FUN_10067ce20(*(undefined8 *)(param_1 + 8),iVar16 + -4);
  }
  if (*(short *)((long)puVar29 + lVar2 + 0x4a) != 0) {
    FUN_10067ce20(*(undefined8 *)(param_1 + 8),*(int *)((long)puVar29 + lVar2 + 0x30) + 0x1000);
  }
  uVar17 = (ulong)(*(int *)((long)puVar29 + lVar2 + 0x2c) + 0x1004);
  if (*(short *)((long)puVar29 + uVar17 + lVar9) == 0x6b73) {
    piVar6 = (int *)((long)puVar29 + uVar17 + lVar9 + 0xc);
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      lVar1 = lVar9 + 4 + uVar17;
      uVar20 = (ulong)(*(int *)((long)puVar29 + lVar1) + 0x1004);
      lVar3 = lVar9 + 8 + uVar17;
      if (*(short *)((long)puVar29 + uVar20 + lVar9) == 0x6b73) {
        *(undefined4 *)((long)puVar29 + lVar9 + 8 + uVar20) = *(undefined4 *)((long)puVar29 + lVar3)
        ;
      }
      uVar17 = (ulong)(*(int *)((long)puVar29 + lVar3) + 0x1004);
      if (*(short *)((long)puVar29 + uVar17 + lVar9) == 0x6b73) {
        *(undefined4 *)((long)puVar29 + lVar9 + 4 + uVar17) = *(undefined4 *)((long)puVar29 + lVar1)
        ;
      }
      FUN_10067ce20(*(undefined8 *)(param_1 + 8),
                    *(int *)((long)puVar29 + lVar9 + 0x2c + uVar28) + 0x1000);
    }
  }
  FUN_10067ce20(*(undefined8 *)(param_1 + 8),uVar15 - 4);
  if ((local_88 != (undefined2 *)0x0) && (bVar13)) {
    operator_delete__(local_88);
  }
  if ((local_b0 != (undefined2 *)0x0) && (bVar12)) {
    operator_delete__(local_b0);
  }
  iVar14 = 0x8000000;
  if (local_a8 == (undefined2 *)0x0) {
    return 0x8000000;
  }
  if (!bVar10) {
    return 0x8000000;
  }
LAB_100679fae:
  operator_delete__(local_a8);
  return iVar14;
}

