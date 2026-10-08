
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100d713e0(undefined8 param_1,long *param_2,QString *param_3)

{
  int *piVar1;
  QArrayData *pQVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined1 uVar11;
  QArrayData *pQVar12;
  char *pcVar13;
  bool bVar14;
  QArrayData *local_130;
  QArrayData *local_128;
  QString local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QFileInfo local_98 [8];
  QString local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  uint local_70;
  QArrayData *local_68;
  QString local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  QProcess local_48 [23];
  undefined1 local_31;
  
  QProcess::QProcess(local_48,(QObject *)0x0);
  local_58 = DAT_100e14fe0;
  uStack_50 = _UNK_100e14fe8;
  local_68 = (QArrayData *)QString::fromAscii_helper("tmutil %1",9);
  QString::arg(&local_60,&local_68,param_1,0,0x20);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d71474;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100d71474:
  local_88 = (int *)*param_2;
  if (*local_88 != -1) {
    if (*local_88 == 0) {
      QListData::detach((int)&local_88);
      iVar5 = local_88[2];
      if (iVar5 != local_88[3]) {
        puVar9 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        piVar10 = local_88 + (long)iVar5 * 2 + 4;
        lVar7 = (long)local_88[3] * 8 + (long)iVar5 * -8;
        do {
          piVar1 = (int *)*puVar9;
          *(int **)piVar10 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar10 = piVar10 + 2;
          puVar9 = puVar9 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_88 = *local_88 + 1;
      local_31 = *local_88 != 0;
      UNLOCK();
    }
  }
  local_80 = local_88 + (long)local_88[2] * 2 + 4;
  local_78 = local_88 + (long)local_88[3] * 2 + 4;
  local_70 = 1;
  if (local_88[2] != local_88[3]) {
    do {
      local_90.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_80;
      if (1 < *(int *)local_90.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
      }
      iVar5 = 5;
      if (local_70 != 0) {
        QFileInfo::QFileInfo(local_98,&local_90);
        cVar3 = QFileInfo::exists();
        QFileInfo::~QFileInfo(local_98);
        if (cVar3 == '\0') {
          iVar5 = 1;
          if (0 < DAT_10230ffd0) {
            QString::toUtf8();
            FUN_100df99c0("","prl_time_machine_helper",1,
                          "tmutil arg file path \'%s\' does not exist !",
                          local_a0 + *(long *)(local_a0 + 0x10));
            if (*(int *)local_a0 != -1) {
              if (*(int *)local_a0 != 0) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + -1;
                local_31 = *(int *)local_a0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d716e0;
              }
              QArrayData::deallocate(local_a0,1,8);
            }
          }
        }
        else {
          local_b0 = (QArrayData *)QString::fromAscii_helper(" \"%1\"",5);
          QString::arg(&local_a8,&local_b0,&local_90,0,0x20);
          QString::append(&local_60);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d71607;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_100d71607:
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d7163d;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
LAB_100d7163d:
          local_70 = 0;
        }
      }
LAB_100d716e0:
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d71716;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_100d71716:
      if (iVar5 != 5) goto LAB_100d71748;
      local_80 = local_80 + 2;
      uVar4 = local_70 ^ 1;
      bVar14 = local_70 != 1;
      local_70 = uVar4;
    } while ((bVar14) && (local_80 != local_78));
  }
  iVar5 = 2;
LAB_100d71748:
  FUN_100039a80(&local_88);
  if (iVar5 != 2) {
    uVar11 = 0;
    goto LAB_100d71cf6;
  }
  QProcess::start(local_48,&local_60,3);
  QElapsedTimer::start();
  cVar3 = QProcess::waitForStarted((int)local_48);
  if (cVar3 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_time_machine_helper",0,"Timeout (%d) at wait start \'%s\' !",5000,
                  local_b8 + *(long *)(local_b8 + 0x10));
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d71955;
      }
      QArrayData::deallocate(local_b8,1,8);
    }
LAB_100d71955:
    QProcess::readAllStandardOutput();
    pQVar12 = local_e8 + *(long *)(local_e8 + 0x10);
    if ((pQVar12 != (QArrayData *)0x0) && (*(uint *)(local_e8 + 4) != 0)) {
      lVar7 = 0;
      do {
        if (pQVar12[lVar7] == (QArrayData)0x0) break;
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(local_e8 + 4));
      if ((int)lVar7 == -1) {
        _strlen((char *)pQVar12);
      }
    }
    QString::fromUtf8_helper((char *)&local_e0,(int)pQVar12);
    QString::normalized(&local_d8,&local_e0,1,0);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d719fc;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_100d719fc:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d71a32;
      }
      QArrayData::deallocate(local_e8,1,8);
    }
LAB_100d71a32:
    QProcess::readAllStandardError();
    pQVar12 = local_100 + *(long *)(local_100 + 0x10);
    if ((pQVar12 != (QArrayData *)0x0) && (*(uint *)(local_100 + 4) != 0)) {
      lVar7 = 0;
      do {
        if (pQVar12[lVar7] == (QArrayData)0x0) break;
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(local_100 + 4));
      if ((int)lVar7 == -1) {
        _strlen((char *)pQVar12);
      }
    }
    QString::fromUtf8_helper((char *)&local_f8,(int)pQVar12);
    QString::normalized(&local_f0,&local_f8,1,0);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d71adc;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_100d71adc:
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d71b12;
      }
      QArrayData::deallocate(local_100,1,8);
    }
LAB_100d71b12:
    QString::toUtf8();
    pQVar12 = local_108 + *(long *)(local_108 + 0x10);
    if (*(int *)(local_f0 + 4) == 0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = "\n";
    }
    QString::toUtf8();
    pQVar2 = local_110;
    lVar7 = *(long *)(local_110 + 0x10);
    iVar5 = *(int *)(local_d8 + 4);
    QString::toUtf8();
    if (iVar5 == 0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = "\n";
    }
    FUN_100df99c0("","prl_time_machine_helper",0,"The \'%s\' execution failed.%s%s%s%s",pQVar12,
                  pcVar13,pQVar2 + lVar7,pcVar8,local_118 + *(long *)(local_118 + 0x10));
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d71c14;
      }
      QArrayData::deallocate(local_118,1,8);
    }
LAB_100d71c14:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d71c4a;
      }
      QArrayData::deallocate(local_110,1,8);
    }
LAB_100d71c4a:
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d71c80;
      }
      QArrayData::deallocate(local_108,1,8);
    }
LAB_100d71c80:
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d71cb6;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_100d71cb6:
    if (*(int *)local_d8 == -1) {
      uVar11 = 0;
    }
    else {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) {
          uVar11 = 0;
          goto LAB_100d71cf6;
        }
      }
      QArrayData::deallocate(local_d8,2,8);
      uVar11 = 0;
    }
  }
  else {
    iVar5 = QElapsedTimer::elapsed();
    if ((5000 - iVar5 < 0) || (cVar3 = QProcess::waitForFinished((int)local_48), cVar3 == '\0')) {
      QString::toUtf8();
      FUN_100df99c0("","prl_time_machine_helper",0,"Timeout (%d) at wait finish \'%s\' !",
                    5000 - iVar5,local_c0 + *(long *)(local_c0 + 0x10));
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d71955;
        }
        QArrayData::deallocate(local_c0,1,8);
      }
      goto LAB_100d71955;
    }
    iVar5 = QProcess::exitStatus();
    if (iVar5 != 0) {
      QString::toUtf8();
      pQVar12 = local_c8;
      lVar7 = *(long *)(local_c8 + 0x10);
      uVar6 = QProcess::exitStatus();
      FUN_100df99c0("","prl_time_machine_helper",0,"The \'%s\' abnormal exit\\crash (status %d) !",
                    pQVar12 + lVar7,uVar6);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d71955;
        }
        QArrayData::deallocate(local_c8,1,8);
      }
      goto LAB_100d71955;
    }
    iVar5 = QProcess::exitCode();
    if (iVar5 != 0) {
      QString::toUtf8();
      pQVar12 = local_d0;
      lVar7 = *(long *)(local_d0 + 0x10);
      uVar6 = QProcess::exitCode();
      FUN_100df99c0("","prl_time_machine_helper",0,
                    "The \'%s\' returned non-zero exit code: \'%d\' !",pQVar12 + lVar7,uVar6);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d71955;
        }
        QArrayData::deallocate(local_d0,1,8);
      }
      goto LAB_100d71955;
    }
    QProcess::readAllStandardOutput();
    pQVar12 = local_130 + *(long *)(local_130 + 0x10);
    if ((pQVar12 != (QArrayData *)0x0) && (*(uint *)(local_130 + 4) != 0)) {
      lVar7 = 0;
      do {
        if (pQVar12[lVar7] == (QArrayData)0x0) break;
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(local_130 + 4));
      if ((int)lVar7 == -1) {
        _strlen((char *)pQVar12);
      }
    }
    QString::fromUtf8_helper((char *)&local_128,(int)pQVar12);
    QString::normalized(&local_120,&local_128,1,0);
    QString::operator=(param_3,&local_120);
    if (*(int *)local_120.field0_0x0 != -1) {
      if (*(int *)local_120.field0_0x0 != 0) {
        LOCK();
        *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
        local_31 = *(int *)local_120.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d71e9f;
      }
      QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
    }
LAB_100d71e9f:
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d71ed5;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_100d71ed5:
    uVar11 = 1;
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d71cf6;
      }
      QArrayData::deallocate(local_130,1,8);
    }
  }
LAB_100d71cf6:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d71d26;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100d71d26:
  QProcess::~QProcess(local_48);
  return uVar11;
}

