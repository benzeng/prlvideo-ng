
undefined1 FUN_1005553b0(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  undefined8 uVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  int *piVar24;
  long lVar25;
  undefined1 uVar26;
  code *local_8070;
  int *local_8058;
  ulong local_8050;
  int *local_8048;
  uint local_803c;
  undefined1 local_8038 [32768];
  long local_38;
  
  lVar25 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar22 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar21 = uVar22 << 0xc;
  local_8050 = (ulong)uVar21;
  local_8048 = *(int **)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x28);
  uVar26 = 0;
  local_38 = lVar25;
  FUN_1008e3970("","TransMem",0,"CSnapshotEngineBase::save_video() %u bytes",local_8050);
  if (local_8048 == (int *)0x0) goto LAB_100555d5a;
  if (*(int *)(*(long *)(param_1 + 0x10) + 0xc) != 0) {
    pcVar10 = "CSnapshotEngineBase::save_video() %u clusters already placed";
LAB_100555440:
    uVar26 = 0;
    FUN_1008e3970("","TransMem",0,pcVar10);
    goto LAB_100555d5a;
  }
  lVar13 = (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x18) << 0xc;
  lVar6 = FUN_1007616e0(*(undefined8 *)(param_1 + 8),lVar13,0);
  if (lVar6 != lVar13) {
    pcVar10 = "CSnapshotEngineBase::save_video() seek failed";
LAB_100555797:
    uVar26 = 0;
    FUN_1008e3970("","TransMem",0,pcVar10);
    goto LAB_100555d5a;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  cVar4 = *(char *)(lVar6 + 2);
  if (cVar4 == '\x03') {
    lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x48);
    local_8058 = _valloc(0x100000);
    if (local_8058 == (int *)0x0) {
      pcVar10 = "CSnapshotEngineBase::save_video() failed to allocate buffer";
LAB_100555d00:
      bVar3 = false;
      FUN_1008e3970("","TransMem",0,pcVar10);
      goto LAB_100555d1e;
    }
    iVar19 = 0;
    if ((uVar22 & 0xfffff) != 0) {
      iVar19 = 0;
      uVar14 = 0;
      lVar25 = 0;
      uVar7 = local_8050;
      do {
        uVar15 = 0xffffe;
        local_8050 = 0;
        piVar24 = local_8058;
        if ((int)uVar7 != 0) {
          do {
            local_8050 = uVar7;
            if ((uint)uVar15 < 3) goto LAB_1005558fe;
            if ((lVar13 == 0) ||
               ((*(uint *)(lVar13 + (uVar14 >> 5) * 4) >> ((uint)uVar14 & 0x1f) & 1) == 0)) {
              local_803c = (uint)uVar15 - 2;
              iVar9 = FUN_100744220(local_8048,0x1000,(undefined2 *)((long)piVar24 + 2),&local_803c,
                                    local_8038);
              if (iVar9 != 0) {
                if (iVar9 == -2) goto LAB_1005558fe;
                FUN_1008e3970("","TransMem",0,
                              "CSnapshotEngineBase::save_video() lzrw4 compression failed (%d)");
                goto LAB_100555c8b;
              }
              *(short *)piVar24 = (short)local_803c;
              piVar24 = (int *)((long)piVar24 + (ulong)local_803c + 2);
              uVar15 = (uVar15 & 0xffffffff) - ((ulong)local_803c + 2);
            }
            else {
              *(undefined2 *)piVar24 = 0;
              piVar24 = (int *)((long)piVar24 + 2);
              uVar15 = (uVar15 & 0xffffffff) - 2;
            }
            local_8048 = local_8048 + 0x400;
            uVar14 = (ulong)((uint)uVar14 + 1);
            uVar22 = (int)uVar7 - 0x1000;
            uVar7 = (ulong)uVar22;
          } while (uVar22 != 0);
          local_8050 = 0;
        }
LAB_1005558fe:
        *(undefined2 *)piVar24 = 1;
        ___bzero((undefined2 *)((long)piVar24 + 2),uVar15 & 0xffffffff);
        if ((*(code **)(param_1 + 0x20) != (code *)0x0) &&
           (cVar4 = (**(code **)(param_1 + 0x20))
                              (*(undefined8 *)(param_1 + 0x28),local_8058,0x100000,lVar25,1),
           cVar4 == '\0')) goto LAB_100555c0f;
        iVar9 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_100761810,0,local_8058,0x100000);
        if (iVar9 != 0x100000) {
          FUN_1008e3970("","TransMem",0,
                        "CSnapshotEngineBase::save_video() failed to write video memory (0x%x,0x%x)"
                        ,0x100000);
          goto LAB_100555c8b;
        }
        lVar25 = lVar25 + 0x100000;
        iVar19 = iVar19 + 0x100;
        uVar7 = local_8050;
      } while ((int)local_8050 != 0);
      lVar6 = *(long *)(param_1 + 0x10);
      lVar25 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    *(int *)(lVar6 + 0x1c) = iVar19;
    *(int *)(lVar6 + 0x14) = iVar19;
    uVar2 = *(undefined4 *)(lVar6 + 0x10);
    pcVar10 = "CSnapshotEngineBase::save_video() compressed (lzrw4) %u -> %u pages";
  }
  else {
    if (cVar4 != '\x01') {
      if (cVar4 == '\0') {
        local_8070 = *(code **)(param_1 + 0x20);
        if (local_8070 == (code *)0x0) {
          local_8058 = (int *)0x0;
          uVar22 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_100761810,0,local_8048,uVar21);
          if (uVar21 != uVar22) {
            uVar26 = 0;
            FUN_1008e3970("","TransMem",0,
                          "CSnapshotEngineBase::save_video() failed to write video memory (0x%x,0x%x)"
                          ,uVar21);
            goto LAB_100555d5a;
          }
        }
        else {
          local_8058 = _valloc(0x100000);
          if (local_8058 == (int *)0x0) goto LAB_100555b7b;
          if (uVar21 != 0) {
            if (0x100000 < uVar21) {
              uVar21 = 0x100000;
            }
            uVar7 = (ulong)uVar21;
            _memcpy(local_8058,local_8048,uVar7);
            uVar17 = *(undefined8 *)(param_1 + 0x28);
            lVar6 = 0;
            while (cVar4 = (*local_8070)(uVar17,local_8058,uVar7,lVar6,1), cVar4 != '\0') {
              iVar19 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_100761810,0,local_8058,uVar7);
              if ((int)uVar7 != iVar19) {
                bVar3 = false;
                FUN_1008e3970("","TransMem",0,
                              "CSnapshotEngineBase::save_video() failed to write video memory (0x%x,0x%x)"
                              ,uVar7);
                goto LAB_100555d1e;
              }
              uVar22 = (int)local_8050 - (int)uVar7;
              local_8050 = (ulong)uVar22;
              if (uVar22 == 0) goto LAB_100555d11;
              lVar6 = lVar6 + uVar7;
              local_8048 = (int *)((long)local_8048 + uVar7);
              local_8070 = *(code **)(param_1 + 0x20);
              uVar7 = local_8050;
              if (0x100000 < uVar22) {
                uVar7 = 0x100000;
              }
              _memcpy(local_8058,local_8048,uVar7);
              uVar17 = *(undefined8 *)(param_1 + 0x28);
            }
            pcVar10 = "CSnapshotEngineBase::save_video() cancelled";
            goto LAB_100555d00;
          }
        }
LAB_100555d11:
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x1c) =
             *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10);
        bVar3 = true;
        goto LAB_100555d1e;
      }
      pcVar10 = "CSnapshotEngineBase::save_video() unsupported compression type %u";
      goto LAB_100555440;
    }
    local_8058 = _valloc(0x100000);
    if (local_8058 == (int *)0x0) {
LAB_100555b7b:
      pcVar10 = "CSnapshotEngineBase::save_video() failed to allocate buffer";
      goto LAB_100555797;
    }
    iVar19 = 0;
    if ((uVar22 & 0xfffff) != 0) {
      iVar19 = 0;
      local_8070 = (code *)0x0;
      do {
        uVar7 = (ulong)(long)(int)local_8050 >> 2;
        piVar24 = local_8048;
        piVar11 = local_8058;
        piVar23 = local_8048;
        if (uVar7 != 0) {
          piVar1 = local_8048 + uVar7;
          iVar20 = -1;
          iVar9 = 0;
          piVar8 = local_8058 + 2;
          piVar18 = local_8058;
          do {
            piVar11 = piVar8;
            if (iVar20 < 0) {
              if ((((piVar1 < piVar23 + 4) || (iVar9 = *piVar23, piVar23[3] != iVar9)) ||
                  (piVar23[2] != iVar9)) || (iVar20 = 4, piVar8 = piVar23 + 4, piVar23[1] != iVar9))
              goto LAB_100555580;
LAB_1005555e7:
              for (; (piVar8 < piVar1 && (*piVar8 == iVar9)); piVar8 = piVar8 + 1) {
                iVar20 = iVar20 + 1;
              }
              *piVar18 = iVar20;
              piVar18[1] = iVar9;
              iVar20 = 0;
              piVar23 = piVar8;
            }
            else {
              piVar8 = piVar23;
              if (iVar20 != 0) goto LAB_1005555e7;
LAB_100555580:
              iVar9 = *piVar23;
              piVar18[1] = iVar9;
              piVar24 = piVar23 + 1;
              iVar20 = 0;
              iVar12 = 1;
              iVar5 = 1;
              iVar16 = iVar9;
              if (piVar24 < piVar1) {
                do {
                  piVar8 = piVar24;
                  piVar24 = piVar8;
                  iVar9 = iVar16;
                  if ((3 < iVar5) || (local_8058 + 0x40000 <= piVar11)) break;
                  iVar9 = *piVar8;
                  iVar5 = iVar5 + 1;
                  if (iVar9 != iVar16) {
                    iVar5 = 1;
                  }
                  *piVar11 = iVar9;
                  piVar11 = piVar11 + 1;
                  iVar12 = iVar12 + 1;
                  piVar24 = piVar23 + 2;
                  piVar23 = piVar8;
                  iVar16 = iVar9;
                } while (piVar24 < piVar1);
                if (iVar5 == 4) {
                  iVar12 = iVar12 + -4;
                  piVar11 = piVar11 + -4;
                  iVar20 = 4;
                }
              }
              *piVar18 = -iVar12;
              piVar23 = piVar24;
            }
            piVar24 = (int *)CONCAT71((int7)((ulong)piVar24 >> 8),iVar20 == 0);
          } while ((piVar11 + 2 <= local_8058 + 0x40000) &&
                  (piVar8 = piVar11 + 2, piVar18 = piVar11, piVar23 < piVar1 || iVar20 != 0));
        }
        iVar20 = (int)((ulong)((long)piVar11 - (long)local_8058) >> 2);
        iVar9 = iVar20 * -4 + 0x100000;
        ___bzero((((long)iVar20 << 0x22) >> 0x20) + (long)local_8058,(long)iVar9,piVar24,iVar9);
        if ((*(code **)(param_1 + 0x20) != (code *)0x0) &&
           (cVar4 = (**(code **)(param_1 + 0x20))
                              (*(undefined8 *)(param_1 + 0x28),local_8058,0x100000,local_8070,1),
           cVar4 == '\0')) goto LAB_100555c0f;
        iVar9 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_100761810,0,local_8058,0x100000);
        if (iVar9 != 0x100000) {
          FUN_1008e3970("","TransMem",0,
                        "CSnapshotEngineBase::save_video() failed to write video memory (0x%x,0x%x)"
                        ,0x100000,iVar9);
          goto LAB_100555c8b;
        }
        iVar9 = (int)((ulong)((long)piVar23 - (long)local_8048) >> 2);
        local_8070 = (code *)((long)local_8070 + 0x100000);
        iVar19 = iVar19 + 0x100;
        local_8048 = (int *)((long)local_8048 + (((long)iVar9 << 0x22) >> 0x20));
        uVar22 = (int)local_8050 + iVar9 * -4;
        local_8050 = (ulong)uVar22;
      } while (uVar22 != 0);
      lVar6 = *(long *)(param_1 + 0x10);
      lVar25 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    *(int *)(lVar6 + 0x1c) = iVar19;
    *(int *)(lVar6 + 0x14) = iVar19;
    uVar2 = *(undefined4 *)(lVar6 + 0x10);
    pcVar10 = "CSnapshotEngineBase::save_video() compressed (RLE4) %u -> %u pages";
  }
  FUN_1008e3970("","TransMem",0,pcVar10,uVar2,iVar19);
  bVar3 = true;
  goto LAB_100555d1e;
LAB_100555c0f:
  FUN_1008e3970("","TransMem",0,"CSnapshotEngineBase::save_video() cancelled");
LAB_100555c8b:
  bVar3 = false;
  lVar25 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_100555d1e:
  if (local_8058 != (int *)0x0) {
    _free(local_8058);
  }
  if (bVar3) {
    FUN_1008e3970("","TransMem",0,"CSnapshotEngineBase::save_video() done");
    uVar26 = 1;
  }
  else {
    uVar26 = 0;
  }
LAB_100555d5a:
  if (lVar25 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar26;
}

