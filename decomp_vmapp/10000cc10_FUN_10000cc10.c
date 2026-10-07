
bool FUN_10000cc10(int *param_1,int *param_2,int *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  Data *pDVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  bool bVar20;
  long lVar21;
  bool bVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  int local_1d8;
  undefined8 local_170;
  undefined1 local_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  int local_104;
  undefined8 local_100;
  int local_f4;
  undefined8 local_f0;
  long local_e8;
  long *local_e0;
  long *local_d8;
  uint local_d0;
  undefined1 local_c8 [8];
  Data *local_c0;
  Data *local_b8;
  Data *local_b0;
  undefined4 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  uint local_80;
  undefined1 local_79;
  undefined4 local_78 [16];
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_1d8 = -1;
  local_38 = lVar12;
  if (*param_3 != 0) {
    local_1d8 = FUN_10052d540();
  }
  dVar23 = (double)*param_1;
  dVar24 = (double)param_1[1];
  dVar25 = (double)((1 - *param_1) + param_1[2]);
  dVar26 = (double)((1 - param_1[1]) + param_1[3]);
  local_80 = 0;
  local_a0 = dVar23;
  local_98 = dVar24;
  local_90 = dVar25;
  local_88 = dVar26;
  iVar8 = _CGGetDisplaysWithRect(0x10,local_78,&local_80);
  if (iVar8 != 0) {
    bVar22 = false;
    goto LAB_10000d51d;
  }
  lVar12 = _CFArrayCreateMutable(0,0,0);
  FUN_10000d780(&local_c0,param_3 + 2);
  local_b8 = local_c0 + (long)*(int *)(local_c0 + 8) * 8 + 0x10;
  local_b0 = local_c0 + (long)*(int *)(local_c0 + 0xc) * 8 + 0x10;
  if (*(int *)(local_c0 + 8) != *(int *)(local_c0 + 0xc)) {
    do {
      local_a8 = 1;
      uVar27 = **(undefined4 **)local_b8;
      if ((*(undefined4 **)local_b8)[1] == 1) {
        iVar8 = FUN_10052d540(uVar27);
        FUN_10052d310(local_c8);
        FUN_10000d8d0(&local_e8,local_c8);
        local_e0 = (long *)(local_e8 + 0x10 + (long)*(int *)(local_e8 + 8) * 8);
        local_d8 = (long *)(local_e8 + 0x10 + (long)*(int *)(local_e8 + 0xc) * 8);
        local_d0 = 1;
        if (*(int *)(local_e8 + 8) == *(int *)(local_e8 + 0xc)) {
          bVar20 = false;
        }
        else {
          bVar22 = false;
          do {
            puVar1 = (undefined8 *)*local_e0;
            uVar19 = *puVar1;
            pQVar2 = (QArrayData *)puVar1[1];
            if (1 < *(int *)pQVar2 + 1U) {
              LOCK();
              *(int *)pQVar2 = *(int *)pQVar2 + 1;
              local_79 = *(int *)pQVar2 != 0;
              UNLOCK();
            }
            pQVar3 = (QArrayData *)puVar1[2];
            if (1 < *(int *)pQVar3 + 1U) {
              LOCK();
              *(int *)pQVar3 = *(int *)pQVar3 + 1;
              local_79 = *(int *)pQVar3 != 0;
              UNLOCK();
            }
            bVar20 = bVar22;
            if ((local_d0 != 0) && (bVar20 = true, (int)((ulong)uVar19 >> 0x20) != iVar8)) {
              local_d0 = 0;
              bVar20 = bVar22;
            }
            if (*(int *)pQVar3 != -1) {
              if (*(int *)pQVar3 != 0) {
                LOCK();
                *(int *)pQVar3 = *(int *)pQVar3 + -1;
                local_79 = *(int *)pQVar3 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_10000ce9a;
              }
              QArrayData::deallocate(pQVar3,2,8);
            }
LAB_10000ce9a:
            if (*(int *)pQVar2 != -1) {
              if (*(int *)pQVar2 != 0) {
                LOCK();
                *(int *)pQVar2 = *(int *)pQVar2 + -1;
                local_79 = *(int *)pQVar2 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_10000cec5;
              }
              QArrayData::deallocate(pQVar2,2,8);
            }
LAB_10000cec5:
            local_e0 = local_e0 + 1;
            uVar15 = local_d0 ^ 1;
            bVar22 = local_d0 != 1;
            local_d0 = uVar15;
          } while ((bVar22) && (bVar22 = bVar20, local_e0 != local_d8));
        }
        FUN_10000d640(&local_e8);
        FUN_10000d640(local_c8);
        if (bVar20) goto LAB_10000cf1a;
      }
      else {
LAB_10000cf1a:
        _CFArrayAppendValue(lVar12,uVar27);
      }
      local_b8 = local_b8 + 8;
    } while (local_b8 != local_b0);
  }
  local_a8 = 1;
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_79 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_10000cfbf;
    }
    iVar8 = *(int *)(local_c0 + 0xc);
    if (iVar8 != *(int *)(local_c0 + 8)) {
      lVar21 = (long)*(int *)(local_c0 + 8) * 8 + (long)iVar8 * -8;
      pDVar16 = local_c0 + (long)iVar8 * 8 + 8;
      do {
        if (*(void **)pDVar16 != (void *)0x0) {
          operator_delete(*(void **)pDVar16);
        }
        pDVar16 = pDVar16 + -8;
        lVar21 = lVar21 + 8;
      } while (lVar21 != 0);
    }
    QListData::dispose(local_c0);
  }
LAB_10000cfbf:
  lVar21 = _CGWindowListCopyWindowInfo(0,0);
  if ((lVar21 != 0) && (lVar13 = _CFArrayGetCount(lVar21), local_80 != 0)) {
    uVar19 = *(undefined8 *)PTR__kCGWindowNumber_100ba2438;
    uVar4 = *(undefined8 *)PTR__kCGWindowLayer_100ba2430;
    uVar5 = *(undefined8 *)PTR__kCGWindowIsOnscreen_100ba2428;
    uVar18 = 0;
    do {
      if (0 < lVar13) {
        uVar27 = local_78[uVar18];
        lVar17 = 0;
        iVar8 = 0;
        do {
          lVar14 = _CFArrayGetValueAtIndex(lVar21,lVar17);
          if (lVar14 != 0) {
            local_f4 = 0;
            cVar7 = _CFDictionaryGetValueIfPresent(lVar14,uVar19,&local_f0);
            if (cVar7 != '\0') {
              _CFNumberGetValue(local_f0,9,&local_f4);
              local_104 = -1;
              cVar7 = _CFDictionaryGetValueIfPresent(lVar14,uVar4,&local_100);
              if ((cVar7 != '\0') &&
                 (_CFNumberGetValue(local_100,3,&local_104), pcVar6 = DAT_1011cce08,
                 local_104 == -0x7fffffe8)) {
                local_110 = *(undefined8 *)(PTR__CGRectNull_100ba2058 + 0x18);
                local_118 = *(undefined8 *)(PTR__CGRectNull_100ba2058 + 0x10);
                local_128 = *(undefined8 *)PTR__CGRectNull_100ba2058;
                local_120 = *(undefined8 *)(PTR__CGRectNull_100ba2058 + 8);
                uVar9 = (*DAT_1011ccc38)();
                iVar10 = (*pcVar6)(uVar9,local_f4,&local_128);
                if (iVar10 == 0) {
                  local_130 = local_110;
                  local_138 = local_118;
                  local_140 = local_120;
                  local_148 = local_128;
                  _CGDisplayBounds(local_168,uVar27);
                  cVar7 = _CGRectEqualToRect();
                  if (cVar7 != '\0') {
                    if (iVar8 == 0) {
                      cVar7 = _CFDictionaryGetValueIfPresent(lVar14,uVar5,&local_170);
                      iVar8 = 0;
                      if ((cVar7 != '\0') &&
                         (cVar7 = _CFBooleanGetValue(local_170), iVar8 = local_f4, cVar7 == '\0')) {
                        iVar8 = 0;
                      }
                    }
                    if ((0 < local_1d8) &&
                       (iVar11 = FUN_10052d540(local_f4), iVar10 = local_f4, iVar11 == local_1d8))
                    break;
                  }
                }
              }
            }
          }
          lVar17 = lVar17 + 1;
          iVar10 = iVar8;
        } while (lVar17 < lVar13);
        if (iVar10 != 0) {
          _CFArrayAppendValue(lVar12,iVar10);
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < local_80);
  }
  lVar13 = _CFArrayGetCount(lVar12);
  if (lVar13 == 0) {
    bVar22 = false;
  }
  else {
    uVar19 = 2;
    if ((*param_2 <= (param_1[2] + 1) - *param_1) &&
       (uVar19 = 2, param_2[1] <= (param_1[3] + 1) - param_1[1])) {
      uVar19 = 0x12;
    }
    lVar13 = _CGWindowListCreateImageFromArray(lVar12,uVar19);
    uVar27 = (undefined4)((ulong)dVar23 >> 0x20);
    if (lVar13 == 0) {
      bVar22 = false;
    }
    else {
      iVar8 = *param_2;
      iVar10 = param_2[1];
      uVar19 = _CGImageGetColorSpace(lVar13);
      lVar17 = _CGBitmapContextCreate
                         (param_4,(long)iVar8,(long)iVar10,8,(long)iVar8 * 4,uVar19,
                          CONCAT44(uVar27,0x2006),dVar24,dVar25,dVar26);
      bVar22 = lVar17 != 0;
      if (bVar22) {
        _CGContextSetBlendMode(lVar17,0x11);
        _CGContextSetInterpolationQuality(lVar17,4);
        _CGContextDrawImage(lVar17,lVar13);
        _CFRelease(lVar17);
      }
      _CFRelease(lVar13);
    }
  }
  if (lVar21 != 0) {
    _CFRelease(lVar21);
  }
  if (lVar12 != 0) {
    _CFRelease();
  }
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_10000d51d:
  if (lVar12 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar22;
}

