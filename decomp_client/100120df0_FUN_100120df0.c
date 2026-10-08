
undefined8 * FUN_100120df0(undefined8 *param_1,long param_2,QString *param_3)

{
  long *plVar1;
  CHwUsbDevice *pCVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  Data *pDVar14;
  long lVar15;
  Data *pDVar16;
  QArrayData *pQVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  AnonymousUnion0 AStack_2f0;
  undefined8 uStack_2e0;
  undefined1 local_2c8 [8];
  CHwUsbDevice local_2c0 [192];
  QVariant local_200;
  QVariant local_1f0;
  QVariant local_1e0;
  QVariant local_1d0;
  QVariant local_1c0;
  QVariant local_1b0;
  QVariant local_1a0;
  undefined *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  uint local_170;
  uint local_16c;
  undefined4 local_168;
  QString local_160;
  undefined8 uStack_158;
  AnonymousUnion0 local_150;
  AnonymousUnion0 AStack_148;
  bool local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  QArrayData *local_108;
  QString local_100;
  QArrayData *local_f8;
  Data *local_f0;
  Data *local_e8;
  Data *local_e0;
  undefined4 local_d8;
  QArrayData *local_d0;
  Data *local_c8;
  Data *local_c0;
  Data *local_b8;
  undefined4 local_b0;
  QString local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  undefined4 local_88;
  Data *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  char local_59;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,"Start usb install sources detection");
  }
  *param_1 = PTR_shared_null_1021e15e8;
  plVar1 = *(long **)(param_2 + 0x180);
  local_58 = (Data *)*plVar1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar13 = (long)*(int *)(local_58 + 8);
      lVar11 = *plVar1;
      if (((Data *)(lVar11 + (long)*(int *)(lVar11 + 8) * 8) != local_58 + lVar13 * 8) &&
         (lVar15 = *(int *)(local_58 + 0xc) - lVar13,
         lVar15 != 0 && lVar13 <= *(int *)(local_58 + 0xc))) {
        _memcpy(local_58 + lVar13 * 8 + 0x10,
                (void *)(lVar11 + 0x10 + (long)*(int *)(lVar11 + 8) * 8),lVar15 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  puVar5 = PTR_shared_null_1021e15e8;
  puVar4 = PTR_shared_null_1021e1288;
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    auVar18._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar18._0_8_ = PTR_shared_null_1021e1288;
    auVar18._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    auVar19._8_4_ = (int)PTR_shared_null_1021e15e8;
    auVar19._0_8_ = PTR_shared_null_1021e15e8;
    auVar19._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
    do {
      local_40 = 1;
      pCVar2 = *(CHwUsbDevice **)local_50;
      iVar10 = CHwUsbDevice::getUsbType();
      if ((iVar10 == 0xd) || (iVar10 = CHwUsbDevice::getUsbType(), iVar10 == 0xe)) {
        (**(code **)(*(long *)pCVar2 + 0xb8))(&local_70,pCVar2);
        FUN_100b01b20(&local_68,&local_70,&local_59);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100120f87;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_100120f87:
        if ((*(int *)(local_68.field0_0x0 + 4) != 0) && (local_59 == '\0')) {
          if (2 < DAT_10230ffd0) {
            QString::toUtf8();
            FUN_100df99c0("","prl_client_app",3,"checking usb hdd with bsd name %s for efi",
                          local_78 + *(long *)(local_78 + 0x10));
            if (*(int *)local_78 != -1) {
              if (*(int *)local_78 != 0) {
                LOCK();
                *(int *)local_78 = *(int *)local_78 + -1;
                local_31 = *(int *)local_78 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100121010;
              }
              QArrayData::deallocate(local_78,1,8);
            }
          }
LAB_100121010:
          local_80 = (Data *)PTR_shared_null_1021e15e8;
          plVar1 = *(long **)(param_2 + 0x150);
          local_a0 = (Data *)*plVar1;
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 == 0) {
              QListData::detach((int)&local_a0);
              lVar13 = (long)*(int *)(local_a0 + 8);
              lVar11 = *plVar1;
              if (((Data *)(lVar11 + (long)*(int *)(lVar11 + 8) * 8) != local_a0 + lVar13 * 8) &&
                 (lVar15 = *(int *)(local_a0 + 0xc) - lVar13,
                 lVar15 != 0 && lVar13 <= *(int *)(local_a0 + 0xc))) {
                _memcpy(local_a0 + lVar13 * 8 + 0x10,
                        (void *)(lVar11 + 0x10 + (long)*(int *)(lVar11 + 8) * 8),lVar15 * 8);
              }
            }
            else {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + 1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
            }
          }
          local_98 = local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10;
          local_90 = local_a0 + (long)*(int *)(local_a0 + 0xc) * 8 + 0x10;
          if (*(int *)(local_a0 + 8) != *(int *)(local_a0 + 0xc)) {
            do {
              local_88 = 1;
              lVar11 = *(long *)local_98;
              CHwHardDisk::getDeviceId();
              cVar6 = operator==(&local_a8,&local_68);
              if (*(int *)local_a8.field0_0x0 != -1) {
                if (*(int *)local_a8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
                  local_31 = *(int *)local_a8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100121122;
                }
                QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
              }
LAB_100121122:
              if (cVar6 != '\0') {
                local_c8 = *(Data **)(lVar11 + 0x98);
                if (*(int *)local_c8 != -1) {
                  if (*(int *)local_c8 == 0) {
                    QListData::detach((int)&local_c8);
                    lVar13 = (long)*(int *)(local_c8 + 8);
                    lVar11 = *(long *)(lVar11 + 0x98);
                    if (((Data *)(lVar11 + (long)*(int *)(lVar11 + 8) * 8) != local_c8 + lVar13 * 8)
                       && (lVar15 = *(int *)(local_c8 + 0xc) - lVar13,
                          lVar15 != 0 && lVar13 <= *(int *)(local_c8 + 0xc))) {
                      _memcpy(local_c8 + lVar13 * 8 + 0x10,
                              (void *)(lVar11 + 0x10 + (long)*(int *)(lVar11 + 8) * 8),lVar15 * 8);
                    }
                  }
                  else {
                    LOCK();
                    *(int *)local_c8 = *(int *)local_c8 + 1;
                    local_31 = *(int *)local_c8 != 0;
                    UNLOCK();
                  }
                }
                local_c0 = local_c8 + (long)*(int *)(local_c8 + 8) * 8 + 0x10;
                local_b8 = local_c8 + (long)*(int *)(local_c8 + 0xc) * 8 + 0x10;
                if (*(int *)(local_c8 + 8) != *(int *)(local_c8 + 0xc)) {
                  do {
                    local_b0 = 1;
                    CHwHddPartition::getSystemName();
                    FUN_1000341d0(&local_80);
                    if (*(int *)local_d0 != -1) {
                      if (*(int *)local_d0 != 0) {
                        LOCK();
                        *(int *)local_d0 = *(int *)local_d0 + -1;
                        local_31 = *(int *)local_d0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10012122c;
                      }
                      QArrayData::deallocate(local_d0,2,8);
                    }
LAB_10012122c:
                    local_c0 = local_c0 + 8;
                  } while (local_c0 != local_b8);
                }
                local_b0 = 1;
                if (*(int *)local_c8 != -1) {
                  if (*(int *)local_c8 != 0) {
                    LOCK();
                    *(int *)local_c8 = *(int *)local_c8 + -1;
                    local_31 = *(int *)local_c8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100121280;
                  }
                  QListData::dispose(local_c8);
                }
              }
LAB_100121280:
              local_98 = local_98 + 8;
            } while (local_98 != local_90);
          }
          local_88 = 1;
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001212dc;
            }
            QListData::dispose(local_a0);
          }
LAB_1001212dc:
          if (*(int *)(local_80 + 0xc) == *(int *)(local_80 + 8)) {
            FUN_1000341d0(&local_80);
          }
          local_f0 = local_80;
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 == 0) {
              QListData::detach((int)&local_f0);
              iVar10 = *(int *)(local_f0 + 8);
              if (iVar10 != *(int *)(local_f0 + 0xc)) {
                pDVar14 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
                pDVar16 = local_f0 + (long)iVar10 * 8 + 0x10;
                lVar11 = (long)*(int *)(local_f0 + 0xc) * 8 + (long)iVar10 * -8;
                do {
                  piVar3 = *(int **)pDVar14;
                  *(int **)pDVar16 = piVar3;
                  if (1 < *piVar3 + 1U) {
                    LOCK();
                    *piVar3 = *piVar3 + 1;
                    local_31 = *piVar3 != 0;
                    UNLOCK();
                  }
                  pDVar16 = pDVar16 + 8;
                  pDVar14 = pDVar14 + 8;
                  lVar11 = lVar11 + -8;
                } while (lVar11 != 0);
              }
            }
            else {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + 1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
            }
          }
          pDVar14 = local_f0 + (long)*(int *)(local_f0 + 8) * 8 + 0x10;
          local_e0 = local_f0 + (long)*(int *)(local_f0 + 0xc) * 8 + 0x10;
          local_e8 = pDVar14;
          if (*(int *)(local_f0 + 8) != *(int *)(local_f0 + 0xc)) {
            do {
              local_d8 = 1;
              local_e8 = pDVar14;
              if (2 < DAT_10230ffd0) {
                QString::toUtf8();
                FUN_100df99c0("","prl_client_app",3,"checking usb hdd partition with name %s",
                              local_f8 + *(long *)(local_f8 + 0x10));
                if (*(int *)local_f8 != -1) {
                  if (*(int *)local_f8 != 0) {
                    LOCK();
                    *(int *)local_f8 = *(int *)local_f8 + -1;
                    local_31 = *(int *)local_f8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100121430;
                  }
                  QArrayData::deallocate(local_f8,1,8);
                }
              }
LAB_100121430:
              local_108 = *(QArrayData **)pDVar14;
              if (1 < *(int *)local_108 + 1U) {
                LOCK();
                *(int *)local_108 = *(int *)local_108 + 1;
                local_31 = *(int *)local_108 != 0;
                UNLOCK();
              }
              bVar7 = (bool)QString::remove((int)&local_108,0);
              MacUtils::getPartitionMountBySystemName(&local_100,bVar7);
              if (*(int *)local_108 != -1) {
                if (*(int *)local_108 != 0) {
                  LOCK();
                  *(int *)local_108 = *(int *)local_108 + -1;
                  local_31 = *(int *)local_108 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001214a5;
                }
                QArrayData::deallocate(local_108,2,8);
              }
LAB_1001214a5:
              bVar8 = FUN_100dcaff0(&local_100);
              if ((*(int *)(param_3->field0_0x0 + 4) == 0) ||
                 (cVar6 = operator==(param_3,&local_100), cVar6 != '\0')) {
                local_170 = 0xff;
                local_16c = 0;
                local_168 = 0;
                uStack_2e0 = auVar18._8_8_;
                local_160.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar4;
                uStack_158 = uStack_2e0;
                AStack_2f0 = auVar19._8_8_;
                local_150.field1 = (Data *)puVar5;
                AStack_148 = AStack_2f0;
                local_140 = false;
                local_138 = PTR_shared_null_1021e1288;
                local_130 = 0;
                local_12c = 0;
                local_128 = 0;
                local_110 = 0;
                local_118 = 0;
                local_120 = 0;
                QString::toUtf8();
                iVar10 = FUN_100d50af0(local_178 + *(long *)(local_178 + 0x10),"",&local_170);
                bVar7 = local_170 != 0xff;
                if (*(int *)local_178 != -1) {
                  if (*(int *)local_178 != 0) {
                    LOCK();
                    *(int *)local_178 = *(int *)local_178 + -1;
                    local_31 = *(int *)local_178 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001215e8;
                  }
                  QArrayData::deallocate(local_178,1,8);
                }
LAB_1001215e8:
                if (iVar10 == 0 && bVar7) {
                  EnumUtils::OsVerToString((uint)&local_188);
                  QString::toUtf8();
                  if ((1 < *(uint *)local_180) || (*(long *)(local_180 + 0x10) != 0x18)) {
                    QByteArray::reallocData
                              (&local_180,*(uint *)(local_180 + 4) + 1,
                               *(uint *)(local_180 + 8) >> 0x1f);
                  }
                  pcVar12 = "Yes";
                  if (local_140 == false) {
                    pcVar12 = "No";
                  }
                  FUN_100df99c0("","prl_client_app",0,
                                "Detected installation: \'%s\', Arch: %d Volume: %s",
                                local_180 + *(long *)(local_180 + 0x10),local_16c,pcVar12);
                  if (*(int *)local_180 != -1) {
                    if (*(int *)local_180 != 0) {
                      LOCK();
                      *(int *)local_180 = *(int *)local_180 + -1;
                      local_31 = *(int *)local_180 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1001216c6;
                    }
                    QArrayData::deallocate(local_180,1,8);
                  }
LAB_1001216c6:
                  if (*(int *)local_188 != -1) {
                    if (*(int *)local_188 != 0) {
                      LOCK();
                      *(int *)local_188 = *(int *)local_188 + -1;
                      local_31 = *(int *)local_188 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1001216fc;
                    }
                    QArrayData::deallocate(local_188,2,8);
                  }
LAB_1001216fc:
                  bVar9 = FUN_1009881b0(local_170);
                  local_190 = PTR_shared_null_1021e15e8;
                  QVariant::QVariant(&local_1a0,local_170);
                  FUN_10012ae80(&local_190,&local_1a0);
                  QVariant::QVariant(&local_1b0,&local_160);
                  FUN_10012ae80(&local_190,&local_1b0);
                  QVariant::QVariant(&local_1c0,local_16c);
                  FUN_10012ae80(&local_190,&local_1c0);
                  QVariant::QVariant(&local_1d0,local_140);
                  FUN_10012ae80(&local_190,&local_1d0);
                  QVariant::QVariant(&local_1e0,(QStringList *)&local_150.field0);
                  FUN_10012ae80(&local_190,&local_1e0);
                  QVariant::QVariant(&local_1f0,(QStringList *)&AStack_148.field0);
                  FUN_10012ae80(&local_190,&local_1f0);
                  QVariant::QVariant(&local_200,(bool)(bVar8 & bVar9));
                  FUN_10012ae80(&local_190,&local_200);
                  QVariant::~QVariant(&local_200);
                  QVariant::~QVariant(&local_1f0);
                  QVariant::~QVariant(&local_1e0);
                  QVariant::~QVariant(&local_1d0);
                  QVariant::~QVariant(&local_1c0);
                  QVariant::~QVariant(&local_1b0);
                  QVariant::~QVariant(&local_1a0);
                  FUN_100036740(local_2c8,&local_190);
                  CHwUsbDevice::CHwUsbDevice(local_2c0,pCVar2);
                  FUN_10012bc20(param_1);
                  CHwUsbDevice::~CHwUsbDevice(local_2c0);
                  FUN_100035ea0(local_2c8);
                  FUN_100035ea0(&local_190);
                }
                FUN_10005e410(&local_170);
              }
              if (*(int *)local_100.field0_0x0 != -1) {
                if (*(int *)local_100.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
                  local_31 = *(int *)local_100.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100121932;
                }
                QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
              }
LAB_100121932:
              pDVar14 = local_e8 + 8;
              local_e8 = pDVar14;
            } while (pDVar14 != local_e0);
          }
          pDVar14 = local_f0;
          local_d8 = 1;
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_31 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001219f1;
            }
            iVar10 = *(int *)(local_f0 + 0xc);
            if (iVar10 != *(int *)(local_f0 + 8)) {
              lVar11 = (long)*(int *)(local_f0 + 8) * 8 + (long)iVar10 * -8;
              pDVar16 = local_f0 + (long)iVar10 * 8 + 8;
              do {
                pQVar17 = *(QArrayData **)pDVar16;
                if (*(int *)pQVar17 == 0) {
LAB_1001219d0:
                  QArrayData::deallocate(pQVar17,2,8);
                }
                else if (*(int *)pQVar17 != -1) {
                  LOCK();
                  *(int *)pQVar17 = *(int *)pQVar17 + -1;
                  local_31 = *(int *)pQVar17 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar17 = *(QArrayData **)pDVar16;
                    goto LAB_1001219d0;
                  }
                }
                pDVar16 = pDVar16 + -8;
                lVar11 = lVar11 + 8;
              } while (lVar11 != 0);
            }
            QListData::dispose(pDVar14);
          }
LAB_1001219f1:
          pDVar14 = local_80;
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100121a90;
            }
            iVar10 = *(int *)(local_80 + 0xc);
            if (iVar10 != *(int *)(local_80 + 8)) {
              lVar11 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar10 * -8;
              pDVar16 = local_80 + (long)iVar10 * 8 + 8;
              do {
                pQVar17 = *(QArrayData **)pDVar16;
                if (*(int *)pQVar17 == 0) {
LAB_100121a60:
                  QArrayData::deallocate(pQVar17,2,8);
                }
                else if (*(int *)pQVar17 != -1) {
                  LOCK();
                  *(int *)pQVar17 = *(int *)pQVar17 + -1;
                  local_31 = *(int *)pQVar17 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar17 = *(QArrayData **)pDVar16;
                    goto LAB_100121a60;
                  }
                }
                pDVar16 = pDVar16 + -8;
                lVar11 = lVar11 + 8;
              } while (lVar11 != 0);
            }
            QListData::dispose(pDVar14);
          }
        }
LAB_100121a90:
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100121ac0;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
      }
LAB_100121ac0:
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100121b03;
    }
    QListData::dispose(local_58);
  }
LAB_100121b03:
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,"End usb install source detection");
  }
  return param_1;
}

