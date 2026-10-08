
void FUN_1002fa550(long *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  int iVar9;
  long *plVar10;
  Data *pDVar11;
  Data *pDVar12;
  QArrayData *pQVar13;
  AnonymousUnion0 AVar14;
  undefined1 auVar15 [12];
  Data_conflict local_120;
  undefined4 local_118;
  QArrayData *local_110;
  int *local_108 [4];
  QVariant local_e8 [2];
  undefined1 local_d0 [40];
  int *local_a8 [4];
  QVariant local_88 [2];
  AnonymousUnion0 local_70;
  AnonymousUnion0 local_68;
  _func_void_Node_ptr *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  Data *local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  QFutureInterfaceBase::waitForResult((int)param_1 + 0x48);
  lVar6 = QFutureInterfaceBase::mutex();
  if (lVar6 != 0) {
    QMutex::lock();
  }
  iVar5 = QFutureInterfaceBase::resultStoreBase();
  auVar15 = QtPrivate::ResultStoreBase::resultAt(iVar5);
  plVar10 = *(long **)(auVar15._0_8_ + 0x28);
  if (*(int *)(auVar15._0_8_ + 0x20) != 0) {
    plVar10 = (long *)(*plVar10 + *(long *)(*plVar10 + 0x10) + (long)auVar15._8_4_ * 4);
  }
  if (lVar6 != 0) {
    QMutex::unlock();
  }
  AVar14 = (AnonymousUnion0)PTR_shared_null_1021e15e8;
  iVar5 = (int)*plVar10;
  if (iVar5 == -0x7ffeab89) {
    iVar5 = CMessageManager::instance();
    local_d0._8_8_ = PTR_shared_null_1021e15e8;
    local_d0._0_8_ = PTR_shared_null_1021e15e8;
    local_110 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
    local_118 = 0x80000000;
    local_120.field7 = 0;
    FUN_100a1c600(local_108,param_1,&local_110,&local_120);
    CMessageManager::showMessageBox
              (iVar5,(QWidget *)0x80015477,(QStringList *)0x0,(QStringList *)(local_d0 + 8),
               (CSlotInfo *)local_d0,SUB81(local_108,0));
    QVariant::~QVariant(local_e8);
    if (local_108[0] != (int *)0x0) {
      LOCK();
      *local_108[0] = *local_108[0] + -1;
      local_31 = *local_108[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_108[0] != (int *)0x0)) {
        operator_delete(local_108[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_120);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fa6e7;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_1002fa6e7:
    uVar4 = local_d0._0_8_;
    if (*(int *)local_d0._0_8_ != -1) {
      if (*(int *)local_d0._0_8_ != 0) {
        LOCK();
        *(int *)local_d0._0_8_ = *(int *)local_d0._0_8_ + -1;
        local_31 = *(int *)local_d0._0_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fa781;
      }
      iVar5 = *(int *)(local_d0._0_8_ + 0xc);
      if (iVar5 != *(int *)(local_d0._0_8_ + 8)) {
        lVar6 = (long)*(int *)(local_d0._0_8_ + 8) * 8 + (long)iVar5 * -8;
        pDVar11 = (Data *)(local_d0._0_8_ + (long)iVar5 * 8 + 8);
        do {
          pQVar7 = *(QArrayData **)pDVar11;
          if (*(int *)pQVar7 == 0) {
LAB_1002fa760:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_31 = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar7 = *(QArrayData **)pDVar11;
              goto LAB_1002fa760;
            }
          }
          pDVar11 = pDVar11 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose((Data *)uVar4);
    }
LAB_1002fa781:
    AVar14 = (AnonymousUnion0)local_d0._8_8_;
    if (*(int *)local_d0._8_8_ == -1) {
      return;
    }
    if (*(int *)local_d0._8_8_ != 0) {
      LOCK();
      *(int *)local_d0._8_8_ = *(int *)local_d0._8_8_ + -1;
      UNLOCK();
      if (*(int *)local_d0._8_8_ != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar5 = *(int *)(local_d0._8_8_ + 0xc);
    if (iVar5 != *(int *)(local_d0._8_8_ + 8)) {
      lVar6 = (long)*(int *)(local_d0._8_8_ + 8) * 8 + (long)iVar5 * -8;
      pDVar11 = (Data *)(local_d0._8_8_ + (long)iVar5 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar11;
        if (*(int *)pQVar7 == 0) {
LAB_1002fa800:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar11;
            goto LAB_1002fa800;
          }
        }
        pDVar11 = pDVar11 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
LAB_1002faca9:
    QListData::dispose((Data *)AVar14.field1);
  }
  else {
    if (iVar5 == 0x3c1a) {
      local_48 = (Data *)PTR_shared_null_1021e15e8;
      pQVar7 = (QArrayData *)QString::fromAscii_helper("virusbarrier*",0xd);
      local_50 = pQVar7;
      FUN_1000341d0(&local_48,&local_50);
      pQVar8 = (QArrayData *)QString::fromAscii_helper("VirusBarrier*",0xd);
      local_58 = pQVar8;
      FUN_1000341d0(&local_48,&local_58);
      local_60 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
      MacUtils::getRunningProcesses((QStringList *)&local_40.field0,(QSet *)&local_48);
      iVar2 = *(int *)(local_40.field1 + 0xc);
      iVar3 = *(int *)(local_40.field1 + 8);
      if (*(int *)local_40.field1 != -1) {
        iVar5 = iVar2;
        iVar9 = iVar3;
        if (*(int *)local_40.field1 != 0) {
          LOCK();
          *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
          local_31 = *(int *)local_40.field1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002fa96f;
          iVar5 = *(int *)(local_40.field1 + 0xc);
          iVar9 = *(int *)(local_40.field1 + 8);
        }
        if (iVar5 != iVar9) {
          lVar6 = (long)iVar9 * 8 + (long)iVar5 * -8;
          pDVar11 = (Data *)(local_40.field1 + (long)iVar5 * 8 + 8);
          do {
            pQVar13 = *(QArrayData **)pDVar11;
            if (*(int *)pQVar13 == 0) {
LAB_1002fa940:
              QArrayData::deallocate(pQVar13,2,8);
            }
            else if (*(int *)pQVar13 != -1) {
              LOCK();
              *(int *)pQVar13 = *(int *)pQVar13 + -1;
              local_31 = *(int *)pQVar13 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar13 = *(QArrayData **)pDVar11;
                goto LAB_1002fa940;
              }
            }
            pDVar11 = pDVar11 + -8;
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0);
        }
        QListData::dispose((Data *)local_40.field1);
        AVar14 = (AnonymousUnion0)PTR_shared_null_1021e15e8;
      }
LAB_1002fa96f:
      if (*(int *)(local_60 + 0x10) != -1) {
        if (*(int *)(local_60 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_60 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002fa99e;
        }
        QHashData::free_helper(local_60);
      }
LAB_1002fa99e:
      if (*(int *)pQVar8 != -1) {
        if (*(int *)pQVar8 != 0) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002fa9cb;
        }
        QArrayData::deallocate(pQVar8,2,8);
      }
LAB_1002fa9cb:
      if (*(int *)pQVar7 != -1) {
        if (*(int *)pQVar7 != 0) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002fa9f8;
        }
        QArrayData::deallocate(pQVar7,2,8);
      }
LAB_1002fa9f8:
      pDVar11 = local_48;
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002faa81;
        }
        iVar5 = *(int *)(local_48 + 0xc);
        if (iVar5 != *(int *)(local_48 + 8)) {
          lVar6 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar5 * -8;
          pDVar12 = local_48 + (long)iVar5 * 8 + 8;
          do {
            pQVar7 = *(QArrayData **)pDVar12;
            if (*(int *)pQVar7 == 0) {
LAB_1002faa60:
              QArrayData::deallocate(pQVar7,2,8);
            }
            else if (*(int *)pQVar7 != -1) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_31 = *(int *)pQVar7 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar7 = *(QArrayData **)pDVar12;
                goto LAB_1002faa60;
              }
            }
            pDVar12 = pDVar12 + -8;
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0);
        }
        QListData::dispose(pDVar11);
      }
LAB_1002faa81:
      iVar5 = 0;
      if (iVar2 != iVar3) {
        iVar5 = CMessageManager::instance();
        local_70 = AVar14;
        local_68 = AVar14;
        local_d0._32_8_ = QString::fromAscii_helper("1onAntivirusMessageClosed()",0x1b);
        local_d0._24_4_ = 0x80000000;
        local_d0._16_8_ = (QMetaObject *)0x0;
        FUN_100a1c600(local_a8,param_1,local_d0 + 0x20,local_d0 + 0x10);
        CMessageManager::showMessageBox
                  (iVar5,(QWidget *)0x3c43,(QStringList *)0x0,(QStringList *)&local_68.field0,
                   (CSlotInfo *)&local_70.field0,SUB81(local_a8,0));
        QVariant::~QVariant(local_88);
        if (local_a8[0] != (int *)0x0) {
          LOCK();
          *local_a8[0] = *local_a8[0] + -1;
          local_31 = *local_a8[0] != 0;
          UNLOCK();
          if ((!(bool)local_31) && (local_a8[0] != (int *)0x0)) {
            operator_delete(local_a8[0]);
          }
        }
        QVariant::~QVariant((QVariant *)(local_d0 + 0x10));
        if (*(int *)local_d0._32_8_ != -1) {
          if (*(int *)local_d0._32_8_ != 0) {
            LOCK();
            *(int *)local_d0._32_8_ = *(int *)local_d0._32_8_ + -1;
            local_31 = *(int *)local_d0._32_8_ != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002fab98;
          }
          QArrayData::deallocate((QArrayData *)local_d0._32_8_,2,8);
        }
LAB_1002fab98:
        AVar14 = local_70;
        if (*(int *)local_70.field1 != -1) {
          if (*(int *)local_70.field1 != 0) {
            LOCK();
            *(int *)local_70.field1 = *(int *)local_70.field1 + -1;
            local_31 = *(int *)local_70.field1 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002fac21;
          }
          iVar5 = *(int *)(local_70.field1 + 0xc);
          if (iVar5 != *(int *)(local_70.field1 + 8)) {
            lVar6 = (long)*(int *)(local_70.field1 + 8) * 8 + (long)iVar5 * -8;
            pDVar11 = (Data *)(local_70.field1 + (long)iVar5 * 8 + 8);
            do {
              pQVar7 = *(QArrayData **)pDVar11;
              if (*(int *)pQVar7 == 0) {
LAB_1002fac00:
                QArrayData::deallocate(pQVar7,2,8);
              }
              else if (*(int *)pQVar7 != -1) {
                LOCK();
                *(int *)pQVar7 = *(int *)pQVar7 + -1;
                local_31 = *(int *)pQVar7 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar7 = *(QArrayData **)pDVar11;
                  goto LAB_1002fac00;
                }
              }
              pDVar11 = pDVar11 + -8;
              lVar6 = lVar6 + 8;
            } while (lVar6 != 0);
          }
          QListData::dispose((Data *)AVar14.field1);
        }
LAB_1002fac21:
        AVar14 = local_68;
        if (*(int *)local_68.field1 == -1) {
          return;
        }
        if (*(int *)local_68.field1 != 0) {
          LOCK();
          *(int *)local_68.field1 = *(int *)local_68.field1 + -1;
          UNLOCK();
          if (*(int *)local_68.field1 != 0) {
            return;
          }
          local_31 = 0;
        }
        iVar5 = *(int *)(local_68.field1 + 0xc);
        if (iVar5 != *(int *)(local_68.field1 + 8)) {
          lVar6 = (long)*(int *)(local_68.field1 + 8) * 8 + (long)iVar5 * -8;
          pDVar11 = (Data *)(local_68.field1 + (long)iVar5 * 8 + 8);
          do {
            pQVar7 = *(QArrayData **)pDVar11;
            if (*(int *)pQVar7 == 0) {
LAB_1002fac90:
              QArrayData::deallocate(pQVar7,2,8);
            }
            else if (*(int *)pQVar7 != -1) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_31 = *(int *)pQVar7 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar7 = *(QArrayData **)pDVar11;
                goto LAB_1002fac90;
              }
            }
            pDVar11 = pDVar11 + -8;
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0);
        }
        goto LAB_1002faca9;
      }
    }
    (**(code **)(*param_1 + 0xb0))(param_1,iVar5);
  }
  return;
}

