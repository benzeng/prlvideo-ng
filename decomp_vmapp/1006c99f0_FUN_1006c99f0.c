
/* WARNING: Removing unreachable block (ram,0x0001006ca17d) */
/* WARNING: Removing unreachable block (ram,0x0001006ca192) */
/* WARNING: Removing unreachable block (ram,0x0001006ca224) */
/* WARNING: Removing unreachable block (ram,0x0001006ca235) */
/* WARNING: Removing unreachable block (ram,0x0001006ca24f) */
/* WARNING: Removing unreachable block (ram,0x0001006ca5e7) */
/* WARNING: Removing unreachable block (ram,0x0001006ca2b1) */
/* WARNING: Removing unreachable block (ram,0x0001006ca2c2) */
/* WARNING: Removing unreachable block (ram,0x0001006ca2d3) */
/* WARNING: Removing unreachable block (ram,0x0001006ca2ed) */
/* WARNING: Removing unreachable block (ram,0x0001006ca305) */
/* WARNING: Removing unreachable block (ram,0x0001006ca316) */
/* WARNING: Removing unreachable block (ram,0x0001006ca330) */
/* WARNING: Removing unreachable block (ram,0x0001006ca341) */
/* WARNING: Removing unreachable block (ram,0x0001006ca352) */
/* WARNING: Removing unreachable block (ram,0x0001006ca658) */
/* WARNING: Removing unreachable block (ram,0x0001006ca700) */
/* WARNING: Removing unreachable block (ram,0x0001006ca72e) */
/* WARNING: Removing unreachable block (ram,0x0001006ca768) */
/* WARNING: Removing unreachable block (ram,0x0001006ca756) */
/* WARNING: Removing unreachable block (ram,0x0001006ca78d) */
/* WARNING: Removing unreachable block (ram,0x0001006ca80a) */
/* WARNING: Removing unreachable block (ram,0x0001006ca82c) */
/* WARNING: Removing unreachable block (ram,0x0001006ca375) */
/* WARNING: Removing unreachable block (ram,0x0001006ca964) */
/* WARNING: Removing unreachable block (ram,0x0001006ca975) */
/* WARNING: Removing unreachable block (ram,0x0001006ca97e) */
/* WARNING: Removing unreachable block (ram,0x0001006ca983) */
/* WARNING: Removing unreachable block (ram,0x0001006ca993) */
/* WARNING: Removing unreachable block (ram,0x0001006ca998) */
/* WARNING: Removing unreachable block (ram,0x0001006ca9a0) */

undefined8 FUN_1006c99f0(long *param_1,uint param_2,long *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  void *pvVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int iVar26;
  undefined8 in_stack_fffffffffffffe28;
  undefined4 uVar27;
  undefined8 in_stack_fffffffffffffe30;
  undefined4 uVar28;
  undefined8 in_stack_fffffffffffffe38;
  undefined4 uVar29;
  long local_e8;
  long local_b8;
  void *pvStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  QArrayData *local_90;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  byte local_83;
  byte local_82;
  byte local_81;
  uint local_80 [2];
  undefined8 local_78;
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined1 local_59;
  undefined1 local_58 [32];
  long local_38;
  
  uVar27 = (undefined4)((ulong)in_stack_fffffffffffffe28 >> 0x20);
  uVar28 = (undefined4)((ulong)in_stack_fffffffffffffe30 >> 0x20);
  uVar29 = (undefined4)((ulong)in_stack_fffffffffffffe38 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  param_2 = param_2 & 0xfffffff;
  local_80[0] = param_2;
  local_78 = _CFNumberCreate(0,3,local_80);
  iVar11 = FUN_1006cadb0(param_2,local_58,&local_86);
  if (iVar11 < 1) {
    uVar25 = 0xfffffffc;
    FUN_1008e3970("","prl_net",0,"[ConfigureAdapter %d] No suitable device found for PVS%c.",param_2
                  ,param_2 + 0x30);
    goto LAB_1006ca01f;
  }
  uVar12 = _CFStringCreateWithCString(0,local_58,0x600);
  uVar13 = _CFStringCreateWithFormat
                     (0,0,&cf__02x__02x__02x__02x__02x__02x,local_86,local_85,local_84,
                      CONCAT44(uVar27,(uint)local_83),CONCAT44(uVar28,(uint)local_82),
                      CONCAT44(uVar29,(uint)local_81));
  if (param_4 == 0) {
    FUN_1008e3970("","prl_net",0,"[ConfigureAdapter %d] Configuring %s...",param_2,local_58);
    uVar25 = QString::utf16();
    uVar25 = _CFStringCreateWithCharacters(0,uVar25,(long)*(int *)(*param_1 + 4));
    uVar15 = _CFStringCreateWithFormat(0,0,&cf____enX_plist,uVar25);
    lVar16 = _CFURLCreateWithFileSystemPath(0,uVar15,0,0);
    local_e8 = 0;
    if (lVar16 != 0) {
      cVar10 = _CFURLCreateDataAndPropertiesFromResource(0,lVar16,&local_68,0,0,local_6c);
      if (cVar10 == '\0') {
        local_e8 = 0;
        _CFRelease(lVar16);
      }
      else {
        local_e8 = _CFPropertyListCreateFromXMLData(0,local_68,1,0);
        _CFRelease(local_68);
        _CFRelease(lVar16);
      }
    }
    _CFRelease(uVar15);
    _CFRelease(uVar25);
    if (local_e8 == 0) {
      QString::toLatin1();
      FUN_1008e3970("","prl_net",0,"[ConfigureAdapter %d] Cannot read %s/enX.plist template.",
                    param_2,local_90 + *(long *)(local_90 + 0x10));
      uVar25 = 0xffffffff;
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_59 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_1006ca01f;
        }
        QArrayData::deallocate(local_90,1,8);
      }
      goto LAB_1006ca01f;
    }
    uVar25 = QString::utf16();
    uVar15 = _CFStringCreateWithCharacters(0,uVar25,(long)*(int *)(*param_3 + 4));
    uVar25 = *(undefined8 *)PTR__kSCEntNetInterface_100ba2518;
    cVar10 = FUN_1006cafa0(local_e8,uVar12,uVar25,
                           *(undefined8 *)PTR__kSCPropNetInterfaceDeviceName_100ba2560,0);
    if (cVar10 != '\0') {
      uVar1 = *(undefined8 *)PTR__kSCPropUserDefinedName_100ba2578;
      cVar10 = FUN_1006cafa0(local_e8,uVar15,uVar25,uVar1,0);
      if ((((cVar10 != '\0') && (cVar10 = FUN_1006cafa0(local_e8,uVar15,uVar1,0), cVar10 != '\0'))
          && (cVar10 = FUN_1006cafa0(local_e8,local_78,&cf_ParallelsAdapterIndex,0), cVar10 != '\0')
          ) && (cVar10 = FUN_1006cafa0(local_e8,uVar13,
                                       *(undefined8 *)PTR__kSCEntNetEthernet_100ba2500,
                                       *(undefined8 *)PTR__kSCPropMACAddress_100ba2530,0),
               cVar10 != '\0')) {
        _CFRelease(uVar15);
        FUN_1006c98a0(local_e8,uVar25,uVar1,0);
        lVar16 = _CFDictionaryCreateMutable
                           (0,1,PTR__kCFTypeDictionaryKeyCallBacks_100ba23f8,
                            PTR__kCFTypeDictionaryValueCallBacks_100ba2400);
        local_a0 = 1;
        local_98 = _CFNumberCreate(0,10,&local_a0);
        _CFDictionarySetValue(lVar16,*(undefined8 *)PTR__kSCResvInactive_100ba2580,local_98);
        _CFRelease(local_98);
        goto LAB_1006c9af1;
      }
    }
    FUN_1008e3970("","prl_net",0,"[ConfigureAdapter %d] Cannot update enX.plist template.",param_2);
    _CFRelease(uVar15);
    uVar25 = 0xffffffff;
    _CFRelease(local_e8);
  }
  else {
    lVar16 = 0;
    FUN_1008e3970("","prl_net",0,"[ConfigureAdapter %d] Removing %s configuration...",param_2,
                  local_58);
    local_e8 = 0;
LAB_1006c9af1:
    lVar14 = _SCPreferencesCreate(0,&cf_com_parallels_prl_net_library,0);
    if (lVar14 == 0) {
      uVar25 = 0xffffffff;
      FUN_1008e3970("","prl_net",0,"[ConfigureAdapter %d] Cannot open System Preferences.",param_2);
    }
    else {
      cVar10 = FUN_1006cd0a0(lVar14);
      if (cVar10 == '\0') {
        uVar25 = 0xffffffff;
        FUN_1008e3970("","prl_net",0,"[ConfigureAdapter %d] Cannot lock System Preferences.",param_2
                     );
      }
      else {
        local_b8 = 0;
        pvStack_b0 = (void *)0x0;
        local_a8 = 0;
        uVar25 = *(undefined8 *)PTR__kSCPrefSets_100ba2528;
        uVar15 = *(undefined8 *)PTR__kSCCompNetwork_100ba24e0;
        uVar1 = *(undefined8 *)PTR__kSCCompService_100ba24e8;
        uVar2 = *(undefined8 *)PTR__kSCPrefNetworkServices_100ba2520;
        uVar3 = *(undefined8 *)PTR__kSCCompGlobal_100ba24d0;
        uVar4 = *(undefined8 *)PTR__kSCEntNetIPv4_100ba2508;
        uVar5 = *(undefined8 *)PTR__kSCPropNetServiceOrder_100ba2570;
        uVar6 = *(undefined8 *)PTR__kSCCompInterface_100ba24d8;
        uVar7 = *(undefined8 *)PTR__kSCEntNetEthernet_100ba2500;
        iVar11 = 0;
LAB_1006ca05f:
        lVar17 = _SCPreferencesGetValue(lVar14,uVar25);
        if (lVar17 != 0) {
          lVar18 = _CFGetTypeID(lVar17);
          lVar19 = _CFDictionaryGetTypeID();
          if (lVar18 == lVar19) {
            FUN_1006cd640(&local_b8,lVar17);
            pvVar9 = pvStack_b0;
            if (0 < local_b8) {
              lVar18 = 0;
              lVar17 = local_b8;
              do {
                uVar24 = *(undefined8 *)((long)pvVar9 + lVar18 * 8);
                _CFStringCreateWithFormat(0,0,&cf_____________,uVar25,uVar24,uVar15,uVar1);
                lVar19 = _SCPreferencesPathGetValue(lVar14);
                _CFRelease();
                lVar20 = _CFDictionaryGetTypeID();
                if ((lVar19 != 0) && (lVar19 = _CFGetTypeID(), lVar19 == lVar20)) {
                  FUN_1006cd640();
                  iVar26 = 5;
                  if (local_e8 != 0) {
                    uVar21 = _CFUUIDCreate(0);
                    uVar22 = _CFStringCreateWithFormat(0,0,&cf_______,uVar2,uVar21);
                    uVar23 = _CFStringCreateWithFormat
                                       (0,0,&cf________________,uVar25,uVar24,uVar15,uVar1,uVar21);
                    cVar10 = _SCPreferencesPathSetValue(lVar14,uVar22,local_e8);
                    if ((cVar10 == '\0') ||
                       (cVar10 = _SCPreferencesPathSetLink(lVar14,uVar23,uVar22), cVar10 == '\0')) {
                      FUN_1008e3970("","prl_net",0,
                                    "[ConfigureAdapter %d] Cannot update System Preferences.",
                                    param_2);
                    }
                    else {
                      iVar11 = iVar11 + 1;
                    }
                    _CFRelease(uVar22);
                    _CFRelease(uVar23);
                    uVar22 = _CFStringCreateWithFormat
                                       (0,0,&cf________________,uVar25,uVar24,uVar15,uVar3,uVar4);
                    uVar23 = _SCPreferencesPathGetValue(lVar14,uVar22);
                    lVar17 = FUN_1006c98a0(uVar23,uVar5,0);
                    if (lVar17 != 0) {
                      lVar19 = _CFGetTypeID(lVar17);
                      lVar20 = _CFArrayGetTypeID();
                      if (lVar19 == lVar20) {
                        lVar19 = _CFArrayGetCount(lVar17);
                        lVar17 = _CFArrayCreateMutableCopy(0,lVar19 + 1,lVar17);
                        lVar19 = _CFUUIDCreateString(0,uVar21);
                        if ((lVar17 != 0) && (lVar19 != 0)) {
                          _CFArrayAppendValue(lVar17,lVar19);
                          uVar23 = _SCPreferencesPathGetValue(lVar14,uVar22);
                          lVar20 = _CFDictionaryCreateMutableCopy(0,0,uVar23);
                          if (lVar20 != 0) {
                            _CFDictionarySetValue(lVar20,uVar5,lVar17);
                            cVar10 = _SCPreferencesPathSetValue(lVar14,uVar22,lVar20);
                            if (cVar10 == '\0') {
                              FUN_1008e3970("","prl_net",0,
                                            "[ConfigureAdapter %d] Cannot update System Preferences."
                                            ,param_2);
                            }
                            else {
                              iVar11 = iVar11 + 1;
                            }
                          }
                        }
                        if (lVar19 != 0) {
                          _CFRelease(lVar19);
                        }
                        if (lVar17 != 0) {
                          _CFRelease(lVar17);
                        }
                      }
                    }
                    _CFRelease(uVar22);
                    _CFRelease(uVar21);
                    uVar24 = _CFStringCreateWithFormat
                                       (0,0,&cf___________________,uVar25,uVar24,uVar15,uVar6,uVar12
                                        ,uVar7);
                    cVar10 = _SCPreferencesPathSetValue(lVar14,uVar24,lVar16);
                    if (cVar10 == '\0') {
                      FUN_1008e3970("","prl_net",0,
                                    "[ConfigureAdapter %d] Cannot update System Preferences.",
                                    param_2);
                    }
                    iVar26 = 0;
                    _CFRelease();
                  }
                  lVar17 = local_b8;
                  if (iVar26 == 0) goto LAB_1006ca05f;
                }
                lVar18 = lVar18 + 1;
                if (lVar17 <= lVar18) break;
              } while( true );
            }
            if (iVar11 == 0) {
              FUN_1008e3970("","prl_net",0,
                            "[ConfigureAdapter %d] No System Preferences changes required.",param_2)
              ;
            }
            else {
              cVar10 = _SCPreferencesCommitChanges(lVar14);
              if (cVar10 == '\0') {
                FUN_1008e3970("","prl_net",0,
                              "[ConfigureAdapter %d] Failed to commit changes to System Preferences."
                              ,param_2);
              }
              else {
                _SCPreferencesApplyChanges(lVar14);
                FUN_1008e3970("","prl_net",0,
                              "[ConfigureAdapter %d] Changes to System Preferences commited.",
                              param_2);
                _system("/usr/bin/killall UserNotificationCenter");
              }
            }
            _SCPreferencesUnlock(lVar14);
            if (lVar16 != 0) {
              _CFRelease(lVar16);
            }
            if (local_e8 != 0) {
              _CFRelease(local_e8);
            }
            uVar25 = 0;
            _CFRelease(uVar12);
            _CFRelease(uVar13);
            bVar8 = false;
            goto LAB_1006cac4b;
          }
        }
        uVar25 = 0xffffffff;
        FUN_1008e3970("","prl_net",0,"[ConfigureAdapter %d] Cannot get System Preferences Sets.",
                      param_2);
        bVar8 = true;
LAB_1006cac4b:
        lVar17 = local_a8;
        pvVar9 = pvStack_b0;
        lVar16 = local_b8;
        if (pvStack_b0 != (void *)0x0) {
          if (0 < local_b8) {
            lVar18 = 0;
            do {
              if (*(long *)((long)pvVar9 + lVar18 * 8) != 0) {
                _CFRelease();
              }
              if (*(long *)(lVar17 + lVar18 * 8) != 0) {
                _CFRelease();
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < lVar16);
          }
          _free(pvVar9);
        }
        local_b8 = 0;
        pvStack_b0 = (void *)0x0;
        if (bVar8) {
          _SCPreferencesUnlock(lVar14);
        }
      }
      _CFRelease(lVar14);
    }
  }
LAB_1006ca01f:
  _CFRelease(local_78);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar25;
}

