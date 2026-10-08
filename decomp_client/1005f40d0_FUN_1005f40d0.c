
void FUN_1005f40d0(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  lVar2 = CDeclarativeWizardPage::pageContentItem();
  if (lVar2 == 0) {
    return;
  }
  lVar2 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  uVar3 = CDeclarativeWizardPage::pageContentItem();
  local_40 = (QArrayData *)QString::fromAscii_helper("emptySource",0xb);
  qt_qFindChild_helper(uVar3,&local_40,PTR_staticMetaObject_1021e1368,1);
  QObject::property((char *)&local_38);
  uVar1 = QVariant::toBool();
  *(undefined1 *)(lVar2 + 0x148) = uVar1;
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005f4197;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005f4197:
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  return;
}

