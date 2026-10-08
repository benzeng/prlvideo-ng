
undefined8 FUN_1002610b0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  QStringList *pQVar7;
  Data *pDVar8;
  undefined8 uVar9;
  QArrayData *pQVar10;
  long lVar11;
  long local_128;
  undefined1 local_120 [40];
  int *local_f8 [4];
  QVariant local_d8 [2];
  QArrayData *local_c0;
  QString local_b8;
  undefined1 local_b0 [16];
  QPalette local_a0 [16];
  QVariant local_90;
  undefined4 local_80;
  undefined4 local_7c;
  QString local_78;
  QPalette local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  QBrush local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QPalette::QPalette(local_70);
  local_5c = 0xffffffff;
  local_80 = 1;
  local_7c = FUN_100d7e9e0();
  QObject::property((char *)&local_90);
  cVar2 = QVariant::toBool();
  local_60 = 8;
  if (cVar2 != '\0') {
    local_60 = 0x18;
  }
  QVariant::~QVariant(&local_90);
  QGuiApplication::palette();
  QColor::setRgb((int)local_b0,0xa2,0xe8,0xff);
  QBrush::QBrush(local_58,local_b0,1);
  QPalette::setBrush(local_a0,5,0xe,local_58);
  QBrush::~QBrush(local_58);
  local_b8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("QWizardPage { background-color: transparent; }",0x2e);
  QString::fromUtf8_helper((char *)&local_50,0x1de0622);
  QString::append(&local_b8);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100261206;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100261206:
  puVar1 = PTR_s_QMenu___background_color___33343_102271050;
  if (PTR_s_QMenu___background_color___33343_102271050 != (undefined *)0x0) {
    _strlen(PTR_s_QMenu___background_color___33343_102271050);
  }
  QString::fromUtf8_helper((char *)&local_48,(int)puVar1);
  QString::append(&local_b8);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100261271;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100261271:
  puVar1 = PTR_s_QWidget___color__rgba__255__255__102271080;
  if (PTR_s_QWidget___color__rgba__255__255__102271080 != (undefined *)0x0) {
    _strlen(PTR_s_QWidget___color__rgba__255__255__102271080);
  }
  QString::fromUtf8_helper((char *)&local_40,(int)puVar1);
  QString::append(&local_b8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002612dc;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002612dc:
  FUN_10019bb00(&local_c0);
  QString::append(&local_b8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100261331;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100261331:
  QString::operator=(&local_78,&local_b8);
  QPalette::operator=(local_70,local_a0);
  local_5c = 0;
  pQVar4 = operator_new(0x68);
  FUN_100990660(pQVar4,&local_80,param_1);
  iVar3 = FUN_1009907d0(pQVar4);
  if (iVar3 < 0) {
    FUN_100df99c0("","prl_client_app",0,"Error: Failed to initialize Transporter Wizard model, 0x%x"
                  ,iVar3);
    CAbstractTask::setWaitForSubTaskCompletion();
    local_120._32_8_ =
         QString::fromAscii_helper("1onTransporterInitializationFailureProcessed()",0x2e);
    local_120._24_4_ = 0x80000000;
    local_120._16_8_ = (QMetaObject *)0x0;
    FUN_100a1c600(local_f8,param_1,local_120 + 0x20,local_120 + 0x10);
    QVariant::~QVariant((QVariant *)(local_120 + 0x10));
    if (*(int *)local_120._32_8_ != -1) {
      if (*(int *)local_120._32_8_ != 0) {
        LOCK();
        *(int *)local_120._32_8_ = *(int *)local_120._32_8_ + -1;
        local_31 = *(int *)local_120._32_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100261519;
      }
      QArrayData::deallocate((QArrayData *)local_120._32_8_,2,8);
    }
LAB_100261519:
    iVar3 = CMessageManager::instance();
    pQVar7 = (QStringList *)0x0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pQVar7 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      pQVar7 = *(QStringList **)(param_1 + 0x48);
    }
    local_120._8_8_ = PTR_shared_null_1021e15e8;
    local_120._0_8_ = PTR_shared_null_1021e15e8;
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)0x80015335,pQVar7,(QStringList *)(local_120 + 8),
               (CSlotInfo *)local_120,SUB81(local_f8,0));
    uVar9 = local_120._0_8_;
    if (*(int *)local_120._0_8_ != -1) {
      if (*(int *)local_120._0_8_ != 0) {
        LOCK();
        *(int *)local_120._0_8_ = *(int *)local_120._0_8_ + -1;
        local_31 = *(int *)local_120._0_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100261611;
      }
      iVar3 = *(int *)(local_120._0_8_ + 0xc);
      if (iVar3 != *(int *)(local_120._0_8_ + 8)) {
        lVar11 = (long)*(int *)(local_120._0_8_ + 8) * 8 + (long)iVar3 * -8;
        pDVar8 = (Data *)(local_120._0_8_ + (long)iVar3 * 8 + 8);
        do {
          pQVar10 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar10 == 0) {
LAB_1002615f0:
            QArrayData::deallocate(pQVar10,2,8);
          }
          else if (*(int *)pQVar10 != -1) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_31 = *(int *)pQVar10 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar10 = *(QArrayData **)pDVar8;
              goto LAB_1002615f0;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      QListData::dispose((Data *)uVar9);
    }
LAB_100261611:
    uVar9 = local_120._8_8_;
    if (*(int *)local_120._8_8_ != -1) {
      if (*(int *)local_120._8_8_ != 0) {
        LOCK();
        *(int *)local_120._8_8_ = *(int *)local_120._8_8_ + -1;
        local_31 = *(int *)local_120._8_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002616a1;
      }
      iVar3 = *(int *)(local_120._8_8_ + 0xc);
      if (iVar3 != *(int *)(local_120._8_8_ + 8)) {
        lVar11 = (long)*(int *)(local_120._8_8_ + 8) * 8 + (long)iVar3 * -8;
        pDVar8 = (Data *)(local_120._8_8_ + (long)iVar3 * 8 + 8);
        do {
          pQVar10 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar10 == 0) {
LAB_100261680:
            QArrayData::deallocate(pQVar10,2,8);
          }
          else if (*(int *)pQVar10 != -1) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_31 = *(int *)pQVar10 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar10 = *(QArrayData **)pDVar8;
              goto LAB_100261680;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      QListData::dispose((Data *)uVar9);
    }
LAB_1002616a1:
    QVariant::~QVariant(local_d8);
    if (local_f8[0] != (int *)0x0) {
      LOCK();
      *local_f8[0] = *local_f8[0] + -1;
      local_31 = *local_f8[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_f8[0] != (int *)0x0)) {
        operator_delete(local_f8[0]);
      }
    }
    (**(code **)(*(long *)pQVar4 + 0x20))(pQVar4);
  }
  else {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    piVar6 = *(int **)(param_1 + 0x28);
    if (piVar6 != piVar5) {
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_31 = *piVar5 != 0;
        UNLOCK();
        piVar6 = *(int **)(param_1 + 0x28);
      }
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + -1;
        local_31 = *piVar6 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x28));
        }
      }
      *(int **)(param_1 + 0x28) = piVar5;
      *(QObject **)(param_1 + 0x30) = pQVar4;
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar5);
      }
    }
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x30);
    }
    QObject::connect(&local_128,uVar9,"2helpTopicRequired(int)",param_1,"1onHelpTopicRequired(int)",
                     0);
    if (local_128 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_128);
  }
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026171b;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_10026171b:
  QPalette::~QPalette(local_a0);
  QPalette::~QPalette(local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_78.field0_0x0 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
  return 0;
}

