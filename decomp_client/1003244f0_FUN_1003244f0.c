
undefined8 FUN_1003244f0(long param_1,int param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  long *plVar10;
  QArrayData *pQVar11;
  long local_140;
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
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (2 < DAT_10230ffd0) {
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
       (*(long *)(param_1 + 0x18) == 0)) {
      local_48 = (QArrayData *)PTR_shared_null_1021e1288;
    }
    else {
      FUN_1003193e0(&local_48);
    }
    QString::toLocal8Bit();
    pQVar8 = local_40 + *(long *)(local_40 + 0x10);
    EnumUtils::enumToString(&local_58,param_2,1);
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",3,"Switching display %d of VM %s to %s mode",uVar3,pQVar8,
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003245e8;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1003245e8:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100324618;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100324618:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100324648;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100324648:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100324678;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100324678:
  if (((param_2 == 0) || (*(int *)(param_1 + 0x34) != param_2)) || (*(char *)(param_3 + 1) != '\0'))
  {
    if (((*(long *)(param_1 + 0x80) == 0) || (*(int *)(*(long *)(param_1 + 0x80) + 4) == 0)) ||
       ((*(long *)(param_1 + 0x88) == 0 || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')))) {
LAB_100324c95:
      pQVar5 = (QObject *)FUN_10023a540(param_1,param_2);
      piVar6 = (int *)0x0;
      if (pQVar5 != (QObject *)0x0) {
        piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
      }
      piVar7 = *(int **)(param_1 + 0x80);
      if (piVar7 != piVar6) {
        if (piVar6 != (int *)0x0) {
          LOCK();
          *piVar6 = *piVar6 + 1;
          local_31 = *piVar6 != 0;
          UNLOCK();
          piVar7 = *(int **)(param_1 + 0x80);
        }
        if (piVar7 != (int *)0x0) {
          LOCK();
          *piVar7 = *piVar7 + -1;
          local_31 = *piVar7 != 0;
          UNLOCK();
          if ((!(bool)local_31) && (*(void **)(param_1 + 0x80) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x80));
          }
        }
        *(int **)(param_1 + 0x80) = piVar6;
        *(QObject **)(param_1 + 0x88) = pQVar5;
      }
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + -1;
        local_31 = *piVar6 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar6);
        }
      }
      if (((*(long *)(param_1 + 0x80) == 0) || (*(int *)(*(long *)(param_1 + 0x80) + 4) == 0)) ||
         (*(long *)(param_1 + 0x88) == 0)) {
        if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
           (*(long *)(param_1 + 0x18) == 0)) {
          local_120 = (QArrayData *)PTR_shared_null_1021e1288;
        }
        else {
          FUN_1003193e0(&local_120);
        }
        QString::toLocal8Bit();
        pQVar8 = local_118 + *(long *)(local_118 + 0x10);
        uVar3 = *(undefined4 *)(param_1 + 0x30);
        EnumUtils::enumToString(&local_138,*(undefined4 *)(param_1 + 0x34),1);
        QString::toUpper();
        QString::toLocal8Bit();
        FUN_100df99c0("","prl_client_app",0,
                      "Failed to switch VM\'s [%s] display [%d] to %s mode. Failed to create a mode switching task!"
                      ,pQVar8,uVar3,local_128 + *(long *)(local_128 + 0x10));
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_31 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324f16;
          }
          QArrayData::deallocate(local_128,1,8);
        }
LAB_100324f16:
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_31 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324f4c;
          }
          QArrayData::deallocate(local_130,2,8);
        }
LAB_100324f4c:
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324f82;
          }
          QArrayData::deallocate(local_138,2,8);
        }
LAB_100324f82:
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324fb8;
          }
          QArrayData::deallocate(local_118,1,8);
        }
LAB_100324fb8:
        if (*(int *)local_120 == -1) {
          return 0;
        }
        pQVar8 = local_120;
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          UNLOCK();
          if (*(int *)local_120 != 0) {
            return 0;
          }
          local_31 = 0;
        }
        goto LAB_100324fe3;
      }
      FUN_10023a520();
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x80) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x88);
      }
      QObject::connect(&local_140,uVar4,"2taskFinished(PRL_RESULT)",param_1,
                       "1onSwitchViewModeFinished()",0);
      if (local_140 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_140);
      pQVar5 = (QObject *)0x0;
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x80) + 4) != 0)) {
        pQVar5 = *(QObject **)(param_1 + 0x88);
      }
      QTimer::singleShot(0,pQVar5,"1execute()");
      if (*(long *)(param_1 + 0x80) == 0) {
        return 0;
      }
      iVar2 = *(int *)(*(long *)(param_1 + 0x80) + 4);
    }
    else {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x80) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x88);
      }
      iVar2 = FUN_10023aaf0(uVar4);
      if (iVar2 != param_2) {
        cVar1 = CAbstractTask::canBeTerminated();
        if (cVar1 == '\0') {
          uVar4 = FUN_1001d50a0();
          cVar1 = FUN_1001d5140(uVar4,0);
          if (cVar1 == '\0') {
            if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0))
               || (*(long *)(param_1 + 0x18) == 0)) {
              local_e0 = (QArrayData *)PTR_shared_null_1021e1288;
            }
            else {
              FUN_1003193e0(&local_e0);
            }
            QString::toUtf8();
            pQVar8 = local_d8 + *(long *)(local_d8 + 0x10);
            EnumUtils::enumToString(&local_f8,*(undefined4 *)(param_1 + 0x34),1);
            QString::toUpper();
            QString::toUtf8();
            pQVar11 = local_e8 + *(long *)(local_e8 + 0x10);
            uVar4 = 0;
            if ((*(long *)(param_1 + 0x80) != 0) &&
               (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x80) + 4) != 0)) {
              uVar4 = *(undefined8 *)(param_1 + 0x88);
            }
            uVar3 = FUN_10023aaf0(uVar4);
            EnumUtils::enumToString(&local_110,uVar3,1);
            QString::toUpper();
            QString::toUtf8();
            FUN_100df99c0("","prl_client_app",0,
                          "Skip terminating switch VM\'s [%s] display from %s to %s mode.",pQVar8,
                          pQVar11,local_100 + *(long *)(local_100 + 0x10));
            if (*(int *)local_100 != -1) {
              if (*(int *)local_100 != 0) {
                LOCK();
                *(int *)local_100 = *(int *)local_100 + -1;
                local_31 = *(int *)local_100 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10032516d;
              }
              QArrayData::deallocate(local_100,1,8);
            }
LAB_10032516d:
            if (*(int *)local_108 != -1) {
              if (*(int *)local_108 != 0) {
                LOCK();
                *(int *)local_108 = *(int *)local_108 + -1;
                local_31 = *(int *)local_108 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003251a3;
              }
              QArrayData::deallocate(local_108,2,8);
            }
LAB_1003251a3:
            if (*(int *)local_110 != -1) {
              if (*(int *)local_110 != 0) {
                LOCK();
                *(int *)local_110 = *(int *)local_110 + -1;
                local_31 = *(int *)local_110 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003251d9;
              }
              QArrayData::deallocate(local_110,2,8);
            }
LAB_1003251d9:
            if (*(int *)local_e8 != -1) {
              if (*(int *)local_e8 != 0) {
                LOCK();
                *(int *)local_e8 = *(int *)local_e8 + -1;
                local_31 = *(int *)local_e8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10032520f;
              }
              QArrayData::deallocate(local_e8,1,8);
            }
LAB_10032520f:
            if (*(int *)local_f0 != -1) {
              if (*(int *)local_f0 != 0) {
                LOCK();
                *(int *)local_f0 = *(int *)local_f0 + -1;
                local_31 = *(int *)local_f0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100325245;
              }
              QArrayData::deallocate(local_f0,2,8);
            }
LAB_100325245:
            if (*(int *)local_f8 != -1) {
              if (*(int *)local_f8 != 0) {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + -1;
                local_31 = *(int *)local_f8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10032527b;
              }
              QArrayData::deallocate(local_f8,2,8);
            }
LAB_10032527b:
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003252b1;
              }
              QArrayData::deallocate(local_d8,1,8);
            }
LAB_1003252b1:
            if (*(int *)local_e0 == -1) {
              return 0;
            }
            pQVar8 = local_e0;
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              UNLOCK();
              if (*(int *)local_e0 != 0) {
                return 0;
              }
              local_31 = 0;
            }
            goto LAB_100324fe3;
          }
        }
        if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
           (*(long *)(param_1 + 0x18) == 0)) {
          local_88 = (QArrayData *)PTR_shared_null_1021e1288;
        }
        else {
          FUN_1003193e0(&local_88);
        }
        QString::toUtf8();
        pQVar8 = local_80 + *(long *)(local_80 + 0x10);
        EnumUtils::enumToString(&local_a0,*(undefined4 *)(param_1 + 0x34),1);
        QString::toUpper();
        QString::toUtf8();
        pQVar11 = local_90 + *(long *)(local_90 + 0x10);
        uVar4 = 0;
        if ((*(long *)(param_1 + 0x80) != 0) &&
           (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x80) + 4) != 0)) {
          uVar4 = *(undefined8 *)(param_1 + 0x88);
        }
        uVar3 = FUN_10023aaf0(uVar4);
        EnumUtils::enumToString(&local_b8,uVar3,1);
        QString::toUpper();
        QString::toUtf8();
        pQVar9 = local_a8 + *(long *)(local_a8 + 0x10);
        EnumUtils::enumToString(&local_d0,param_2,1);
        QString::toUpper();
        QString::toUtf8();
        FUN_100df99c0("","prl_client_app",0,
                      "Terminate to switch VM\'s [%s] display from %s to %s mode. New mode is %s",
                      pQVar8,pQVar11,pQVar9,local_c0 + *(long *)(local_c0 + 0x10));
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324a5b;
          }
          QArrayData::deallocate(local_c0,1,8);
        }
LAB_100324a5b:
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324a91;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
LAB_100324a91:
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324ac7;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_100324ac7:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324afd;
          }
          QArrayData::deallocate(local_a8,1,8);
        }
LAB_100324afd:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324b33;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_100324b33:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324b69;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_100324b69:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324b9f;
          }
          QArrayData::deallocate(local_90,1,8);
        }
LAB_100324b9f:
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324bd5;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_100324bd5:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324c0b;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_100324c0b:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324c3b;
          }
          QArrayData::deallocate(local_80,1,8);
        }
LAB_100324c3b:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100324c6b;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_100324c6b:
        plVar10 = (long *)0x0;
        if ((*(long *)(param_1 + 0x80) != 0) &&
           (plVar10 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x80) + 4) != 0)) {
          plVar10 = *(long **)(param_1 + 0x88);
        }
        (**(code **)(*plVar10 + 0x78))(plVar10,0x80000275);
        goto LAB_100324c95;
      }
      if (*(long *)(param_1 + 0x80) == 0) {
        return 0;
      }
      iVar2 = *(int *)(*(long *)(param_1 + 0x80) + 4);
    }
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x88);
    }
  }
  else {
    if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
       (*(long *)(param_1 + 0x18) == 0)) {
      local_68 = (QArrayData *)PTR_shared_null_1021e1288;
    }
    else {
      FUN_1003193e0(&local_68);
    }
    QString::toLocal8Bit();
    pQVar8 = local_60 + *(long *)(local_60 + 0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    EnumUtils::enumToString(&local_78,param_2,1);
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",0,"VM [%s] Display #%d is in %s mode already",pQVar8,uVar3,
                  local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003247e4;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_1003247e4:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100324814;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100324814:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100324844;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_100324844:
    if (*(int *)local_68 == -1) {
      return 0;
    }
    pQVar8 = local_68;
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return 0;
      }
      local_31 = 0;
    }
LAB_100324fe3:
    QArrayData::deallocate(pQVar8,2,8);
    uVar4 = 0;
  }
  return uVar4;
}

