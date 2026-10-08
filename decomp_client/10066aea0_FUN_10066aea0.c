
void FUN_10066aea0(long param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  QMenu *this;
  size_t sVar4;
  char *pcVar5;
  undefined8 local_60;
  QKeySequence local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  if (param_2 < 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x40) + 0xc) - *(int *)(*(long *)(param_1 + 0x40) + 8) <= param_2
     ) {
    return;
  }
  iVar3 = CDownloadedKeyInfo::getLicenseProduct();
  if (iVar3 != 7) {
    return;
  }
  cVar2 = CDownloadedKeyInfo::isActiveHere();
  if (cVar2 == '\0') {
    return;
  }
  this = operator_new(0x30);
  QMenu::QMenu(this,(QWidget *)0x0);
  QVariant::QVariant(&local_40,true);
  QObject::setProperty((char *)this,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_40);
  puVar1 = PTR_s_QMenu___background_color___33343_102271058;
  iVar3 = -1;
  if (PTR_s_QMenu___background_color___33343_102271058 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_QMenu___background_color___33343_102271058);
    iVar3 = (int)sVar4;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
  QWidget::setStyleSheet((QString *)this);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10066afaa;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10066afaa:
  QWidget::setAttribute(this,0x37,1);
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,0x1df1203);
  CAbstractWizardPage::wizardModel();
  pcVar5 = (char *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  QKeySequence::QKeySequence(local_58,0,0,0,0);
  QMenu::addAction((QString *)this,(QObject *)&local_50,pcVar5,(QKeySequence *)"1renewLicense()");
  QKeySequence::~QKeySequence(local_58);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10066b05a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10066b05a:
  local_60 = QCursor::pos();
  QMenu::popup((QPoint *)this,(QAction *)&local_60);
  return;
}

