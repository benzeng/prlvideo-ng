
undefined8 FUN_100049f30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  int *piVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined *puVar18;
  QArrayData *local_328;
  QArrayData *local_320;
  QArrayData *local_318;
  QArrayData *local_310;
  QArrayData *local_308;
  QArrayData *local_300;
  QArrayData *local_2f8;
  QArrayData *local_2f0;
  QArrayData *local_2e8;
  QString local_2e0;
  QArrayData *local_2d8;
  char local_2c9;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  long local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  long local_298;
  QString local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  long local_268;
  int *local_260;
  int *local_258;
  int *local_250;
  undefined4 local_248;
  long local_240;
  QArrayData *local_238;
  QString local_230;
  undefined8 local_228;
  long lStack_220;
  long *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  long lStack_1e0;
  long *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  QArrayData *local_1a8;
  undefined1 local_199;
  long local_198;
  undefined8 local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  undefined8 local_168;
  cfstringStruct *local_160;
  undefined8 local_158;
  cfstringStruct *local_150;
  undefined1 local_148 [128];
  undefined1 local_c8 [128];
  cfstringStruct *local_48;
  undefined8 local_40;
  long local_38;
  
  puVar18 = PTR_shared_null_1021e1288;
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  local_290.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  QString::toUtf8();
  std::string::assign((char *)&local_278);
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_199 = *(int *)local_2d8 != 0;
      UNLOCK();
      if ((bool)local_199) goto LAB_10004a001;
    }
    QArrayData::deallocate(local_2d8,1,8);
  }
LAB_10004a001:
  std::string::append((char *)&local_278);
  lVar6 = local_268;
  if ((local_278 & 1) == 0) {
    lVar6 = (long)&local_278 + 1;
  }
  iVar5 = FUN_100d76f00(lVar6,2,&local_288,&local_280);
  if (iVar5 == 0) {
    lVar6 = _CFDictionaryGetTypeID();
    lVar7 = _CFGetTypeID(local_288);
    if (lVar6 == lVar7) {
      local_2e8 = (QArrayData *)QString::fromAscii_helper("System",6);
      local_2f0 = (QArrayData *)QString::fromAscii_helper("APP Path",8);
      local_2f8 = (QArrayData *)puVar18;
      FUN_100b57250(&local_2e0,param_3,&local_2e8,&local_2f0,&local_2f8);
      QString::operator=(&local_290,&local_2e0);
      if (*(int *)local_2e0.field0_0x0 != -1) {
        if (*(int *)local_2e0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_2e0.field0_0x0 = *(int *)local_2e0.field0_0x0 + -1;
          local_199 = *(int *)local_2e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_199) goto LAB_10004a141;
        }
        QArrayData::deallocate((QArrayData *)local_2e0.field0_0x0,2,8);
      }
LAB_10004a141:
      if (*(int *)local_2f8 != -1) {
        if (*(int *)local_2f8 != 0) {
          LOCK();
          *(int *)local_2f8 = *(int *)local_2f8 + -1;
          local_199 = *(int *)local_2f8 != 0;
          UNLOCK();
          if ((bool)local_199) goto LAB_10004a17d;
        }
        QArrayData::deallocate(local_2f8,2,8);
      }
LAB_10004a17d:
      if (*(int *)local_2f0 != -1) {
        if (*(int *)local_2f0 != 0) {
          LOCK();
          *(int *)local_2f0 = *(int *)local_2f0 + -1;
          local_199 = *(int *)local_2f0 != 0;
          UNLOCK();
          if ((bool)local_199) goto LAB_10004a1b9;
        }
        QArrayData::deallocate(local_2f0,2,8);
      }
LAB_10004a1b9:
      if (*(int *)local_2e8 != -1) {
        if (*(int *)local_2e8 != 0) {
          LOCK();
          *(int *)local_2e8 = *(int *)local_2e8 + -1;
          local_199 = *(int *)local_2e8 != 0;
          UNLOCK();
          if ((bool)local_199) goto LAB_10004a1f5;
        }
        QArrayData::deallocate(local_2e8,2,8);
      }
LAB_10004a1f5:
      QString::toUtf8();
      std::string::assign((char *)&local_2a8);
      if (*(int *)local_300 != -1) {
        if (*(int *)local_300 != 0) {
          LOCK();
          *(int *)local_300 = *(int *)local_300 + -1;
          local_199 = *(int *)local_300 != 0;
          UNLOCK();
          if ((bool)local_199) goto LAB_10004a25b;
        }
        QArrayData::deallocate(local_300,1,8);
      }
LAB_10004a25b:
      std::string::append((char *)&local_2a8);
      QString::toUtf8();
      std::string::append((char *)&local_2a8);
      if (*(int *)local_308 != -1) {
        if (*(int *)local_308 != 0) {
          LOCK();
          *(int *)local_308 = *(int *)local_308 + -1;
          local_199 = *(int *)local_308 != 0;
          UNLOCK();
          if ((bool)local_199) goto LAB_10004a2d4;
        }
        QArrayData::deallocate(local_308,1,8);
      }
LAB_10004a2d4:
      lVar6 = local_298;
      if ((local_2a8 & 1) == 0) {
        lVar6 = (long)&local_2a8 + 1;
      }
      FUN_100d76a90(local_288,&cf_CFBundleGetInfoString,lVar6);
      uVar16 = local_288;
      FUN_10003ffa0(&local_318,param_1 + 0x18);
      QString::toUtf8();
      FUN_100d76a90(uVar16,&cf_CFBundleShortVersionString,local_310 + *(long *)(local_310 + 0x10));
      if (*(int *)local_310 != -1) {
        if (*(int *)local_310 != 0) {
          LOCK();
          *(int *)local_310 = *(int *)local_310 + -1;
          local_199 = *(int *)local_310 != 0;
          UNLOCK();
          if ((bool)local_199) goto LAB_10004a3e2;
        }
        QArrayData::deallocate(local_310,1,8);
      }
LAB_10004a3e2:
      if (*(int *)local_318 != -1) {
        if (*(int *)local_318 != 0) {
          LOCK();
          *(int *)local_318 = *(int *)local_318 + -1;
          local_199 = *(int *)local_318 != 0;
          UNLOCK();
          if ((bool)local_199) goto LAB_10004a41e;
        }
        QArrayData::deallocate(local_318,2,8);
      }
LAB_10004a41e:
      uVar16 = local_288;
      FUN_1000466a0(&local_328);
      QString::toUtf8();
      FUN_100d76a90(uVar16,&cf_CFBundleVersion,local_320 + *(long *)(local_320 + 0x10));
      if (*(int *)local_320 != -1) {
        if (*(int *)local_320 != 0) {
          LOCK();
          *(int *)local_320 = *(int *)local_320 + -1;
          local_199 = *(int *)local_320 != 0;
          UNLOCK();
          if ((bool)local_199) goto LAB_10004a49a;
        }
        QArrayData::deallocate(local_320,1,8);
      }
LAB_10004a49a:
      if (*(int *)local_328 != -1) {
        if (*(int *)local_328 != 0) {
          LOCK();
          *(int *)local_328 = *(int *)local_328 + -1;
          local_199 = *(int *)local_328 != 0;
          UNLOCK();
          if ((bool)local_199) goto LAB_10004a4d6;
        }
        QArrayData::deallocate(local_328,2,8);
      }
LAB_10004a4d6:
      uVar16 = *(undefined8 *)PTR__kCFBooleanTrue_1021e18e0;
      FUN_100d76b80(local_288,&cf_LSBackgroundOnly,uVar16);
      FUN_100d76a90(local_288,&cf_LSUIElement,"1");
      FUN_100d76a90(local_288,&cf_LSMinimumSystemVersion,"10.7.0");
      _CFDictionaryRemoveValue(local_288,&cf_CSResourcesFileMapped);
      FUN_100d76b80(local_288,&cf_NSHighResolutionCapable,uVar16);
      FUN_100d76a90(local_288,&cf_NSPrincipalClass,"CStubApplication");
      uVar16 = *(undefined8 *)PTR__kCFBundleIdentifierKey_1021e18e8;
      FUN_100d76960(local_288,uVar16,&local_2c8);
      cVar4 = FUN_100aba070(&local_2c8,&local_2c9);
      if (cVar4 == '\0') {
        uVar16 = 0xffffffff;
        if (0 < DAT_10230ffd0) {
          lVar6 = local_2b8;
          if ((local_2c8 & 1) == 0) {
            lVar6 = (long)&local_2c8 + 1;
          }
          FUN_100df99c0("SGASMGMT","prl_client_app",1,"failed to fix bundle id \"%s\"",lVar6);
        }
      }
      else {
        if (local_2c9 != '\0') {
          lVar6 = local_2b8;
          if ((local_2c8 & 1) == 0) {
            lVar6 = (long)&local_2c8 + 1;
          }
          FUN_100d76a90(local_288,uVar16,lVar6);
        }
        if (param_4 != 0) {
          if (*(int *)(*(long *)(param_4 + 0x10) + 0xc) == *(int *)(*(long *)(param_4 + 0x10) + 8))
          {
            _CFDictionaryRemoveValue(local_288,&cf_CFBundleURLTypes);
          }
          else {
            uVar16 = _objc_autoreleasePoolPush();
            local_40 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                 (PTR__OBJC_CLASS___NSMutableArray_10226a840,
                                  PTR_s_arrayWithCapacity__102269950,
                                  (long)*(int *)(*(long *)(param_4 + 0x10) + 0xc) -
                                  (long)*(int *)(*(long *)(param_4 + 0x10) + 8));
            puVar3 = PTR_s_addObject__1022692e8;
            puVar18 = PTR_s_stringWithQString__102268d00;
            lVar6 = *(long *)(param_4 + 0x10);
            iVar5 = *(int *)(lVar6 + 8);
            if (*(int *)(lVar6 + 0xc) != iVar5) {
              lVar7 = lVar6 + 0x10 + (long)iVar5 * 8;
              lVar6 = (long)*(int *)(lVar6 + 0xc) * 8 + (long)iVar5 * -8;
              do {
                uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                  (PTR__OBJC_CLASS___NSString_10226a7c8,puVar18,lVar7);
                (*(code *)PTR__objc_msgSend_1021e1c68)(local_40,puVar3,uVar9);
                lVar7 = lVar7 + 8;
                lVar6 = lVar6 + -8;
              } while (lVar6 != 0);
            }
            local_48 = &cf_CFBundleURLSchemes;
            local_190 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                  (PTR__OBJC_CLASS___NSDictionary_10226a900,
                                   PTR_s_dictionaryWithObjects_forKeys_co_1022698c8,&local_40,
                                   &local_48,1);
            uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)
                              (PTR__OBJC_CLASS___NSArray_10226a818,
                               PTR_s_arrayWithObjects_count__102268f00,&local_190,1);
            _CFDictionarySetValue(local_288,&cf_CFBundleURLTypes,uVar9);
            _objc_autoreleasePoolPop(uVar16);
          }
        }
        cVar4 = _CFDictionaryGetValueIfPresent(local_288,&cf_CFBundleDocumentTypes,&local_198);
        if ((cVar4 != '\0') && (local_198 != 0)) {
          lVar6 = _CFArrayGetTypeID();
          lVar7 = _CFGetTypeID(local_198);
          if ((lVar6 == lVar7) && (lVar6 = _CFArrayGetValueAtIndex(local_198,0), lVar6 != 0)) {
            lVar7 = _CFDictionaryGetTypeID();
            lVar8 = _CFGetTypeID(lVar6);
            if (lVar7 == lVar8) {
              _CFDictionaryAddValue(lVar6,&cf_CFBundleTypeRole,&cf_Editor);
            }
          }
        }
        if ((((param_4 != 0) &&
             (*(int *)(*(long *)(param_4 + 0x18) + 0xc) != *(int *)(*(long *)(param_4 + 0x18) + 8)))
            && (cVar4 = _CFDictionaryGetValueIfPresent
                                  (local_288,&cf_CFBundleDocumentTypes,&local_240), cVar4 != '\0'))
           && (local_240 != 0)) {
          lVar6 = _CFArrayGetTypeID();
          lVar7 = _CFGetTypeID(local_240);
          if (lVar6 == lVar7) {
            local_260 = *(int **)(param_4 + 0x18);
            if (*local_260 != -1) {
              if (*local_260 == 0) {
                QListData::detach((int)&local_260);
                iVar5 = local_260[2];
                if (iVar5 != local_260[3]) {
                  puVar13 = (undefined8 *)
                            (*(long *)(param_4 + 0x18) + 0x10 +
                            (long)*(int *)(*(long *)(param_4 + 0x18) + 8) * 8);
                  piVar14 = local_260 + (long)iVar5 * 2 + 4;
                  lVar6 = (long)local_260[3] * 8 + (long)iVar5 * -8;
                  do {
                    piVar1 = (int *)*puVar13;
                    *(int **)piVar14 = piVar1;
                    if (1 < *piVar1 + 1U) {
                      LOCK();
                      *piVar1 = *piVar1 + 1;
                      local_199 = *piVar1 != 0;
                      UNLOCK();
                    }
                    piVar14 = piVar14 + 2;
                    puVar13 = puVar13 + 1;
                    lVar6 = lVar6 + -8;
                  } while (lVar6 != 0);
                }
              }
              else {
                LOCK();
                *local_260 = *local_260 + 1;
                local_199 = *local_260 != 0;
                UNLOCK();
              }
            }
            piVar14 = local_260 + (long)local_260[2] * 2 + 4;
            local_250 = local_260 + (long)local_260[3] * 2 + 4;
            puVar18 = PTR_s_stringWithQString__102268d00;
            local_258 = piVar14;
            if (local_260[2] != local_260[3]) {
              do {
                lVar6 = local_240;
                local_248 = 1;
                local_258 = piVar14;
                uVar16 = _objc_autoreleasePoolPush();
                uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                  (PTR__OBJC_CLASS___NSString_10226a7c8,puVar18,piVar14);
                local_1b8 = 0;
                uStack_1b0 = 0;
                local_1c8 = 0;
                uStack_1c0 = 0;
                local_1d8 = (long *)0x0;
                uStack_1d0 = 0;
                local_1e8 = 0;
                lStack_1e0 = 0;
                uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                   (lVar6,PTR_s_countByEnumeratingWithState_obje_102269048,
                                    &local_1e8,local_c8,0x10);
                if (uVar10 != 0) {
                  lVar7 = *local_1d8;
                  do {
                    uVar15 = 0;
                    do {
                      if (*local_1d8 != lVar7) {
                        _objc_enumerationMutation(lVar6);
                      }
                      lVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                        (*(undefined8 *)(lStack_1e0 + uVar15 * 8),
                                         PTR_s_objectForKey__1022699d0,&cf_CFBundleTypeExtensions);
                      if (lVar8 != 0) {
                        local_1f8 = 0;
                        uStack_1f0 = 0;
                        local_208 = 0;
                        uStack_200 = 0;
                        local_218 = (long *)0x0;
                        uStack_210 = 0;
                        local_228 = 0;
                        lStack_220 = 0;
                        uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                           (lVar8,PTR_s_countByEnumeratingWithState_obje_102269048,
                                            &local_228,local_148,0x10);
                        if (uVar11 != 0) {
                          lVar2 = *local_218;
                          do {
                            uVar17 = 0;
                            do {
                              if (*local_218 != lVar2) {
                                _objc_enumerationMutation(lVar8);
                              }
                              lVar12 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                                 (*(undefined8 *)(lStack_220 + uVar17 * 8),
                                                  PTR_s_caseInsensitiveCompare__1022699d8,uVar9);
                              if (lVar12 == 0) {
                                _objc_autoreleasePoolPop(uVar16);
                                puVar18 = PTR_s_stringWithQString__102268d00;
                                goto LAB_10004ad81;
                              }
                              uVar17 = uVar17 + 1;
                            } while (uVar17 < uVar11);
                            uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                               (lVar8,
                                                PTR_s_countByEnumeratingWithState_obje_102269048,
                                                &local_228,local_148,0x10);
                          } while (uVar11 != 0);
                        }
                      }
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < uVar10);
                    uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                       (lVar6,PTR_s_countByEnumeratingWithState_obje_102269048,
                                        &local_1e8,local_c8,0x10);
                    puVar18 = PTR_s_stringWithQString__102268d00;
                  } while (uVar10 != 0);
                }
                local_188 = &cf_CFBundleTypeExtensions;
                local_190 = uVar9;
                local_168 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                      (PTR__OBJC_CLASS___NSArray_10226a818,
                                       PTR_s_arrayWithObjects_count__102268f00,&local_190,1);
                puVar3 = PTR__OBJC_CLASS___NSString_10226a7c8;
                local_180 = &cf_CFBundleTypeRole;
                local_160 = &cf_Editor;
                local_178 = &cf_CFBundleTypeName;
                QString::toUpper();
                local_230.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_238;
                if (1 < *(int *)local_238 + 1U) {
                  LOCK();
                  *(int *)local_238 = *(int *)local_238 + 1;
                  local_199 = *(int *)local_238 != 0;
                  UNLOCK();
                }
                QString::fromUtf8_helper((char *)&local_1a8,0x1db731f);
                QString::append(&local_230);
                if (*(int *)local_1a8 != -1) {
                  if (*(int *)local_1a8 != 0) {
                    LOCK();
                    *(int *)local_1a8 = *(int *)local_1a8 + -1;
                    local_199 = *(int *)local_1a8 != 0;
                    UNLOCK();
                    if ((bool)local_199) goto LAB_10004ac78;
                  }
                  QArrayData::deallocate(local_1a8,2,8);
                }
LAB_10004ac78:
                local_158 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar3,puVar18,&local_230);
                local_170 = &cf_CFBundleTypeIconFile;
                local_150 = &cf_my_documents_icns;
                uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                  (PTR__OBJC_CLASS___NSDictionary_10226a900,
                                   PTR_s_dictionaryWithObjects_forKeys_co_1022698c8,&local_168,
                                   &local_188,4);
                if (*(int *)local_230.field0_0x0 != -1) {
                  if (*(int *)local_230.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + -1;
                    local_199 = *(int *)local_230.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_199) goto LAB_10004ad15;
                  }
                  QArrayData::deallocate((QArrayData *)local_230.field0_0x0,2,8);
                }
LAB_10004ad15:
                if (*(int *)local_238 != -1) {
                  if (*(int *)local_238 != 0) {
                    LOCK();
                    *(int *)local_238 = *(int *)local_238 + -1;
                    local_199 = *(int *)local_238 != 0;
                    UNLOCK();
                    if ((bool)local_199) goto LAB_10004ad51;
                  }
                  QArrayData::deallocate(local_238,2,8);
                }
LAB_10004ad51:
                (*(code *)PTR__objc_msgSend_1021e1c68)(lVar6,PTR_s_addObject__1022692e8,uVar9);
                _objc_autoreleasePoolPop(uVar16);
LAB_10004ad81:
                piVar14 = local_258 + 2;
                local_258 = piVar14;
              } while (piVar14 != local_250);
            }
            local_248 = 1;
            FUN_100039a80(&local_260);
          }
        }
        lVar6 = local_268;
        if ((local_278 & 1) == 0) {
          lVar6 = (long)&local_278 + 1;
        }
        iVar5 = FUN_100d77270(lVar6,local_288,local_280);
        uVar16 = 0;
        if ((iVar5 != 0) && (uVar16 = 0xffffffff, 0 < DAT_10230ffd0)) {
          lVar6 = local_268;
          if ((local_278 & 1) == 0) {
            lVar6 = (long)&local_278 + 1;
          }
          FUN_100df99c0("SGASMGMT","prl_client_app",1,"property list write err %i, path=\"%s\"",
                        iVar5,lVar6);
        }
      }
    }
    else {
      uVar16 = 0xffffffff;
      if (0 < DAT_10230ffd0) {
        lVar6 = local_268;
        if ((local_278 & 1) == 0) {
          lVar6 = (long)&local_278 + 1;
        }
        FUN_100df99c0("SGASMGMT","prl_client_app",1,"property list is not a dictionary, path=\"%s\""
                      ,lVar6);
      }
    }
    _CFRelease(local_288);
  }
  else {
    uVar16 = 0xffffffff;
    if (0 < DAT_10230ffd0) {
      lVar6 = local_268;
      if ((local_278 & 1) == 0) {
        lVar6 = (long)&local_278 + 1;
      }
      FUN_100df99c0("SGASMGMT","prl_client_app",1,"property list read err %i, path=\"%s\"",iVar5,
                    lVar6);
    }
  }
  std::string::~string((string *)&local_2c8);
  std::string::~string((string *)&local_2a8);
  if (*(int *)local_290.field0_0x0 != -1) {
    if (*(int *)local_290.field0_0x0 != 0) {
      LOCK();
      *(int *)local_290.field0_0x0 = *(int *)local_290.field0_0x0 + -1;
      local_199 = *(int *)local_290.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_199) goto LAB_10004ae9a;
    }
    QArrayData::deallocate((QArrayData *)local_290.field0_0x0,2,8);
  }
LAB_10004ae9a:
  std::string::~string((string *)&local_278);
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar16;
}

