
undefined8 FUN_1003dde00(long param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  _func_void_Node_ptr *p_Var8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  _func_void_Node_ptr *p_Var11;
  Data *pDVar12;
  _func_void_Node_ptr *p_Var13;
  QArrayData *pQVar14;
  undefined8 uVar15;
  char *pcVar16;
  _func_void_Node_ptr *p_Var17;
  long lVar18;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  _func_void_Node_ptr *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a1;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QString local_88;
  QArrayData *local_80;
  Data *local_78;
  QArrayData *local_70;
  QRegExp local_68 [8];
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  CVmDevice::getSystemName();
  QString::operator=(&local_48,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003dde7a;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1003dde7a:
  CVmDevice::getUserFriendlyName();
  QString::operator=(&local_50,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ddec3;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1003ddec3:
  local_70 = (QArrayData *)QString::fromAscii_helper("\\(.*\\)",6);
  QRegExp::QRegExp(local_68,&local_70,1,0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ddf1c;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003ddf1c:
  QRegExp::indexIn(local_68,&local_50,0,0);
  QRegExp::capturedTexts();
  if (*(uint *)(local_78 + 0xc) - *(uint *)(local_78 + 8) == 1) {
    if (*(uint *)local_78 < 2) {
      iVar6 = (int)local_78 + 0x10 + *(uint *)(local_78 + 8) * 8;
    }
    else {
      FUN_100022c80(&local_78,*(uint *)(local_78 + 4));
      iVar6 = (int)local_78 + 0x10 + *(uint *)(local_78 + 8) * 8;
      if (1 < *(uint *)local_78) {
        FUN_100022c80(&local_78,*(uint *)(local_78 + 4));
      }
    }
    QString::mid((int)&local_90,iVar6);
    QString::operator=(&local_50,&local_90);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003de0ba;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] Strange friendly printer name %s",
                  local_80 + *(long *)(local_80 + 0x10));
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003ddff1;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_1003ddff1:
    local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
    QString::operator=(&local_50,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003de0ba;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
  }
LAB_1003de0ba:
  QString::toUtf8();
  pQVar14 = local_98;
  lVar18 = *(long *)(local_98 + 0x10);
  QString::toUtf8();
  pcVar16 = "";
  FUN_1008e3970("","LocalDevices",0,
                "[CParallelPrinter] UI settings for printer: system name = %s, friendly name = %s",
                pQVar14 + lVar18,local_a0 + *(long *)(local_a0 + 0x10));
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003de150;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_1003de150:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003de186;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_1003de186:
  cVar5 = FUN_10009e450();
  if (cVar5 == '\0') {
LAB_1003de1e2:
    local_d0 = (_func_void_Node_ptr *)PTR_shared_null_100ba2180;
    local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    uVar2 = *(uint *)(DAT_1011c3698 + 0x5c0);
    iVar6 = FUN_1003def60(param_1,&local_b0);
    uVar15 = 1;
    if (-1 < iVar6) {
      iVar6 = _PMCreateSession(&local_b8);
      if (iVar6 == 0) {
        iVar6 = _PMSessionSetCurrentPMPrinter(local_b8,local_b0);
        if (iVar6 == 0) {
          iVar6 = _PMCreatePrintSettings(&local_c0);
          if (iVar6 == 0) {
            iVar6 = _PMSessionDefaultPrintSettings(local_b8,local_c0);
            if (iVar6 == 0) {
              _PMPrintSettingsSetJobName(local_c0,&cf_ParallelsPrintJob);
              iVar6 = _PMCreatePageFormat(&local_c8);
              if (iVar6 == 0) {
                iVar6 = _PMSessionDefaultPageFormat(local_b8,local_c8);
                if (iVar6 == 0) {
                  iVar6 = _PMSessionValidatePageFormat(local_b8,local_c8,&local_a1);
                  if (iVar6 == 0) {
                    iVar6 = _PMSessionValidatePrintSettings(local_b8,local_c0,&local_a1);
                    if (iVar6 == 0) {
                      QString::toUtf8();
                      if ((1 < *(uint *)local_e0) || (*(long *)(local_e0 + 0x10) != 0x18)) {
                        QByteArray::reallocData
                                  (&local_e0,*(uint *)(local_e0 + 4) + 1,
                                   *(uint *)(local_e0 + 8) >> 0x1f);
                      }
                      pQVar14 = local_e0;
                      lVar18 = *(long *)(local_e0 + 0x10);
                      QString::toUtf8();
                      lVar18 = _CFURLCreateWithBytes
                                         (*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,
                                          pQVar14 + lVar18,(long)*(int *)(local_e8 + 4),0x8000100,0)
                      ;
                      if (*(int *)local_e8 != -1) {
                        if (*(int *)local_e8 != 0) {
                          LOCK();
                          *(int *)local_e8 = *(int *)local_e8 + -1;
                          local_31 = *(int *)local_e8 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_1003de52a;
                        }
                        QArrayData::deallocate(local_e8,1,8);
                      }
LAB_1003de52a:
                      if (*(int *)local_e0 != -1) {
                        if (*(int *)local_e0 != 0) {
                          LOCK();
                          *(int *)local_e0 = *(int *)local_e0 + -1;
                          local_31 = *(int *)local_e0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_1003de560;
                        }
                        QArrayData::deallocate(local_e0,1,8);
                      }
LAB_1003de560:
                      if (lVar18 == 0) {
                        uVar15 = 1;
                        FUN_1008e3970("","LocalDevices",0,
                                      "[CParallelPrinter] Error allocating memory for printer job URL"
                                     );
                      }
                      else {
                        FUN_1003df260();
                        if ((uVar2 & 0xffffff00) == 0xc00) {
                          pcVar16 = "text/plain";
                        }
                        pcVar16 = (char *)FUN_1007da5e0("devices.printer.mime",pcVar16);
                        if (pcVar16 != (char *)0x0) {
                          _strlen(pcVar16);
                        }
                        QString::fromUtf8_helper((char *)&local_40,(int)pcVar16);
                        QString::operator=(&local_d8,&local_40);
                        if (*(int *)local_40.field0_0x0 != -1) {
                          if (*(int *)local_40.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
                            local_31 = *(int *)local_40.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1003de610;
                          }
                          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
                        }
LAB_1003de610:
                        pcVar9 = (cfstringStruct *)0x0;
                        if (*(int *)(local_d8.field0_0x0 + 4) != 0) {
                          QString::toUtf8();
                          FUN_1008e3970("","LocalDevices",0,
                                        "[CParallelPrinter] User selected type: %s",
                                        local_f0 + *(long *)(local_f0 + 0x10));
                          if (*(int *)local_f0 != -1) {
                            if (*(int *)local_f0 != 0) {
                              LOCK();
                              *(int *)local_f0 = *(int *)local_f0 + -1;
                              local_31 = *(int *)local_f0 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1003de696;
                            }
                            QArrayData::deallocate(local_f0,1,8);
                          }
LAB_1003de696:
                          p_Var8 = local_d0;
                          uVar2 = *(uint *)(local_d0 + 0x20);
                          if (uVar2 != 0) {
                            uVar7 = qHash(&local_d8,*(uint *)(local_d0 + 0x24));
                            uVar3 = (ulong)uVar7 % (ulong)uVar2;
                            p_Var13 = *(_func_void_Node_ptr **)(*(long *)(p_Var8 + 8) + uVar3 * 8);
                            if (p_Var13 != p_Var8) {
                              p_Var11 = (_func_void_Node_ptr *)(*(long *)(p_Var8 + 8) + uVar3 * 8);
                              do {
                                p_Var17 = p_Var8;
                                if (*(uint *)(p_Var13 + 8) == uVar7) {
                                  cVar5 = operator==(&local_d8,(QString *)(p_Var13 + 0x10));
                                  p_Var8 = *(_func_void_Node_ptr **)p_Var11;
                                  p_Var13 = p_Var8;
                                  p_Var17 = local_d0;
                                  if (cVar5 != '\0') break;
                                }
                                p_Var8 = p_Var17;
                                p_Var11 = p_Var13;
                                p_Var13 = *(_func_void_Node_ptr **)p_Var11;
                                p_Var17 = p_Var8;
                              } while (p_Var13 != p_Var8);
                              if (p_Var8 != p_Var17) {
                                pcVar9 = (cfstringStruct *)FUN_100788e00(&local_d8);
                                goto LAB_1003de775;
                              }
                            }
                          }
                          FUN_1008e3970("","LocalDevices",0,
                                        "[CParallelPrinter] Requested mime type is supported by printer!"
                                       );
                          pcVar9 = (cfstringStruct *)0x0;
                          FUN_1003df3d0();
                        }
LAB_1003de775:
                        pcVar10 = &cf_application_postscript;
                        if (pcVar9 != (cfstringStruct *)0x0) {
                          pcVar10 = pcVar9;
                        }
                        iVar6 = _PMPrinterPrintWithFile(local_b0,local_c0,local_c8,pcVar10,lVar18);
                        if (iVar6 == 0) {
                          uVar15 = 0;
                          if (pcVar9 != (cfstringStruct *)0x0) {
                            _CFRelease(pcVar9);
                          }
                        }
                        else {
                          uVar15 = 1;
                          FUN_1008e3970("","LocalDevices",0,
                                        "[CParallelPrinter] Error printing with file: %d",iVar6);
                        }
                        _CFRelease(lVar18);
                      }
                    }
                    else {
                      uVar15 = 1;
                      FUN_1008e3970("","LocalDevices",0,
                                    "[CParallelPrinter] Error validating print settings: %d",iVar6);
                    }
                  }
                  else {
                    uVar15 = 1;
                    FUN_1008e3970("","LocalDevices",0,
                                  "[CParallelPrinter] Error validating page format: %d",iVar6);
                  }
                }
                else {
                  uVar15 = 1;
                  FUN_1008e3970("","LocalDevices",0,
                                "[CParallelPrinter] Error setting default page format: %d",iVar6);
                }
                _PMRelease(local_c8);
              }
              else {
                uVar15 = 1;
                FUN_1008e3970("","LocalDevices",0,
                              "[CParallelPrinter] Error creating page format: %d",iVar6);
              }
            }
            else {
              uVar15 = 1;
              FUN_1008e3970("","LocalDevices",0,
                            "[CParallelPrinter] Error setting default printer settings: %d",iVar6);
            }
            _PMRelease(local_c0);
          }
          else {
            uVar15 = 1;
            FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] Error creating print settings: %d"
                          ,iVar6);
          }
        }
        else {
          uVar15 = 1;
          FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] Error setting current printer: %d",
                        iVar6);
        }
        _PMRelease(local_b8);
      }
      else {
        FUN_1008e3970("","LocalDevices",0,
                      "[CParallelPrinter] Error initializing printer session: %d",iVar6);
        uVar15 = 1;
      }
      _PMRelease(local_b0);
    }
    puVar4 = PTR_shared_null_100ba20d0;
    if (*(int *)PTR_shared_null_100ba20d0 != -1) {
      if (*(int *)PTR_shared_null_100ba20d0 == 0) {
LAB_1003de83e:
        QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
      }
      else {
        LOCK();
        *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
        local_31 = *(int *)puVar4 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_1003de83e;
      }
      puVar4 = PTR_shared_null_100ba20d0;
      if (*(int *)PTR_shared_null_100ba20d0 != -1) {
        if (*(int *)PTR_shared_null_100ba20d0 != 0) {
          LOCK();
          *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
          local_31 = *(int *)puVar4 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003de891;
        }
        QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
      }
    }
LAB_1003de891:
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_31 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003de8c7;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
LAB_1003de8c7:
    if (*(int *)(local_d0 + 0x10) != -1) {
      if (*(int *)(local_d0 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_d0 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003de8fc;
      }
      QHashData::free_helper(local_d0);
    }
  }
  else {
    iVar6 = FUN_100264780(param_1,&local_48,&local_50,param_2,*(undefined4 *)(param_1 + 0x110),
                          *(undefined4 *)(param_1 + 0x114));
    uVar15 = 0;
    if (iVar6 < 0) {
      FUN_1008e3970("","LocalDevices",0,
                    "[CParallelPrinter] Print by GUI failed (0x%08x), start print directly",iVar6);
      goto LAB_1003de1e2;
    }
  }
LAB_1003de8fc:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003de981;
    }
    iVar6 = *(int *)(local_78 + 0xc);
    if (iVar6 != *(int *)(local_78 + 8)) {
      lVar18 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar6 * -8;
      pDVar12 = local_78 + (long)iVar6 * 8 + 8;
      do {
        pQVar14 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar14 == 0) {
LAB_1003de960:
          QArrayData::deallocate(pQVar14,2,8);
        }
        else if (*(int *)pQVar14 != -1) {
          LOCK();
          *(int *)pQVar14 = *(int *)pQVar14 + -1;
          local_31 = *(int *)pQVar14 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar14 = *(QArrayData **)pDVar12;
            goto LAB_1003de960;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar18 = lVar18 + 8;
      } while (lVar18 != 0);
    }
    QListData::dispose(local_78);
  }
LAB_1003de981:
  QRegExp::~QRegExp(local_68);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003de9ba;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1003de9ba:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar15;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar15;
}

