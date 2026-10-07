
void FUN_1004d1270(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  QArrayData *pQVar1;
  long *plVar2;
  QArrayData *pQVar3;
  long lVar4;
  QArrayData *pQVar5;
  char cVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  QArrayData *pQVar11;
  QArrayData *pQVar12;
  QString QVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  QArrayData *pQVar17;
  uint *puVar18;
  QArrayData *pQVar19;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  uint *local_40;
  undefined1 local_31;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","SharedFoldersHost",3,"CSFolderList::resolveHostPathDeferred stage 1");
  }
  QMutex::lock();
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","SharedFoldersHost",3,"CSFolderList::resolveHostPathDeferred stage 2");
  }
  FUN_1004d6ff0(&local_40,param_1 + 8);
  QMutex::unlock();
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_50 = (QArrayData *)*param_2;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  uVar8 = QDir::separator();
  cVar6 = QString::endsWith(&local_50,uVar8,1);
  if (cVar6 == '\0') {
    uVar8 = QDir::separator();
    QString::append(&local_50,uVar8);
  }
  if (1 < *local_40) {
    FUN_1004d6bf0(&local_40,local_40[1]);
  }
  puVar18 = local_40 + (long)(int)local_40[2] * 2 + 4;
  plVar15 = (long *)0x0;
  while( true ) {
    if (1 < *local_40) {
      FUN_1004d6bf0(&local_40,local_40[1]);
    }
    if (puVar18 == local_40 + (long)(int)local_40[3] * 2 + 4) break;
    plVar2 = (long *)**(long **)puVar18;
    if (plVar2 != (long *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    cVar6 = FUN_1004d84c0(plVar2);
    plVar16 = plVar15;
    if (cVar6 != '\0') {
      local_58 = (QArrayData *)plVar2[3];
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
      local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
      uVar8 = QDir::separator();
      QString::QString(&local_68,uVar8);
      iVar9 = QString::compare(&local_58,&local_68,1);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d148f;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_1004d148f:
      if (iVar9 == 0) {
        QString::mid((int)&local_70,(int)param_2);
        QVar13.field0_0x0 = local_60.field0_0x0;
        local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
        local_70 = (QArrayData *)QVar13.field0_0x0;
        if (*(int *)QVar13.field0_0x0 != -1) {
          if (*(int *)QVar13.field0_0x0 != 0) {
            LOCK();
            *(int *)QVar13.field0_0x0 = *(int *)QVar13.field0_0x0 + -1;
            iVar9 = *(int *)QVar13.field0_0x0;
            UNLOCK();
joined_r0x0001004d1542:
            local_31 = iVar9 != 0;
            if ((bool)local_31) goto LAB_1004d1557;
          }
LAB_1004d1548:
          QArrayData::deallocate((QArrayData *)QVar13.field0_0x0,2,8);
        }
LAB_1004d1557:
        plVar14 = (long *)0x0;
        if (plVar2[0x10] != 0) {
          plVar14 = *(long **)(plVar2[0x10] + 0x10);
        }
        cVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,&local_60);
        if (cVar6 != '\0') {
          if (plVar15 == (long *)0x0) {
            QString::operator=(&local_48,&local_60);
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            plVar16 = plVar2;
          }
          else if (*(int *)(plVar15[3] + 4) < *(int *)(plVar2[3] + 4)) {
            QString::operator=(&local_48,&local_60);
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            LOCK();
            plVar16 = plVar15 + 1;
            lVar4 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            plVar16 = plVar2;
            if ((int)lVar4 == 1) {
              (**(code **)(*plVar15 + 0x10))();
            }
          }
        }
      }
      else {
        cVar6 = QString::startsWith(&local_50,&local_58,1);
        if (cVar6 != '\0') {
          QString::mid((int)&local_78,(int)param_2);
          QVar13.field0_0x0 = local_60.field0_0x0;
          local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
          local_78 = (QArrayData *)QVar13.field0_0x0;
          if (*(int *)QVar13.field0_0x0 != -1) {
            if (*(int *)QVar13.field0_0x0 != 0) {
              LOCK();
              *(int *)QVar13.field0_0x0 = *(int *)QVar13.field0_0x0 + -1;
              iVar9 = *(int *)QVar13.field0_0x0;
              UNLOCK();
              goto joined_r0x0001004d1542;
            }
            goto LAB_1004d1548;
          }
          goto LAB_1004d1557;
        }
      }
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d1620;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_1004d1620:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d1650;
        }
        QArrayData::deallocate(local_58,2,8);
      }
    }
LAB_1004d1650:
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar15 = plVar2 + 1;
      lVar4 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    puVar18 = puVar18 + 2;
    plVar15 = plVar16;
  }
  if (plVar15 == (long *)0x0) {
    *param_3 = 0;
  }
  else {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar9 = CVmCommonOptions::getOsType();
    if (iVar9 == 8) {
      if ((1 < *(uint *)local_48.field0_0x0) || (*(long *)(local_48.field0_0x0 + 0x10) != 0x18)) {
        QString::reallocData
                  ((uint)&local_48,(bool)((char)*(uint *)(local_48.field0_0x0 + 4) + '\x01'));
      }
      uVar10 = (ulong)(int)*(uint *)(local_48.field0_0x0 + 4);
      if ((uVar10 & 0x7fffffffffffffff) != 0) {
        pQVar17 = (QArrayData *)(local_48.field0_0x0 + *(long *)(local_48.field0_0x0 + 0x10));
        pQVar1 = pQVar17 + uVar10 * 2;
        pQVar19 = (QArrayData *)
                  (local_48.field0_0x0 + *(long *)(local_48.field0_0x0 + 0x10) + uVar10 * 2);
        do {
          if (*(short *)pQVar17 == 0x2f) {
            pQVar17 = pQVar17 + 2;
          }
          else {
            pQVar12 = pQVar1;
            pQVar11 = pQVar17;
            if (pQVar17 != pQVar1) {
              do {
                pQVar11 = pQVar11 + 2;
                pQVar12 = pQVar1;
                if (pQVar19 == pQVar11) break;
                pQVar12 = pQVar11;
              } while (*(short *)pQVar11 != 0x2f);
            }
            if ((long)pQVar12 - (long)pQVar17 != 0) {
              sVar7 = FUN_100541f30(*(short *)pQVar17);
              *(short *)pQVar17 = sVar7;
              pQVar5 = pQVar17 + 2;
              pQVar11 = pQVar17;
              while (pQVar3 = pQVar5, pQVar3 != pQVar12) {
                sVar7 = FUN_100541f30(*(short *)(pQVar11 + 2));
                *(short *)(pQVar11 + 2) = sVar7;
                pQVar5 = pQVar11 + 4;
                pQVar11 = pQVar3;
              }
              if (*(short *)(pQVar12 + -2) == 0x2e) {
                if ((2 < (ulong)((long)pQVar12 - (long)pQVar17 >> 1)) ||
                   (sVar7 = *(short *)pQVar17, pQVar17 = pQVar12, sVar7 != 0x2e)) {
                  *(short *)(pQVar12 + -2) = -0xfd7;
                  pQVar17 = pQVar12;
                }
              }
              else {
                pQVar17 = pQVar12;
                if (*(short *)(pQVar12 + -2) == 0x20) {
                  *(short *)(pQVar12 + -2) = -0xfd8;
                }
              }
            }
          }
        } while (pQVar17 != pQVar1);
      }
      QString::replace(&local_48,0x2f,0x5c,1);
      QString::normalized(&local_80,&local_48,1,0);
      QVar13.field0_0x0 = local_48.field0_0x0;
      local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_80;
      local_80 = (QArrayData *)QVar13.field0_0x0;
      if (*(int *)QVar13.field0_0x0 != -1) {
        if (*(int *)QVar13.field0_0x0 != 0) {
          LOCK();
          *(int *)QVar13.field0_0x0 = *(int *)QVar13.field0_0x0 + -1;
          local_31 = *(int *)QVar13.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d1a75;
        }
        QArrayData::deallocate((QArrayData *)QVar13.field0_0x0,2,8);
      }
LAB_1004d1a75:
      local_a0 = (QArrayData *)QString::fromAscii_helper("\\\\%1\\%2\\%3",10);
      FUN_1004c7270(&local_a8);
      QString::arg(&local_98,&local_a0,&local_a8,0,0x20);
      QString::arg(&local_90,&local_98,plVar15 + 2,0,0x20);
      QString::arg(&local_88,&local_90,&local_48,0,0x20);
      pQVar17 = *(QArrayData **)(param_3 + 8);
      *(QArrayData **)(param_3 + 8) = local_88;
      local_88 = pQVar17;
      if (*(int *)pQVar17 != -1) {
        if (*(int *)pQVar17 != 0) {
          LOCK();
          *(int *)pQVar17 = *(int *)pQVar17 + -1;
          local_31 = *(int *)pQVar17 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d1b3d;
        }
        QArrayData::deallocate(pQVar17,2,8);
      }
LAB_1004d1b3d:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d1b73;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1004d1b73:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d1ba9;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1004d1ba9:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d1bdf;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1004d1bdf:
      if (*(int *)local_a0 != -1) {
        pQVar17 = local_a0;
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          iVar9 = *(int *)local_a0;
          UNLOCK();
joined_r0x0001004d1892:
          local_31 = iVar9 != 0;
          if ((bool)local_31) goto LAB_1004d1c15;
        }
LAB_1004d1c06:
        QArrayData::deallocate(pQVar17,2,8);
      }
    }
    else {
      local_c8 = (QArrayData *)QString::fromAscii_helper("//%1/%2/%3",10);
      FUN_1004c7270(&local_d0);
      QString::arg(&local_c0,&local_c8,&local_d0,0,0x20);
      QString::arg(&local_b8,&local_c0,plVar15 + 2,0,0x20);
      QString::arg(&local_b0,&local_b8,&local_48,0,0x20);
      pQVar17 = *(QArrayData **)(param_3 + 8);
      *(QArrayData **)(param_3 + 8) = local_b0;
      local_b0 = pQVar17;
      if (*(int *)pQVar17 != -1) {
        if (*(int *)pQVar17 != 0) {
          LOCK();
          *(int *)pQVar17 = *(int *)pQVar17 + -1;
          local_31 = *(int *)pQVar17 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d17ca;
        }
        QArrayData::deallocate(pQVar17,2,8);
      }
LAB_1004d17ca:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d1800;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1004d1800:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d1836;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1004d1836:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d186c;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_1004d186c:
      if (*(int *)local_c8 != -1) {
        pQVar17 = local_c8;
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          iVar9 = *(int *)local_c8;
          UNLOCK();
          goto joined_r0x0001004d1892;
        }
        goto LAB_1004d1c06;
      }
    }
LAB_1004d1c15:
    *param_3 = 1;
  }
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","SharedFoldersHost",3,"CSFolderList::resolveHostPathDeferred stage 3");
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d1c75;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004d1c75:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d1ca5;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1004d1ca5:
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar2 = plVar15 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  if (*local_40 != 0xffffffff) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 - 1;
      UNLOCK();
      if (*local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_1004d6ab0(&local_40,local_40);
  }
  return;
}

