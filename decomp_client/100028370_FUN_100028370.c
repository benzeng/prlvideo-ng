
void FUN_100028370(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1330);
    uVar4 = CContentWindow::titleBarController();
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    if (DAT_102310820 == (void *)0x0) {
      pvVar5 = operator_new(0x18);
      FUN_10002bc90(pvVar5);
      DAT_10226c0b0 = 1;
      DAT_102310820 = pvVar5;
    }
    cVar2 = FUN_10002bdd0(DAT_102310820);
    puVar1 = PTR__objc_msgSend_1021e1c68;
    if ((cVar2 != '\0') && (*(long *)(param_1 + 0x28) == 0)) {
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___PDFeedbackButton_10226a830,PTR_s_alloc_102268b58);
      uVar6 = (*(code *)puVar1)(uVar4,PTR_s_init_102268ca8);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      (*(code *)PTR__objc_release_1021e1c70)(uVar4);
      if (DAT_102310820 == (void *)0x0) {
        pvVar5 = operator_new(0x18);
        FUN_10002bc90(pvVar5);
        DAT_10226c0b0 = 1;
        DAT_102310820 = pvVar5;
      }
      FUN_10002bde0(DAT_102310820,*(undefined8 *)(param_1 + 0x28),3);
      uVar4 = CTitleBarControllerQt::nativeTitleBarController();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (DAT_100e11040,uVar4,PTR_s_addAdditionalView_withWidth__102268d10,
                 *(undefined8 *)(param_1 + 0x28));
      (*(code *)PTR__objc_release_1021e1c70)(uVar4);
    }
  }
  lVar7 = FUN_100675e00(*(undefined8 *)(param_1 + 0x10));
  if (lVar7 != 0) {
    uVar4 = FUN_100675e00(*(undefined8 *)(param_1 + 0x10));
    uVar4 = FUN_10016f500(uVar4);
    FUN_10061abe0(&local_40,uVar4,0xf);
    cVar2 = QVariant::toBool();
    if (cVar2 == '\0') {
      iVar3 = CAbstractWizardModel::currentPageId();
      QVariant::~QVariant(&local_40);
      puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      if (iVar3 != 0) {
        uVar6 = FUN_100675e00(*(undefined8 *)(param_1 + 0x10));
        uVar6 = FUN_10016f500(uVar6);
        FUN_10061abe0(&local_58,uVar6,0x12);
        QVariant::toString();
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (puVar1,PTR_s_stringWithQString__102268d00,&local_48);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_addButton__102269778,uVar6);
        (*(code *)PTR__objc_release_1021e1c70)(uVar6);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_29 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1000285d8;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_1000285d8:
        QVariant::~QVariant(&local_58);
        return;
      }
      goto LAB_100028501;
    }
    QVariant::~QVariant(&local_40);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
LAB_100028501:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_removeButton_102269718);
  return;
}

