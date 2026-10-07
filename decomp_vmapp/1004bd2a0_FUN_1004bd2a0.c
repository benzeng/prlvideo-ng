
undefined1 FUN_1004bd2a0(long *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  Data *pDVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  Data *pDVar18;
  long lVar19;
  undefined1 uVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  undefined8 in_stack_fffffffffffffe08;
  undefined4 uVar24;
  double in_stack_fffffffffffffe20;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_80 [2];
  Data *local_78;
  undefined1 local_69;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar10;
  if ((*(long *)(param_1[2] + 0x1018) != 0) || (*(char *)((long)param_1 + 0x24a) == '\0')) {
    uVar20 = 0;
    goto LAB_1004bd4dc;
  }
  lVar10 = *param_1;
  lVar17 = (param_2 & 0xffffffff) * 0x8f0;
  iVar1 = *(int *)(lVar10 + 0x980 + lVar17);
  iVar9 = *(int *)(lVar10 + 0x984 + lVar17);
  iVar2 = *(int *)(lVar10 + 0x938 + lVar17);
  iVar3 = *(int *)(lVar10 + 0x93c + lVar17);
  uVar13 = CONCAT44((int)((ulong)in_stack_fffffffffffffe08 >> 0x20),
                    *(undefined4 *)(lVar10 + 0x934 + lVar17));
  lVar10 = FUN_1004bbdf0(param_1,param_2,
                         (ulong)*(uint *)(lVar10 + 0x930 + lVar17) + *(long *)(lVar10 + 0x920),iVar2
                         ,iVar3,0x20,uVar13);
  uVar24 = (undefined4)((ulong)uVar13 >> 0x20);
  if (lVar10 == 0) {
    uVar20 = 0;
    lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
    goto LAB_1004bd4dc;
  }
  local_80[0] = 0;
  local_78 = (Data *)PTR_shared_null_100ba2188;
  dVar22 = (double)param_1[0x48];
  local_90 = (int)((double)(int)param_1[3] + (double)iVar1 / dVar22);
  local_8c = (int)((double)*(int *)((long)param_1 + 0x1c) + (double)iVar9 / dVar22);
  local_88 = local_90 + -1 + (int)((double)iVar2 / dVar22);
  local_84 = local_8c + -1 + (int)((double)iVar3 / dVar22);
  local_98 = iVar2;
  local_94 = iVar3;
  cVar8 = FUN_10000cc10(&local_90,&local_98,local_80,param_3);
  if (cVar8 == '\0') {
    uVar20 = 0;
  }
  else {
    lVar17 = _CGColorSpaceCreateDeviceRGB();
    dVar22 = (double)CONCAT44(uVar24,0x2006);
    lVar11 = _CGBitmapContextCreate(param_3,(long)iVar2,(long)iVar3,8,(long)iVar2 * 4,lVar17,dVar22)
    ;
    if (lVar11 == 0) {
      uVar20 = 0;
    }
    else {
      lVar5 = param_1[2];
      iVar9 = *(int *)(lVar5 + 0x1028) + -1;
      if (-1 < iVar9) {
        lVar19 = (long)iVar9 + 1;
        lVar12 = lVar5;
        while( true ) {
          lVar12 = FUN_1004b9ef0(lVar12,*(undefined4 *)(*(long *)(lVar5 + 0x1020) + -4 + lVar19 * 4)
                                );
          uVar24 = (undefined4)((ulong)dVar22 >> 0x20);
          dVar23 = in_stack_fffffffffffffe20;
          if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x48) & 0x41) == 0)) {
            uVar13 = FUN_1004b9f40(param_1[2],lVar12);
            _CGContextSaveGState(lVar11);
            FUN_1004bb910(DAT_100b44c90);
            dVar22 = (double)(*(int *)(lVar12 + 0x58) - iVar1);
            dVar23 = (double)(*(int *)(lVar12 + 100) - *(int *)(lVar12 + 0x5c));
            if (((*(byte *)(lVar12 + 0x48) & 0x20) == 0) ||
               (piVar6 = *(int **)(lVar12 + 0x70), piVar6 == (int *)0x0)) {
              _CGContextSetBlendMode(lVar11,0x11);
              lVar12 = _CGImageCreateWithImageInRect(lVar10);
              _CGContextDrawImage(lVar11,lVar12);
              if (lVar12 != 0) {
                _CFRelease(lVar12);
              }
            }
            else {
              iVar9 = piVar6[2];
              lVar14 = _CGDataProviderCreateWithData(0,piVar6 + 8,*piVar6 * piVar6[1] * 4,0);
              lVar15 = _CGImageCreate(*piVar6,piVar6[1],8,0x20,*piVar6 * 4,lVar17,
                                      CONCAT44(uVar24,iVar9) & 0xffffffff00000004 ^ 0x2006,lVar14,0,
                                      (ulong)in_stack_fffffffffffffe20 & 0xffffffff00000000,0);
              lVar16 = _CGImageCreateWithImageInRect(lVar15);
              uVar4 = piVar6[2];
              lVar12 = lVar16;
              lVar21 = 0;
              if ((uVar4 & 1) != 0) {
                local_68 = (double)*(byte *)(piVar6 + 3);
                local_58 = (double)*(byte *)((long)piVar6 + 0xd);
                local_48 = (double)*(byte *)((long)piVar6 + 0xe);
                local_60 = local_68;
                local_50 = local_58;
                local_40 = local_48;
                lVar12 = _CGImageCreateWithMaskingColors(lVar16,&local_68);
                uVar4 = piVar6[2];
                lVar21 = lVar12;
              }
              if ((uVar4 & 2) != 0) {
                _CGContextSetAlpha((double)((float)*(byte *)((long)piVar6 + 0xf) / DAT_100b44ca0),
                                   lVar11,lVar12);
              }
              _CGContextDrawImage(lVar11,lVar12);
              if (lVar21 != 0) {
                _CFRelease(lVar21);
              }
              if (lVar16 != 0) {
                _CFRelease();
              }
              if (lVar15 != 0) {
                _CFRelease(lVar15);
              }
              if (lVar14 != 0) {
                _CFRelease();
              }
            }
            _CGContextRestoreGState(lVar11);
            (*DAT_1011ccc48)(uVar13);
          }
          lVar19 = lVar19 + -1;
          if (lVar19 < 1) break;
          lVar12 = param_1[2];
          in_stack_fffffffffffffe20 = dVar23;
        }
      }
      uVar20 = 1;
      _CFRelease(lVar11);
    }
    if (lVar17 != 0) {
      _CFRelease();
    }
  }
  pDVar7 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_69 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_69) goto LAB_1004bdaaf;
    }
    iVar1 = *(int *)(local_78 + 0xc);
    if (iVar1 != *(int *)(local_78 + 8)) {
      lVar10 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar1 * -8;
      pDVar18 = local_78 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar18 != (void *)0x0) {
          operator_delete(*(void **)pDVar18);
        }
        pDVar18 = pDVar18 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar7);
  }
LAB_1004bdaaf:
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1004bd4dc:
  if (lVar10 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar20;
}

