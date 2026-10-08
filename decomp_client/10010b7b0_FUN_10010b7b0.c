
QString * FUN_10010b7b0(QString *param_1,int param_2,undefined8 param_3,int param_4)

{
  Data *pDVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  Data *pDVar15;
  Data *pDVar16;
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  QArrayData *local_110;
  QString local_108;
  QString local_100;
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QString local_c0;
  QFileInfo local_b8 [8];
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  Data *local_50;
  QString local_48;
  Data *local_40;
  undefined1 local_31;
  
  puVar3 = PTR_shared_null_1021e1288;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_2 == 0) {
    QString::fromUtf8_helper((char *)&local_58,0x1dc0042);
    QString::operator=(&local_60,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10010b963;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10010b963:
    lVar7 = CVmConfiguration::getVmHardwareList();
    pDVar16 = (Data *)PTR_shared_null_1021e15e8;
    pDVar1 = *(Data **)(lVar7 + 0x1b8);
    pDVar15 = (Data *)PTR_shared_null_1021e15e8;
    if (pDVar1 != (Data *)PTR_shared_null_1021e15e8) {
      local_50 = pDVar1;
      if (*(int *)pDVar1 != -1) {
        if (*(int *)pDVar1 == 0) {
          QListData::detach((int)&local_50);
          lVar10 = (long)*(int *)(local_50 + 8);
          lVar7 = *(long *)(lVar7 + 0x1b8);
          if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_50 + lVar10 * 8) &&
             (lVar14 = *(int *)(local_50 + 0xc) - lVar10,
             lVar14 != 0 && lVar10 <= *(int *)(local_50 + 0xc))) {
            _memcpy(local_50 + lVar10 * 8 + 0x10,
                    (void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),lVar14 * 8);
          }
        }
        else {
          LOCK();
          *(int *)pDVar1 = *(int *)pDVar1 + 1;
          local_31 = *(int *)pDVar1 != 0;
          UNLOCK();
        }
      }
      pDVar15 = local_50;
      puVar4 = PTR_shared_null_1021e15e8;
      local_50 = (Data *)PTR_shared_null_1021e15e8;
      if (*(int *)PTR_shared_null_1021e15e8 != -1) {
        if (*(int *)PTR_shared_null_1021e15e8 != 0) {
          LOCK();
          *(int *)PTR_shared_null_1021e15e8 = *(int *)PTR_shared_null_1021e15e8 + -1;
          local_31 = *(int *)puVar4 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10010bac8;
        }
        QListData::dispose((Data *)puVar4);
      }
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_48,0x1dc0049);
    QString::operator=(&local_60,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10010b859;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_10010b859:
    lVar7 = CVmConfiguration::getVmHardwareList();
    pDVar15 = (Data *)PTR_shared_null_1021e15e8;
    pDVar1 = *(Data **)(lVar7 + 0x1c8);
    pDVar16 = (Data *)PTR_shared_null_1021e15e8;
    if (pDVar1 != (Data *)PTR_shared_null_1021e15e8) {
      local_40 = pDVar1;
      if (*(int *)pDVar1 != -1) {
        if (*(int *)pDVar1 == 0) {
          QListData::detach((int)&local_40);
          lVar10 = (long)*(int *)(local_40 + 8);
          lVar7 = *(long *)(lVar7 + 0x1c8);
          if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_40 + lVar10 * 8) &&
             (lVar14 = *(int *)(local_40 + 0xc) - lVar10,
             lVar14 != 0 && lVar10 <= *(int *)(local_40 + 0xc))) {
            _memcpy(local_40 + lVar10 * 8 + 0x10,
                    (void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),lVar14 * 8);
          }
        }
        else {
          LOCK();
          *(int *)pDVar1 = *(int *)pDVar1 + 1;
          local_31 = *(int *)pDVar1 != 0;
          UNLOCK();
        }
      }
      pDVar16 = local_40;
      puVar4 = PTR_shared_null_1021e15e8;
      local_40 = (Data *)PTR_shared_null_1021e15e8;
      if (*(int *)PTR_shared_null_1021e15e8 != -1) {
        if (*(int *)PTR_shared_null_1021e15e8 != 0) {
          LOCK();
          *(int *)PTR_shared_null_1021e15e8 = *(int *)PTR_shared_null_1021e15e8 + -1;
          local_31 = *(int *)puVar4 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10010bac8;
        }
        QListData::dispose((Data *)puVar4);
      }
    }
  }
LAB_10010bac8:
  if (param_2 == 0) {
    iVar11 = *(int *)(pDVar15 + 0xc) - *(int *)(pDVar15 + 8);
  }
  else {
    iVar11 = *(int *)(pDVar16 + 0xc) - *(int *)(pDVar16 + 8);
  }
  FUN_100109d60(&local_68,param_3,0);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
  local_90 = (QArrayData *)QString::fromAscii_helper("%1%2.%3",7);
  QString::arg(&local_88,&local_90,&local_60,0,0x20);
  iVar12 = param_4 + 1;
  QString::arg(&local_80,&local_88,iVar12,0,10,0x20);
  puVar3 = PTR_s_txt_102270c68;
  iVar13 = -1;
  if (PTR_s_txt_102270c68 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_txt_102270c68);
    iVar13 = (int)sVar8;
  }
  local_98 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar13);
  QString::arg(&local_78,&local_80,&local_98,0,0x20);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010bbe9;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10010bbe9:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010bc19;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10010bc19:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010bc49;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10010bc49:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010bc7f;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10010bc7f:
  iVar13 = 0;
LAB_10010bc90:
  do {
    lVar7 = 0;
    if (0 < iVar11) {
      do {
        if (param_2 == 0) {
          iVar6 = CVmDevice::getIndex();
        }
        else {
          iVar6 = CVmDevice::getIndex();
        }
        if (iVar6 != param_4) {
          if (param_2 == 0) {
            CVmDevice::getSystemName();
            QString::operator=(&local_70,&local_a0);
            if (*(int *)local_a0.field0_0x0 != -1) {
              if (*(int *)local_a0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
                local_31 = *(int *)local_a0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10010bdc0;
              }
              QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
            }
          }
          else {
            CVmDevice::getSystemName();
            QString::operator=(&local_70,&local_a8);
            if (*(int *)local_a8.field0_0x0 != -1) {
              if (*(int *)local_a8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
                local_31 = *(int *)local_a8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10010bdc0;
              }
              QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
            }
          }
LAB_10010bdc0:
          QFileInfo::QFileInfo(local_b8,&local_70);
          QFileInfo::fileName();
          cVar5 = operator==(&local_78,&local_b0);
          if (*(int *)local_b0.field0_0x0 != -1) {
            if (*(int *)local_b0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
              local_31 = *(int *)local_b0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10010be2c;
            }
            QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
          }
LAB_10010be2c:
          QFileInfo::~QFileInfo(local_b8);
          if (cVar5 != '\0') {
            local_c0.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("%1%2.%3.%4",10);
            QString::operator=(&local_78,&local_c0);
            if (*(int *)local_c0.field0_0x0 != -1) {
              if (*(int *)local_c0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                local_31 = *(int *)local_c0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10010c22e;
              }
              QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
            }
LAB_10010c22e:
            QString::arg(&local_d0,&local_78,&local_60,0,0x20);
            QString::arg(&local_c8,&local_d0,iVar12,0,10,0x20);
            QString::operator=(&local_78,&local_c8);
            if (*(int *)local_c8.field0_0x0 != -1) {
              if (*(int *)local_c8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
                local_31 = *(int *)local_c8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10010c2b7;
              }
              QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
            }
LAB_10010c2b7:
            if (*(int *)local_d0 != -1) {
              if (*(int *)local_d0 != 0) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + -1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10010c2ed;
              }
              QArrayData::deallocate(local_d0,2,8);
            }
LAB_10010c2ed:
            iVar13 = iVar13 + 1;
            QString::arg(&local_e0,&local_78,iVar13,0,10,0x20);
            puVar3 = PTR_s_txt_102270c68;
            iVar6 = -1;
            if (PTR_s_txt_102270c68 != (undefined *)0x0) {
              sVar8 = _strlen(PTR_s_txt_102270c68);
              iVar6 = (int)sVar8;
            }
            local_e8 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
            QString::arg(&local_d8,&local_e0,&local_e8,0,0x20);
            QString::operator=(&local_78,&local_d8);
            if (*(int *)local_d8.field0_0x0 != -1) {
              if (*(int *)local_d8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
                local_31 = *(int *)local_d8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10010c3b0;
              }
              QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
            }
LAB_10010c3b0:
            if (*(int *)local_e8 != -1) {
              if (*(int *)local_e8 != 0) {
                LOCK();
                *(int *)local_e8 = *(int *)local_e8 + -1;
                local_31 = *(int *)local_e8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10010c3e6;
              }
              QArrayData::deallocate(local_e8,2,8);
            }
LAB_10010c3e6:
            if (*(int *)local_e0 == -1) goto LAB_10010bc90;
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              local_31 = *(int *)local_e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10010bc90;
            }
            QArrayData::deallocate(local_e0,2,8);
            goto LAB_10010bc90;
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar11);
    }
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getVmUuid();
    uVar9 = FUN_100152280();
    lVar7 = FUN_1001547d0(uVar9,&local_f0);
    if (lVar7 == 0) {
      bVar2 = false;
      FUN_100df99c0("","prl_client_app",0,
                    "(!)Error: can not find server by vm uuid, skipping file check");
    }
    else {
      local_f8.field0_0x0 = local_68.field0_0x0;
      if (1 < *(int *)local_68.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_f8);
      cVar5 = QFile::exists(&local_f8);
      if (*(int *)local_f8.field0_0x0 != -1) {
        if (*(int *)local_f8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
          local_31 = *(int *)local_f8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10010bef4;
        }
        QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
      }
LAB_10010bef4:
      if (cVar5 == '\0') {
        bVar2 = false;
      }
      else {
        local_100.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("%1%2.%3.%4",10);
        QString::operator=(&local_78,&local_100);
        if (*(int *)local_100.field0_0x0 != -1) {
          if (*(int *)local_100.field0_0x0 != 0) {
            LOCK();
            *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
            local_31 = *(int *)local_100.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10010bf5a;
          }
          QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
        }
LAB_10010bf5a:
        QString::arg(&local_110,&local_78,&local_60,0,0x20);
        QString::arg(&local_108,&local_110,iVar12,0,10,0x20);
        QString::operator=(&local_78,&local_108);
        if (*(int *)local_108.field0_0x0 != -1) {
          if (*(int *)local_108.field0_0x0 != 0) {
            LOCK();
            *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
            local_31 = *(int *)local_108.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10010bfe3;
          }
          QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
        }
LAB_10010bfe3:
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10010c019;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_10010c019:
        iVar13 = iVar13 + 1;
        QString::arg(&local_120,&local_78,iVar13,0,10,0x20);
        puVar3 = PTR_s_txt_102270c68;
        iVar6 = -1;
        if (PTR_s_txt_102270c68 != (undefined *)0x0) {
          sVar8 = _strlen(PTR_s_txt_102270c68);
          iVar6 = (int)sVar8;
        }
        local_128 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
        QString::arg(&local_118,&local_120,&local_128,0,0x20);
        QString::operator=(&local_78,&local_118);
        if (*(int *)local_118.field0_0x0 != -1) {
          if (*(int *)local_118.field0_0x0 != 0) {
            LOCK();
            *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
            local_31 = *(int *)local_118.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10010c0dc;
          }
          QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
        }
LAB_10010c0dc:
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_31 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10010c112;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_10010c112:
        bVar2 = true;
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10010c182;
          }
          QArrayData::deallocate(local_120,2,8);
        }
      }
    }
LAB_10010c182:
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10010c1b8;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_10010c1b8:
  } while (bVar2);
  param_1->field0_0x0 = local_68.field0_0x0;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_31 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010c490;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10010c490:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010c4c0;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10010c4c0:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010c4f9;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10010c4f9:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010c529;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10010c529:
  if (*(int *)pDVar16 != -1) {
    if (*(int *)pDVar16 != 0) {
      LOCK();
      *(int *)pDVar16 = *(int *)pDVar16 + -1;
      local_31 = *(int *)pDVar16 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010c54c;
    }
    QListData::dispose(pDVar16);
  }
LAB_10010c54c:
  if (*(int *)pDVar15 != -1) {
    if (*(int *)pDVar15 != 0) {
      LOCK();
      *(int *)pDVar15 = *(int *)pDVar15 + -1;
      local_31 = *(int *)pDVar15 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    QListData::dispose(pDVar15);
  }
  return param_1;
}

