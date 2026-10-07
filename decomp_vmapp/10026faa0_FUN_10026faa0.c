
void FUN_10026faa0(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  char cVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  long *plVar24;
  undefined8 in_stack_fffffffffffffe80;
  undefined4 uVar26;
  undefined8 uVar25;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar27;
  uint local_10c;
  void *local_f8;
  void *local_c0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  uint *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  uint local_6c;
  void *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  void *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uVar11 = *(uint *)(param_1 + 0x1fc);
  lVar9 = FUN_100257d80();
  *(undefined4 *)(param_1 + 0x228) = 0;
  lVar17 = (ulong)uVar11 * 0x538;
  if (*(int *)(lVar9 + 0x2debc + lVar17) != 1) {
    return;
  }
  puVar1 = (undefined4 *)(lVar9 + 0x2debc + lVar17);
  if (*(int *)(lVar9 + 0x2ded4 + lVar17) == 0xc) {
    *puVar1 = 2;
    FUN_1002effe0(*(undefined8 *)(param_1 + 0x98));
    return;
  }
  QMutex::lock();
  cVar4 = *(char *)(lVar9 + 0x2de50 + lVar17);
  FUN_10026ce00();
  uVar26 = (undefined4)((ulong)in_stack_fffffffffffffe80 >> 0x20);
  uVar27 = (undefined4)((ulong)in_stack_fffffffffffffe98 >> 0x20);
  iVar7 = *(int *)(lVar9 + 0x2ded4 + lVar17);
  uVar11 = *(uint *)(param_1 + 0x228);
  uVar22 = (uint)(iVar7 != 2);
  *(uint *)(param_1 + 0x228) = uVar11 & 0xfffffffe | uVar22;
  bVar6 = ~*(byte *)(lVar9 + 0x2dea3 + lVar17) * '\x02';
  *(uint *)(param_1 + 0x228) = bVar6 & 2 | uVar11 & 0xfffffffc | uVar22;
  local_6c = 0;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  if ((bVar6 & 2) == 0) {
    uVar15 = 0x10000 - (*(uint *)(lVar9 + 0x2dec0 + lVar17) & 0xffff);
    puVar2 = (undefined4 *)(lVar9 + 0x2dec0 + lVar17);
    if (iVar7 == 2) {
      FUN_10008d2d0(&local_88,*puVar2);
      uVar26 = (undefined4)((ulong)in_stack_fffffffffffffe80 >> 0x20);
      uVar27 = (undefined4)((ulong)in_stack_fffffffffffffe98 >> 0x20);
      if (local_88 == (uint *)0x0) {
        iVar7 = 6;
        local_c0 = (void *)0x0;
        FUN_1008e3970("","LocalDevices",0,"[DVDROM:ide] Error: Cannot access memory(B1, %08x)!",
                      *puVar2);
      }
      else {
        uVar11 = uVar15 >> 3;
        if (uVar11 != 0) {
          lVar16 = 0;
          uVar22 = 0;
          do {
            uVar12 = local_88[lVar16 * 2 + 1];
            uVar21 = uVar12 & 0xffff;
            if ((uVar12 & 0xffff) == 0) {
              uVar21 = 0x10000;
            }
            uVar22 = uVar21 + uVar22;
            if ((int)uVar12 < 0) {
              iVar7 = 6;
              local_c0 = (void *)0x0;
              if ((int)uVar22 < 0) goto LAB_1002704ab;
              if ((int)lVar16 != 0) {
                uVar11 = (int)lVar16 + 1;
                goto LAB_1002700e3;
              }
              uVar11 = local_88[1];
              if (-1 < (int)uVar11) {
                local_c0 = (void *)0x0;
                FUN_1008e3970("","LocalDevices",0,
                              "[DVDROM:ide] Error: Memory descriptor table is broken!");
                goto LAB_100270485;
              }
              uVar12 = 0x10000;
              if ((uVar11 & 0xffff) != 0) {
                uVar12 = uVar11 & 0xffff;
              }
              FUN_10008d2d0(&local_a8,*local_88 & 0xfffffffe,uVar12);
              uVar11 = 1;
              local_f8 = local_a8;
              local_c0 = (void *)0x0;
              goto LAB_100270172;
            }
            lVar16 = lVar16 + 1;
          } while ((int)lVar16 < (int)uVar11);
        }
        iVar7 = 6;
        local_c0 = (void *)0x0;
        FUN_1008e3970("","LocalDevices",0,"[DVDROM:ide] Error: no Eot");
      }
      goto LAB_1002704ab;
    }
    uVar11 = *(uint *)(lVar9 + 0x2dee8 + lVar17);
    uVar22 = *(uint *)(lVar9 + 0x2deec + lVar17);
    if (uVar11 == 1) {
      uVar11 = *(uint *)(lVar9 + 0x2def4 + lVar17);
      if ((int)uVar11 < 0) {
        uVar12 = 0x10000;
        if ((uVar11 & 0xffff) != 0) {
          uVar12 = uVar11 & 0xffff;
        }
        FUN_10008d2d0(&local_a8,*(uint *)(lVar9 + 0x2def0 + lVar17) & 0xfffffffe,uVar12);
        uVar11 = 1;
        local_f8 = local_a8;
        local_c0 = (void *)0x0;
        goto LAB_100270172;
      }
      local_c0 = (void *)0x0;
      FUN_1008e3970("","LocalDevices",0,"[DVDROM:ide] Error: Memory descriptor table is broken!");
    }
    else {
      if (uVar11 < 0x40) {
LAB_1002700e3:
        uVar26 = (undefined4)((ulong)in_stack_fffffffffffffe80 >> 0x20);
        uVar27 = (undefined4)((ulong)in_stack_fffffffffffffe98 >> 0x20);
        local_c0 = (void *)0x0;
        if (uVar11 < 2) goto LAB_100270485;
      }
      else {
        FUN_10008d2d0(&local_88,*puVar2);
        uVar26 = (undefined4)((ulong)in_stack_fffffffffffffe80 >> 0x20);
        uVar27 = (undefined4)((ulong)in_stack_fffffffffffffe98 >> 0x20);
        if (local_88 == (uint *)0x0) {
          iVar7 = 6;
          local_c0 = (void *)0x0;
          FUN_1008e3970("","LocalDevices",0,"[DVDROM:ide] Error: Cannot access memory (B3,%08x)!",
                        *puVar2);
          goto LAB_1002704ab;
        }
      }
      if ((0x30000 < (int)uVar22) ||
         (local_f8 = *(void **)(param_1 + 0x230), local_c0 = (void *)0x0, local_f8 == (void *)0x0))
      {
        local_f8 = _valloc((long)(int)uVar22);
        local_c0 = local_f8;
      }
LAB_100270172:
      uVar26 = (undefined4)((ulong)in_stack_fffffffffffffe80 >> 0x20);
      uVar27 = (undefined4)((ulong)in_stack_fffffffffffffe98 >> 0x20);
      if (local_f8 != (void *)0x0) {
        if ((*(byte *)(param_1 + 0x228) & 1) == 0) {
          uVar15 = uVar15 >> 3;
          if (uVar15 != 0) {
            iVar8 = 0;
            local_10c = 0;
            puVar19 = local_88;
            do {
              uVar12 = (uint)(ushort)puVar19[1];
              if ((ushort)puVar19[1] == 0) {
                uVar12 = 0x10000;
              }
              local_68 = (void *)0x0;
              uStack_60 = 0;
              local_58 = 0;
              FUN_10008d2d0(&local_68,*puVar19,uVar12);
              if (local_68 == (void *)0x0) {
                iVar7 = -1;
                FUN_1008e3970("","LocalDevices",0,"[DVDROM:ide] Error");
              }
              else {
                _memcpy((void *)((ulong)local_10c + (long)local_f8),local_68,(ulong)uVar12);
                iVar7 = 0;
              }
              FUN_10008d3f0(&local_68);
              uVar26 = (undefined4)((ulong)in_stack_fffffffffffffe80 >> 0x20);
              uVar27 = (undefined4)((ulong)in_stack_fffffffffffffe98 >> 0x20);
              if (iVar7 < 0) {
                iVar7 = 6;
                uVar25 = CONCAT44(uVar26,*puVar19);
                FUN_1008e3970("","LocalDevices",0,
                              "[DVDROM:ide] Error: Cannot access memory(idx=%d pos=%d chunk=%d desc=%08x)"
                              ,iVar8,local_10c,uVar12,uVar25);
                uVar26 = (undefined4)((ulong)uVar25 >> 0x20);
                goto LAB_1002704ab;
              }
              local_10c = local_10c + uVar12;
              if ((int)puVar19[1] < 0) {
                iVar7 = 6;
                if (-1 < (int)local_10c) goto LAB_10026fc96;
                goto LAB_1002704ab;
              }
              puVar19 = puVar19 + 2;
              iVar8 = iVar8 + 1;
            } while (iVar8 < (int)uVar15);
          }
          iVar7 = 6;
          FUN_1008e3970("","LocalDevices",0,"[DVDROM:ide] Error: no Eot");
          goto LAB_1002704ab;
        }
        goto LAB_10026fc96;
      }
    }
LAB_100270485:
    iVar7 = 6;
    FUN_1008e3970("","LocalDevices",0,"[DVDROM:ide] Error: Cannot allocate memory(B2,0x%X)!",uVar22)
    ;
    goto LAB_1002704ab;
  }
  local_f8 = *(void **)(param_1 + 0x90);
  uVar22 = (uint)*(ushort *)(lVar9 + 0x2de95 + lVar17);
  uVar22 = -(uint)(uVar22 == 0) | uVar22;
  uVar11 = 0;
  local_c0 = (void *)0x0;
LAB_10026fc96:
  if (*(char *)(param_1 + 0xc0) != '\0') {
    FUN_10026cc10(param_1 + 0xa0);
  }
  *(undefined1 *)(param_1 + 0x20c) = 0;
  *(undefined1 *)(param_1 + 0x20e) = 0;
  *(undefined1 *)(param_1 + 0x213) = 0;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x219) = 0;
  plVar24 = (long *)(param_1 + 0xd0);
  if ((*(long **)(param_1 + 200) != (long *)0x0) &&
     (iVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x30))(), iVar7 != 0)) {
    plVar24 = *(long **)(param_1 + 200);
  }
  pcVar5 = *(code **)(*plVar24 + 0x20);
  uVar15 = *(uint *)(param_1 + 0x1fc);
  lVar10 = FUN_100257d80(param_1);
  lVar16 = param_1 + 0x20c;
  puVar19 = &local_6c;
  iVar8 = (*pcVar5)(plVar24,lVar10 + 0x2de50 + (ulong)uVar15 * 0x538,0xc,local_f8,uVar22,local_f8,
                    uVar22,lVar16,0x12,*(undefined4 *)(param_1 + 0x228),puVar19);
  if (iVar8 == 0) {
    if (((*(int *)(param_1 + 500) == 0) || (cVar4 != '\x03')) ||
       (plVar24 != *(long **)(param_1 + 200))) {
      if ((*(byte *)(param_1 + 0x228) & 2) == 0) {
        FUN_100270b70(param_1,local_6c,uVar22);
      }
      else {
        FUN_100270b70(param_1,local_6c,local_6c);
      }
    }
    else {
      if ((*(byte *)(param_1 + 0x228) & 2) != 0) {
        uVar22 = local_6c;
      }
      if (((0xd < uVar22) &&
          (*(char *)((long)local_f8 + 0xd) == '\0' &&
           (*(char *)((long)local_f8 + 0xc) == '\0' && *(char *)((long)local_f8 + 2) == '\0'))) &&
         (*(int *)(param_1 + 0x208) != 0)) {
        *(byte *)((long)local_f8 + 2) = (byte)((uint)*(int *)(param_1 + 0x208) >> 0x10) & 0xf;
        *(undefined1 *)((long)local_f8 + 0xc) = *(undefined1 *)(param_1 + 0x209);
        *(undefined1 *)((long)local_f8 + 0xd) = *(undefined1 *)(param_1 + 0x208);
        *(undefined4 *)(param_1 + 0x208) = 0;
      }
      FUN_100270b70(param_1,local_6c,uVar22);
    }
    *(undefined4 *)(param_1 + 500) = 0;
  }
  else {
    bVar6 = *(byte *)(param_1 + 0x20e);
    *(uint *)(param_1 + 0x208) =
         (uint)*(byte *)(param_1 + 0x219) |
         (uint)*(byte *)(param_1 + 0x218) << 8 | (uint)bVar6 << 0x10;
    uVar22 = *(uint *)(param_1 + 0x1fc);
    lVar10 = FUN_100257d80(param_1);
    lVar13 = (ulong)uVar22 * 0x538;
    *(byte *)(lVar10 + 0x2de91 + lVar13) = bVar6 << 4;
    *(byte *)(lVar10 + 0x2de90 + lVar13) = *(byte *)(lVar10 + 0x2de90 + lVar13) & 0xc0 | 0x11;
    *(undefined4 *)(lVar10 + 0x2de9c + lVar13) = 3;
    if (plVar24 != *(long **)(param_1 + 200)) {
      *(undefined4 *)(param_1 + 0x1f0) = 1;
    }
  }
  uVar22 = local_6c;
  uVar26 = (undefined4)((ulong)lVar16 >> 0x20);
  uVar27 = (undefined4)((ulong)puVar19 >> 0x20);
  if (((*(uint *)(param_1 + 0x228) & 3) == 1) &&
     (bVar6 = *(byte *)(lVar9 + 0x2de90 + lVar17), (bVar6 & 1) == 0)) {
    pbVar3 = (byte *)(lVar9 + 0x2de90 + lVar17);
    if (1 < uVar11) {
      if (uVar11 < 0x40) {
        puVar20 = (uint *)(lVar9 + 0x2def0 + lVar17);
LAB_1002702b2:
        iVar23 = 0;
        uVar14 = 0;
        do {
          uVar15 = (uint)(ushort)puVar20[1];
          if ((ushort)puVar20[1] == 0) {
            uVar15 = 0x10000;
          }
          uVar12 = (uint)uVar14;
          if (uVar12 <= uVar22 && uVar22 - uVar12 != 0) {
            uVar21 = uVar22 - uVar12;
            if (uVar15 + uVar12 <= uVar22) {
              uVar21 = uVar15;
            }
            local_48 = (void *)0x0;
            uStack_40 = 0;
            local_38 = 0;
            FUN_10008d2d0(&local_48,*puVar20,uVar21);
            if (local_48 == (void *)0x0) {
              iVar7 = -1;
              FUN_1008e3970("","LocalDevices",0,"[DVDROM:ide] Error");
            }
            else {
              _memcpy(local_48,(void *)(uVar14 + (long)local_f8),(ulong)uVar21);
              iVar7 = 0;
            }
            FUN_10008d3f0(&local_48);
            uVar27 = (undefined4)((ulong)puVar19 >> 0x20);
            if (iVar7 < 0) {
              iVar7 = 6;
              uVar25 = CONCAT44((int)((ulong)lVar16 >> 0x20),*puVar20);
              FUN_1008e3970("","LocalDevices",0,
                            "[DVDROM:ide] Error: Cannot access memory(idx=%d pos=%d chunk=%d desc=%08x)"
                            ,iVar23,uVar14,uVar15,uVar25);
              uVar26 = (undefined4)((ulong)uVar25 >> 0x20);
              goto LAB_1002704ab;
            }
          }
          uVar26 = (undefined4)((ulong)lVar16 >> 0x20);
          uVar27 = (undefined4)((ulong)puVar19 >> 0x20);
          uVar14 = (ulong)(uVar15 + uVar12);
          if ((int)puVar20[1] < 0) {
            iVar7 = 6;
            if ((int)(uVar15 + uVar12) < 0) goto LAB_1002704ab;
            bVar6 = *pbVar3;
            goto LAB_100270410;
          }
          puVar20 = puVar20 + 2;
          iVar23 = iVar23 + 1;
        } while (iVar23 < (int)uVar11);
      }
      else {
        puVar20 = local_88;
        if (0 < (int)uVar11) goto LAB_1002702b2;
      }
      iVar7 = 6;
      FUN_1008e3970("","LocalDevices",0,"[DVDROM:ide] Error: no Eot");
      goto LAB_1002704ab;
    }
LAB_100270410:
    *pbVar3 = bVar6 & 0xc0 | 0x10;
    *(undefined1 *)(lVar9 + 0x2de94 + lVar17) = 1;
    *(undefined4 *)(lVar9 + 0x2de9c + lVar17) = 3;
  }
  iVar7 = 0;
  if ((cVar4 == '\x1b') && (iVar8 == 0)) {
    FUN_10026cf00(param_1 + 0xa0,lVar9 + 0x2de50 + lVar17);
  }
LAB_1002704ab:
  FUN_10008d3f0(&local_a8);
  FUN_10008d3f0(&local_88);
  QMutex::unlock();
  if (iVar7 != 0) {
    uVar11 = *(uint *)(param_1 + 0x1fc);
    lVar9 = FUN_100257d80(param_1);
    lVar17 = (ulong)uVar11 * 0x538;
    pcVar18 = "DMA";
    if ((*(uint *)(param_1 + 0x228) & 2) != 0) {
      pcVar18 = "PIO";
    }
    FUN_1008e3970("","LocalDevices",0,
                  "[DVDROM:ide] ATAPI command was Mode: \"%s\" CDB :\n\t\t\t 0x%02x\n\t\t\t 0x%02x \t\t\t\n\t\t\t 0x%02x\n\t\t\t 0x%02x \t\t\t\n\t\t\t 0x%02x\n\t\t\t 0x%02x \t\t\t\n\t\t\t 0x%02x\n\t\t\t 0x%02x \t\t\t\n\t\t\t 0x%02x\n\t\t\t 0x%02x \t\t\t\n\t\t\t 0x%02x\n\t\t\t 0x%02x"
                  ,pcVar18,*(undefined1 *)(lVar9 + 0x2de50 + lVar17),
                  *(undefined1 *)(lVar9 + 0x2de51 + lVar17),
                  CONCAT44(uVar26,(uint)*(byte *)(lVar9 + 0x2de52 + lVar17)),
                  *(undefined1 *)(lVar9 + 0x2de53 + lVar17),
                  *(undefined1 *)(lVar9 + 0x2de54 + lVar17),
                  CONCAT44(uVar27,(uint)*(byte *)(lVar9 + 0x2de55 + lVar17)),
                  *(undefined1 *)(lVar9 + 0x2de56 + lVar17),
                  *(undefined1 *)(lVar9 + 0x2de57 + lVar17),
                  *(undefined1 *)(lVar9 + 0x2de58 + lVar17),
                  *(undefined1 *)(lVar9 + 0x2de59 + lVar17),
                  *(undefined1 *)(lVar9 + 0x2de5a + lVar17),
                  *(undefined1 *)(lVar9 + 0x2de5b + lVar17));
    *(undefined4 *)(param_1 + 0x208) = 0x52400;
    uVar11 = *(uint *)(param_1 + 0x1fc);
    lVar9 = FUN_100257d80(param_1);
    lVar17 = (ulong)uVar11 * 0x538;
    *(undefined1 *)(lVar9 + 0x2de91 + lVar17) = 0x50;
    *(byte *)(lVar9 + 0x2de90 + lVar17) = *(byte *)(lVar9 + 0x2de90 + lVar17) & 0xc0 | 0x11;
    *(undefined4 *)(lVar9 + 0x2de9c + lVar17) = 3;
  }
  if (local_c0 != (void *)0x0) {
    _free(local_c0);
  }
  *puVar1 = 2;
  FUN_1002effe0(*(undefined8 *)(param_1 + 0x98));
  return;
}

