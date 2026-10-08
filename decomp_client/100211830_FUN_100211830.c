
void FUN_100211830(long *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  QObject *pQVar5;
  int *piVar6;
  void *pvVar7;
  long lVar8;
  Data *pDVar9;
  QObject *pQVar10;
  QArrayData *pQVar11;
  uint in_stack_fffffffffffffebc;
  Connection local_128 [8];
  QArrayData *local_120;
  long local_118;
  int local_10c;
  int *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  Data_conflict local_e8;
  undefined4 local_e0;
  undefined1 local_d8;
  Data_conflict local_d0;
  undefined4 local_c8;
  QArrayData *local_c0;
  int *local_b8 [4];
  QVariant local_98 [2];
  undefined1 local_80 [40];
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (((param_1[0x41] == 0) || (*(int *)(param_1[0x41] + 4) == 0)) || (param_1[0x42] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: VM instance is invalid.");
                    /* WARNING: Could not recover jumptable at 0x0001002119c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
    return;
  }
  if (((param_1[0x47] != 0) && (*(int *)(param_1[0x47] + 4) != 0)) && (param_1[0x48] != 0)) {
    QWidget::close();
  }
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  if (param_2 < 0) {
    if (param_2 != -0x7ffffeee) {
      if (lVar3 == 0) goto LAB_100211d00;
      local_10c = 0;
      local_118 = *(long *)(lVar3 + 0x10);
      if (local_118 != 0) {
        _PrlHandle_AddRef();
      }
      SdkUtils::GetResultCodeFromComplexEvent(&local_10c,&local_118);
      if (local_118 != 0) {
        _PrlHandle_Free();
      }
      if (local_10c != -0x7fffdfff) goto LAB_100211d00;
      uVar4 = FUN_100152280();
      lVar3 = 0;
      if ((param_1[0x41] != 0) && (lVar3 = 0, *(int *)(param_1[0x41] + 4) != 0)) {
        lVar3 = param_1[0x42];
      }
      FUN_100188480(&local_120,lVar3);
      lVar3 = FUN_1001547d0(uVar4,&local_120);
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100211b7a;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_100211b7a:
      if (lVar3 != 0) {
        pvVar7 = operator_new(0x40);
        lVar8 = 0;
        if ((param_1[0x43] != 0) && (lVar8 = 0, *(int *)(param_1[0x43] + 4) != 0)) {
          lVar8 = param_1[0x44];
        }
        FUN_100264550(pvVar7,lVar3,param_1 + 0x22,lVar8);
        QObject::connect(local_128,pvVar7,"2taskFinished(PRL_RESULT)",param_1,
                         "1onTaskConvertHddFinished(PRL_RESULT)",0);
        QMetaObject::Connection::~Connection(local_128);
        CAbstractTask::execute();
        return;
      }
      goto LAB_100211d00;
    }
    piVar6 = (int *)0x0;
    if (((param_1[0x41] != 0) && (piVar6 = (int *)0x0, *(int *)(param_1[0x41] + 4) != 0)) &&
       (piVar6 = (int *)0x0, param_1[0x42] != 0)) {
      uVar4 = FUN_100152280();
      lVar3 = 0;
      if ((param_1[0x41] != 0) && (lVar3 = 0, *(int *)(param_1[0x41] + 4) != 0)) {
        lVar3 = param_1[0x42];
      }
      FUN_100188480(&local_58,lVar3);
      pQVar5 = (QObject *)FUN_1001547d0(uVar4,&local_58);
      if ((pQVar5 == (QObject *)0x0) ||
         (piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5),
         piVar6 == (int *)0x0)) {
        pQVar10 = (QObject *)0x0;
        pQVar5 = (QObject *)0x0;
        piVar6 = (int *)0x0;
      }
      else {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
        LOCK();
        *piVar6 = *piVar6 + -1;
        local_31 = *piVar6 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar6);
        }
        pQVar10 = (QObject *)0x0;
        if (piVar6[1] != 0) {
          pQVar10 = pQVar5;
        }
      }
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100211d57;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100211d57:
      if (pQVar10 != (QObject *)0x0) {
        pQVar10 = (QObject *)0x0;
        if ((piVar6 != (int *)0x0) && (pQVar10 = (QObject *)0x0, piVar6[1] != 0)) {
          pQVar10 = pQVar5;
        }
        cVar1 = FUN_1001754c0(pQVar10,2);
        if ((((cVar1 == '\0') && (param_1[0x43] != 0)) && (*(int *)(param_1[0x43] + 4) != 0)) &&
           (param_1[0x44] != 0)) {
          QObject::property(local_80 + 0x18);
          cVar1 = QVariant::toBool();
          QVariant::~QVariant((QVariant *)(local_80 + 0x18));
          if (cVar1 != '\0') {
            CAbstractTask::clearSubTaskList();
            CAbstractTask::appendSubTask((int)param_1);
            CAbstractTask::appendSubTask((int)param_1);
            (**(code **)(*param_1 + 0xb0))(param_1,0);
            goto LAB_100212100;
          }
        }
      }
    }
    iVar2 = CMessageManager::instance();
    lVar3 = 0;
    if ((param_1[0x41] != 0) && (lVar3 = 0, *(int *)(param_1[0x41] + 4) != 0)) {
      lVar3 = param_1[0x42];
    }
    FUN_100188480(local_80 + 0x10,lVar3);
    local_80._8_8_ = PTR_shared_null_1021e15e8;
    local_80._0_8_ = PTR_shared_null_1021e15e8;
    local_c0 = (QArrayData *)
               QString::fromAscii_helper
                         ("1onCollisionMessageAnswered( PRL_RESULT, Messaging::ButtonID )",0x3e);
    local_c8 = 0x80000000;
    local_d0.field7 = 0;
    FUN_100a1c600(local_b8,param_1,&local_c0,&local_d0);
    local_108 = (int *)0x0;
    uStack_100 = 0;
    local_f0 = 0;
    local_f8 = 0;
    local_e0 = 0x80000000;
    local_e8.field7 = 0;
    local_d8 = 1;
    CMessageManager::showMessageBox
              (iVar2,(QString *)0x80000323,(QStringList *)(local_80 + 0x10),
               (QStringList *)(local_80 + 8),(CSlotInfo *)local_80,SUB81(local_b8,0),
               (QWidget *)((ulong)in_stack_fffffffffffffebc << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_e8);
    if (local_108 != (int *)0x0) {
      LOCK();
      *local_108 = *local_108 + -1;
      local_31 = *local_108 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_108 != (int *)0x0)) {
        operator_delete(local_108);
      }
    }
    QVariant::~QVariant(local_98);
    if (local_b8[0] != (int *)0x0) {
      LOCK();
      *local_b8[0] = *local_b8[0] + -1;
      local_31 = *local_b8[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_b8[0] != (int *)0x0)) {
        operator_delete(local_b8[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_d0);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100211fb9;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_100211fb9:
    uVar4 = local_80._0_8_;
    if (*(int *)local_80._0_8_ != -1) {
      if (*(int *)local_80._0_8_ != 0) {
        LOCK();
        *(int *)local_80._0_8_ = *(int *)local_80._0_8_ + -1;
        local_31 = *(int *)local_80._0_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10021203d;
      }
      iVar2 = *(int *)(local_80._0_8_ + 0xc);
      if (iVar2 != *(int *)(local_80._0_8_ + 8)) {
        lVar3 = (long)*(int *)(local_80._0_8_ + 8) * 8 + (long)iVar2 * -8;
        pDVar9 = (Data *)(local_80._0_8_ + (long)iVar2 * 8 + 8);
        do {
          pQVar11 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar11 == 0) {
LAB_10021201c:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar9;
              goto LAB_10021201c;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose((Data *)uVar4);
    }
LAB_10021203d:
    uVar4 = local_80._8_8_;
    if (*(int *)local_80._8_8_ != -1) {
      if (*(int *)local_80._8_8_ != 0) {
        LOCK();
        *(int *)local_80._8_8_ = *(int *)local_80._8_8_ + -1;
        local_31 = *(int *)local_80._8_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002120d0;
      }
      iVar2 = *(int *)(local_80._8_8_ + 0xc);
      if (iVar2 != *(int *)(local_80._8_8_ + 8)) {
        lVar3 = (long)*(int *)(local_80._8_8_ + 8) * 8 + (long)iVar2 * -8;
        pDVar9 = (Data *)(local_80._8_8_ + (long)iVar2 * 8 + 8);
        do {
          pQVar11 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar11 == 0) {
LAB_1002120af:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar9;
              goto LAB_1002120af;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose((Data *)uVar4);
    }
LAB_1002120d0:
    if (*(int *)local_80._16_8_ != -1) {
      if (*(int *)local_80._16_8_ != 0) {
        LOCK();
        *(int *)local_80._16_8_ = *(int *)local_80._16_8_ + -1;
        UNLOCK();
        if (*(int *)local_80._16_8_ != 0) goto LAB_100212100;
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_80._16_8_,2,8);
    }
LAB_100212100:
    if (piVar6 == (int *)0x0) {
      return;
    }
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_31 = *piVar6 != 0;
    UNLOCK();
    if ((bool)local_31) {
      return;
    }
    operator_delete(piVar6);
    return;
  }
  if (((param_1[0x41] == 0) || (*(int *)(param_1[0x41] + 4) == 0)) || (param_1[0x42] == 0))
  goto LAB_100211d00;
  uVar4 = FUN_100152280();
  lVar8 = 0;
  if ((param_1[0x41] != 0) && (lVar8 = 0, *(int *)(param_1[0x41] + 4) != 0)) {
    lVar8 = param_1[0x42];
  }
  FUN_100188480(&local_40,lVar8);
  pQVar5 = (QObject *)FUN_1001547d0(uVar4,&local_40);
  if ((pQVar5 == (QObject *)0x0) ||
     (piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5), piVar6 == (int *)0x0
     )) {
    pQVar10 = (QObject *)0x0;
    pQVar5 = (QObject *)0x0;
    piVar6 = (int *)0x0;
  }
  else {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_31 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar6);
    }
    pQVar10 = (QObject *)0x0;
    if (piVar6[1] != 0) {
      pQVar10 = pQVar5;
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100211c36;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100211c36:
  if (pQVar10 != (QObject *)0x0) {
    pQVar10 = (QObject *)0x0;
    if ((piVar6 != (int *)0x0) && (pQVar10 = (QObject *)0x0, piVar6[1] != 0)) {
      pQVar10 = pQVar5;
    }
    local_48 = *(long *)(lVar3 + 0x10);
    if (local_48 != 0) {
      _PrlHandle_AddRef();
    }
    lVar3 = 0;
    if ((param_1[0x41] != 0) && (lVar3 = 0, *(int *)(param_1[0x41] + 4) != 0)) {
      lVar3 = param_1[0x42];
    }
    FUN_100188480(&local_50,lVar3);
    FUN_100166730(pQVar10,&local_48,&local_50);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100211cd3;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100211cd3:
    if (local_48 != 0) {
      _PrlHandle_Free();
    }
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
LAB_100211d00:
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

