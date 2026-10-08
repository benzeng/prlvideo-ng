
void FUN_1006636d0(long param_1,char *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  QUrl *pQVar6;
  QArrayData *local_110;
  QUrl local_108 [8];
  QArrayData *local_100;
  _func_void_Node_ptr *local_f8;
  QString local_f0;
  QString local_e8;
  QArrayData *local_e0;
  _func_void_Node_ptr *local_d8;
  QVariant local_d0;
  undefined1 local_c0 [48];
  undefined1 local_90 [40];
  undefined1 local_68 [40];
  QUrl local_40 [8];
  QVariant local_38;
  undefined1 local_21;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  FUN_10075bd60(param_1,param_2);
  QVariant::QVariant(&local_38,true);
  QObject::setProperty(param_2,(QVariant *)"forceHideTitle");
  QVariant::~QVariant(&local_38);
  lVar4 = *(long *)(param_1 + 0x40);
  uVar3 = FUN_10075bd70(param_1);
  FUN_10074a3a0(*(undefined8 *)(lVar4 + 0x18),uVar3);
  CAbstractWizardPage::wizardModel();
  uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  FUN_100676150(local_c0,uVar3);
  QUrl::QUrl(local_40,local_90,0);
  FUN_100252c80(local_68);
  FUN_100252e70(local_c0);
  CAbstractWizardPage::wizardCtrl();
  CWizardController::parentWidget();
  QWidget::window();
  QObject::property((char *)&local_d0);
  FUN_10061fde0(&local_d0);
  lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220a9e0);
  QVariant::~QVariant(&local_d0);
  if (lVar4 != 0) {
    FUN_1002dcf90(&local_d8,lVar4);
    local_e0 = (QArrayData *)QString::fromAscii_helper("Coupon",6);
    plVar5 = (long *)FUN_10002c250(&local_d8,&local_e0);
    iVar2 = *(int *)(*plVar5 + 4);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_21 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100663863;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_100663863:
    if (*(int *)(local_d8 + 0x10) != -1) {
      if (*(int *)(local_d8 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_d8 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_21 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100663898;
      }
      QHashData::free_helper(local_d8);
    }
LAB_100663898:
    if (iVar2 != 0) {
      QUrlQuery::QUrlQuery((QUrlQuery *)&local_e8,local_40);
      local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("coupon",6)
      ;
      FUN_1002dcf90(&local_f8,lVar4);
      local_100 = (QArrayData *)QString::fromAscii_helper("Coupon",6);
      FUN_10002c250(&local_f8,&local_100);
      QUrlQuery::addQueryItem(&local_e8,&local_f0);
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_21 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10066394f;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_10066394f:
      if (*(int *)(local_f8 + 0x10) != -1) {
        if (*(int *)(local_f8 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_f8 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_21 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100663984;
        }
        QHashData::free_helper(local_f8);
      }
LAB_100663984:
      if (*(int *)local_f0.field0_0x0 != -1) {
        if (*(int *)local_f0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
          local_21 = *(int *)local_f0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1006639ba;
        }
        QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
      }
LAB_1006639ba:
      QUrl::setQuery((QUrlQuery *)local_40);
      QUrlQuery::~QUrlQuery((QUrlQuery *)&local_e8);
    }
  }
  pQVar6 = (QUrl *)FUN_10075bd70(param_1);
  QUrl::toString(&local_110,local_40,0);
  QUrl::QUrl(local_108,&local_110,0);
  CAbstractWebView::load(pQVar6);
  QUrl::~QUrl(local_108);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_21 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100663a59;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100663a59:
  QUrl::~QUrl(local_40);
  return;
}

