
QString * FUN_1007026b0(QString *param_1,undefined8 param_2,long *param_3,char param_4)

{
  int *piVar1;
  Data *pDVar2;
  uint uVar3;
  QString *pQVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  QKeySequence *pQVar10;
  char *pcVar11;
  int iVar12;
  QArrayData *local_168;
  QString local_160;
  QArrayData *local_158;
  QString local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  Data *local_108;
  Data *local_100;
  Data *local_f8;
  Data *local_f0;
  int local_e8;
  QString local_e0;
  QString local_d8;
  int *local_d0;
  int *local_c8;
  int *local_c0;
  int *local_b8;
  int local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar12 = (0x76 - *(int *)(*param_3 + 4)) / 2;
  iVar9 = 0;
  do {
    if (iVar9 == iVar12) {
      QString::fromUtf8_helper((char *)&local_90,0x1e31adc);
      pQVar4 = (QString *)QString::append(&local_98);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070277d;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_10070277d:
      pQVar4 = (QString *)QString::append(pQVar4);
      QString::fromUtf8_helper((char *)&local_88,0x1e31adc);
      QString::append(pQVar4);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007027dc;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1007027dc:
      iVar9 = iVar12 + 2 + *(int *)(*param_3 + 4);
    }
    else {
      QString::fromUtf8_helper((char *)&local_80,0x1db6a71);
      QString::append(&local_98);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100702850;
        }
        QArrayData::deallocate(local_80,2,8);
      }
    }
LAB_100702850:
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x78);
  if (param_4 == '\0') {
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",2,"%s",local_a8 + *(long *)(local_a8 + 0x10));
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007029c2;
        }
        QArrayData::deallocate(local_a8,1,8);
      }
    }
  }
  else {
    local_a0.field0_0x0 = local_98.field0_0x0;
    if (1 < *(int *)local_98.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_78,0x1eeaa60);
    QString::append(&local_a0);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007028dd;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1007028dd:
    QString::append(param_1);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_31 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007029c2;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
  }
LAB_1007029c2:
  FUN_100706d20(&local_d0,param_2);
  local_c8 = local_d0;
  if (*local_d0 != -1) {
    if (*local_d0 == 0) {
      QListData::detach((int)&local_c8);
      iVar9 = local_c8[2];
      if (iVar9 != local_c8[3]) {
        local_d0 = local_d0 + (long)local_d0[2] * 2 + 4;
        piVar8 = local_c8 + (long)iVar9 * 2 + 4;
        lVar5 = (long)local_c8[3] * 8 + (long)iVar9 * -8;
        do {
          piVar1 = *(int **)local_d0;
          *(int **)piVar8 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          local_d0 = local_d0 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_d0 = *local_d0 + 1;
      local_31 = *local_d0 != 0;
      UNLOCK();
    }
  }
  local_c0 = local_c8 + (long)local_c8[2] * 2 + 4;
  local_b8 = local_c8 + (long)local_c8[3] * 2 + 4;
  local_b0 = 1;
  FUN_100036370(&local_d0);
  if ((local_b0 != 0) && (local_c0 != local_b8)) {
    do {
      piVar8 = local_c0;
      local_d8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_c0;
      if (1 < *(int *)local_d8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
        local_31 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
      }
      for (iVar9 = *(int *)(local_d8.field0_0x0 + 4); iVar9 < 0x28; iVar9 = iVar9 + 1) {
        QString::fromUtf8_helper((char *)&local_70,0x1e31adc);
        QString::append(&local_d8);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100702b4f;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_100702b4f:
      }
      local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      uVar6 = FUN_100706960(param_2,piVar8);
      FUN_100708240(&local_108,uVar6);
      FUN_1005607f0(&local_100,&local_108);
      pDVar2 = local_108;
      local_f8 = local_100 + (long)*(int *)(local_100 + 8) * 8 + 0x10;
      local_f0 = local_100 + (long)*(int *)(local_100 + 0xc) * 8 + 0x10;
      local_e8 = 1;
      if (*(int *)local_108 == -1) {
LAB_100702c6c:
        for (; pDVar2 = local_f8, local_f8 != local_f0; local_f8 = local_f8 + 8) {
          iVar9 = 0x1eeaa6a;
          if (*(int *)(local_e0.field0_0x0 + 4) == 0) {
            iVar9 = 0x1e41978;
          }
          QString::fromUtf8_helper((char *)&local_68,iVar9);
          pQVar4 = (QString *)QString::append(&local_e0);
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100702cea;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_100702cea:
          FUN_1007170a0(&local_110,pDVar2,1);
          QString::append(pQVar4);
          if (*(int *)local_110 != -1) {
            if (*(int *)local_110 != 0) {
              LOCK();
              *(int *)local_110 = *(int *)local_110 + -1;
              local_31 = *(int *)local_110 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100702c50;
            }
            QArrayData::deallocate(local_110,2,8);
          }
LAB_100702c50:
          local_e8 = 1;
        }
      }
      else {
        if (*(int *)local_108 == 0) {
LAB_100702beb:
          iVar9 = *(int *)(local_108 + 0xc);
          if (iVar9 != *(int *)(local_108 + 8)) {
            lVar5 = (long)*(int *)(local_108 + 8) * 8 + (long)iVar9 * -8;
            pQVar10 = (QKeySequence *)(local_108 + (long)iVar9 * 8 + 8);
            do {
              QKeySequence::~QKeySequence(pQVar10);
              pQVar10 = pQVar10 + -8;
              lVar5 = lVar5 + 8;
            } while (lVar5 != 0);
          }
          QListData::dispose(pDVar2);
        }
        else {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if (!(bool)local_31) goto LAB_100702beb;
        }
        if (local_e8 != 0) goto LAB_100702c6c;
      }
      pDVar2 = local_100;
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100702dc1;
        }
        iVar9 = *(int *)(local_100 + 0xc);
        if (iVar9 != *(int *)(local_100 + 8)) {
          lVar5 = (long)*(int *)(local_100 + 8) * 8 + (long)iVar9 * -8;
          pQVar10 = (QKeySequence *)(local_100 + (long)iVar9 * 8 + 8);
          do {
            QKeySequence::~QKeySequence(pQVar10);
            pQVar10 = pQVar10 + -8;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0);
        }
        QListData::dispose(pDVar2);
      }
LAB_100702dc1:
      for (iVar9 = *(int *)(local_e0.field0_0x0 + 4); iVar9 < 0x3c; iVar9 = iVar9 + 1) {
        QString::fromUtf8_helper((char *)&local_60,0x1e31adc);
        QString::append(&local_e0);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100702e31;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_100702e31:
      }
      local_138 = (QArrayData *)QString::fromAscii_helper("%1 %2 \t%3 \t%4",0xd);
      QString::arg(&local_130,&local_138,&local_d8,0,0x20);
      QString::arg(&local_128,&local_130,&local_e0,0,0x20);
      uVar6 = FUN_100706960(param_2,piVar8);
      uVar7 = FUN_100708300(uVar6);
      pcVar11 = "       ";
      if ((uVar7 & 2) != 0) {
        pcVar11 = "enabled";
      }
      local_140 = (QArrayData *)QString::fromAscii_helper(pcVar11,7);
      QString::arg(&local_120,&local_128,&local_140,0,0x20);
      uVar6 = FUN_100706960(param_2,piVar8);
      uVar3 = FUN_100708300(uVar6);
      pcVar11 = "       ";
      if ((uVar3 & 4) != 0) {
        pcVar11 = "hidden";
      }
      local_148 = (QArrayData *)QString::fromAscii_helper(pcVar11,(uVar3 & 4) >> 2 ^ 7);
      QString::arg(&local_118,&local_120,&local_148,0,0x20);
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_31 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100702f82;
        }
        QArrayData::deallocate(local_148,2,8);
      }
LAB_100702f82:
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100702fb8;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_100702fb8:
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100702fee;
        }
        QArrayData::deallocate(local_140,2,8);
      }
LAB_100702fee:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100703024;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_100703024:
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070305a;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_10070305a:
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100703090;
        }
        QArrayData::deallocate(local_138,2,8);
      }
LAB_100703090:
      if (param_4 == '\0') {
        if (1 < DAT_10230ffd0) {
          QString::toUtf8();
          FUN_100df99c0("","prl_client_app",2,"%s",local_158 + *(long *)(local_158 + 0x10));
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_31 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100703200;
            }
            QArrayData::deallocate(local_158,1,8);
          }
        }
      }
      else {
        local_150.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_118;
        if (1 < *(int *)local_118 + 1U) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + 1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_58,0x1eeaa60);
        QString::append(&local_150);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100703112;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_100703112:
        QString::append(param_1);
        if (*(int *)local_150.field0_0x0 != -1) {
          if (*(int *)local_150.field0_0x0 != 0) {
            LOCK();
            *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
            local_31 = *(int *)local_150.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100703200;
          }
          QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
        }
      }
LAB_100703200:
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100703236;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_100703236:
      if (*(int *)local_e0.field0_0x0 != -1) {
        if (*(int *)local_e0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
          local_31 = *(int *)local_e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070326c;
        }
        QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
      }
LAB_10070326c:
      if (*(int *)local_d8.field0_0x0 != -1) {
        if (*(int *)local_d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
          local_31 = *(int *)local_d8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007032a2;
        }
        QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
      }
LAB_1007032a2:
      local_c0 = local_c0 + 2;
      local_b0 = 1;
    } while (local_c0 != local_b8);
  }
  FUN_100036370(&local_c8);
  iVar9 = *(int *)(local_98.field0_0x0 + 4);
  QString::fromUtf8_helper((char *)&local_50,0x1e41978);
  QString::operator=(&local_98,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100703334;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100703334:
  if (0 < iVar9) {
    iVar12 = 0;
    do {
      QString::fromUtf8_helper((char *)&local_48,0x1db6a71);
      QString::append(&local_98);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070339b;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_10070339b:
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar9);
  }
  if (param_4 == '\0') {
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",2,"%s",local_168 + *(long *)(local_168 + 0x10));
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_31 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007034fb;
        }
        QArrayData::deallocate(local_168,1,8);
      }
    }
    goto LAB_1007034fb;
  }
  local_160.field0_0x0 = local_98.field0_0x0;
  if (1 < *(int *)local_98.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
    local_31 = *(int *)local_98.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1eeaa60);
  QString::append(&local_160);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100703424;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100703424:
  QString::append(param_1);
  if (*(int *)local_160.field0_0x0 != -1) {
    if (*(int *)local_160.field0_0x0 != 0) {
      LOCK();
      *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
      local_31 = *(int *)local_160.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007034fb;
    }
    QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
  }
LAB_1007034fb:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_98.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
  return param_1;
}

