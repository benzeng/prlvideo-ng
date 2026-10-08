
bool FUN_100a2d000(undefined8 param_1,undefined8 param_2,int param_3,char *param_4,int param_5,
                  undefined8 *param_6)

{
  void *pvVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  void *pvVar13;
  char *pcVar14;
  char *pcVar15;
  size_t sVar16;
  char *pcVar17;
  bool bVar18;
  ulong uVar19;
  string local_1b0 [24];
  string local_198 [24];
  string local_180 [24];
  string local_168 [24];
  string local_150 [24];
  void *local_138;
  void *pvStack_130;
  void *local_128;
  void *local_118;
  void *pvStack_110;
  undefined8 local_108;
  void *local_f8;
  void *pvStack_f0;
  undefined8 local_e8;
  void *local_d8;
  void *pvStack_d0;
  undefined8 local_c8;
  void *local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  char *local_98;
  char *pcStack_90;
  char *local_88;
  char local_78 [32];
  char local_58 [32];
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
  bVar18 = false;
  local_38 = lVar12;
  if (param_5 == 0) goto switchD_100a2d060_caseD_3;
  bVar18 = false;
  if (0xf < param_3) {
    if (param_3 == 0x10) {
      if ((param_5 < 8) || (iVar4 = _strncmp(param_4,"Version:",8), iVar4 != 0)) {
        local_138 = (void *)0x0;
        pvStack_130 = (void *)0x0;
        local_128 = (void *)0x0;
        pvVar11 = operator_new(100);
        pvVar13 = (void *)((long)pvVar11 + 100);
        local_138 = pvVar11;
        local_128 = pvVar13;
        _memcpy(pvVar11,
                "Version:1.0\nStartHTML:0000000000\nEndHTML:0000000000\nStartFragment:0000000000\nEndFragment:0000000000\n"
                ,100);
        pvStack_130 = pvVar13;
        if ((DAT_102313818 == '\0') && (iVar4 = ___cxa_guard_acquire(&DAT_102313818), iVar4 != 0)) {
          std::string::__init((char *)local_150,0x101eeaa60);
          iVar4 = FUN_100a2e3b0(&local_138,local_150,0,0);
          std::string::~string(local_150);
          DAT_102313810 = iVar4;
          ___cxa_guard_release(&DAT_102313818);
        }
        if ((DAT_102313828 == '\0') && (iVar4 = ___cxa_guard_acquire(&DAT_102313828), iVar4 != 0)) {
          std::string::__init((char *)local_168,0x101eeaa60);
          iVar4 = FUN_100a2e3b0(&local_138,local_168,DAT_102313810 + 1,0);
          std::string::~string(local_168);
          DAT_102313820 = iVar4;
          ___cxa_guard_release(&DAT_102313828);
        }
        if ((DAT_102313838 == '\0') && (iVar4 = ___cxa_guard_acquire(&DAT_102313838), iVar4 != 0)) {
          std::string::__init((char *)local_180,0x101eeaa60);
          iVar4 = FUN_100a2e3b0(&local_138,local_180,DAT_102313820 + 1,0);
          std::string::~string(local_180);
          DAT_102313830 = iVar4;
          ___cxa_guard_release(&DAT_102313838);
        }
        if ((DAT_102313848 == '\0') && (iVar4 = ___cxa_guard_acquire(&DAT_102313848), iVar4 != 0)) {
          std::string::__init((char *)local_198,0x101eeaa60);
          iVar4 = FUN_100a2e3b0(&local_138,local_198,DAT_102313830 + 1,0);
          std::string::~string(local_198);
          DAT_102313840 = iVar4;
          ___cxa_guard_release(&DAT_102313848);
        }
        if ((DAT_102313858 == '\0') && (iVar4 = ___cxa_guard_acquire(&DAT_102313858), iVar4 != 0)) {
          std::string::__init((char *)local_1b0,0x101eeaa60);
          iVar4 = FUN_100a2e3b0(&local_138,local_1b0,DAT_102313840 + 1,0);
          std::string::~string(local_1b0);
          DAT_102313850 = iVar4;
          ___cxa_guard_release(&DAT_102313858);
        }
        _sprintf(local_58,"%lu",100);
        _sprintf(local_78,"%lu",(long)pvVar13 + ((long)param_5 - (long)pvVar11));
        sVar16 = _strlen(local_78);
        bVar18 = sVar16 < 0xb;
        if (bVar18) {
          lVar12 = (long)DAT_102313820;
          sVar16 = _strlen(local_58);
          _memcpy((void *)((lVar12 - sVar16) + (long)pvVar11),local_58,sVar16);
          lVar12 = (long)DAT_102313830;
          sVar16 = _strlen(local_78);
          _memcpy((void *)((lVar12 - sVar16) + (long)pvVar11),local_78,sVar16);
          lVar12 = (long)DAT_102313840;
          sVar16 = _strlen(local_58);
          _memcpy((void *)((lVar12 - sVar16) + (long)pvVar11),local_58,sVar16);
          lVar12 = (long)DAT_102313850;
          sVar16 = _strlen(local_78);
          _memcpy((void *)((lVar12 - sVar16) + (long)pvVar11),local_78,sVar16);
          pvVar1 = (void *)*param_6;
          *param_6 = pvVar11;
          pvVar11 = (void *)param_6[1];
          local_128 = (void *)param_6[2];
          param_6[1] = pvVar13;
          param_6[2] = pvVar13;
          local_138 = pvVar1;
          pvStack_130 = pvVar11;
          FUN_100a28930(param_6,pvVar13,param_4,param_4 + param_5);
          pvVar13 = pvVar11;
          pvVar11 = pvVar1;
        }
        if (pvVar11 == (void *)0x0) {
          lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
        }
        else {
          lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
          if (pvVar13 != pvVar11) {
            pvStack_130 = pvVar11;
          }
          operator_delete(pvVar11);
        }
      }
      else {
        uVar10 = (ulong)param_5;
        local_118 = (void *)0x0;
        pvStack_110 = (void *)0x0;
        local_108 = 0;
        pcVar14 = operator_new(uVar10);
        pcVar15 = pcVar14 + uVar10;
        pcVar17 = pcVar14;
        do {
          *pcVar17 = *param_4;
          param_4 = param_4 + 1;
          pcVar17 = pcVar17 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        local_118 = (void *)*param_6;
        *param_6 = pcVar14;
        pvStack_110 = (void *)param_6[1];
        local_108 = param_6[2];
        param_6[1] = pcVar17;
        param_6[2] = pcVar15;
        bVar18 = true;
        if (local_118 == (void *)0x0) {
          lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
        }
        else {
          lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
          if (pvStack_110 != local_118) {
            pvStack_110 = local_118;
          }
          operator_delete(local_118);
        }
      }
      goto switchD_100a2d060_caseD_3;
    }
    if (param_3 == 0x20) {
      lVar7 = _CFURLCreateWithBytes(0,param_4,(long)param_5,0x8000100,0);
      if (lVar7 == 0) {
        if (DAT_10230ffd0 < 2) {
          bVar18 = false;
        }
        else {
          FUN_100df99c0("","CPInterceptor",2,"Cannot conv url size=%d string=%s",param_5,param_4);
          bVar18 = false;
        }
      }
      else {
        lVar8 = _CFURLCopyFileSystemPath(lVar7,0);
        if (lVar8 == 0) {
          if (DAT_10230ffd0 < 2) {
            bVar18 = false;
          }
          else {
            bVar18 = false;
            FUN_100df99c0("","CPInterceptor",2,"failed to get system path by string");
          }
        }
        else {
          uVar9 = _CFStringGetLength(lVar8);
          uVar10 = _CFStringGetMaximumSizeForEncoding(uVar9,0x8000100);
          uVar19 = uVar10 + 1;
          local_98 = (char *)0x0;
          pcStack_90 = (char *)0x0;
          local_88 = (char *)0x0;
          if (uVar19 != 0) {
            if ((long)uVar10 < -1) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            local_98 = operator_new(uVar19);
            local_88 = local_98 + uVar19;
            uVar10 = ~uVar10;
            pcStack_90 = local_98;
            do {
              *pcStack_90 = '\0';
              pcStack_90 = pcStack_90 + 1;
              uVar10 = uVar10 + 1;
            } while (uVar10 != 0);
          }
          cVar3 = _CFStringGetCString(lVar8,local_98,(long)pcStack_90 - (long)local_98,0x8000100);
          pcVar17 = local_98;
          if (cVar3 == '\0') {
            bVar18 = false;
          }
          else {
            pcStack_90[-1] = '\0';
            sVar16 = _strlen(local_98);
            uVar10 = sVar16 + 1;
            if ((ulong)((long)pcStack_90 - (long)pcVar17) < uVar10) {
              FUN_100a337b0(&local_98);
              pcVar14 = pcStack_90;
              pcVar17 = local_98;
            }
            else {
              pcVar14 = pcStack_90;
              if ((uVar10 < (ulong)((long)pcStack_90 - (long)pcVar17)) &&
                 (pcStack_90 != pcVar17 + uVar10)) {
                pcVar14 = pcVar17 + uVar10;
              }
            }
            local_98 = (char *)*param_6;
            *param_6 = pcVar17;
            pcStack_90 = (char *)param_6[1];
            param_6[1] = pcVar14;
            pcVar17 = (char *)param_6[2];
            param_6[2] = local_88;
            bVar18 = true;
            local_88 = pcVar17;
          }
          lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
          if (local_98 != (char *)0x0) {
            if (pcStack_90 != local_98) {
              pcStack_90 = local_98;
            }
            operator_delete(local_98);
          }
          _CFRelease(lVar8);
        }
        _CFRelease(lVar7);
      }
      goto switchD_100a2d060_caseD_3;
    }
    if (param_3 != 0x40) goto switchD_100a2d060_caseD_3;
    uVar9 = *(undefined8 *)PTR__kUTTypePNG_1021e1c10;
    lVar12 = _CFStringCompare(param_2,uVar9,0);
    if (lVar12 == 0) {
      local_b8 = (void *)0x0;
      pvStack_b0 = (void *)0x0;
      local_a8 = 0;
      if (param_5 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar10 = (ulong)param_5;
      pcVar14 = operator_new(uVar10);
      pcVar15 = pcVar14 + uVar10;
      pcVar17 = pcVar14;
      do {
        *pcVar17 = *param_4;
        param_4 = param_4 + 1;
        pcVar17 = pcVar17 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      local_b8 = (void *)*param_6;
      *param_6 = pcVar14;
      pvStack_b0 = (void *)param_6[1];
      local_a8 = param_6[2];
      param_6[1] = pcVar17;
      param_6[2] = pcVar15;
      bVar18 = true;
      if (local_b8 == (void *)0x0) {
        lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
      }
      else {
        lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
        if (pvStack_b0 != local_b8) {
          pvStack_b0 = local_b8;
        }
        operator_delete(local_b8);
      }
      goto switchD_100a2d060_caseD_3;
    }
    lVar12 = FUN_100a2e200(param_4,param_5,param_2,uVar9);
    puVar2 = PTR__objc_msgSend_1021e1c68;
    if (lVar12 != 0) {
      lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar12,PTR_s_bytes_10226a748);
      iVar4 = (*(code *)puVar2)(lVar12,PTR_s_length_102269050);
      FUN_100a33650(param_6,lVar7,iVar4 + lVar7);
      bVar18 = true;
      lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
      goto switchD_100a2d060_caseD_3;
    }
LAB_100a2d955:
    bVar18 = false;
    lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
    goto switchD_100a2d060_caseD_3;
  }
  switch(param_3) {
  case 1:
    lVar12 = _CFStringCompare(param_2,*(undefined8 *)PTR__kUTTypeUTF16PlainText_1021e1c30,0);
    if ((lVar12 == 0) ||
       (lVar12 = _CFStringCompare(param_2,*(undefined8 *)
                                           PTR__kUTTypeUTF16ExternalPlainText_1021e1c28,0),
       lVar12 == 0)) {
      uVar9 = 0x14000100;
      iVar4 = 0;
      if (0 < param_5) {
        iVar4 = 0;
        lVar12 = 0;
        do {
          if (*(short *)(param_4 + lVar12 * 2) == 0) break;
          lVar12 = lVar12 + 1;
          iVar4 = iVar4 + 2;
        } while (iVar4 < param_5);
        iVar6 = (int)lVar12;
        iVar4 = 0;
        if (iVar6 != 0) {
          iVar4 = iVar6;
          if (*param_4 == -1) {
            if (param_4[1] == -2) {
              param_4 = param_4 + 2;
              iVar4 = iVar6 + -1;
            }
          }
          else if ((*param_4 == -2) && (param_4[1] == -1)) {
            param_4 = param_4 + 2;
            iVar4 = iVar6 + -1;
            uVar9 = 0x10000100;
          }
        }
      }
      bVar18 = false;
      lVar7 = _CFStringCreateWithBytesNoCopy
                        (0,param_4,(long)iVar4 * 2,uVar9,0,
                         *(undefined8 *)PTR__kCFAllocatorNull_1021e18d8);
      lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
      if (lVar7 == 0) goto switchD_100a2d060_caseD_3;
      lVar8 = _CFStringCreateMutableCopy(0,0,lVar7);
      if (lVar8 == 0) {
        bVar18 = false;
      }
      else {
        _CFStringNormalize(lVar8,2);
        FUN_100a2cbf0(lVar8,param_6);
        FUN_100a2e020(param_6);
        bVar18 = true;
        _CFRelease(lVar8);
      }
    }
    else {
      bVar18 = false;
      lVar7 = _CFStringCompare(param_2,*(undefined8 *)PTR__kUTTypeUTF8PlainText_1021e1c38,0);
      lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
      if (lVar7 != 0) goto switchD_100a2d060_caseD_3;
      bVar18 = false;
      lVar7 = _CFStringCreateWithBytesNoCopy
                        (0,param_4,(long)param_5,0x8000100,0,
                         *(undefined8 *)PTR__kCFAllocatorNull_1021e18d8);
      if (lVar7 == 0) goto switchD_100a2d060_caseD_3;
      lVar8 = _CFStringCreateMutableCopy(0,0,lVar7);
      if (lVar8 == 0) {
        bVar18 = false;
      }
      else {
        _CFStringNormalize(lVar8,2);
        FUN_100a2cbf0(lVar8,param_6);
        FUN_100a2e020(param_6);
        bVar18 = true;
        _CFRelease(lVar8);
      }
    }
    break;
  case 2:
    bVar18 = false;
    lVar7 = _CFStringCreateWithBytesNoCopy
                      (0,param_4,(long)param_5,0x8000100,0,
                       *(undefined8 *)PTR__kCFAllocatorNull_1021e18d8);
    if (lVar7 == 0) goto switchD_100a2d060_caseD_3;
    lVar8 = _CFStringCreateMutableCopy(0,0,lVar7);
    if (lVar8 == 0) {
      bVar18 = false;
    }
    else {
      _CFStringNormalize(lVar8,2);
      FUN_100a2cbf0(lVar8,param_6);
      FUN_100a2e020(param_6);
      bVar18 = true;
      _CFRelease(lVar8);
    }
    break;
  default:
    goto switchD_100a2d060_caseD_3;
  case 4:
    lVar12 = FUN_100a2e200(param_4,param_5,param_2,*(undefined8 *)PTR__kUTTypeBMP_1021e1be8);
    puVar2 = PTR__objc_msgSend_1021e1c68;
    if (lVar12 != 0) {
      uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar12,PTR_s_bytes_10226a748);
      uVar5 = (*(code *)puVar2)(lVar12,PTR_s_length_102269050);
      FUN_100a33970(&local_d8,uVar9,uVar5);
      pvVar13 = (void *)*param_6;
      pvVar11 = (void *)param_6[1];
      uVar9 = param_6[2];
      *param_6 = local_d8;
      param_6[1] = pvStack_d0;
      param_6[2] = local_c8;
      bVar18 = true;
      local_d8 = pvVar13;
      pvStack_d0 = pvVar11;
      local_c8 = uVar9;
      if (pvVar13 == (void *)0x0) {
        lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
      }
      else {
        lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
        if (pvVar11 != pvVar13) {
          pvStack_d0 = pvVar13;
        }
        operator_delete(pvVar13);
      }
      goto switchD_100a2d060_caseD_3;
    }
    goto LAB_100a2d955;
  case 8:
    local_f8 = (void *)0x0;
    pvStack_f0 = (void *)0x0;
    local_e8 = 0;
    if (param_5 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar10 = (ulong)param_5;
    pcVar14 = operator_new(uVar10);
    pcVar15 = pcVar14 + uVar10;
    pcVar17 = pcVar14;
    do {
      *pcVar17 = *param_4;
      param_4 = param_4 + 1;
      pcVar17 = pcVar17 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    local_f8 = (void *)*param_6;
    *param_6 = pcVar14;
    pvStack_f0 = (void *)param_6[1];
    local_e8 = param_6[2];
    param_6[1] = pcVar17;
    param_6[2] = pcVar15;
    bVar18 = true;
    if (local_f8 != (void *)0x0) {
      if (pvStack_f0 != local_f8) {
        pvStack_f0 = local_f8;
      }
      operator_delete(local_f8);
    }
    goto switchD_100a2d060_caseD_3;
  }
  _CFRelease(lVar7);
switchD_100a2d060_caseD_3:
  if (lVar12 == local_38) {
    return bVar18;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

