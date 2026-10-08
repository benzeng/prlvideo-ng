
QObject * FUN_100340370(long param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  QArrayData *pQVar9;
  QArrayData *pQVar10;
  QObject *pQVar11;
  QArrayData *pQVar12;
  long local_190;
  undefined1 local_188 [4];
  undefined1 local_184;
  char local_182;
  undefined1 local_181;
  undefined1 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined1 local_174;
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
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_60,uVar6);
  if ((((*(long *)(param_1 + 0x20) == 0) || (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0)) ||
      (*(long *)(param_1 + 0x28) == 0)) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
    }
    bVar2 = FUN_10031ae60(uVar6);
    if ((param_2 != 0 & bVar2) == 1) {
      local_c8 = local_60;
      if (1 < *(int *)local_60 + 1U) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_51 = *(int *)local_60 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      pQVar9 = local_c0 + *(long *)(local_c0 + 0x10);
      EnumUtils::enumToString(&local_d8,param_2,1);
      QString::toLocal8Bit();
      FUN_100df99c0("","prl_client_app",0,"VM [%s] Desktop is closing, deny to switch it to %s mode"
                    ,pQVar9,local_d0 + *(long *)(local_d0 + 0x10));
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_51 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_51) goto LAB_1003404da;
        }
        QArrayData::deallocate(local_d0,1,8);
      }
LAB_1003404da:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_51 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_51) goto LAB_100340510;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100340510:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_51 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_51) goto LAB_100340546;
        }
        QArrayData::deallocate(local_c0,1,8);
      }
LAB_100340546:
      pQVar11 = (QObject *)0x0;
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_51 = *(int *)local_c8 != 0;
          UNLOCK();
          pQVar11 = (QObject *)0x0;
          if ((bool)local_51) goto LAB_10034133c;
        }
        pQVar11 = (QObject *)0x0;
        QArrayData::deallocate(local_c8,2,8);
      }
    }
    else {
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
      }
      iVar4 = FUN_100319ae0(uVar6);
      cVar1 = *(char *)((long)param_3 + 6);
      if ((param_2 == 0) && (iVar4 == 0)) {
        if (cVar1 == '\0') {
          pQVar11 = (QObject *)0x0;
          if (2 < DAT_10230ffd0) {
            local_e8 = local_60;
            if (1 < *(int *)local_60 + 1U) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + 1;
              local_51 = *(int *)local_60 != 0;
              UNLOCK();
            }
            QString::toLocal8Bit();
            FUN_100df99c0("","prl_client_app",3,
                          "VM [%s] Desktop is already in unexistent mode. Skipping switch view mode."
                          ,local_e0 + *(long *)(local_e0 + 0x10));
            if (*(int *)local_e0 != -1) {
              if (*(int *)local_e0 != 0) {
                LOCK();
                *(int *)local_e0 = *(int *)local_e0 + -1;
                local_51 = *(int *)local_e0 != 0;
                UNLOCK();
                if ((bool)local_51) goto LAB_10034067b;
              }
              QArrayData::deallocate(local_e0,1,8);
            }
LAB_10034067b:
            pQVar11 = (QObject *)0x0;
            if (*(int *)local_e8 != -1) {
              if (*(int *)local_e8 != 0) {
                LOCK();
                *(int *)local_e8 = *(int *)local_e8 + -1;
                local_51 = *(int *)local_e8 != 0;
                UNLOCK();
                pQVar11 = (QObject *)0x0;
                if ((bool)local_51) goto LAB_10034133c;
              }
              pQVar11 = (QObject *)0x0;
              QArrayData::deallocate(local_e8,2,8);
            }
          }
          goto LAB_10034133c;
        }
      }
      else if ((param_2 != 0) &&
              (((iVar4 == param_2 && (cVar1 == '\0')) &&
               (cVar1 = FUN_100341c30(param_1,param_2), cVar1 == '\0')))) {
        local_f8 = local_60;
        if (1 < *(int *)local_60 + 1U) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + 1;
          local_51 = *(int *)local_60 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        pQVar9 = local_f0 + *(long *)(local_f0 + 0x10);
        EnumUtils::enumToString(&local_108,param_2,1);
        QString::toLocal8Bit();
        FUN_100df99c0("","prl_client_app",0,
                      "Skip VM [%s] Desktop switching as it\'s in %s mode already",pQVar9,
                      local_100 + *(long *)(local_100 + 0x10));
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_51 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_100341291;
          }
          QArrayData::deallocate(local_100,1,8);
        }
LAB_100341291:
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_51 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_1003412c7;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_1003412c7:
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_51 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_1003412fd;
          }
          QArrayData::deallocate(local_f0,1,8);
        }
LAB_1003412fd:
        pQVar11 = (QObject *)0x0;
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_51 = *(int *)local_f8 != 0;
            UNLOCK();
            pQVar11 = (QObject *)0x0;
            if ((bool)local_51) goto LAB_10034133c;
          }
          pQVar11 = (QObject *)0x0;
          QArrayData::deallocate(local_f8,2,8);
        }
        goto LAB_10034133c;
      }
      if ((param_2 == 2) && (iVar4 == 3)) {
LAB_10034073b:
        local_118 = local_60;
        if (1 < *(int *)local_60 + 1U) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + 1;
          local_51 = *(int *)local_60 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        pQVar12 = local_110 + *(long *)(local_110 + 0x10);
        EnumUtils::enumToString(&local_130,iVar4,1);
        QString::toUpper();
        QString::toLocal8Bit();
        pQVar9 = local_120 + *(long *)(local_120 + 0x10);
        EnumUtils::enumToString(&local_148,param_2,1);
        QString::toUpper();
        QString::toLocal8Bit();
        FUN_100df99c0("","prl_client_app",0,"Deny switch VM\'s [%s] desktop from %s to %s mode.",
                      pQVar12,pQVar9,local_138 + *(long *)(local_138 + 0x10));
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_51 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_100340860;
          }
          QArrayData::deallocate(local_138,1,8);
        }
LAB_100340860:
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_51 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_100340896;
          }
          QArrayData::deallocate(local_140,2,8);
        }
LAB_100340896:
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_51 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_1003408cc;
          }
          QArrayData::deallocate(local_148,2,8);
        }
LAB_1003408cc:
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_51 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_100340902;
          }
          QArrayData::deallocate(local_120,1,8);
        }
LAB_100340902:
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_51 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_100340938;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_100340938:
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_51 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_10034096e;
          }
          QArrayData::deallocate(local_130,2,8);
        }
LAB_10034096e:
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_51 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_1003409a4;
          }
          QArrayData::deallocate(local_110,1,8);
        }
LAB_1003409a4:
        pQVar11 = (QObject *)0x0;
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_51 = *(int *)local_118 != 0;
            UNLOCK();
            pQVar11 = (QObject *)0x0;
            if ((bool)local_51) goto LAB_10034133c;
          }
          pQVar11 = (QObject *)0x0;
          QArrayData::deallocate(local_118,2,8);
        }
      }
      else {
        if ((param_2 == 3) && (iVar4 == 2)) {
          uVar6 = 0;
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
            uVar6 = *(undefined8 *)(param_1 + 0x18);
          }
          uVar6 = FUN_100319390(uVar6);
          cVar3 = FUN_100356c70(uVar6,0);
          if (cVar3 != '\0') goto LAB_10034073b;
        }
        uVar6 = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
          uVar6 = *(undefined8 *)(param_1 + 0x18);
        }
        pQVar11 = (QObject *)FUN_1002306a0(uVar6,param_2);
        piVar7 = (int *)0x0;
        if (pQVar11 != (QObject *)0x0) {
          piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar11);
        }
        piVar8 = *(int **)(param_1 + 0x20);
        if (piVar8 != piVar7) {
          if (piVar7 != (int *)0x0) {
            LOCK();
            *piVar7 = *piVar7 + 1;
            local_51 = *piVar7 != 0;
            UNLOCK();
            piVar8 = *(int **)(param_1 + 0x20);
          }
          if (piVar8 != (int *)0x0) {
            LOCK();
            *piVar8 = *piVar8 + -1;
            local_51 = *piVar8 != 0;
            UNLOCK();
            if ((!(bool)local_51) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
              operator_delete(*(void **)(param_1 + 0x20));
            }
          }
          *(int **)(param_1 + 0x20) = piVar7;
          *(QObject **)(param_1 + 0x28) = pQVar11;
        }
        if (piVar7 != (int *)0x0) {
          LOCK();
          *piVar7 = *piVar7 + -1;
          local_51 = *piVar7 != 0;
          UNLOCK();
          if (!(bool)local_51) {
            operator_delete(piVar7);
          }
        }
        if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
           (*(long *)(param_1 + 0x28) != 0)) {
          FUN_100230900(local_188);
          local_184 = *(undefined1 *)((long)param_3 + 4);
          local_181 = *(undefined1 *)((long)param_3 + 7);
          local_17c = *(undefined4 *)((long)param_3 + 0xc);
          local_178 = *(undefined4 *)(param_3 + 2);
          local_180 = *(undefined1 *)(param_3 + 1);
          local_174 = *(undefined1 *)((long)param_3 + 0x14);
          uVar6 = 0;
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
            uVar6 = *(undefined8 *)(param_1 + 0x28);
          }
          local_182 = cVar1;
          FUN_1002308b0(uVar6);
          uVar6 = 0;
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
            uVar6 = *(undefined8 *)(param_1 + 0x28);
          }
          QObject::connect(&local_190,uVar6,"2taskFinished(PRL_RESULT)",param_1,
                           "1onSwitchViewModeFinished()",0);
          if (local_190 != 0) {
            QMetaObject::Connection::isConnected_helper();
          }
          QMetaObject::Connection::~Connection((Connection *)&local_190);
          pQVar11 = (QObject *)0x0;
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (pQVar11 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
            pQVar11 = *(QObject **)(param_1 + 0x28);
          }
          QTimer::singleShot(0,pQVar11,"1execute()");
          if ((((*(long *)(param_1 + 0x30) == 0) || (*(int *)(*(long *)(param_1 + 0x30) + 4) == 0))
              || (pQVar11 = *(QObject **)(param_1 + 0x38), pQVar11 == (QObject *)0x0)) ||
             ((pQVar11[0x30] == (QObject)0x0 || (*(int *)(pQVar11 + 0x10) != param_2)))) {
            pQVar11 = operator_new(0x48);
            local_40 = param_3[2];
            local_50 = *param_3;
            local_48 = param_3[1];
            QObject::QObject(pQVar11,(QObject *)0x0);
            *(undefined ***)pQVar11 = &PTR_FUN_10220c9c0;
            *(int *)(pQVar11 + 0x10) = param_2;
            *(undefined8 *)(pQVar11 + 0x24) = local_40;
            *(undefined8 *)(pQVar11 + 0x1c) = local_48;
            *(undefined8 *)(pQVar11 + 0x14) = local_50;
            *(undefined4 *)(pQVar11 + 0x2c) = 0;
            pQVar11[0x30] = (QObject)0x1;
            *(undefined8 *)(pQVar11 + 0x40) = 0;
            *(undefined8 *)(pQVar11 + 0x38) = 0;
          }
          uVar6 = 0;
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
            uVar6 = *(undefined8 *)(param_1 + 0x28);
          }
          FUN_10033d8c0(pQVar11,uVar6);
          goto LAB_10034133c;
        }
        local_158 = local_60;
        if (1 < *(int *)local_60 + 1U) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + 1;
          local_51 = *(int *)local_60 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        pQVar9 = local_150 + *(long *)(local_150 + 0x10);
        EnumUtils::enumToString(&local_170,param_2,1);
        QString::toUpper();
        QString::toLocal8Bit();
        FUN_100df99c0("","prl_client_app",0,
                      "Failed to switch VM\'s [%s] desktop to %s mode. Failed to create a mode switching task!"
                      ,pQVar9,local_160 + *(long *)(local_160 + 0x10));
        if (*(int *)local_160 != -1) {
          if (*(int *)local_160 != 0) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + -1;
            local_51 = *(int *)local_160 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_1003410dd;
          }
          QArrayData::deallocate(local_160,1,8);
        }
LAB_1003410dd:
        if (*(int *)local_168 != -1) {
          if (*(int *)local_168 != 0) {
            LOCK();
            *(int *)local_168 = *(int *)local_168 + -1;
            local_51 = *(int *)local_168 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_100341113;
          }
          QArrayData::deallocate(local_168,2,8);
        }
LAB_100341113:
        if (*(int *)local_170 != -1) {
          if (*(int *)local_170 != 0) {
            LOCK();
            *(int *)local_170 = *(int *)local_170 + -1;
            local_51 = *(int *)local_170 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_100341149;
          }
          QArrayData::deallocate(local_170,2,8);
        }
LAB_100341149:
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_51 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_10034117f;
          }
          QArrayData::deallocate(local_150,1,8);
        }
LAB_10034117f:
        pQVar11 = (QObject *)0x0;
        if (*(int *)local_158 != -1) {
          if (*(int *)local_158 != 0) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + -1;
            local_51 = *(int *)local_158 != 0;
            UNLOCK();
            pQVar11 = (QObject *)0x0;
            if ((bool)local_51) goto LAB_10034133c;
          }
          pQVar11 = (QObject *)0x0;
          QArrayData::deallocate(local_158,2,8);
        }
      }
    }
  }
  else {
    local_70 = local_60;
    if (1 < *(int *)local_60 + 1U) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_51 = *(int *)local_60 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    pQVar9 = local_68 + *(long *)(local_68 + 0x10);
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar5 = FUN_100319ae0(uVar6);
    EnumUtils::enumToString(&local_88,uVar5,1);
    QString::toUpper();
    QString::toLocal8Bit();
    pQVar12 = local_78 + *(long *)(local_78 + 0x10);
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar5 = FUN_1002308e0(uVar6);
    EnumUtils::enumToString(&local_a0,uVar5,1);
    QString::toUpper();
    QString::toLocal8Bit();
    pQVar10 = local_90 + *(long *)(local_90 + 0x10);
    EnumUtils::enumToString(&local_b8,param_2,1);
    QString::toUpper();
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to switch view mode for VM\'s [%s] desktop. Current view mode %s, switching view mode %s, pending view mode %s"
                  ,pQVar9,pQVar12,pQVar10,local_a8 + *(long *)(local_a8 + 0x10));
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_51 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_100340b78;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_100340b78:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_51 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_100340bae;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100340bae:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_51 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_100340be4;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100340be4:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_51 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_100340c1a;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_100340c1a:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_51 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_100340c50;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100340c50:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_51 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_100340c86;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100340c86:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_51 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_100340cb6;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_100340cb6:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_51 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_100340ce6;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100340ce6:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_51 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_100340d16;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100340d16:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_51 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_100340d46;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_100340d46:
    pQVar11 = (QObject *)0x0;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_51 = *(int *)local_70 != 0;
        UNLOCK();
        pQVar11 = (QObject *)0x0;
        if ((bool)local_51) goto LAB_10034133c;
      }
      pQVar11 = (QObject *)0x0;
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_10034133c:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_51 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_10034136c;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10034136c:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pQVar11;
}

