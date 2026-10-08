
void FUN_100a12ce0(long param_1,int param_2,QVariant *param_3,long *param_4)

{
  code *pcVar1;
  uint uVar2;
  QMapNodeBase *pQVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  size_t sVar11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  int *piVar13;
  ulong *puVar14;
  undefined4 uVar15;
  long lVar16;
  _func_void_Node_ptr_void_ptr *p_Var17;
  Data_conflict *pDVar18;
  _func_void_Node_ptr_void_ptr *p_Var19;
  long lVar20;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QVariant local_118;
  QString local_108;
  QVariant local_100;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  QString local_98;
  QMapNodeBase *local_90;
  QVariant local_88;
  QArrayData *local_78;
  Data_conflict local_70;
  undefined4 local_68;
  QString local_60;
  QMapNodeBase *local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  *(undefined4 *)(param_1 + 0x58) = 0x80000001;
  if (param_2 - 200U < 100) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    goto LAB_100a13c8c;
  }
  QVariant::toMap();
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("msg",3);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  if (*(long *)(local_58 + 0x10) == 0) {
LAB_100a12dc7:
    lVar16 = 0;
  }
  else {
    lVar6 = *(long *)(local_58 + 0x10);
    lVar20 = 0;
    do {
      while (lVar16 = lVar6, cVar7 = operator<((QString *)(lVar16 + 0x18),&local_60), cVar7 == '\0')
      {
        lVar6 = *(long *)(lVar16 + 8);
        lVar20 = lVar16;
        if (*(long *)(lVar16 + 8) == 0) goto LAB_100a12db6;
      }
      lVar6 = *(long *)(lVar16 + 0x10);
    } while (*(long *)(lVar16 + 0x10) != 0);
    lVar16 = lVar20;
    if (lVar20 == 0) goto LAB_100a12dc7;
LAB_100a12db6:
    cVar7 = operator<(&local_60,(QString *)(lVar16 + 0x18));
    if (cVar7 != '\0') goto LAB_100a12dc7;
  }
  pDVar18 = &local_70;
  if (lVar16 != 0) {
    pDVar18 = (Data_conflict *)(lVar16 + 0x20);
  }
  QVariant::QVariant(&local_50,(QVariant *)pDVar18);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_70);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a12e31;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100a12e31:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a12e79;
    }
    if (*(long *)(local_58 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_58,(int)*(undefined8 *)(local_58 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_58);
  }
LAB_100a12e79:
  QVariant::toMap();
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("details",7);
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  if (*(long *)(local_90 + 0x10) == 0) {
LAB_100a12f2a:
    lVar16 = 0;
  }
  else {
    lVar6 = *(long *)(local_90 + 0x10);
    lVar20 = 0;
    do {
      while (lVar16 = lVar6, cVar7 = operator<((QString *)(lVar16 + 0x18),&local_98), cVar7 == '\0')
      {
        lVar6 = *(long *)(lVar16 + 8);
        lVar20 = lVar16;
        if (*(long *)(lVar16 + 8) == 0) goto LAB_100a12f16;
      }
      lVar6 = *(long *)(lVar16 + 0x10);
    } while (*(long *)(lVar16 + 0x10) != 0);
    lVar16 = lVar20;
    if (lVar20 == 0) goto LAB_100a12f2a;
LAB_100a12f16:
    cVar7 = operator<(&local_98,(QString *)(lVar16 + 0x18));
    if (cVar7 != '\0') goto LAB_100a12f2a;
  }
  pDVar18 = &local_a8;
  if (lVar16 != 0) {
    pDVar18 = (Data_conflict *)(lVar16 + 0x20);
  }
  QVariant::QVariant(&local_88,(QVariant *)pDVar18);
  QVariant::toString();
  QVariant::~QVariant(&local_88);
  QVariant::~QVariant((QVariant *)&local_a8);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a12f9f;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100a12f9f:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a12fed;
    }
    if (*(long *)(local_90 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_90,(int)*(undefined8 *)(local_90 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_90);
  }
LAB_100a12fed:
  if (param_2 == 0x199) {
    local_128 = (QArrayData *)QString::fromAscii_helper("license is up to date",0x15);
    iVar8 = QString::indexOf(&local_40,&local_128,0,1);
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a1305d;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_100a1305d:
    if (iVar8 == -1) {
      local_130 = (QArrayData *)QString::fromAscii_helper("master key reached limit",0x18);
      iVar8 = QString::indexOf(&local_40,&local_130,0,1);
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a131d4;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_100a131d4:
      if (iVar8 == -1) {
        local_138 = (QArrayData *)QString::fromAscii_helper("master key is expired",0x15);
        iVar8 = QString::indexOf(&local_40,&local_138,0,1);
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a1324d;
          }
          QArrayData::deallocate(local_138,2,8);
        }
LAB_100a1324d:
        if (iVar8 == -1) {
          local_140 = (QArrayData *)QString::fromAscii_helper("master key is blacklisted",0x19);
          iVar8 = QString::indexOf(&local_40,&local_140,0,1);
          if (*(int *)local_140 != -1) {
            if (*(int *)local_140 != 0) {
              LOCK();
              *(int *)local_140 = *(int *)local_140 + -1;
              local_31 = *(int *)local_140 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a13347;
            }
            QArrayData::deallocate(local_140,2,8);
          }
LAB_100a13347:
          if (iVar8 == -1) {
            local_148 = (QArrayData *)QString::fromAscii_helper("host is blocked",0xf);
            iVar8 = QString::indexOf(&local_40,&local_148,0,1);
            if (*(int *)local_148 != -1) {
              if (*(int *)local_148 != 0) {
                LOCK();
                *(int *)local_148 = *(int *)local_148 + -1;
                local_31 = *(int *)local_148 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100a13441;
              }
              QArrayData::deallocate(local_148,2,8);
            }
LAB_100a13441:
            if (iVar8 == -1) {
              local_150 = (QArrayData *)QString::fromAscii_helper("host is deactivated",0x13);
              iVar8 = QString::indexOf(&local_40,&local_150,0,1);
              if (*(int *)local_150 != -1) {
                if (*(int *)local_150 != 0) {
                  LOCK();
                  *(int *)local_150 = *(int *)local_150 + -1;
                  local_31 = *(int *)local_150 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100a1353b;
                }
                QArrayData::deallocate(local_150,2,8);
              }
LAB_100a1353b:
              if (iVar8 == -1) {
                local_158 = (QArrayData *)
                            QString::fromAscii_helper("license upgrade is unavailable",0x1e);
                iVar8 = QString::indexOf(&local_40,&local_158,0,1);
                if (*(int *)local_158 != -1) {
                  if (*(int *)local_158 != 0) {
                    LOCK();
                    *(int *)local_158 = *(int *)local_158 + -1;
                    local_31 = *(int *)local_158 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100a13635;
                  }
                  QArrayData::deallocate(local_158,2,8);
                }
LAB_100a13635:
                if (iVar8 == -1) {
                  local_160 = (QArrayData *)QString::fromAscii_helper("invalid license owner",0x15);
                  iVar8 = QString::indexOf(&local_40,&local_160,0,1);
                  if (*(int *)local_160 != -1) {
                    if (*(int *)local_160 != 0) {
                      LOCK();
                      *(int *)local_160 = *(int *)local_160 + -1;
                      local_31 = *(int *)local_160 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100a1372f;
                    }
                    QArrayData::deallocate(local_160,2,8);
                  }
LAB_100a1372f:
                  if (iVar8 == -1) {
                    local_168 = (QArrayData *)QString::fromAscii_helper("hosts pool exceeded",0x13);
                    iVar8 = QString::indexOf(&local_40,&local_168,0,1);
                    if (*(int *)local_168 != -1) {
                      if (*(int *)local_168 != 0) {
                        LOCK();
                        *(int *)local_168 = *(int *)local_168 + -1;
                        local_31 = *(int *)local_168 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100a13829;
                      }
                      QArrayData::deallocate(local_168,2,8);
                    }
LAB_100a13829:
                    if (iVar8 == -1) {
                      local_170 = (QArrayData *)
                                  QString::fromAscii_helper("deactivation needed",0x13);
                      iVar8 = QString::indexOf(&local_40,&local_170,0,1);
                      if (*(int *)local_170 != -1) {
                        if (*(int *)local_170 != 0) {
                          LOCK();
                          *(int *)local_170 = *(int *)local_170 + -1;
                          local_31 = *(int *)local_170 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100a13a4e;
                        }
                        QArrayData::deallocate(local_170,2,8);
                      }
LAB_100a13a4e:
                      if (iVar8 == -1) {
                        local_178 = (QArrayData *)QString::fromAscii_helper("not eligible key",0x10)
                        ;
                        iVar8 = QString::indexOf(&local_40,&local_178,0,1);
                        if (*(int *)local_178 != -1) {
                          if (*(int *)local_178 != 0) {
                            LOCK();
                            *(int *)local_178 = *(int *)local_178 + -1;
                            local_31 = *(int *)local_178 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_100a13ac7;
                          }
                          QArrayData::deallocate(local_178,2,8);
                        }
LAB_100a13ac7:
                        if (iVar8 == -1) {
                          local_180 = (QArrayData *)
                                      QString::fromAscii_helper("invalid plan for domain type",0x1c)
                          ;
                          iVar8 = QString::indexOf(&local_40,&local_180,0,1);
                          if (*(int *)local_180 != -1) {
                            if (*(int *)local_180 != 0) {
                              LOCK();
                              *(int *)local_180 = *(int *)local_180 + -1;
                              local_31 = *(int *)local_180 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_100a13dc3;
                            }
                            QArrayData::deallocate(local_180,2,8);
                          }
LAB_100a13dc3:
                          if (iVar8 == -1) {
                            local_188 = (QArrayData *)
                                        QString::fromAscii_helper("previous key required",0x15);
                            iVar8 = QString::indexOf(&local_40,&local_188,0,1);
                            if (*(int *)local_188 != -1) {
                              if (*(int *)local_188 != 0) {
                                LOCK();
                                *(int *)local_188 = *(int *)local_188 + -1;
                                local_31 = *(int *)local_188 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_100a13e3c;
                              }
                              QArrayData::deallocate(local_188,2,8);
                            }
LAB_100a13e3c:
                            if (iVar8 == -1) {
                              local_190 = (QArrayData *)
                                          QString::fromAscii_helper("invalid previous key",0x14);
                              iVar8 = QString::indexOf(&local_40,&local_190,0,1);
                              if (*(int *)local_190 != -1) {
                                if (*(int *)local_190 != 0) {
                                  LOCK();
                                  *(int *)local_190 = *(int *)local_190 + -1;
                                  local_31 = *(int *)local_190 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_100a13ecd;
                                }
                                QArrayData::deallocate(local_190,2,8);
                              }
LAB_100a13ecd:
                              if (iVar8 == -1) {
                                local_198 = (QArrayData *)
                                            QString::fromAscii_helper
                                                      ("UK matching request does not exist",0x22);
                                iVar8 = QString::indexOf(&local_40,&local_198,0,1);
                                if (*(int *)local_198 != -1) {
                                  if (*(int *)local_198 != 0) {
                                    LOCK();
                                    *(int *)local_198 = *(int *)local_198 + -1;
                                    local_31 = *(int *)local_198 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_100a14095;
                                  }
                                  QArrayData::deallocate(local_198,2,8);
                                }
LAB_100a14095:
                                if (iVar8 == -1) {
                                  local_1a0 = (QArrayData *)
                                              QString::fromAscii_helper
                                                        ("invalid universal key",0x15);
                                  iVar8 = QString::indexOf(&local_40,&local_1a0,0,1);
                                  if (*(int *)local_1a0 != -1) {
                                    if (*(int *)local_1a0 != 0) {
                                      LOCK();
                                      *(int *)local_1a0 = *(int *)local_1a0 + -1;
                                      local_31 = *(int *)local_1a0 != 0;
                                      UNLOCK();
                                      if ((bool)local_31) goto LAB_100a1419e;
                                    }
                                    QArrayData::deallocate(local_1a0,2,8);
                                  }
LAB_100a1419e:
                                  if (iVar8 == -1) {
                                    local_1b0 = (QArrayData *)
                                                QString::fromAscii_helper
                                                          (
                                                  "license key can\'t be used for extending",0x27);
                                    iVar8 = QString::indexOf(&local_40,&local_1b0,0,1);
                                    if (*(int *)local_1b0 != -1) {
                                      if (*(int *)local_1b0 != 0) {
                                        LOCK();
                                        *(int *)local_1b0 = *(int *)local_1b0 + -1;
                                        local_31 = *(int *)local_1b0 != 0;
                                        UNLOCK();
                                        if ((bool)local_31) goto LAB_100a14320;
                                      }
                                      QArrayData::deallocate(local_1b0,2,8);
                                    }
LAB_100a14320:
                                    if (iVar8 == -1) {
                                      local_1b8 = (QArrayData *)
                                                  QString::fromAscii_helper
                                                            ("subscription can\'t be extended",0x1e)
                                      ;
                                      iVar8 = QString::indexOf(&local_40,&local_1b8,0,1);
                                      if (*(int *)local_1b8 != -1) {
                                        if (*(int *)local_1b8 != 0) {
                                          LOCK();
                                          *(int *)local_1b8 = *(int *)local_1b8 + -1;
                                          local_31 = *(int *)local_1b8 != 0;
                                          UNLOCK();
                                          if ((bool)local_31) goto LAB_100a14429;
                                        }
                                        QArrayData::deallocate(local_1b8,2,8);
                                      }
LAB_100a14429:
                                      if (iVar8 == -1) {
                                        local_1c0 = (QArrayData *)
                                                    QString::fromAscii_helper
                                                              ("invalid license key",0x13);
                                        iVar8 = QString::indexOf(&local_40,&local_1c0,0,1);
                                        if (*(int *)local_1c0 != -1) {
                                          if (*(int *)local_1c0 != 0) {
                                            LOCK();
                                            *(int *)local_1c0 = *(int *)local_1c0 + -1;
                                            local_31 = *(int *)local_1c0 != 0;
                                            UNLOCK();
                                            if ((bool)local_31) goto LAB_100a14532;
                                          }
                                          QArrayData::deallocate(local_1c0,2,8);
                                        }
LAB_100a14532:
                                        if (iVar8 == -1) {
                                          local_1c8 = (QArrayData *)
                                                      QString::fromAscii_helper
                                                                (
                                                  "this license key cannot be used anymore",0x27);
                                          iVar8 = QString::indexOf(&local_40,&local_1c8,0,1);
                                          if (*(int *)local_1c8 != -1) {
                                            if (*(int *)local_1c8 != 0) {
                                              LOCK();
                                              *(int *)local_1c8 = *(int *)local_1c8 + -1;
                                              local_31 = *(int *)local_1c8 != 0;
                                              UNLOCK();
                                              if ((bool)local_31) goto LAB_100a1463b;
                                            }
                                            QArrayData::deallocate(local_1c8,2,8);
                                          }
LAB_100a1463b:
                                          if (iVar8 == -1) {
                                            local_1d0 = (QArrayData *)
                                                        QString::fromAscii_helper
                                                                  ("blacklisted license key",0x17);
                                            iVar8 = QString::indexOf(&local_40,&local_1d0,0,1);
                                            if (*(int *)local_1d0 != -1) {
                                              if (*(int *)local_1d0 != 0) {
                                                LOCK();
                                                *(int *)local_1d0 = *(int *)local_1d0 + -1;
                                                local_31 = *(int *)local_1d0 != 0;
                                                UNLOCK();
                                                if ((bool)local_31) goto LAB_100a14744;
                                              }
                                              QArrayData::deallocate(local_1d0,2,8);
                                            }
LAB_100a14744:
                                            if (iVar8 != -1) {
                                              *(undefined4 *)(param_1 + 0x58) = 0x80047019;
                                            }
                                          }
                                          else {
                                            *(undefined4 *)(param_1 + 0x58) = 0x80047063;
                                          }
                                        }
                                        else {
                                          *(undefined4 *)(param_1 + 0x58) = 0x80047059;
                                        }
                                      }
                                      else {
                                        *(undefined4 *)(param_1 + 0x58) = 0x80047062;
                                      }
                                    }
                                    else {
                                      *(undefined4 *)(param_1 + 0x58) = 0x80047061;
                                    }
                                  }
                                  else {
                                    local_1a8 = (QArrayData *)
                                                QString::fromAscii_helper("invalid posa",0xc);
                                    iVar8 = QString::indexOf(&local_78,&local_1a8,0,1);
                                    uVar15 = 0x80047060;
                                    if (iVar8 == -1) {
                                      uVar15 = 0x80047059;
                                    }
                                    *(undefined4 *)(param_1 + 0x58) = uVar15;
                                    if (*(int *)local_1a8 != -1) {
                                      if (*(int *)local_1a8 != 0) {
                                        LOCK();
                                        *(int *)local_1a8 = *(int *)local_1a8 + -1;
                                        local_31 = *(int *)local_1a8 != 0;
                                        UNLOCK();
                                        if ((bool)local_31) goto LAB_100a13c04;
                                      }
                                      QArrayData::deallocate(local_1a8,2,8);
                                    }
                                  }
                                }
                                else {
                                  *(undefined4 *)(param_1 + 0x58) = 0x80047059;
                                }
                              }
                              else {
                                *(undefined4 *)(param_1 + 0x58) = 0x80047058;
                              }
                            }
                            else {
                              *(undefined4 *)(param_1 + 0x58) = 0x80047057;
                            }
                          }
                          else {
                            *(undefined4 *)(param_1 + 0x58) = 0x80047044;
                          }
                        }
                        else {
                          *(undefined4 *)(param_1 + 0x58) = 0x80047042;
                        }
                      }
                      else {
                        *(undefined4 *)(param_1 + 0x58) = 0x80047038;
                      }
                    }
                    else {
                      *(undefined4 *)(param_1 + 0x58) = 0x80047037;
                    }
                  }
                  else {
                    *(undefined4 *)(param_1 + 0x58) = 0x80047036;
                  }
                }
                else {
                  *(undefined4 *)(param_1 + 0x58) = 0x80047035;
                }
              }
              else {
                *(undefined4 *)(param_1 + 0x58) = 0x80047022;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x58) = 0x80047021;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x58) = 0x80047019;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x58) = 0x80047018;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x58) = 0x80047020;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = 0x80047024;
    }
  }
  else if (param_2 == 0x191) {
    local_b0 = (QArrayData *)QString::fromAscii_helper("incorrect credentials",0x15);
    iVar8 = QString::indexOf(&local_40,&local_b0,0,1);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a130e7;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100a130e7:
    if (iVar8 != -1) {
      local_b8 = (QArrayData *)QString::fromAscii_helper("invalid master key",0x12);
      iVar8 = QString::indexOf(&local_78,&local_b8,0,1);
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a13157;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100a13157:
      if (iVar8 == -1) {
        local_c0 = (QArrayData *)QString::fromAscii_helper("invalid temporary key",0x15);
        iVar8 = QString::indexOf(&local_78,&local_c0,0,1);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a132ca;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_100a132ca:
        if (iVar8 == -1) {
          local_c8 = (QArrayData *)QString::fromAscii_helper("expired master key",0x12);
          iVar8 = QString::indexOf(&local_78,&local_c8,0,1);
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a133c4;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
LAB_100a133c4:
          if (iVar8 == -1) {
            local_d0 = (QArrayData *)QString::fromAscii_helper("blacklisted master key",0x16);
            iVar8 = QString::indexOf(&local_78,&local_d0,0,1);
            if (*(int *)local_d0 != -1) {
              if (*(int *)local_d0 != 0) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + -1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100a134be;
              }
              QArrayData::deallocate(local_d0,2,8);
            }
LAB_100a134be:
            if (iVar8 == -1) {
              local_d8 = (QArrayData *)QString::fromAscii_helper("invalid ka master key",0x15);
              iVar8 = QString::indexOf(&local_78,&local_d8,0,1);
              if (*(int *)local_d8 != -1) {
                if (*(int *)local_d8 != 0) {
                  LOCK();
                  *(int *)local_d8 = *(int *)local_d8 + -1;
                  local_31 = *(int *)local_d8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100a135b8;
                }
                QArrayData::deallocate(local_d8,2,8);
              }
LAB_100a135b8:
              if (iVar8 == -1) {
                local_e0 = (QArrayData *)QString::fromAscii_helper("invalid ka temporary key",0x18);
                iVar8 = QString::indexOf(&local_78,&local_e0,0,1);
                if (*(int *)local_e0 != -1) {
                  if (*(int *)local_e0 != 0) {
                    LOCK();
                    *(int *)local_e0 = *(int *)local_e0 + -1;
                    local_31 = *(int *)local_e0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100a136b2;
                  }
                  QArrayData::deallocate(local_e0,2,8);
                }
LAB_100a136b2:
                if (iVar8 == -1) {
                  local_e8 = (QArrayData *)QString::fromAscii_helper("Invalid token",0xd);
                  iVar8 = QString::indexOf(&local_78,&local_e8,0,1);
                  if (*(int *)local_e8 != -1) {
                    if (*(int *)local_e8 != 0) {
                      LOCK();
                      *(int *)local_e8 = *(int *)local_e8 + -1;
                      local_31 = *(int *)local_e8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100a137ac;
                    }
                    QArrayData::deallocate(local_e8,2,8);
                  }
LAB_100a137ac:
                  if (iVar8 == -1) {
                    local_f0 = (QArrayData *)
                               QString::fromAscii_helper("Invalid authorization header",0x1c);
                    iVar8 = QString::indexOf(&local_78,&local_f0,0,1);
                    if (*(int *)local_f0 != -1) {
                      if (*(int *)local_f0 != 0) {
                        LOCK();
                        *(int *)local_f0 = *(int *)local_f0 + -1;
                        local_31 = *(int *)local_f0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100a138a6;
                      }
                      QArrayData::deallocate(local_f0,2,8);
                    }
LAB_100a138a6:
                    if (iVar8 != -1) {
                      p_Var12 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x18);
                      if (1 < *(int *)(p_Var12 + 0x10) + 1U) {
                        LOCK();
                        pcVar1 = p_Var12 + 0x10;
                        *(int *)pcVar1 = *(int *)pcVar1 + 1;
                        local_31 = *(int *)pcVar1 != 0;
                        UNLOCK();
                      }
                      p_Var10 = p_Var12;
                      if ((((byte)p_Var12[0x28] & 1) == 0) && (1 < *(uint *)(p_Var12 + 0x10))) {
                        p_Var10 = (_func_void_Node_ptr_void_ptr *)
                                  QHashData::detach_helper(p_Var12,FUN_100076890,0x76530,0x28);
                        if (*(int *)(p_Var12 + 0x10) != -1) {
                          if (*(int *)(p_Var12 + 0x10) != 0) {
                            LOCK();
                            pcVar1 = p_Var12 + 0x10;
                            *(int *)pcVar1 = *(int *)pcVar1 + -1;
                            local_31 = *(int *)pcVar1 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_100a13929;
                          }
                          QHashData::free_helper((_func_void_Node_ptr *)p_Var12);
                        }
                      }
LAB_100a13929:
                      puVar5 = PTR_s_AuthorizationToken_102280ac0;
                      iVar8 = -1;
                      if (PTR_s_AuthorizationToken_102280ac0 != (undefined *)0x0) {
                        sVar11 = _strlen(PTR_s_AuthorizationToken_102280ac0);
                        iVar8 = (int)sVar11;
                      }
                      local_108.field0_0x0 =
                           (QTypedArrayData<unsigned_short> *)
                           QString::fromAscii_helper(puVar5,iVar8);
                      QVariant::QVariant(&local_118,"not-empty");
                      if (*(int *)(p_Var10 + 0x14) == 0) {
LAB_100a13b1f:
                        QVariant::QVariant(&local_100,&local_118);
                      }
                      else {
                        uVar2 = *(uint *)(p_Var10 + 0x20);
                        p_Var12 = p_Var10;
                        if (uVar2 != 0) {
                          uVar9 = qHash(&local_108,*(uint *)(p_Var10 + 0x24));
                          uVar4 = (ulong)uVar9 % (ulong)uVar2;
                          p_Var19 = *(_func_void_Node_ptr_void_ptr **)
                                     (*(long *)(p_Var10 + 8) + uVar4 * 8);
                          if (p_Var19 != p_Var10) {
                            p_Var17 = (_func_void_Node_ptr_void_ptr *)
                                      (*(long *)(p_Var10 + 8) + uVar4 * 8);
                            do {
                              if (*(uint *)(p_Var19 + 8) == uVar9) {
                                cVar7 = operator==(&local_108,(QString *)(p_Var19 + 0x10));
                                p_Var12 = *(_func_void_Node_ptr_void_ptr **)p_Var17;
                                p_Var19 = *(_func_void_Node_ptr_void_ptr **)p_Var17;
                                if (cVar7 != '\0') break;
                              }
                              p_Var17 = p_Var19;
                              p_Var19 = *(_func_void_Node_ptr_void_ptr **)p_Var17;
                              p_Var12 = p_Var10;
                            } while (p_Var19 != p_Var10);
                          }
                        }
                        if (p_Var12 == p_Var10) goto LAB_100a13b1f;
                        QVariant::QVariant(&local_100,(QVariant *)(p_Var12 + 0x18));
                      }
                      QVariant::~QVariant(&local_118);
                      if (*(int *)local_108.field0_0x0 != -1) {
                        if (*(int *)local_108.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
                          local_31 = *(int *)local_108.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100a13b74;
                        }
                        QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
                      }
LAB_100a13b74:
                      if (*(int *)(p_Var10 + 0x10) != -1) {
                        if (*(int *)(p_Var10 + 0x10) != 0) {
                          LOCK();
                          pcVar1 = p_Var10 + 0x10;
                          *(int *)pcVar1 = *(int *)pcVar1 + -1;
                          local_31 = *(int *)pcVar1 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100a13ba0;
                        }
                        QHashData::free_helper((_func_void_Node_ptr *)p_Var10);
                      }
LAB_100a13ba0:
                      QVariant::toString();
                      iVar8 = *(int *)(local_120 + 4);
                      if (*(int *)local_120 != -1) {
                        if (*(int *)local_120 != 0) {
                          LOCK();
                          *(int *)local_120 = *(int *)local_120 + -1;
                          local_31 = *(int *)local_120 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100a13bec;
                        }
                        QArrayData::deallocate(local_120,2,8);
                      }
LAB_100a13bec:
                      if (iVar8 == 0) {
                        *(undefined4 *)(param_1 + 0x58) = 0x80047030;
                      }
                      QVariant::~QVariant(&local_100);
                    }
                  }
                  else {
                    *(undefined4 *)(param_1 + 0x58) = 0x80047030;
                  }
                }
                else {
                  *(undefined4 *)(param_1 + 0x58) = 0x80047029;
                }
              }
              else {
                *(undefined4 *)(param_1 + 0x58) = 0x80047028;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x58) = 0x80047019;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x58) = 0x80047018;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x58) = 0x80047023;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x58) = 0x80047017;
      }
    }
  }
LAB_100a13c04:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a13c34;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100a13c34:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a13c64;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a13c64:
  if (*(int *)(param_1 + 0x58) == -0x7fffffff) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0x80047025;
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = 0x80047026;
    }
  }
LAB_100a13c8c:
  QVariant::operator=((QVariant *)(param_1 + 0x60),param_3);
  piVar13 = (int *)*param_4;
  if (*(int **)(param_1 + 0x70) != piVar13) {
    if (*piVar13 == 0) {
      piVar13 = (int *)QMapDataBase::createData();
      if (*(long *)(*param_4 + 0x10) != 0) {
        puVar14 = (ulong *)FUN_10008d330(*(long *)(*param_4 + 0x10),piVar13);
        *(ulong **)(piVar13 + 4) = puVar14;
        *puVar14 = *puVar14 & 3 | (ulong)(piVar13 + 2);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else if (*piVar13 != -1) {
      LOCK();
      *piVar13 = *piVar13 + 1;
      local_31 = *piVar13 != 0;
      UNLOCK();
      piVar13 = (int *)*param_4;
    }
    pQVar3 = *(QMapNodeBase **)(param_1 + 0x70);
    *(int **)(param_1 + 0x70) = piVar13;
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_31) {
          return;
        }
      }
      if (*(long *)(pQVar3 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar3);
    }
  }
  return;
}

