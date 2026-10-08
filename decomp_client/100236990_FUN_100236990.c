
undefined8 FUN_100236990(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  Data *pDVar8;
  QSettings *this;
  QArrayData *pQVar9;
  undefined4 uVar10;
  bool bVar11;
  uint in_stack_fffffffffffffeac;
  Connection local_140 [8];
  Connection local_138 [8];
  Connection local_130 [8];
  int *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  Data_conflict local_108;
  undefined4 local_100;
  undefined1 local_f8;
  Data_conflict local_f0;
  undefined4 local_e8;
  QArrayData *local_e0;
  int *local_d8 [4];
  QVariant local_b8 [2];
  undefined1 local_a0 [24];
  QArrayData *local_88;
  QString local_80;
  QString local_78 [2];
  QVariant local_68;
  QArrayData *local_58;
  Data_conflict local_50;
  QString local_48 [2];
  bool local_31;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar3 = FUN_100319390(uVar4);
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: vm object is not valid");
    return 0x80000009;
  }
  uVar4 = FUN_1001d50a0();
  cVar1 = FUN_1001d5140(uVar4);
  if (cVar1 == '\0') {
    QSettings::QSettings((QSettings *)local_78,(QObject *)0x0);
    FUN_100188480(&local_88,lVar3);
    QString::fromUtf8_helper((char *)&local_80,0x1dddd24);
    QString::append(&local_80);
    QSettings::remove(local_78);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if (local_31) goto LAB_100236b54;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_100236b54:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if (local_31) goto LAB_100236b84;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100236b84:
    this = (QSettings *)local_78;
  }
  else {
    QSettings::QSettings((QSettings *)local_48,(QObject *)0x0);
    FUN_100188480(&local_58,lVar3);
    QString::fromUtf8_helper(&local_50.field0,0x1dddd24);
    QString::append((QString *)&local_50);
    iVar2 = FUN_10018a9d0(lVar3);
    QVariant::QVariant(&local_68,iVar2);
    QSettings::setValue(local_48,(QVariant *)&local_50);
    QVariant::~QVariant(&local_68);
    if (*(int *)local_50.field15 != -1) {
      if (*(int *)local_50.field15 != 0) {
        LOCK();
        *(int *)local_50.field15 = *(int *)local_50.field15 + -1;
        local_31 = *(int *)local_50.field15 != 0;
        UNLOCK();
        if (local_31) goto LAB_100236a7c;
      }
      QArrayData::deallocate((QArrayData *)local_50.field15,2,8);
    }
LAB_100236a7c:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if (local_31) goto LAB_100236aac;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100236aac:
    this = (QSettings *)local_48;
  }
  QSettings::~QSettings(this);
  bVar11 = false;
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0:
    uVar4 = FUN_10018c2b0(lVar3);
    cVar1 = FUN_100112cc0(uVar4);
    uVar10 = 0x40;
    if (cVar1 != '\0') {
      uVar10 = 0xc9;
    }
    cVar1 = FUN_1002383c0(param_1);
    bVar11 = cVar1 == '\0';
    if (bVar11) {
      FUN_100238450(param_1);
    }
    pQVar5 = (QObject *)FUN_1001930a0(lVar3,uVar10);
    piVar6 = (int *)0x0;
    if (pQVar5 != (QObject *)0x0) {
      piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
    }
    piVar7 = *(int **)(param_1 + 0x70);
    if (piVar7 != piVar6) {
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        local_31 = *piVar6 != 0;
        UNLOCK();
        piVar7 = *(int **)(param_1 + 0x70);
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if ((!local_31) && (*(void **)(param_1 + 0x70) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x70));
        }
      }
      *(int **)(param_1 + 0x70) = piVar6;
      *(QObject **)(param_1 + 0x78) = pQVar5;
    }
    if (piVar6 == (int *)0x0) goto switchD_100236baf_caseD_2;
    LOCK();
    *piVar6 = *piVar6 + -1;
    iVar2 = *piVar6;
    UNLOCK();
    break;
  case 1:
    uVar4 = FUN_10018c2b0(lVar3);
    cVar1 = FUN_100114050(uVar4);
    if (cVar1 != '\0') {
      CAbstractTask::setWaitForSubTaskCompletion();
      iVar2 = CMessageManager::instance();
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_1003193e0(local_a0 + 0x10,uVar4);
      local_a0._8_8_ = PTR_shared_null_1021e15e8;
      local_a0._0_8_ = PTR_shared_null_1021e15e8;
      local_e0 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
      local_e8 = 0x80000000;
      local_f0.field7 = 0;
      FUN_100a1c600(local_d8,param_1,&local_e0,&local_f0);
      local_128 = (int *)0x0;
      uStack_120 = 0;
      local_110 = 0;
      local_118 = 0;
      local_100 = 0x80000000;
      local_108.field7 = 0;
      local_f8 = 1;
      CMessageManager::showMessageBox
                (iVar2,(QString *)0x80036031,(QStringList *)(local_a0 + 0x10),
                 (QStringList *)(local_a0 + 8),(CSlotInfo *)local_a0,SUB81(local_d8,0),
                 (QWidget *)((ulong)in_stack_fffffffffffffeac << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_108);
      if (local_128 != (int *)0x0) {
        LOCK();
        *local_128 = *local_128 + -1;
        local_31 = *local_128 != 0;
        UNLOCK();
        if ((!local_31) && (local_128 != (int *)0x0)) {
          operator_delete(local_128);
        }
      }
      QVariant::~QVariant(local_b8);
      if (local_d8[0] != (int *)0x0) {
        LOCK();
        *local_d8[0] = *local_d8[0] + -1;
        local_31 = *local_d8[0] != 0;
        UNLOCK();
        if ((!local_31) && (local_d8[0] != (int *)0x0)) {
          operator_delete(local_d8[0]);
        }
      }
      QVariant::~QVariant((QVariant *)&local_f0);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if (local_31) goto LAB_100236dc7;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100236dc7:
      uVar4 = local_a0._0_8_;
      if (*(int *)local_a0._0_8_ != -1) {
        if (*(int *)local_a0._0_8_ != 0) {
          LOCK();
          *(int *)local_a0._0_8_ = *(int *)local_a0._0_8_ + -1;
          local_31 = *(int *)local_a0._0_8_ != 0;
          UNLOCK();
          if (local_31) goto LAB_100236e51;
        }
        iVar2 = *(int *)(local_a0._0_8_ + 0xc);
        if (iVar2 != *(int *)(local_a0._0_8_ + 8)) {
          lVar3 = (long)*(int *)(local_a0._0_8_ + 8) * 8 + (long)iVar2 * -8;
          pDVar8 = (Data *)(local_a0._0_8_ + (long)iVar2 * 8 + 8);
          do {
            pQVar9 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar9 == 0) {
LAB_100236e30:
              QArrayData::deallocate(pQVar9,2,8);
            }
            else if (*(int *)pQVar9 != -1) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_31 = *(int *)pQVar9 != 0;
              UNLOCK();
              if (!local_31) {
                pQVar9 = *(QArrayData **)pDVar8;
                goto LAB_100236e30;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar3 = lVar3 + 8;
          } while (lVar3 != 0);
        }
        QListData::dispose((Data *)uVar4);
      }
LAB_100236e51:
      uVar4 = local_a0._8_8_;
      if (*(int *)local_a0._8_8_ != -1) {
        if (*(int *)local_a0._8_8_ != 0) {
          LOCK();
          *(int *)local_a0._8_8_ = *(int *)local_a0._8_8_ + -1;
          local_31 = *(int *)local_a0._8_8_ != 0;
          UNLOCK();
          if (local_31) goto LAB_100236edb;
        }
        iVar2 = *(int *)(local_a0._8_8_ + 0xc);
        if (iVar2 != *(int *)(local_a0._8_8_ + 8)) {
          lVar3 = (long)*(int *)(local_a0._8_8_ + 8) * 8 + (long)iVar2 * -8;
          pDVar8 = (Data *)(local_a0._8_8_ + (long)iVar2 * 8 + 8);
          do {
            pQVar9 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar9 == 0) {
LAB_100236eba:
              QArrayData::deallocate(pQVar9,2,8);
            }
            else if (*(int *)pQVar9 != -1) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_31 = *(int *)pQVar9 != 0;
              UNLOCK();
              if (!local_31) {
                pQVar9 = *(QArrayData **)pDVar8;
                goto LAB_100236eba;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar3 = lVar3 + 8;
          } while (lVar3 != 0);
        }
        QListData::dispose((Data *)uVar4);
      }
LAB_100236edb:
      if (*(int *)local_a0._16_8_ == -1) {
        return 0;
      }
      if (*(int *)local_a0._16_8_ != 0) {
        LOCK();
        *(int *)local_a0._16_8_ = *(int *)local_a0._16_8_ + -1;
        UNLOCK();
        if (*(int *)local_a0._16_8_ != 0) {
          return 0;
        }
        local_31 = false;
      }
      QArrayData::deallocate((QArrayData *)local_a0._16_8_,2,8);
      return 0;
    }
    FUN_100238450(param_1);
    pQVar5 = (QObject *)FUN_100193200(lVar3,0xc9);
    piVar6 = (int *)0x0;
    if (pQVar5 != (QObject *)0x0) {
      piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
    }
    piVar7 = *(int **)(param_1 + 0x70);
    if (piVar7 != piVar6) {
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        local_31 = *piVar6 != 0;
        UNLOCK();
        piVar7 = *(int **)(param_1 + 0x70);
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if ((!local_31) && (*(void **)(param_1 + 0x70) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x70));
        }
      }
      *(int **)(param_1 + 0x70) = piVar6;
      *(QObject **)(param_1 + 0x78) = pQVar5;
    }
    bVar11 = true;
    if (piVar6 == (int *)0x0) goto switchD_100236baf_caseD_2;
    LOCK();
    *piVar6 = *piVar6 + -1;
    iVar2 = *piVar6;
    UNLOCK();
    bVar11 = true;
    break;
  default:
    goto switchD_100236baf_caseD_2;
  case 4:
    uVar4 = FUN_10018c2b0(lVar3);
    cVar1 = FUN_100112cc0(uVar4);
    uVar4 = 0x40;
    if (cVar1 != '\0') {
      uVar4 = 0xc9;
    }
    pQVar5 = (QObject *)FUN_100193de0(lVar3,uVar4);
    piVar6 = (int *)0x0;
    if (pQVar5 != (QObject *)0x0) {
      piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
    }
    piVar7 = *(int **)(param_1 + 0x70);
    if (piVar7 != piVar6) {
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        local_31 = *piVar6 != 0;
        UNLOCK();
        piVar7 = *(int **)(param_1 + 0x70);
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if ((!local_31) && (*(void **)(param_1 + 0x70) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x70));
        }
      }
      *(int **)(param_1 + 0x70) = piVar6;
      *(QObject **)(param_1 + 0x78) = pQVar5;
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      if (!local_31) {
        operator_delete(piVar6);
      }
    }
    goto LAB_100237018;
  case 5:
    uVar4 = FUN_1001d50a0();
    cVar1 = FUN_1001d5140(uVar4,0);
    if (((cVar1 != '\0') || (iVar2 = FUN_10018a9d0(lVar3), iVar2 == 0x30000004)) ||
       (iVar2 = FUN_10018a9d0(lVar3), iVar2 == 0x30000005)) {
      FUN_100238450(param_1);
    }
    uVar4 = FUN_1001d50a0();
    bVar11 = false;
    cVar1 = FUN_1001d5140(uVar4,0);
    if (cVar1 != '\0') goto switchD_100236baf_caseD_2;
    FUN_1001907a0(lVar3);
LAB_100237018:
    bVar11 = false;
    goto switchD_100236baf_caseD_2;
  }
  local_31 = iVar2 != 0;
  if (!local_31) {
    operator_delete(piVar6);
  }
switchD_100236baf_caseD_2:
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 != 0) {
    if (((*(int *)(lVar3 + 4) == 0) || (bVar11)) || (*(long *)(param_1 + 0x78) == 0)) {
      if (*(int *)(lVar3 + 4) == 0) {
        return 0;
      }
      if (!bVar11 || *(long *)(param_1 + 0x78) == 0) {
        return 0;
      }
      QObject::connect(local_138,*(long *)(param_1 + 0x78),"2subTaskStarted( int )",param_1,
                       "1onChangeVmStateTaskSubTaskStarted( int )",0);
      QMetaObject::Connection::~Connection(local_138);
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x70) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x78);
      }
      QObject::connect(local_140,uVar4,"2taskFinished( PRL_RESULT )",param_1,
                       "1onChangeVmStateTaskFinished( PRL_RESULT )",0);
      QMetaObject::Connection::~Connection(local_140);
      CAbstractTask::appendSubTask((int)param_1);
    }
    else {
      QObject::connect(local_130,*(long *)(param_1 + 0x78),"2taskFinished( PRL_RESULT )",param_1,
                       "1onVmActionOnCloseCompleted( PRL_RESULT )",0);
      QMetaObject::Connection::~Connection(local_130);
    }
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  return 0;
}

