
undefined4
FUN_100a4e340(undefined8 param_1,undefined4 param_2,string *param_3,string *param_4,byte *param_5,
             uint param_6,uint param_7,undefined8 param_8,long *param_9)

{
  string *psVar1;
  string *psVar2;
  string *psVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *******ppppppplVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  size_t sVar15;
  char *pcVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long *******ppppppplVar29;
  long ******pppppplVar30;
  long lVar31;
  undefined8 uVar32;
  void *pvVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  string *psVar37;
  long lVar38;
  uint uVar39;
  int iVar40;
  string *psVar41;
  char *pcVar42;
  byte *pbVar43;
  size_t sVar44;
  ulong uVar45;
  bool bVar46;
  double dVar47;
  double dVar48;
  cfstringStruct *local_258;
  string local_230 [24];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  string local_148 [24];
  string local_130 [24];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long ******local_c0;
  long ******local_b8;
  long local_b0;
  string local_a8;
  char acStack_a7 [7];
  ulong local_a0;
  char *local_98;
  string local_90 [8];
  ulong local_88;
  string *local_80;
  string local_78 [24];
  QArrayData *local_60;
  QString local_58;
  undefined1 local_4d;
  uint local_4c;
  long *****local_48;
  long *****ppppplStack_40;
  long local_38;
  
  bVar10 = (byte)*param_3 & 1;
  psVar37 = param_3 + 1;
  if (bVar10 != 0) {
    psVar37 = *(string **)(param_3 + 0x10);
  }
  uVar17 = (ulong)((byte)*param_3 >> 1);
  if (bVar10 != 0) {
    uVar17 = *(ulong *)(param_3 + 8);
  }
  uVar45 = 0;
  local_258 = &cf___;
  do {
    psVar3 = (string *)(&DAT_102313970)[uVar45 * 2];
    sVar15 = _strlen((char *)psVar3);
    if (sVar15 <= uVar17) {
      if (sVar15 == 0) {
LAB_100a4e47f:
        local_258 = (cfstringStruct *)(&DAT_102313978)[uVar45 * 2];
        break;
      }
      if (((long)sVar15 <= (long)uVar17) && (lVar38 = (1 - sVar15) + uVar17, lVar38 != 0)) {
        psVar41 = psVar37;
        do {
          sVar44 = 1;
          if (*psVar41 == *psVar3) {
            do {
              if (sVar15 == sVar44) {
                if ((psVar41 == psVar37 + uVar17) || (psVar41 != psVar37)) goto LAB_100a4e470;
                goto LAB_100a4e47f;
              }
              psVar1 = psVar3 + sVar44;
              psVar2 = psVar41 + sVar44;
              sVar44 = sVar44 + 1;
            } while (*psVar2 == *psVar1);
          }
          psVar41 = psVar41 + 1;
        } while (psVar41 != psVar37 + lVar38);
      }
    }
LAB_100a4e470:
    uVar45 = uVar45 + 1;
  } while (uVar45 < 6);
  pcVar16 = _strstr((char *)psVar37,"://");
  if (pcVar16 == (char *)0x0) {
    std::string::string(local_90,param_3);
  }
  else {
    _strlen(pcVar16 + 3);
    std::string::__init((char *)local_90,(ulong)(pcVar16 + 3));
  }
  bVar10 = (byte)local_90[0] & 1;
  uVar17 = local_88;
  if (bVar10 == 0) {
    uVar17 = (ulong)((byte)local_90[0] >> 1);
  }
  if (uVar17 != 0) {
    psVar37 = local_80;
    uVar17 = local_88;
    if (bVar10 == 0) {
      psVar37 = local_90 + 1;
      uVar17 = (ulong)((byte)local_90[0] >> 1);
    }
    if (psVar37[uVar17 - 1] == (string)0x2f) {
      if (bVar10 == 0) {
        bVar10 = (byte)local_90[0] >> 1;
        local_90[0] = (string)(bVar10 * '\x02' - 2);
        local_90[bVar10] = (string)0x0;
      }
      else {
        local_80[local_88 - 1] = (string)0x0;
        local_88 = local_88 - 1;
      }
    }
  }
  std::string::string(&local_a8,local_90);
  if (((byte)local_a8 & 1) == 0) {
    pcVar16 = acStack_a7;
LAB_100a4e594:
    _strlen(pcVar16);
    pcVar42 = pcVar16;
  }
  else {
    pcVar42 = (char *)0x0;
    pcVar16 = local_98;
    if (local_98 != (char *)0x0) goto LAB_100a4e594;
  }
  QString::fromUtf8_helper((char *)&local_60,(int)pcVar42);
  qTopLevelDomain(&local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_4d = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_4d) goto LAB_100a4e5e8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100a4e5e8:
  uVar17 = std::string::rfind((char)&local_a8,0x2e);
  if (uVar17 != 0xffffffffffffffff) {
    uVar45 = local_a0;
    if (((byte)local_a8 & 1) == 0) {
      uVar45 = (ulong)((byte)local_a8 >> 1);
    }
    std::string::string(local_78,&local_a8,uVar17 + 1,~uVar17 + uVar45,(allocator *)&local_a8);
    std::string::operator=(&local_a8,local_78);
    std::string::~string(local_78);
  }
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_4d = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_4d) goto LAB_100a4e6a6;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100a4e6a6:
  uVar17 = local_88;
  if (((byte)local_90[0] & 1) == 0) {
    local_80 = local_90 + 1;
    uVar17 = (ulong)((byte)local_90[0] >> 1);
  }
  lVar38 = _CFStringCreateWithBytes(0,local_80,uVar17,0x8000100,0);
  if (((byte)local_a8 & 1) == 0) {
    local_98 = acStack_a7;
    local_a0 = (ulong)((byte)local_a8 >> 1);
  }
  lVar18 = _CFStringCreateWithBytes(0,local_98,local_a0,0x8000100,0);
  if (((byte)*param_4 & 1) == 0) {
    psVar37 = param_4 + 1;
    uVar17 = (ulong)((byte)*param_4 >> 1);
  }
  else {
    uVar17 = *(ulong *)(param_4 + 8);
    psVar37 = *(string **)(param_4 + 0x10);
  }
  lVar19 = _CFStringCreateWithBytes(0,psVar37,uVar17,0x8000100,0);
  if ((*param_5 & 1) == 0) {
    pbVar43 = param_5 + 1;
    uVar17 = (ulong)(*param_5 >> 1);
  }
  else {
    uVar17 = *(ulong *)(param_5 + 8);
    pbVar43 = *(byte **)(param_5 + 0x10);
  }
  lVar20 = _CFDataCreate(0,pbVar43,uVar17);
  uVar13 = 0xf000001c;
  if (((lVar38 == 0) || (lVar18 == 0)) || (lVar19 == 0)) {
LAB_100a4fa5e:
    if (lVar20 != 0) {
switchD_100a4e7cb_default:
      _CFRelease(lVar20);
    }
    if (lVar19 == 0) goto LAB_100a4fa81;
  }
  else {
    uVar13 = 0xf000001c;
    if (lVar20 != 0) {
      uVar13 = 0xf0000002;
      switch(param_2) {
      case 1:
        lVar22 = _CFStringGetLength(local_258);
        if (((lVar22 != 0) && (lVar22 = _CFStringGetLength(lVar38), lVar22 != 0)) &&
           (lVar22 = _CFStringGetLength(lVar19), lVar22 != 0)) {
          cVar11 = FUN_100a500a0(local_258,lVar38,&cf___,lVar19,0,0,0);
          if (cVar11 != '\0') {
            cVar11 = FUN_100a4dd50(param_1,param_8,param_7 & 3,0);
            uVar13 = 0xf0000007;
            if (cVar11 == '\0') break;
          }
          FUN_100a504c0(local_258,lVar38,lVar19);
          lVar22 = _CFDictionaryCreateMutable
                             (0,2,PTR__kCFTypeDictionaryKeyCallBacks_1021e1960,
                              PTR__kCFTypeDictionaryValueCallBacks_1021e1968);
          _CFDictionaryAddValue
                    (lVar22,*(undefined8 *)PTR__kSecClass_1021e1b60,
                     *(undefined8 *)PTR__kSecClassInternetPassword_1021e1b68);
          _CFDictionaryAddValue(lVar22,*(undefined8 *)PTR__kSecAttrServer_1021e1b48,lVar38);
          _CFDictionaryAddValue(lVar22,*(undefined8 *)PTR__kSecAttrAccount_1021e1af8,lVar19);
          _CFDictionaryAddValue(lVar22,*(undefined8 *)PTR__kSecAttrProtocol_1021e1b10,local_258);
          _CFDictionaryAddValue(lVar22,*(undefined8 *)PTR__kSecValueData_1021e1bb8,lVar20);
          lVar21 = _CFStringCreateMutable(0,0);
          _CFStringAppend(lVar21,lVar38);
          _CFStringAppend(lVar21,&cf__);
          _CFStringAppend(lVar21,lVar19);
          _CFStringAppend(lVar21,&cf__);
          if ((param_6 & 0x800) != 0) {
            _CFStringAppend(lVar21,&cf_<passwordnotsaved>);
          }
          uVar34 = param_6 & 0x3f;
          if (uVar34 < 0x1a) {
            uVar35 = uVar34 + 0x41;
          }
          else if (uVar34 < 0x34) {
            uVar35 = uVar34 + 0x47;
          }
          else if (uVar34 < 0x3e) {
            uVar35 = uVar34 - 4;
          }
          else {
            uVar39 = 0x2f;
            if (uVar34 != 0x3f) {
              uVar39 = 0;
            }
            uVar35 = 0x2b;
            if (uVar34 != 0x3e) {
              uVar35 = uVar39;
            }
          }
          uVar34 = param_6 >> 6 & 0x3f;
          if (uVar34 < 0x1a) {
            iVar14 = uVar34 + 0x41;
          }
          else if (uVar34 < 0x34) {
            iVar14 = uVar34 + 0x47;
          }
          else if (uVar34 < 0x3e) {
            iVar14 = uVar34 - 4;
          }
          else {
            iVar12 = 0x2f;
            if (uVar34 != 0x3f) {
              iVar12 = 0;
            }
            iVar14 = 0x2b;
            if (uVar34 != 0x3e) {
              iVar14 = iVar12;
            }
          }
          uVar34 = param_6 >> 0xc & 0x3f;
          if (uVar34 < 0x1a) {
            iVar36 = uVar34 + 0x41;
          }
          else if (uVar34 < 0x34) {
            iVar36 = uVar34 + 0x47;
          }
          else if (uVar34 < 0x3e) {
            iVar36 = uVar34 - 4;
          }
          else {
            iVar12 = 0x2f;
            if (uVar34 != 0x3f) {
              iVar12 = 0;
            }
            iVar36 = 0x2b;
            if (uVar34 != 0x3e) {
              iVar36 = iVar12;
            }
          }
          uVar34 = param_6 >> 0x12 & 0x3f;
          if (uVar34 < 0x1a) {
            iVar40 = uVar34 + 0x41;
          }
          else if (uVar34 < 0x34) {
            iVar40 = uVar34 + 0x47;
          }
          else if (uVar34 < 0x3e) {
            iVar40 = uVar34 - 4;
          }
          else {
            iVar12 = 0x2f;
            if (uVar34 != 0x3f) {
              iVar12 = 0;
            }
            iVar40 = 0x2b;
            if (uVar34 != 0x3e) {
              iVar40 = iVar12;
            }
          }
          local_4c = iVar14 << 8 | uVar35 | iVar36 << 0x10 | iVar40 << 0x18;
          lVar31 = _CFNumberCreate(0,3,&local_4c);
          _CFDictionaryAddValue(lVar22,*(undefined8 *)PTR__kSecAttrType_1021e1b58,lVar31);
          _CFDictionaryAddValue(lVar22,*(undefined8 *)PTR__kSecAttrLabel_1021e1b08,lVar21);
          _CFDictionaryAddValue
                    (lVar22,*(undefined8 *)PTR__kSecAttrAccessGroup_1021e1af0,
                     &cf_4C6364ACXT_com_parallels_desktop_passwords);
          _CFDictionaryAddValue
                    (lVar22,*(undefined8 *)PTR__kSecAttrSynchronizable_1021e1b50,
                     *(undefined8 *)PTR__kCFBooleanTrue_1021e18e0);
          uVar13 = 0;
          iVar12 = _SecItemAdd(lVar22,0);
          if ((iVar12 != 0) && (uVar13 = 0xf000001c, iVar12 != -0x62d4)) {
            if (iVar12 == -0x84e2) {
              if (DAT_1023139d0 == '\0') {
                FUN_100df99c0("","VmCliPasswordClient",0,"%s, error errSecMissingEntitlement",
                              "addPassword failed");
                DAT_1023139d0 = '\x01';
              }
            }
            else {
              FUN_100df99c0("","VmCliPasswordClient",0,"%s, error %d","addPassword failed",iVar12);
            }
          }
          if (lVar31 != 0) {
            _CFRelease(lVar31);
          }
          if (lVar21 != 0) {
            _CFRelease(lVar21);
          }
          if (lVar22 != 0) {
            _CFRelease(lVar22);
          }
          goto LAB_100a4fa5e;
        }
        uVar13 = 0xf0000003;
        FUN_100df99c0("","VmCliPasswordClient",0,"COMMAND_PASSWORD_ADD bad parameter");
        break;
      case 2:
        lVar22 = _CFStringGetLength(lVar38);
        if ((lVar22 != 0) && (lVar22 = _CFStringGetLength(local_258), lVar22 == 0)) {
          uVar13 = 0xf0000003;
          FUN_100df99c0("","VmCliPasswordClient",0,"COMMAND_PASSWORD_FIND bad parameter");
          goto LAB_100a4fa5e;
        }
        local_b0 = 0;
        local_c0 = (long ******)&local_c0;
        local_b8 = (long ******)&local_c0;
        lVar22 = _CFDictionaryCreateMutable
                           (0,0,PTR__kCFTypeDictionaryKeyCallBacks_1021e1960,
                            PTR__kCFTypeDictionaryValueCallBacks_1021e1968);
        uVar32 = *(undefined8 *)PTR__kCFBooleanTrue_1021e18e0;
        _CFDictionarySetValue(lVar22,*(undefined8 *)PTR__kSecReturnAttributes_1021e1ba8,uVar32);
        _CFDictionarySetValue
                  (lVar22,*(undefined8 *)PTR__kSecMatchLimit_1021e1b78,
                   *(undefined8 *)PTR__kSecMatchLimitAll_1021e1b80);
        _CFDictionarySetValue
                  (lVar22,*(undefined8 *)PTR__kSecClass_1021e1b60,
                   *(undefined8 *)PTR__kSecClassInternetPassword_1021e1b68);
        lVar21 = _CFStringGetLength(lVar38);
        if (lVar21 != 0) {
          _CFDictionaryAddValue(lVar22,*(undefined8 *)PTR__kSecAttrProtocol_1021e1b10,local_258);
        }
        _CFDictionaryAddValue
                  (lVar22,*(undefined8 *)PTR__kSecAttrAccessGroup_1021e1af0,
                   &cf_4C6364ACXT_com_parallels_desktop_passwords);
        _CFDictionaryAddValue(lVar22,*(undefined8 *)PTR__kSecAttrSynchronizable_1021e1b50,uVar32);
        local_38 = 0;
        iVar12 = _SecItemCopyMatching(lVar22,&local_38);
        lVar21 = local_38;
        if (iVar12 == 0) {
          if (local_38 != 0) {
            iVar12 = _CFArrayGetCount(local_38);
            if (0 < iVar12) {
              uVar32 = *(undefined8 *)PTR__kSecAttrAccount_1021e1af8;
              uVar4 = *(undefined8 *)PTR__kSecAttrServer_1021e1b48;
              uVar5 = *(undefined8 *)PTR__kSecAttrProtocol_1021e1b10;
              uVar6 = *(undefined8 *)PTR__kSecAttrCreationDate_1021e1b00;
              lVar31 = 0;
              do {
                uVar23 = _CFArrayGetValueAtIndex(lVar21,lVar31);
                lVar24 = _CFDictionaryGetValue(uVar23,uVar32);
                if (((((lVar24 != 0) && (lVar25 = _CFDictionaryGetValue(uVar23,uVar4), lVar25 != 0))
                     && (lVar26 = _CFDictionaryGetValue(uVar23,uVar5), lVar26 != 0)) &&
                    (lVar27 = _CFDictionaryGetValue(uVar23,uVar6), lVar27 != 0)) &&
                   ((lVar28 = _CFStringGetLength(lVar38), lVar28 == 0 ||
                    (cVar11 = _CFStringHasSuffix(lVar25,lVar18), cVar11 != '\0')))) {
                  cVar11 = _CFStringHasSuffix(lVar25,lVar18);
                  ppppppplVar29 = (long *******)local_b8;
                  if (cVar11 != '\0') {
                    for (; ppppppplVar29 != &local_c0;
                        ppppppplVar29 = (long *******)ppppppplVar29[1]) {
                      lVar28 = _CFStringCompare(ppppppplVar29[3],lVar24,0);
                      if (lVar28 == 0) {
                        if (*(char *)(ppppppplVar29 + 6) != '\0') goto LAB_100a4f1a6;
                        pppppplVar30 = *ppppppplVar29;
                        pppppplVar30[1] = (long *****)ppppppplVar29[1];
                        *ppppppplVar29[1] = (long *****)pppppplVar30;
                        local_b0 = local_b0 + -1;
                        if (ppppppplVar29[4] != (long ******)0x0) {
                          _CFRelease();
                        }
                        if (ppppppplVar29[3] != (long ******)0x0) {
                          _CFRelease();
                        }
                        if (ppppppplVar29[2] != (long ******)0x0) {
                          _CFRelease();
                        }
                        operator_delete(ppppppplVar29);
                        break;
                      }
                    }
                  }
                  local_48 = (long *****)0x0;
                  ppppplStack_40 = (long *****)0x0;
                  ppppppplVar29 = operator_new(0x38);
                  ppppppplVar29[4] = (long ******)0x0;
                  ppppppplVar29[3] = (long ******)0x0;
                  ppppppplVar29[2] = (long ******)0x0;
                  ppppppplVar29[6] = (long ******)ppppplStack_40;
                  ppppppplVar29[5] = (long ******)local_48;
                  ppppppplVar29[1] = (long ******)&local_c0;
                  *ppppppplVar29 = local_c0;
                  local_c0[1] = (long *****)ppppppplVar29;
                  local_b0 = local_b0 + 1;
                  local_c0 = (long ******)ppppppplVar29;
                  pppppplVar30 = (long ******)_CFStringCreateCopy(0,lVar25);
                  if (ppppppplVar29[2] != (long ******)0x0) {
                    _CFRelease();
                  }
                  pppppplVar8 = local_c0;
                  ppppppplVar29[2] = pppppplVar30;
                  pppppplVar30 = (long ******)_CFStringCreateCopy(0,lVar24);
                  if ((long ******)pppppplVar8[3] != (long ******)0x0) {
                    _CFRelease();
                  }
                  pppppplVar9 = local_c0;
                  pppppplVar8[3] = (long *****)pppppplVar30;
                  pppppplVar30 = (long ******)_CFStringCreateCopy(0,lVar26);
                  if ((long ******)pppppplVar9[4] != (long ******)0x0) {
                    _CFRelease();
                  }
                  pppppplVar9[4] = (long *****)pppppplVar30;
                  dVar47 = (double)_CFGregorianDateGetAbsoluteTime(0,0x10100000641,0);
                  dVar48 = (double)_CFDateGetAbsoluteTime(lVar27);
                  dVar48 = dVar48 - dVar47;
                  if (DAT_100e1e240 <= dVar48) {
                    dVar48 = dVar48 - DAT_100e1e240;
                  }
                  local_c0[5] = (long *****)((long)dVar48 * 10000000);
                  lVar24 = _CFStringCompare(lVar25,lVar38,1);
                  *(bool *)(local_c0 + 6) = lVar24 == 0;
                  uVar13 = FUN_100a50890(uVar23);
                  *(undefined4 *)((long)local_c0 + 0x34) = uVar13;
                }
LAB_100a4f1a6:
                lVar31 = lVar31 + 1;
              } while (lVar31 < iVar12);
            }
            bVar46 = local_b0 != 0;
            goto LAB_100a4f230;
          }
          bVar46 = false;
        }
        else {
          if (iVar12 != -0x62d4) {
            if (iVar12 != -0x84e2) {
              bVar46 = false;
              FUN_100df99c0("","VmCliPasswordClient",0,"%s, error %d","getAccounts failed",iVar12);
              goto LAB_100a4f230;
            }
            if (DAT_1023139d0 == '\0') {
              FUN_100df99c0("","VmCliPasswordClient",0,"%s, error errSecMissingEntitlement",
                            "getAccounts failed");
              DAT_1023139d0 = '\x01';
            }
          }
          bVar46 = false;
LAB_100a4f230:
          if (local_38 != 0) {
            _CFRelease();
          }
        }
        if (lVar22 != 0) {
          _CFRelease(lVar22);
        }
        uVar13 = 0xf000001c;
        ppppppplVar29 = (long *******)local_b8;
        if (bVar46) {
          for (; uVar13 = 0, ppppppplVar29 != &local_c0;
              ppppppplVar29 = (long *******)ppppppplVar29[1]) {
            local_d8 = 0;
            uStack_d0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_108 = 0;
            uStack_100 = 0;
            local_118 = 0;
            uStack_110 = 0;
            local_c8 = 0;
            FUN_100a509f0(param_9,(string *)&local_118);
            std::string::~string((string *)&local_e8);
            std::string::~string((string *)&uStack_100);
            std::string::~string((string *)&local_118);
            lVar22 = *param_9;
            pppppplVar30 = ppppppplVar29[4];
            lVar21 = _CFStringCompare(pppppplVar30,DAT_102313978,0);
            lVar31 = 0;
            if (lVar21 == 0) {
LAB_100a4f3df:
              pcVar16 = (char *)(&DAT_102313970)[lVar31 * 2];
              _strlen(pcVar16);
              std::string::__init((char *)&local_168,(ulong)pcVar16);
            }
            else {
              lVar21 = _CFStringCompare(pppppplVar30,DAT_102313988,0);
              lVar31 = 1;
              if (lVar21 == 0) goto LAB_100a4f3df;
              lVar21 = _CFStringCompare(pppppplVar30,DAT_102313998,0);
              lVar31 = 2;
              if (lVar21 == 0) goto LAB_100a4f3df;
              lVar21 = _CFStringCompare(pppppplVar30,DAT_1023139a8,0);
              lVar31 = 3;
              if (lVar21 == 0) goto LAB_100a4f3df;
              lVar21 = _CFStringCompare(pppppplVar30,DAT_1023139b8,0);
              lVar31 = 4;
              if (lVar21 == 0) goto LAB_100a4f3df;
              lVar21 = _CFStringCompare(pppppplVar30,DAT_1023139c8,0);
              lVar31 = 5;
              if (lVar21 == 0) goto LAB_100a4f3df;
              local_168 = 0;
              uStack_160 = 0;
              local_158 = 0;
            }
            pppppplVar30 = ppppppplVar29[2];
            local_188 = 0;
            uStack_180 = 0;
            local_178 = 0;
            lVar21 = _CFStringGetCStringPtr(pppppplVar30,0x8000100);
            if (lVar21 == 0) {
              uVar32 = _CFStringGetLength(pppppplVar30);
              lVar21 = _CFStringGetMaximumSizeForEncoding(uVar32,0x8000100);
              pvVar33 = _malloc(lVar21 + 1U);
              if (pvVar33 != (void *)0x0) {
                cVar11 = _CFStringGetCString(pppppplVar30,pvVar33,lVar21 + 1U,0x8000100);
                if (cVar11 != '\0') {
                  std::string::assign((char *)&local_188);
                }
                _free(pvVar33);
              }
            }
            else {
              std::string::assign((char *)&local_188);
            }
            FUN_100a50b60(local_148,&local_168,&local_188);
            FUN_100a50ab0(local_130,local_148,"/");
            std::string::operator=((string *)(lVar22 + 0x10),local_130);
            std::string::~string(local_130);
            std::string::~string(local_148);
            std::string::~string((string *)&local_188);
            std::string::~string((string *)&local_168);
            lVar22 = *param_9;
            pppppplVar30 = ppppppplVar29[3];
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_198 = 0;
            lVar21 = _CFStringGetCStringPtr(pppppplVar30,0x8000100);
            if (lVar21 == 0) {
              uVar32 = _CFStringGetLength(pppppplVar30);
              lVar21 = _CFStringGetMaximumSizeForEncoding(uVar32,0x8000100);
              pvVar33 = _malloc(lVar21 + 1U);
              if (pvVar33 != (void *)0x0) {
                cVar11 = _CFStringGetCString(pppppplVar30,pvVar33,lVar21 + 1U,0x8000100);
                if (cVar11 != '\0') {
                  std::string::assign((char *)&local_1a8);
                }
                _free(pvVar33);
              }
            }
            else {
              std::string::assign((char *)&local_1a8);
            }
            std::string::operator=((string *)(lVar22 + 0x28),(string *)&local_1a8);
            std::string::~string((string *)&local_1a8);
            lVar22 = *param_9;
            *(long *******)(lVar22 + 0x58) = ppppppplVar29[5];
            *(undefined4 *)(lVar22 + 0x60) = *(undefined4 *)((long)ppppppplVar29 + 0x34);
          }
        }
        if (local_b0 != 0) {
          pppppplVar30 = (long ******)*local_b8;
          pppppplVar30[1] = local_c0[1];
          *local_c0[1] = (long ****)pppppplVar30;
          local_b0 = 0;
          ppppppplVar29 = (long *******)local_b8;
          while (ppppppplVar29 != &local_c0) {
            ppppppplVar7 = (long *******)ppppppplVar29[1];
            if (ppppppplVar29[4] != (long ******)0x0) {
              _CFRelease();
            }
            if (ppppppplVar29[3] != (long ******)0x0) {
              _CFRelease();
            }
            if (ppppppplVar29[2] != (long ******)0x0) {
              _CFRelease();
            }
            operator_delete(ppppppplVar29);
            ppppppplVar29 = ppppppplVar7;
          }
        }
        goto LAB_100a4fa5e;
      case 3:
        lVar22 = _CFStringGetLength(local_258);
        if (((lVar22 == 0) || (lVar22 = _CFStringGetLength(lVar38), lVar22 == 0)) ||
           ((lVar22 = _CFStringGetLength(lVar19), lVar22 == 0 ||
            (lVar22 = _CFStringGetLength(lVar18), lVar22 == 0)))) {
          uVar13 = 0xf0000003;
          FUN_100df99c0("","VmCliPasswordClient",0,"COMMAND_PASSWORD_GET bad parameter");
        }
        else {
          cVar11 = FUN_100a500a0(local_258,lVar38,lVar18,lVar19,&local_1ac,0,0);
          uVar13 = 0xf000001c;
          if (cVar11 != '\0') {
            if ((local_1ac & 0x800) == 0) {
              cVar11 = FUN_100a4dd50(param_1,param_8,param_7 & 3,1);
              uVar13 = 0xf0000007;
              if (cVar11 == '\0') break;
            }
            local_1c0 = 0;
            cVar11 = FUN_100a500a0(local_258,lVar38,lVar18,lVar19,&local_1ac,&local_1b8,&local_1c0);
            uVar13 = 0xf000001c;
            if (cVar11 != '\0') {
              local_1d8 = 0;
              uStack_1d0 = 0;
              local_1e8 = 0;
              uStack_1e0 = 0;
              local_1f8 = 0;
              uStack_1f0 = 0;
              local_208 = 0;
              uStack_200 = 0;
              local_218 = 0;
              uStack_210 = 0;
              local_1c8 = 0;
              FUN_100a509f0(param_9,&local_218);
              std::string::~string((string *)&local_1e8);
              std::string::~string((string *)&uStack_200);
              std::string::~string((string *)&local_218);
              std::string::operator=((string *)(*param_9 + 0x10),param_3);
              std::string::operator=((string *)(*param_9 + 0x28),param_4);
              lVar22 = *param_9;
              uVar17 = _CFDataGetBytePtr(local_1c0);
              _CFDataGetLength(local_1c0);
              std::string::__init((char *)local_230,uVar17);
              std::string::operator=((string *)(lVar22 + 0x40),local_230);
              std::string::~string(local_230);
              lVar22 = *param_9;
              *(undefined8 *)(lVar22 + 0x58) = local_1b8;
              *(uint *)(lVar22 + 0x60) = local_1ac;
              uVar13 = 0;
            }
            if (local_1c0 != 0) {
              _CFRelease();
            }
            goto LAB_100a4fa5e;
          }
        }
        break;
      case 4:
        lVar22 = _CFStringGetLength(local_258);
        if (((lVar22 == 0) || (lVar22 = _CFStringGetLength(lVar38), lVar22 == 0)) ||
           (lVar22 = _CFStringGetLength(lVar19), lVar22 == 0)) {
          uVar13 = 0xf0000003;
          FUN_100df99c0("","VmCliPasswordClient",0,"COMMAND_PASSWORD_DEL bad parameter");
        }
        else {
          cVar11 = FUN_100a4dd50(param_1,param_8,param_7 & 3,0);
          uVar13 = 0xf0000007;
          if (cVar11 != '\0') {
            cVar11 = FUN_100a504c0(local_258,lVar38,lVar19);
            uVar13 = 0xf000001c;
            if (cVar11 != '\0') {
              uVar13 = 0;
            }
          }
        }
      }
      goto switchD_100a4e7cb_default;
    }
  }
  _CFRelease(lVar19);
LAB_100a4fa81:
  if (lVar18 != 0) {
    _CFRelease(lVar18);
  }
  if (lVar38 != 0) {
    _CFRelease(lVar38);
  }
  std::string::~string(&local_a8);
  std::string::~string(local_90);
  return uVar13;
}

