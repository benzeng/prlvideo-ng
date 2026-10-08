
void FUN_1005e7f60(long param_1,QUrl *param_2)

{
  QString *this;
  int iVar1;
  long lVar2;
  char *pcVar3;
  QVariant local_60;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QUrlQuery local_30 [8];
  QString local_28;
  undefined1 local_19;
  
  QUrlQuery::QUrlQuery(local_30,param_2);
  local_40 = (QArrayData *)QString::fromAscii_helper("scope",5);
  QUrlQuery::queryItemValue(&local_38,local_30,&local_40,0);
  iVar1 = QString::compare_helper
                    (local_38 + *(long *)(local_38 + 0x10),*(undefined4 *)(local_38 + 4),
                     "confirmation",0xffffffff,1);
  *(bool *)(param_1 + 0x20) = iVar1 == 0;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005e7ffb;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005e7ffb:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005e802b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005e802b:
  this = (QString *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (this->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
      local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      QString::operator=(this,&local_28);
      if (*(int *)local_28.field0_0x0 != -1) {
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          local_19 = *(int *)local_28.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1005e818e;
        }
        QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
      }
    }
    goto LAB_1005e818e;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("transaction",0xb);
  QUrlQuery::queryItemValue(&local_48,local_30,&local_50,0);
  QString::operator=(this,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005e809e;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005e809e:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005e80ce;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005e80ce:
  lVar2 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x40);
  *(undefined1 *)(lVar2 + 0x138) = 1;
  pcVar3 = (char *)CDeclarativeWizardPage::pageContentItem();
  QVariant::QVariant(&local_60,"waitPurchaseCompletion");
  QObject::setProperty(pcVar3,(QVariant *)"state");
  QVariant::~QVariant(&local_60);
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  QTimer::start((int)*(undefined8 *)(param_1 + 0x38));
LAB_1005e818e:
  QUrlQuery::~QUrlQuery(local_30);
  return;
}

