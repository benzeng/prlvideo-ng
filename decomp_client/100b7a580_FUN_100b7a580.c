
bool FUN_100b7a580(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  QMapNodeBase *pQVar7;
  bool bVar8;
  QArrayData *local_1a0;
  QString local_198;
  QString local_190;
  QString local_188;
  QString local_180;
  QString local_178;
  QString local_170;
  QString local_168;
  QString local_160;
  QString local_158;
  QString local_150;
  QString local_148;
  QString local_140;
  QString local_138;
  QString local_130;
  QArrayData *local_128;
  QString local_120;
  QDateTime local_118;
  QString local_110;
  QString local_108;
  QArrayData *local_100;
  QString local_f8;
  QDateTime local_f0;
  QString local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QDateTime local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  undefined4 local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QDateTime local_50;
  undefined *local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  pQVar7 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_40 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_48 = PTR_shared_null_1021e12f0;
  QDateTime::QDateTime(&local_50);
  if (param_1 == 0) {
    bVar8 = false;
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmEvent","VzLicense.cpp",
                  0x987,"VmEventToVzLicense");
  }
  else {
    FUN_100b60fd0(param_2);
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    plVar1 = *(long **)(param_1 + 0xf8);
    local_88 = (Data *)*plVar1;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 == 0) {
        QListData::detach((int)&local_88);
        lVar5 = (long)*(int *)(local_88 + 8);
        lVar2 = *plVar1;
        if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_88 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_88 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_88 + 0xc))) {
          _memcpy(local_88 + lVar5 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
    }
    local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
    local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
    if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
      do {
        local_70 = 1;
        CVmEventParameter::getParamName();
        QString::trimmed();
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b7a733;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_100b7a733:
        CVmEventParameter::getParamValue();
        QString::trimmed();
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b7a77f;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_100b7a77f:
        iVar4 = QString::compare_helper
                          ((QArrayData *)
                           (local_90.field0_0x0 + *(long *)(local_90.field0_0x0 + 0x10)),
                           *(undefined4 *)(local_90.field0_0x0 + 4),"vzlicense_original_license_key"
                           ,0xffffffff,1);
        if (iVar4 == 0) {
          if (*(int *)(local_58.field0_0x0 + 4) != 0) {
            FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]",
                          "sLicenseKey.isEmpty()","VzLicense.cpp",0x998,"VmEventToVzLicense");
          }
          QString::operator=(&local_58,&local_a0);
        }
        else {
          iVar4 = QString::compare_helper
                            ((QArrayData *)
                             (local_90.field0_0x0 + *(long *)(local_90.field0_0x0 + 0x10)),
                             *(undefined4 *)(local_90.field0_0x0 + 4),"license_key",0xffffffff,1);
          if (iVar4 == 0) {
            if (*(int *)(local_60.field0_0x0 + 4) != 0) {
              FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]",
                            "sLicenseKeyObsolete.isEmpty()","VzLicense.cpp",0x99e,
                            "VmEventToVzLicense");
            }
            QString::operator=(&local_60,&local_a0);
            QString::operator=(&local_68,&local_a0);
          }
          else {
            iVar4 = QString::compare_helper
                              ((QArrayData *)
                               (local_90.field0_0x0 + *(long *)(local_90.field0_0x0 + 0x10)),
                               *(undefined4 *)(local_90.field0_0x0 + 4),"vzlicense_serial_number",
                               0xffffffff,1);
            if (iVar4 == 0) {
              local_b0.field0_0x0 =
                   (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("serial",6);
              QString::operator=(&local_90,&local_b0);
              if (*(int *)local_b0.field0_0x0 != -1) {
                if (*(int *)local_b0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
                  local_31 = *(int *)local_b0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100b7b6a0;
                }
                QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
              }
            }
            else {
              iVar4 = QString::compare_helper
                                ((QArrayData *)
                                 (local_90.field0_0x0 + *(long *)(local_90.field0_0x0 + 0x10)),
                                 *(undefined4 *)(local_90.field0_0x0 + 4),"vzlicense_key_number",
                                 0xffffffff,1);
              if (iVar4 == 0) {
                local_b8.field0_0x0 =
                     (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("key_number",10);
                QString::operator=(&local_90,&local_b8);
                if (*(int *)local_b8.field0_0x0 != -1) {
                  if (*(int *)local_b8.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
                    local_31 = *(int *)local_b8.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100b7b6a0;
                  }
                  QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
                }
              }
              else {
                iVar4 = QString::compare_helper
                                  ((QArrayData *)
                                   (local_90.field0_0x0 + *(long *)(local_90.field0_0x0 + 0x10)),
                                   *(undefined4 *)(local_90.field0_0x0 + 4),"vzlicense_graceperiod",
                                   0xffffffff,1);
                if (iVar4 == 0) {
                  local_c0.field0_0x0 =
                       (QTypedArrayData<unsigned_short> *)
                       QString::fromAscii_helper("graceperiod",0xb);
                  QString::operator=(&local_90,&local_c0);
                  if (*(int *)local_c0.field0_0x0 != -1) {
                    if (*(int *)local_c0.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                      local_31 = *(int *)local_c0.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100b7b6a0;
                    }
                    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
                  }
                }
                else {
                  iVar4 = QString::compare_helper
                                    ((QArrayData *)
                                     (local_90.field0_0x0 + *(long *)(local_90.field0_0x0 + 0x10)),
                                     *(undefined4 *)(local_90.field0_0x0 + 4),
                                     "vzlicense_expiration_date",0xffffffff,1);
                  if (iVar4 == 0) {
                    local_d0.field0_0x0 = local_a0.field0_0x0;
                    if (1 < *(int *)local_a0.field0_0x0 + 1U) {
                      LOCK();
                      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
                      local_31 = *(int *)local_a0.field0_0x0 != 0;
                      UNLOCK();
                    }
                    local_d8 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
                    QDateTime::fromString((QString *)&local_c8,&local_d0);
                    QDateTime::operator=(&local_50,&local_c8);
                    QDateTime::~QDateTime(&local_c8);
                    if (*(int *)local_d8 != -1) {
                      if (*(int *)local_d8 != 0) {
                        LOCK();
                        *(int *)local_d8 = *(int *)local_d8 + -1;
                        local_31 = *(int *)local_d8 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100b7ae3a;
                      }
                      QArrayData::deallocate(local_d8,2,8);
                    }
LAB_100b7ae3a:
                    if (*(int *)local_d0.field0_0x0 != -1) {
                      if (*(int *)local_d0.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
                        local_31 = *(int *)local_d0.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100b7ae70;
                      }
                      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
                    }
LAB_100b7ae70:
                    local_e0.field0_0x0 =
                         (QTypedArrayData<unsigned_short> *)
                         QString::fromAscii_helper("expiration",10);
                    QString::operator=(&local_90,&local_e0);
                    if (*(int *)local_e0.field0_0x0 != -1) {
                      if (*(int *)local_e0.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
                        local_31 = *(int *)local_e0.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100b7aed1;
                      }
                      QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
                    }
LAB_100b7aed1:
                    QDateTime::toString(&local_e8,&local_50,1);
                    QString::operator=(&local_a0,&local_e8);
                    if (*(int *)local_e8.field0_0x0 != -1) {
                      if (*(int *)local_e8.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
                        local_31 = *(int *)local_e8.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100b7b6a0;
                      }
                      QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
                    }
                  }
                  else {
                    iVar4 = QString::compare_helper
                                      ((QArrayData *)
                                       (local_90.field0_0x0 + *(long *)(local_90.field0_0x0 + 0x10))
                                       ,*(undefined4 *)(local_90.field0_0x0 + 4),
                                       "vzlicense_start_date",0xffffffff,1);
                    if (iVar4 == 0) {
                      local_f8.field0_0x0 = local_a0.field0_0x0;
                      if (1 < *(int *)local_a0.field0_0x0 + 1U) {
                        LOCK();
                        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
                        local_31 = *(int *)local_a0.field0_0x0 != 0;
                        UNLOCK();
                      }
                      local_100 = (QArrayData *)
                                  QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
                      QDateTime::fromString((QString *)&local_f0,&local_f8);
                      QDateTime::operator=(&local_50,&local_f0);
                      QDateTime::~QDateTime(&local_f0);
                      if (*(int *)local_100 != -1) {
                        if (*(int *)local_100 != 0) {
                          LOCK();
                          *(int *)local_100 = *(int *)local_100 + -1;
                          local_31 = *(int *)local_100 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100b7afcf;
                        }
                        QArrayData::deallocate(local_100,2,8);
                      }
LAB_100b7afcf:
                      if (*(int *)local_f8.field0_0x0 != -1) {
                        if (*(int *)local_f8.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
                          local_31 = *(int *)local_f8.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100b7b005;
                        }
                        QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
                      }
LAB_100b7b005:
                      local_108.field0_0x0 =
                           (QTypedArrayData<unsigned_short> *)
                           QString::fromAscii_helper("start_date",10);
                      QString::operator=(&local_90,&local_108);
                      if (*(int *)local_108.field0_0x0 != -1) {
                        if (*(int *)local_108.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
                          local_31 = *(int *)local_108.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100b7b066;
                        }
                        QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
                      }
LAB_100b7b066:
                      QDateTime::toString(&local_110,&local_50,1);
                      QString::operator=(&local_a0,&local_110);
                      if (*(int *)local_110.field0_0x0 != -1) {
                        if (*(int *)local_110.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
                          local_31 = *(int *)local_110.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100b7b6a0;
                        }
                        QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
                      }
                    }
                    else {
                      iVar4 = QString::compare_helper
                                        ((QArrayData *)
                                         (local_90.field0_0x0 +
                                         *(long *)(local_90.field0_0x0 + 0x10)),
                                         *(undefined4 *)(local_90.field0_0x0 + 4),
                                         "vzlicense_update_date",0xffffffff,1);
                      if (iVar4 != 0) {
                        iVar4 = QString::compare_helper
                                          ((QArrayData *)
                                           (local_90.field0_0x0 +
                                           *(long *)(local_90.field0_0x0 + 0x10)),
                                           *(undefined4 *)(local_90.field0_0x0 + 4),
                                           "vzlicense_cpu_total",0xffffffff,1);
                        if (iVar4 == 0) {
                          local_140.field0_0x0 =
                               (QTypedArrayData<unsigned_short> *)
                               QString::fromAscii_helper("cpu_total",9);
                          QString::operator=(&local_90,&local_140);
                          if (*(int *)local_140.field0_0x0 != -1) {
                            if (*(int *)local_140.field0_0x0 != 0) {
                              LOCK();
                              *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
                              local_31 = *(int *)local_140.field0_0x0 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_100b7b6a0;
                            }
                            QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
                          }
                        }
                        else {
                          iVar4 = QString::compare_helper
                                            ((QArrayData *)
                                             (local_90.field0_0x0 +
                                             *(long *)(local_90.field0_0x0 + 0x10)),
                                             *(undefined4 *)(local_90.field0_0x0 + 4),
                                             "vzlicense_max_memory",0xffffffff,1);
                          if (iVar4 == 0) {
                            local_148.field0_0x0 =
                                 (QTypedArrayData<unsigned_short> *)
                                 QString::fromAscii_helper("nr_mem",6);
                            QString::operator=(&local_90,&local_148);
                            if (*(int *)local_148.field0_0x0 != -1) {
                              if (*(int *)local_148.field0_0x0 != 0) {
                                LOCK();
                                *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
                                local_31 = *(int *)local_148.field0_0x0 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_100b7b6a0;
                              }
                              QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
                            }
                          }
                          else {
                            iVar4 = QString::compare_helper
                                              ((QArrayData *)
                                               (local_90.field0_0x0 +
                                               *(long *)(local_90.field0_0x0 + 0x10)),
                                               *(undefined4 *)(local_90.field0_0x0 + 4),
                                               "vzlicense_vtd_available",0xffffffff,1);
                            if (iVar4 == 0) {
                              local_150.field0_0x0 =
                                   (QTypedArrayData<unsigned_short> *)
                                   QString::fromAscii_helper("vtd_allowed",0xb);
                              QString::operator=(&local_90,&local_150);
                              if (*(int *)local_150.field0_0x0 != -1) {
                                if (*(int *)local_150.field0_0x0 != 0) {
                                  LOCK();
                                  *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
                                  local_31 = *(int *)local_150.field0_0x0 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_100b7b6a0;
                                }
                                QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
                              }
                            }
                            else {
                              iVar4 = QString::compare_helper
                                                ((QArrayData *)
                                                 (local_90.field0_0x0 +
                                                 *(long *)(local_90.field0_0x0 + 0x10)),
                                                 *(undefined4 *)(local_90.field0_0x0 + 4),
                                                 "vzlicense_vms_total",0xffffffff,1);
                              if (iVar4 == 0) {
                                local_158.field0_0x0 =
                                     (QTypedArrayData<unsigned_short> *)
                                     QString::fromAscii_helper("nr_vms",6);
                                QString::operator=(&local_90,&local_158);
                                if (*(int *)local_158.field0_0x0 != -1) {
                                  if (*(int *)local_158.field0_0x0 != 0) {
                                    LOCK();
                                    *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1
                                    ;
                                    local_31 = *(int *)local_158.field0_0x0 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_100b7b6a0;
                                  }
                                  QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
                                }
                              }
                              else {
                                iVar4 = QString::compare_helper
                                                  ((QArrayData *)
                                                   (local_90.field0_0x0 +
                                                   *(long *)(local_90.field0_0x0 + 0x10)),
                                                   *(undefined4 *)(local_90.field0_0x0 + 4),
                                                   "vzlicense_max_vzcc_users",0xffffffff,1);
                                if (iVar4 == 0) {
                                  local_160.field0_0x0 =
                                       (QTypedArrayData<unsigned_short> *)
                                       QString::fromAscii_helper("max_vzcc_users",0xe);
                                  QString::operator=(&local_90,&local_160);
                                  if (*(int *)local_160.field0_0x0 != -1) {
                                    if (*(int *)local_160.field0_0x0 != 0) {
                                      LOCK();
                                      *(int *)local_160.field0_0x0 =
                                           *(int *)local_160.field0_0x0 + -1;
                                      local_31 = *(int *)local_160.field0_0x0 != 0;
                                      UNLOCK();
                                      if ((bool)local_31) goto LAB_100b7b6a0;
                                    }
                                    QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
                                  }
                                }
                                else {
                                  iVar4 = QString::compare_helper
                                                    ((QArrayData *)
                                                     (local_90.field0_0x0 +
                                                     *(long *)(local_90.field0_0x0 + 0x10)),
                                                     *(undefined4 *)(local_90.field0_0x0 + 4),
                                                     "vzlicense_product",0xffffffff,1);
                                  if (iVar4 == 0) {
                                    local_168.field0_0x0 =
                                         (QTypedArrayData<unsigned_short> *)
                                         QString::fromAscii_helper("product",7);
                                    QString::operator=(&local_90,&local_168);
                                    if (*(int *)local_168.field0_0x0 != -1) {
                                      if (*(int *)local_168.field0_0x0 != 0) {
                                        LOCK();
                                        *(int *)local_168.field0_0x0 =
                                             *(int *)local_168.field0_0x0 + -1;
                                        local_31 = *(int *)local_168.field0_0x0 != 0;
                                        UNLOCK();
                                        if ((bool)local_31) goto LAB_100b7b6a0;
                                      }
                                      QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8)
                                      ;
                                    }
                                  }
                                  else {
                                    iVar4 = QString::compare_helper
                                                      ((QArrayData *)
                                                       (local_90.field0_0x0 +
                                                       *(long *)(local_90.field0_0x0 + 0x10)),
                                                       *(undefined4 *)(local_90.field0_0x0 + 4),
                                                       "vzlicense_version",0xffffffff,1);
                                    if (iVar4 == 0) {
                                      local_170.field0_0x0 =
                                           (QTypedArrayData<unsigned_short> *)
                                           QString::fromAscii_helper("version",7);
                                      QString::operator=(&local_90,&local_170);
                                      if (*(int *)local_170.field0_0x0 != -1) {
                                        if (*(int *)local_170.field0_0x0 != 0) {
                                          LOCK();
                                          *(int *)local_170.field0_0x0 =
                                               *(int *)local_170.field0_0x0 + -1;
                                          local_31 = *(int *)local_170.field0_0x0 != 0;
                                          UNLOCK();
                                          if ((bool)local_31) goto LAB_100b7b6a0;
                                        }
                                        QArrayData::deallocate
                                                  ((QArrayData *)local_170.field0_0x0,2,8);
                                      }
                                    }
                                    else {
                                      iVar4 = QString::compare_helper
                                                        ((QArrayData *)
                                                         (local_90.field0_0x0 +
                                                         *(long *)(local_90.field0_0x0 + 0x10)),
                                                         *(undefined4 *)(local_90.field0_0x0 + 4),
                                                         "vzlicense_key_number_value",0xffffffff,1);
                                      if (iVar4 == 0) {
                                        local_178.field0_0x0 =
                                             (QTypedArrayData<unsigned_short> *)
                                             QString::fromAscii_helper("key_number_value",0x10);
                                        QString::operator=(&local_90,&local_178);
                                        if (*(int *)local_178.field0_0x0 != -1) {
                                          if (*(int *)local_178.field0_0x0 != 0) {
                                            LOCK();
                                            *(int *)local_178.field0_0x0 =
                                                 *(int *)local_178.field0_0x0 + -1;
                                            local_31 = *(int *)local_178.field0_0x0 != 0;
                                            UNLOCK();
                                            if ((bool)local_31) goto LAB_100b7b6a0;
                                          }
                                          QArrayData::deallocate
                                                    ((QArrayData *)local_178.field0_0x0,2,8);
                                        }
                                      }
                                      else {
                                        iVar4 = QString::compare_helper
                                                          ((QArrayData *)
                                                           (local_90.field0_0x0 +
                                                           *(long *)(local_90.field0_0x0 + 0x10)),
                                                           *(undefined4 *)(local_90.field0_0x0 + 4),
                                                           "vzlicense_platform",0xffffffff,1);
                                        if (iVar4 == 0) {
                                          local_180.field0_0x0 =
                                               (QTypedArrayData<unsigned_short> *)
                                               QString::fromAscii_helper("platform",8);
                                          QString::operator=(&local_90,&local_180);
                                          if (*(int *)local_180.field0_0x0 != -1) {
                                            if (*(int *)local_180.field0_0x0 != 0) {
                                              LOCK();
                                              *(int *)local_180.field0_0x0 =
                                                   *(int *)local_180.field0_0x0 + -1;
                                              local_31 = *(int *)local_180.field0_0x0 != 0;
                                              UNLOCK();
                                              if ((bool)local_31) goto LAB_100b7b6a0;
                                            }
                                            QArrayData::deallocate
                                                      ((QArrayData *)local_180.field0_0x0,2,8);
                                          }
                                        }
                                        else {
                                          iVar4 = QString::compare_helper
                                                            ((QArrayData *)
                                                             (local_90.field0_0x0 +
                                                             *(long *)(local_90.field0_0x0 + 0x10)),
                                                             *(undefined4 *)
                                                              (local_90.field0_0x0 + 4),
                                                             "vzlicense_hardware_id",0xffffffff,1);
                                          if (iVar4 == 0) {
                                            local_188.field0_0x0 =
                                                 (QTypedArrayData<unsigned_short> *)
                                                 QString::fromAscii_helper("hwid",4);
                                            QString::operator=(&local_90,&local_188);
                                            if (*(int *)local_188.field0_0x0 != -1) {
                                              if (*(int *)local_188.field0_0x0 != 0) {
                                                LOCK();
                                                *(int *)local_188.field0_0x0 =
                                                     *(int *)local_188.field0_0x0 + -1;
                                                local_31 = *(int *)local_188.field0_0x0 != 0;
                                                UNLOCK();
                                                if ((bool)local_31) goto LAB_100b7b6a0;
                                              }
                                              QArrayData::deallocate
                                                        ((QArrayData *)local_188.field0_0x0,2,8);
                                            }
                                          }
                                          else {
                                            iVar4 = QString::compare_helper
                                                              ((QArrayData *)
                                                               (local_90.field0_0x0 +
                                                               *(long *)(local_90.field0_0x0 + 0x10)
                                                               ),*(undefined4 *)
                                                                  (local_90.field0_0x0 + 4),
                                                               "vzlicense_is_volume",0xffffffff,1);
                                            if (iVar4 != 0) goto LAB_100b7b6b3;
                                            local_190.field0_0x0 =
                                                 (QTypedArrayData<unsigned_short> *)
                                                 QString::fromAscii_helper("volume_license",0xe);
                                            QString::operator=(&local_90,&local_190);
                                            if (*(int *)local_190.field0_0x0 != -1) {
                                              if (*(int *)local_190.field0_0x0 != 0) {
                                                LOCK();
                                                *(int *)local_190.field0_0x0 =
                                                     *(int *)local_190.field0_0x0 + -1;
                                                local_31 = *(int *)local_190.field0_0x0 != 0;
                                                UNLOCK();
                                                if ((bool)local_31) goto LAB_100b7b6a0;
                                              }
                                              QArrayData::deallocate
                                                        ((QArrayData *)local_190.field0_0x0,2,8);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LAB_100b7b6a0;
                      }
                      local_120.field0_0x0 = local_a0.field0_0x0;
                      if (1 < *(int *)local_a0.field0_0x0 + 1U) {
                        LOCK();
                        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
                        local_31 = *(int *)local_a0.field0_0x0 != 0;
                        UNLOCK();
                      }
                      local_128 = (QArrayData *)
                                  QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
                      QDateTime::fromString((QString *)&local_118,&local_120);
                      QDateTime::operator=(&local_50,&local_118);
                      QDateTime::~QDateTime(&local_118);
                      if (*(int *)local_128 != -1) {
                        if (*(int *)local_128 != 0) {
                          LOCK();
                          *(int *)local_128 = *(int *)local_128 + -1;
                          local_31 = *(int *)local_128 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100b7b164;
                        }
                        QArrayData::deallocate(local_128,2,8);
                      }
LAB_100b7b164:
                      if (*(int *)local_120.field0_0x0 != -1) {
                        if (*(int *)local_120.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
                          local_31 = *(int *)local_120.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100b7b19a;
                        }
                        QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
                      }
LAB_100b7b19a:
                      local_130.field0_0x0 =
                           (QTypedArrayData<unsigned_short> *)
                           QString::fromAscii_helper("license_update_date",0x13);
                      QString::operator=(&local_90,&local_130);
                      if (*(int *)local_130.field0_0x0 != -1) {
                        if (*(int *)local_130.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
                          local_31 = *(int *)local_130.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100b7b1fb;
                        }
                        QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
                      }
LAB_100b7b1fb:
                      QDateTime::toString(&local_138,&local_50,1);
                      QString::operator=(&local_a0,&local_138);
                      if (*(int *)local_138.field0_0x0 != -1) {
                        if (*(int *)local_138.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
                          local_31 = *(int *)local_138.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100b7b6a0;
                        }
                        QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
                      }
                    }
                  }
                }
              }
            }
LAB_100b7b6a0:
            FUN_1006f3070(&local_40,&local_90,&local_a0);
          }
        }
LAB_100b7b6b3:
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b7b6e9;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_100b7b6e9:
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b7b71f;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_100b7b71f:
        local_80 = local_80 + 8;
      } while (local_80 != local_78);
    }
    pQVar7 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    local_70 = 1;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b7b769;
      }
      QListData::dispose(local_88);
    }
LAB_100b7b769:
    if (*(int *)(local_58.field0_0x0 + 4) == 0) {
      if (*(int *)(local_60.field0_0x0 + 4) == 0) {
        FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "!sLicenseKeyObsolete.isEmpty()","VzLicense.cpp",0x9e5,"VmEventToVzLicense");
      }
      QString::operator=(&local_58,&local_60);
    }
    local_198.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("serial",6);
    if (*(long *)(local_40 + 0x10) == 0) {
LAB_100b7b84a:
      lVar6 = 0;
    }
    else {
      lVar2 = *(long *)(local_40 + 0x10);
      lVar5 = 0;
      do {
        while (lVar6 = lVar2, cVar3 = operator<((QString *)(lVar6 + 0x18),&local_198), cVar3 == '\0'
              ) {
          lVar2 = *(long *)(lVar6 + 8);
          lVar5 = lVar6;
          if (*(long *)(lVar6 + 8) == 0) goto LAB_100b7b836;
        }
        lVar2 = *(long *)(lVar6 + 0x10);
      } while (*(long *)(lVar6 + 0x10) != 0);
      lVar6 = lVar5;
      if (lVar5 == 0) goto LAB_100b7b84a;
LAB_100b7b836:
      cVar3 = operator<(&local_198,(QString *)(lVar6 + 0x18));
      if (cVar3 != '\0') goto LAB_100b7b84a;
    }
    if (*(int *)local_198.field0_0x0 != -1) {
      if (*(int *)local_198.field0_0x0 != 0) {
        LOCK();
        *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
        local_31 = *(int *)local_198.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b7b882;
      }
      QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
    }
LAB_100b7b882:
    if (lVar6 == 0) {
      if (*(int *)(local_68.field0_0x0 + 4) == 0) {
        FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "!sSerialNumberObsolete.isEmpty()","VzLicense.cpp",0x9ea,"VmEventToVzLicense")
        ;
      }
      local_1a0 = (QArrayData *)QString::fromAscii_helper("serial",6);
      FUN_1006f3070(&local_40,&local_1a0,&local_68);
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b7b939;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
    }
LAB_100b7b939:
    iVar4 = FUN_100b61850(param_2,&local_58,&local_40,&local_48);
    bVar8 = iVar4 != 0;
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b7b987;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_100b7b987:
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b7b9b7;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100b7b9b7:
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b7b9e7;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_100b7b9e7:
  QDateTime::~QDateTime(&local_50);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7ba3a;
    }
    if (*(long *)(pQVar7 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar7,(int)*(undefined8 *)(pQVar7 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
LAB_100b7ba3a:
  pQVar7 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return bVar8;
      }
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar7,(int)*(undefined8 *)(pQVar7 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar7);
  }
  return bVar8;
}

