
void FUN_1007099c0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  Data *pDVar5;
  uint uVar6;
  QString *pQVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QKeySequence local_110 [8];
  QString local_108;
  QKeySequence local_100 [8];
  QString local_f8;
  Data *local_f0;
  Data *local_e8;
  Data *local_e0;
  undefined4 local_d8;
  QArrayData *local_d0;
  long local_c8;
  long *local_c0;
  long *local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar13 = (0x4e - *(int *)(*param_2 + 4)) / 2;
  iVar11 = 0;
  do {
    if (iVar11 == iVar13) {
      QString::fromUtf8_helper((char *)&local_98,0x1e31adc);
      pQVar7 = (QString *)QString::append(&local_a0);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100709a7d;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100709a7d:
      pQVar7 = (QString *)QString::append(pQVar7);
      QString::fromUtf8_helper((char *)&local_90,0x1e31adc);
      QString::append(pQVar7);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100709ae8;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100709ae8:
      iVar11 = iVar13 + 2 + *(int *)(*param_2 + 4);
    }
    else {
      QString::fromUtf8_helper((char *)&local_88,0x1db6a71);
      QString::append(&local_a0);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100709b60;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
LAB_100709b60:
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x50);
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"%s",local_a8 + *(long *)(local_a8 + 0x10));
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100709bec;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
  }
LAB_100709bec:
  FUN_10055a620(&local_c8,param_1);
  local_c0 = (long *)(local_c8 + 0x10 + (long)*(int *)(local_c8 + 8) * 8);
  local_b8 = (long *)(local_c8 + 0x10 + (long)*(int *)(local_c8 + 0xc) * 8);
  if (*(int *)(local_c8 + 8) != *(int *)(local_c8 + 0xc)) {
    do {
      local_b0 = 1;
      plVar1 = (long *)*local_c0;
      QString::fromUtf8_helper((char *)&local_80,0x1e41978);
      QString::operator=(&local_a0,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100709ca1;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_100709ca1:
      iVar13 = (0x4e - *(int *)(*plVar1 + 4)) / 2;
      iVar11 = 0;
      do {
        if (iVar11 == iVar13) {
          QString::fromUtf8_helper((char *)&local_78,0x1e31adc);
          pQVar7 = (QString *)QString::append(&local_a0);
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100709d39;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_100709d39:
          pQVar7 = (QString *)QString::append(pQVar7);
          QString::fromUtf8_helper((char *)&local_70,0x1e134e8);
          pQVar7 = (QString *)QString::append(pQVar7);
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100709d9b;
            }
            QArrayData::deallocate(local_70,2,8);
          }
LAB_100709d9b:
          pQVar7 = (QString *)QString::append(pQVar7);
          QString::fromUtf8_helper((char *)&local_68,0x1e134eb);
          QString::append(pQVar7);
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100709dfe;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_100709dfe:
          iVar11 = *(int *)(plVar1[1] + 4) + 5 + *(int *)(*plVar1 + 4) + iVar13;
        }
        else {
          QString::fromUtf8_helper((char *)&local_60,0x1e1dada);
          QString::append(&local_a0);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100709e80;
            }
            QArrayData::deallocate(local_60,2,8);
          }
        }
LAB_100709e80:
        iVar11 = iVar11 + 1;
      } while (iVar11 < 0x50);
      if (1 < DAT_10230ffd0) {
        QString::toUtf8();
        FUN_100df99c0("","prl_client_app",2,"%s",local_d0 + *(long *)(local_d0 + 0x10));
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100709f10;
          }
          QArrayData::deallocate(local_d0,1,8);
        }
      }
LAB_100709f10:
      FUN_1000ff290(&local_f0,plVar1 + 2);
      local_e8 = local_f0 + (long)*(int *)(local_f0 + 8) * 8 + 0x10;
      local_e0 = local_f0 + (long)*(int *)(local_f0 + 0xc) * 8 + 0x10;
      if (*(int *)(local_f0 + 8) != *(int *)(local_f0 + 0xc)) {
        do {
          local_d8 = 1;
          uVar2 = *(undefined8 *)local_e8;
          FUN_100714b50(local_100,uVar2);
          FUN_1007170a0(&local_f8,local_100,1);
          QKeySequence::~QKeySequence(local_100);
          for (iVar11 = *(int *)(local_f8.field0_0x0 + 4); iVar11 < 0x19; iVar11 = iVar11 + 1) {
            QString::fromUtf8_helper((char *)&local_58,0x1e31adc);
            QString::append(&local_f8);
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 != 0) {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + -1;
                local_31 = *(int *)local_58 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10070a001;
              }
              QArrayData::deallocate(local_58,2,8);
            }
LAB_10070a001:
          }
          FUN_100714b80(local_110,uVar2);
          FUN_1007170a0(&local_108,local_110,1);
          QKeySequence::~QKeySequence(local_110);
          for (iVar11 = *(int *)(local_108.field0_0x0 + 4); iVar11 < 0x19; iVar11 = iVar11 + 1) {
            QString::fromUtf8_helper((char *)&local_50,0x1e31adc);
            QString::append(&local_108);
            if (*(int *)local_50 != -1) {
              if (*(int *)local_50 != 0) {
                LOCK();
                *(int *)local_50 = *(int *)local_50 + -1;
                local_31 = *(int *)local_50 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10070a0a1;
              }
              QArrayData::deallocate(local_50,2,8);
            }
LAB_10070a0a1:
          }
          if (1 < DAT_10230ffd0) {
            QString::toUtf8();
            lVar3 = *(long *)(local_118 + 0x10);
            QString::toUtf8();
            lVar4 = *(long *)(local_120 + 0x10);
            uVar8 = FUN_100714bb0(uVar2);
            pcVar12 = "       ";
            if ((uVar8 & 2) != 0) {
              pcVar12 = "enabled";
            }
            uVar6 = FUN_100714bb0(uVar2);
            uVar8 = FUN_100714bb0(uVar2);
            pcVar10 = "       ";
            if ((uVar6 & 4) != 0) {
              pcVar10 = "hidden";
            }
            pcVar9 = "";
            if ((uVar8 & 8) != 0) {
              pcVar9 = "read-only";
            }
            FUN_100df99c0("","prl_client_app",2,"%s %s \t%s \t%s \t%s",local_118 + lVar3,
                          local_120 + lVar4,pcVar12,pcVar10,pcVar9);
            if (*(int *)local_120 != -1) {
              if (*(int *)local_120 != 0) {
                LOCK();
                *(int *)local_120 = *(int *)local_120 + -1;
                local_31 = *(int *)local_120 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10070a1c4;
              }
              QArrayData::deallocate(local_120,1,8);
            }
LAB_10070a1c4:
            if (*(int *)local_118 != -1) {
              if (*(int *)local_118 != 0) {
                LOCK();
                *(int *)local_118 = *(int *)local_118 + -1;
                local_31 = *(int *)local_118 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10070a200;
              }
              QArrayData::deallocate(local_118,1,8);
            }
          }
LAB_10070a200:
          if (*(int *)local_108.field0_0x0 != -1) {
            if (*(int *)local_108.field0_0x0 != 0) {
              LOCK();
              *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
              local_31 = *(int *)local_108.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10070a236;
            }
            QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
          }
LAB_10070a236:
          if (*(int *)local_f8.field0_0x0 != -1) {
            if (*(int *)local_f8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
              local_31 = *(int *)local_f8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10070a273;
            }
            QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
          }
LAB_10070a273:
          local_e8 = local_e8 + 8;
        } while (local_e8 != local_e0);
      }
      pDVar5 = local_f0;
      local_d8 = 1;
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070a2e9;
        }
        FUN_1005596c0(&local_f0,local_f0 + (long)*(int *)(local_f0 + 8) * 8 + 0x10,
                      local_f0 + (long)*(int *)(local_f0 + 0xc) * 8 + 0x10);
        QListData::dispose(pDVar5);
      }
LAB_10070a2e9:
      local_c0 = local_c0 + 1;
    } while (local_c0 != local_b8);
  }
  local_b0 = 1;
  FUN_1000fe670(&local_c8);
  iVar11 = *(int *)(local_a0.field0_0x0 + 4);
  QString::fromUtf8_helper((char *)&local_48,0x1e41978);
  QString::operator=(&local_a0,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070a37b;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10070a37b:
  if (0 < iVar11) {
    iVar13 = 0;
    do {
      QString::fromUtf8_helper((char *)&local_40,0x1db6a71);
      QString::append(&local_a0);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070a3eb;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_10070a3eb:
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar11);
  }
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"%s",local_128 + *(long *)(local_128 + 0x10));
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10070a473;
      }
      QArrayData::deallocate(local_128,1,8);
    }
  }
LAB_10070a473:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_a0.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
  return;
}

