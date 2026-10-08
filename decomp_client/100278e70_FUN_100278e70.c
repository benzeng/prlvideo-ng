
undefined8 FUN_100278e70(QObject *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  CMd5Calculator *this;
  QString *pQVar5;
  QStringList *pQVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  undefined1 local_b0 [40];
  int *local_88 [4];
  QVariant local_68 [2];
  Connection local_50 [8];
  QFileInfo local_48 [8];
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (*(int *)(*(long *)(param_1 + 0x30) + 4) == 0) {
    return 0;
  }
  FileDownloadInfo::destinationFilePath();
  iVar3 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100278ed6;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100278ed6:
  if (iVar3 == 0) {
    return 0;
  }
  FileDownloadInfo::destinationFilePath();
  QFileInfo::QFileInfo(local_48,&local_40);
  cVar2 = QFileInfo::exists();
  if (cVar2 == '\0') goto LAB_1002791cd;
  CAbstractTask::setWaitForSubTaskCompletion();
  lVar4 = QFileInfo::size();
  if (lVar4 == *(long *)(param_1 + 0x38)) {
    this = operator_new(0x20);
    CMd5Calculator::CMd5Calculator(this,&local_40,param_1);
    QObject::connect(local_50,this,"2finished(bool, const QString&)",param_1,
                     "1onExistingImageMd5CalculationFinished(bool, const QString&)",0);
    QMetaObject::Connection::~Connection(local_50);
    QThread::start(this,7);
    param_1[0x70] = (QObject)0x1;
    FUN_10081b890(param_1);
    goto LAB_1002791cd;
  }
  if (((byte)param_1[0x74] & 1) != 0) {
    FUN_1002794b0(param_1);
    goto LAB_1002791cd;
  }
  local_b0._32_8_ =
       QString::fromAscii_helper
                 ("1onRetryDownloadExistingImageAnswered(PRL_RESULT,Messaging::ButtonID)",0x45);
  local_b0._24_4_ = 0x80000000;
  local_b0._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_88,param_1,local_b0 + 0x20,local_b0 + 0x10);
  QVariant::~QVariant((QVariant *)(local_b0 + 0x10));
  if (*(int *)local_b0._32_8_ != -1) {
    if (*(int *)local_b0._32_8_ != 0) {
      LOCK();
      *(int *)local_b0._32_8_ = *(int *)local_b0._32_8_ + -1;
      local_29 = *(int *)local_b0._32_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100279019;
    }
    QArrayData::deallocate((QArrayData *)local_b0._32_8_,2,8);
  }
LAB_100279019:
  iVar3 = CMessageManager::instance();
  pQVar5 = (QString *)CSearchParentHelper::instance();
  pQVar6 = (QStringList *)
           CSearchParentHelper::getParentForMessage
                     (pQVar5,(bool)((char)param_1 + 'h'),(QWidget *)0x0);
  local_b0._8_8_ = PTR_shared_null_1021e15e8;
  local_b0._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x3be4,pQVar6,(QStringList *)(local_b0 + 8),(CSlotInfo *)local_b0,
             SUB81(local_88,0));
  uVar1 = local_b0._0_8_;
  if (*(int *)local_b0._0_8_ != -1) {
    if (*(int *)local_b0._0_8_ != 0) {
      LOCK();
      *(int *)local_b0._0_8_ = *(int *)local_b0._0_8_ + -1;
      local_29 = *(int *)local_b0._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100279101;
    }
    iVar3 = *(int *)(local_b0._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_b0._0_8_ + 8)) {
      lVar4 = (long)*(int *)(local_b0._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar7 = (Data *)(local_b0._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_1002790e0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_1002790e0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_100279101:
  uVar1 = local_b0._8_8_;
  if (*(int *)local_b0._8_8_ != -1) {
    if (*(int *)local_b0._8_8_ != 0) {
      LOCK();
      *(int *)local_b0._8_8_ = *(int *)local_b0._8_8_ + -1;
      local_29 = *(int *)local_b0._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100279190;
    }
    iVar3 = *(int *)(local_b0._8_8_ + 0xc);
    if (iVar3 != *(int *)(local_b0._8_8_ + 8)) {
      lVar4 = (long)*(int *)(local_b0._8_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar7 = (Data *)(local_b0._8_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_10027916f:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_10027916f;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_100279190:
  QVariant::~QVariant(local_68);
  if (local_88[0] != (int *)0x0) {
    LOCK();
    *local_88[0] = *local_88[0] + -1;
    local_29 = *local_88[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_88[0] != (int *)0x0)) {
      operator_delete(local_88[0]);
    }
  }
LAB_1002791cd:
  QFileInfo::~QFileInfo(local_48);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return 0;
}

