
undefined8
FUN_100a2eaf0(undefined8 param_1,undefined8 param_2,int param_3,undefined1 **param_4,
             undefined1 **param_5)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  void *pvVar11;
  size_t sVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  bool bVar21;
  undefined8 *local_278;
  undefined8 *puStack_270;
  undefined8 *local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined2 local_254;
  string local_250 [24];
  string local_238 [24];
  string local_220 [24];
  string local_208 [24];
  string local_1f0 [24];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined1 local_1b9;
  undefined8 local_1b8;
  ulong uStack_1b0;
  void *local_1a8;
  undefined8 local_198;
  ulong uStack_190;
  long local_188;
  undefined8 local_178;
  undefined1 *puStack_170;
  undefined1 *local_168;
  string local_158 [24];
  string local_140 [24];
  char *local_128;
  char *pcStack_120;
  char *local_118;
  string local_108 [24];
  string local_f0 [24];
  char local_d8 [4];
  char acStack_d4 [4];
  char acStack_d0 [4];
  char acStack_cc [4];
  char local_c8 [8];
  char acStack_c0 [8];
  char local_b8 [8];
  char acStack_b0 [8];
  char local_a8 [8];
  char acStack_a0 [8];
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  char local_88 [8];
  char acStack_80 [8];
  char local_78 [8];
  char acStack_70 [8];
  char local_68 [8];
  char acStack_60 [8];
  char local_58 [8];
  char acStack_50 [8];
  undefined2 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  puVar14 = *param_4;
  uVar13 = (long)param_4[1] - (long)puVar14;
  if (uVar13 == 0) {
    bVar21 = false;
    goto LAB_100a2f912;
  }
  bVar21 = false;
  if (param_3 < 0x10) {
    if (param_3 - 1U < 2) {
      uVar15 = uVar13 & 0xffffffff;
      if ((1 < uVar15) && (*(short *)(puVar14 + (uVar15 - 2)) == 0)) {
        uVar13 = uVar15 - 2;
      }
      lVar5 = _CFStringCreateWithCharactersNoCopy
                        (0,puVar14,uVar13 >> 1 & 0x7fffffff,
                         *(undefined8 *)PTR__kCFAllocatorNull_1021e18d8);
      bVar21 = false;
      if (lVar5 == 0) goto LAB_100a2f912;
      lVar6 = _CFStringCreateMutableCopy(0,0,lVar5);
      if (lVar6 == 0) {
        bVar21 = false;
      }
      else {
        uVar7 = _CFStringGetLength(lVar6);
        _CFStringFindAndReplace(lVar6,&cf_format_s_,&cf_creturn_s_,0,uVar7,0);
        lVar8 = _CFStringCompare(param_2,*(undefined8 *)PTR__kUTTypeUTF8PlainText_1021e1c38,0);
        if (lVar8 == 0) {
          local_198 = 0;
          uStack_190 = 0;
          local_188 = 0;
          lVar8 = _CFStringGetCStringPtr(lVar6,0x8000100);
          if (lVar8 == 0) {
            uVar7 = _CFStringGetLength(lVar6);
            lVar8 = _CFStringGetMaximumSizeForEncoding(uVar7,0x8000100);
            pvVar11 = _malloc(lVar8 + 1U);
            bVar21 = true;
            if (pvVar11 != (void *)0x0) {
              cVar2 = _CFStringGetCString(lVar6,pvVar11,lVar8 + 1U,0x8000100);
              if (cVar2 != '\0') {
                std::string::assign((char *)&local_198);
                _free(pvVar11);
                goto LAB_100a2f4e1;
              }
              _free(pvVar11);
            }
          }
          else {
            std::string::assign((char *)&local_198);
LAB_100a2f4e1:
            uVar13 = uStack_190;
            lVar8 = local_188;
            if ((local_198 & 1) == 0) {
              uVar13 = local_198 >> 1 & 0x7f;
              lVar8 = (long)&local_198 + 1;
            }
            bVar21 = false;
            FUN_100a33650(param_5,lVar8,uVar13 + lVar8);
          }
          std::string::~string((string *)&local_198);
          if (!bVar21) goto LAB_100a2f52e;
          bVar21 = false;
        }
        else {
          lVar8 = _CFStringCompare(param_2,*(undefined8 *)PTR__kUTTypeUTF16PlainText_1021e1c30,0);
          if (lVar8 == 0) {
            FUN_100a2cbf0(lVar6,param_5);
          }
          else {
            lVar8 = _CFStringCompare(param_2,&cf_com_apple_traditional_mac_plain_text,0);
            if (lVar8 == 0) {
              FUN_100a2cbf0(lVar6,param_5);
              FUN_100a2cd20(param_5);
            }
          }
LAB_100a2f52e:
          bVar21 = true;
        }
        _CFRelease(lVar6);
      }
      _CFRelease(lVar5);
      goto LAB_100a2f912;
    }
    if (param_3 == 4) {
      cVar2 = FUN_100a338e0(puVar14,uVar13 & 0xffffffff,&local_260);
      if (cVar2 == '\0') {
        bVar21 = false;
      }
      else {
        local_278 = (undefined8 *)0x0;
        puStack_270 = (undefined8 *)0x0;
        local_268 = (undefined8 *)0x0;
        local_278 = operator_new(0xe);
        puStack_270 = (undefined8 *)((long)local_278 + 0xe);
        *(undefined2 *)((long)local_278 + 0xc) = local_254;
        *(undefined4 *)(local_278 + 1) = local_258;
        *local_278 = local_260;
        local_268 = puStack_270;
        FUN_100a28b50(&local_278,puStack_270,*param_4,param_4[1]);
        lVar5 = FUN_100a2e200(local_278,(int)puStack_270 - (int)local_278,
                              *(undefined8 *)PTR__kUTTypeBMP_1021e1be8,param_2);
        bVar21 = lVar5 != 0;
        if (bVar21) {
          lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar5,PTR_s_bytes_10226a748);
          iVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar5,PTR_s_length_102269050);
          FUN_100a33650(param_5,lVar6,iVar3 + lVar6);
        }
        if (local_278 != (undefined8 *)0x0) {
          if (puStack_270 != local_278) {
            puStack_270 = local_278;
          }
          operator_delete(local_278);
        }
      }
      goto LAB_100a2f912;
    }
    if ((param_3 != 8) || (bVar21 = true, param_5 == param_4)) goto LAB_100a2f912;
    FUN_100a29610(param_5,puVar14,param_4[1]);
  }
  else if (param_3 == 0x10) {
    local_58 = (char  [8])s_<meta_http_equiv_Content_Type_co_101e3c030._48_8_;
    acStack_50 = (char  [8])s_<meta_http_equiv_Content_Type_co_101e3c030._56_8_;
    local_68 = (char  [8])s_<meta_http_equiv_Content_Type_co_101e3c030._32_8_;
    acStack_60 = (char  [8])s_<meta_http_equiv_Content_Type_co_101e3c030._40_8_;
    local_78 = (char  [8])s_<meta_http_equiv_Content_Type_co_101e3c030._16_8_;
    acStack_70 = (char  [8])s_<meta_http_equiv_Content_Type_co_101e3c030._24_8_;
    local_88 = (char  [8])s_<meta_http_equiv_Content_Type_co_101e3c030._0_8_;
    acStack_80 = (char  [8])s_<meta_http_equiv_Content_Type_co_101e3c030._8_8_;
    local_48 = 0x3e;
    local_98 = 0x3c3e22382d667475;
    local_a8 = (char  [8])s_<head><meta_http_equiv_Content_T_101e3c080._48_8_;
    acStack_a0 = (char  [8])s_<head><meta_http_equiv_Content_T_101e3c080._56_8_;
    local_b8 = (char  [8])s_<head><meta_http_equiv_Content_T_101e3c080._32_8_;
    acStack_b0 = (char  [8])s_<head><meta_http_equiv_Content_T_101e3c080._40_8_;
    local_c8 = (char  [8])s_<head><meta_http_equiv_Content_T_101e3c080._16_8_;
    acStack_c0 = (char  [8])s_<head><meta_http_equiv_Content_T_101e3c080._24_8_;
    local_d8 = (char  [4])s_<head><meta_http_equiv_Content_T_101e3c080._0_4_;
    acStack_d4 = (char  [4])s_<head><meta_http_equiv_Content_T_101e3c080._4_4_;
    acStack_d0 = (char  [4])s_<head><meta_http_equiv_Content_T_101e3c080._8_4_;
    acStack_cc = (char  [4])s_<head><meta_http_equiv_Content_T_101e3c080._12_4_;
    local_8a = 0;
    local_8c = 0x3e64;
    local_90 = 0x6165682f;
    FUN_100a32b40(&local_1d8,param_4);
    std::string::__init((char *)local_f0,0x101e3c13b);
    iVar3 = FUN_100a2e3b0(&local_1d8,local_f0,0,0);
    std::string::~string(local_f0);
    iVar19 = iVar3 + 0xb;
    if (iVar19 != -1) {
      std::string::__init((char *)local_108,0x101e3c01e);
      iVar4 = FUN_100a2e3b0(&local_1d8,local_108,iVar19,0);
      std::string::~string(local_108);
      if (iVar4 != -1) {
        iVar18 = iVar4 - iVar19;
        iVar16 = iVar18 + 1;
        local_128 = (char *)0x0;
        pcStack_120 = (char *)0x0;
        local_118 = (char *)0x0;
        if (iVar16 != 0) {
          if (iVar18 < -1) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          local_128 = operator_new((long)iVar16);
          local_118 = local_128 + iVar16;
          lVar5 = -(long)((iVar4 + -10) - iVar3);
          pcStack_120 = local_128;
          do {
            *pcStack_120 = '\0';
            pcStack_120 = pcStack_120 + 1;
            lVar5 = lVar5 + 1;
          } while (lVar5 != 0);
        }
        _memcpy(local_128,local_1d8 + iVar19,(long)iVar18);
        local_128[iVar18] = '\0';
        lVar5 = _atol(local_128);
        std::string::__init((char *)local_140,0x101e3c148);
        iVar3 = FUN_100a2e3b0(&local_1d8,local_140,0,0);
        std::string::~string(local_140);
        iVar3 = iVar3 + 9;
        puVar9 = local_1d8;
        puVar14 = local_1d0;
        if (iVar3 != -1) {
          std::string::__init((char *)local_158,0x101e3c01e);
          iVar19 = FUN_100a2e3b0(&local_1d8,local_158,iVar3,0);
          std::string::~string(local_158);
          puVar9 = local_1d8;
          puVar14 = local_1d0;
          if (iVar19 != -1) {
            iVar19 = iVar19 - iVar3;
            uVar13 = (ulong)(iVar19 + 1);
            if ((ulong)((long)pcStack_120 - (long)local_128) < uVar13) {
              FUN_100a337b0(&local_128);
            }
            else if ((uVar13 < (ulong)((long)pcStack_120 - (long)local_128)) &&
                    (pcStack_120 != local_128 + uVar13)) {
              pcStack_120 = local_128 + uVar13;
            }
            _memcpy(local_128,local_1d8 + iVar3,(long)iVar19);
            local_128[iVar19] = '\0';
            lVar6 = _atol(local_128);
            local_178 = 0;
            puStack_170 = (undefined1 *)0x0;
            local_168 = (undefined1 *)0x0;
            lVar8 = lVar6 - lVar5;
            if (lVar8 == 0) {
              puVar20 = (undefined1 *)0x0;
              puVar14 = (undefined1 *)0x0;
              puVar9 = (undefined1 *)0x0;
            }
            else {
              puVar17 = local_1d8 + lVar5;
              puVar20 = local_1d8 + (lVar6 - (long)puVar17);
              if ((long)puVar20 < 0) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              puVar9 = operator_new((ulong)puVar20);
              puVar20 = puVar9 + (long)puVar20;
              puVar14 = puVar9;
              do {
                *puVar14 = *puVar17;
                puVar17 = puVar17 + 1;
                puVar14 = puVar14 + 1;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
            }
            puStack_170 = local_1d0;
            local_168 = local_1c8;
            local_1c8 = puVar20;
            if (local_1d8 != (undefined1 *)0x0) {
              if (local_1d0 != local_1d8) {
                puStack_170 = local_1d8;
              }
              puVar20 = local_1d8;
              local_1d8 = puVar9;
              local_1d0 = puVar14;
              operator_delete(puVar20);
              puVar9 = local_1d8;
              puVar14 = local_1d0;
            }
          }
        }
        local_1d0 = puVar14;
        local_1d8 = puVar9;
        if (local_128 != (char *)0x0) {
          if (pcStack_120 != local_128) {
            pcStack_120 = local_128;
          }
          operator_delete(local_128);
        }
      }
    }
    _strlen(local_88);
    std::string::__init((char *)local_1f0,(ulong)local_88);
    iVar3 = FUN_100a2e3b0(&local_1d8,local_1f0,0,1);
    std::string::~string(local_1f0);
    if (iVar3 < 0) {
      std::string::__init((char *)local_208,0x101e3c0cf);
      iVar3 = FUN_100a2e3b0(&local_1d8,local_208,0,1);
      std::string::~string(local_208);
      if (iVar3 == -1) {
        std::string::__init((char *)local_238,0x101e3c0d7);
        iVar3 = FUN_100a2e3b0(&local_1d8,local_238,0,1);
        std::string::~string(local_238);
        if (iVar3 != -1) {
          std::string::__init((char *)local_250,0x101e1a020);
          iVar3 = FUN_100a2e3b0(&local_1d8,local_250,iVar3,1);
          std::string::~string(local_250);
          if (iVar3 != -1) {
            puVar14 = local_1d8 + (long)iVar3 + 1;
            sVar12 = _strlen(local_d8);
            FUN_100a2fb20(&local_1d8,puVar14,local_d8,local_d8 + sVar12);
          }
        }
        if (&local_1d8 != param_5) {
          FUN_100a29610(param_5,local_1d8,local_1d0);
        }
      }
      else {
        std::string::__init((char *)local_220,0x101e1a020);
        iVar3 = FUN_100a2e3b0(&local_1d8,local_220,iVar3,1);
        std::string::~string(local_220);
        if (iVar3 != -1) {
          puVar14 = local_1d8 + (long)iVar3 + 1;
          sVar12 = _strlen(local_88);
          FUN_100a2fb20(&local_1d8,puVar14,local_88,local_88 + sVar12);
        }
        if (&local_1d8 != param_5) {
          FUN_100a29610(param_5,local_1d8,local_1d0);
        }
      }
    }
    else if (&local_1d8 != param_5) {
      FUN_100a29610(param_5,local_1d8,local_1d0);
    }
    if (local_1d8 != (undefined1 *)0x0) {
      if (local_1d0 != local_1d8) {
        local_1d0 = local_1d8;
      }
      operator_delete(local_1d8);
    }
  }
  else {
    if (param_3 == 0x20) {
      if (param_5[1] != *param_5) {
        param_5[1] = *param_5;
      }
      puVar9 = puVar14 + (int)uVar13;
      uVar7 = *(undefined8 *)PTR__kCFAllocatorNull_1021e18d8;
      do {
        bVar21 = true;
        lVar5 = -1;
        if (puVar9 <= puVar14) break;
        do {
          lVar6 = lVar5 + 1;
          lVar5 = lVar5 + 1;
        } while (puVar14[lVar6] != '\0');
        lVar6 = _CFStringCreateWithBytesNoCopy(0,puVar14,lVar5,0x8000100,0,uVar7);
        if (lVar6 == 0) goto LAB_100a2f910;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1a8 = (void *)0x0;
        lVar8 = _CFStringGetCStringPtr(lVar6,0x8000100);
        if (lVar8 == 0) {
          uVar10 = _CFStringGetLength(lVar6);
          lVar8 = _CFStringGetMaximumSizeForEncoding(uVar10,0x8000100);
          pvVar11 = _malloc(lVar8 + 1U);
          iVar3 = 3;
          if (pvVar11 != (void *)0x0) {
            cVar2 = _CFStringGetCString(lVar6,pvVar11,lVar8 + 1U,0x8000100);
            if (cVar2 != '\0') {
              std::string::assign((char *)&local_1b8);
              _free(pvVar11);
              goto LAB_100a2edd0;
            }
            _free(pvVar11);
          }
        }
        else {
          std::string::assign((char *)&local_1b8);
LAB_100a2edd0:
          puVar20 = *param_5;
          uVar15 = (long)param_5[1] - (long)puVar20;
          uVar13 = uStack_1b0;
          if ((local_1b8 & 1) == 0) {
            uVar13 = local_1b8 >> 1 & 0x7f;
          }
          uVar13 = uVar13 + uVar15 + 7;
          if (uVar15 < uVar13) {
            FUN_100a337b0(param_5);
            puVar20 = *param_5;
          }
          else if ((uVar13 < uVar15) && (param_5[1] != puVar20 + uVar13)) {
            param_5[1] = puVar20 + uVar13;
          }
          puVar20[uVar15 + 6] = 0x2f;
          *(undefined2 *)(puVar20 + uVar15 + 4) = 0x2f3a;
          *(undefined4 *)(puVar20 + uVar15) = 0x656c6966;
          uVar13 = uStack_1b0;
          pvVar11 = local_1a8;
          if ((local_1b8 & 1) == 0) {
            uVar13 = local_1b8 >> 1 & 0x7f;
            pvVar11 = (void *)((long)&local_1b8 + 1);
          }
          _memcpy(*param_5 + uVar15 + 7,pvVar11,uVar13);
          local_1b9 = 0;
          if (param_5[1] == param_5[2]) {
            iVar3 = 0;
            FUN_100a2ad30(param_5,&local_1b9);
          }
          else {
            *param_5[1] = 0;
            param_5[1] = param_5[1] + 1;
            iVar3 = 0;
          }
        }
        std::string::~string((string *)&local_1b8);
        puVar14 = puVar14 + ((long)((lVar5 << 0x20 | 0xffffffffU) + 1) >> 0x20);
        _CFRelease();
        bVar21 = true;
      } while (iVar3 == 0);
      goto LAB_100a2f912;
    }
    if (param_3 != 0x40) goto LAB_100a2f912;
    lVar5 = FUN_100a2e200(puVar14,uVar13 & 0xffffffff,*(undefined8 *)PTR__kUTTypePNG_1021e1c10,
                          param_2);
    puVar1 = PTR__objc_msgSend_1021e1c68;
    if (lVar5 == 0) {
      bVar21 = false;
      goto LAB_100a2f912;
    }
    lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar5,PTR_s_bytes_10226a748);
    iVar3 = (*(code *)puVar1)(lVar5,PTR_s_length_102269050);
    FUN_100a33650(param_5,lVar6,iVar3 + lVar6);
  }
LAB_100a2f910:
  bVar21 = true;
LAB_100a2f912:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_1021e1840 >> 8),bVar21);
}

