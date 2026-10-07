
undefined8 * FUN_10052c370(undefined8 *param_1,QString *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  long lVar13;
  int iVar14;
  uint *puVar15;
  long lVar16;
  undefined1 auVar17 [16];
  int local_c4;
  QArrayData *pQStack_b0;
  uint *local_88;
  QString local_80;
  undefined4 local_78;
  int local_74;
  QArrayData *local_70;
  QArrayData *pQStack_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 local_54;
  QArrayData *local_50;
  QArrayData *pQStack_48;
  undefined1 local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_100ba2188;
  pcVar2 = DAT_1011ccd70;
  uVar4 = (*DAT_1011ccc38)();
  lVar5 = (*pcVar2)(uVar4);
  if (lVar5 != 0) {
    lVar6 = _CFArrayGetCount();
    puVar1 = PTR_shared_null_100ba20d0;
    if (0 < lVar6) {
      auVar17._8_4_ = (int)PTR_shared_null_100ba20d0;
      auVar17._0_8_ = PTR_shared_null_100ba20d0;
      auVar17._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
      lVar16 = 0;
      do {
        lVar7 = _CFArrayGetValueAtIndex(lVar5,lVar16);
        if (lVar7 != 0) {
          lVar8 = _CFGetTypeID(lVar7);
          lVar9 = _CFDictionaryGetTypeID();
          if ((lVar8 == lVar9) &&
             (lVar8 = _CFDictionaryGetValue(lVar7,&cf_DisplayIdentifier), lVar8 != 0)) {
            lVar9 = _CFGetTypeID(lVar8);
            lVar10 = _CFStringGetTypeID();
            if (lVar9 == lVar10) {
              lVar9 = _CFDictionaryGetValue(lVar7,&cf_CurrentSpace);
              local_c4 = 0;
              pQStack_b0 = auVar17._8_8_;
              if (lVar9 != 0) {
                lVar10 = _CFGetTypeID(lVar9);
                lVar11 = _CFDictionaryGetTypeID();
                if (lVar10 == lVar11) {
                  local_78 = 0xffffffff;
                  local_74 = -1;
                  local_70 = (QArrayData *)puVar1;
                  pQStack_68 = pQStack_b0;
                  local_60 = 0;
                  cVar3 = FUN_10052e4e0(lVar9,&local_78);
                  local_c4 = local_74;
                  if (cVar3 == '\0') {
                    local_c4 = 0;
                  }
                  if (*(int *)pQStack_68 != -1) {
                    if (*(int *)pQStack_68 != 0) {
                      LOCK();
                      *(int *)pQStack_68 = *(int *)pQStack_68 + -1;
                      local_31 = *(int *)pQStack_68 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10052c514;
                    }
                    QArrayData::deallocate(pQStack_68,2,8);
                  }
LAB_10052c514:
                  if (*(int *)local_70 != -1) {
                    if (*(int *)local_70 != 0) {
                      LOCK();
                      *(int *)local_70 = *(int *)local_70 + -1;
                      local_31 = *(int *)local_70 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10052c544;
                    }
                    QArrayData::deallocate(local_70,2,8);
                  }
                }
              }
LAB_10052c544:
              lVar7 = _CFDictionaryGetValue(lVar7,&cf_Spaces);
              if (lVar7 != 0) {
                lVar9 = _CFGetTypeID(lVar7);
                lVar10 = _CFArrayGetTypeID();
                if (lVar9 == lVar10) {
                  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0
                  ;
                  lVar9 = _CFStringGetLength(lVar8);
                  lVar10 = _CFStringGetCharactersPtr(lVar8);
                  if (lVar10 == 0) {
                    pvVar12 = _malloc(lVar9 * 2);
                    if (pvVar12 != (void *)0x0) {
                      _CFStringGetCharacters(lVar8,0,lVar9,pvVar12);
                      QString::setUnicode((QChar *)&local_80,(int)pvVar12);
                      _free(pvVar12);
                    }
                  }
                  else {
                    QString::setUnicode((QChar *)&local_80,(int)lVar10);
                  }
                  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
LAB_10052c63c:
                    local_88 = (uint *)PTR_shared_null_100ba2188;
                    lVar8 = _CFArrayGetCount(lVar7);
                    lVar9 = 0;
                    if (0 < lVar8) {
                      do {
                        lVar10 = _CFArrayGetValueAtIndex(lVar7,lVar9);
                        if (lVar10 != 0) {
                          lVar11 = _CFGetTypeID(lVar10);
                          lVar13 = _CFDictionaryGetTypeID();
                          if (lVar11 == lVar13) {
                            local_58 = 0xffffffff;
                            local_54 = 0xffffffff;
                            local_50 = (QArrayData *)puVar1;
                            pQStack_48 = pQStack_b0;
                            local_40 = 0;
                            cVar3 = FUN_10052e4e0(lVar10,&local_58);
                            if (cVar3 != '\0') {
                              FUN_10052e8c0(&local_88,&local_58);
                            }
                            if (*(int *)pQStack_48 != -1) {
                              if (*(int *)pQStack_48 != 0) {
                                LOCK();
                                *(int *)pQStack_48 = *(int *)pQStack_48 + -1;
                                local_31 = *(int *)pQStack_48 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_10052c710;
                              }
                              QArrayData::deallocate(pQStack_48,2,8);
                            }
LAB_10052c710:
                            if (*(int *)local_50 != -1) {
                              if (*(int *)local_50 != 0) {
                                LOCK();
                                *(int *)local_50 = *(int *)local_50 + -1;
                                local_31 = *(int *)local_50 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_10052c740;
                              }
                              QArrayData::deallocate(local_50,2,8);
                            }
                          }
                        }
LAB_10052c740:
                        lVar9 = lVar9 + 1;
                      } while (lVar9 < lVar8);
                    }
                    if (local_c4 != 0) {
                      if (1 < *local_88) {
                        FUN_10052e9e0(&local_88,local_88[1]);
                      }
                      puVar15 = local_88 + (long)(int)local_88[2] * 2 + 4;
                      while( true ) {
                        if (1 < *local_88) {
                          FUN_10052e9e0(&local_88,local_88[1]);
                        }
                        if (puVar15 == local_88 + (long)(int)local_88[3] * 2 + 4) break;
                        lVar7 = *(long *)puVar15;
                        if (*(int *)(lVar7 + 4) == local_c4) {
                          *(undefined1 *)(lVar7 + 0x18) = 1;
                        }
                        QString::operator=((QString *)(lVar7 + 0x10),&local_80);
                        puVar15 = puVar15 + 2;
                      }
                    }
                    FUN_10052ebb0(param_1,&local_88);
                    iVar14 = 0;
                    if (*(int *)(param_2->field0_0x0 + 4) != 0) {
                      iVar14 = 2;
                    }
                    if (*local_88 != 0xffffffff) {
                      if (*local_88 != 0) {
                        LOCK();
                        *local_88 = *local_88 - 1;
                        local_31 = *local_88 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10052c825;
                      }
                      FUN_10052ea90(&local_88,local_88);
                    }
                  }
                  else {
                    cVar3 = operator==(&local_80,param_2);
                    iVar14 = 4;
                    if (cVar3 != '\0') goto LAB_10052c63c;
                  }
LAB_10052c825:
                  if (*(int *)local_80.field0_0x0 != -1) {
                    if (*(int *)local_80.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
                      local_31 = *(int *)local_80.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10052c855;
                    }
                    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
                  }
LAB_10052c855:
                  if (iVar14 == 2) break;
                }
              }
            }
          }
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < lVar6);
    }
    _CFRelease(lVar5);
  }
  return param_1;
}

