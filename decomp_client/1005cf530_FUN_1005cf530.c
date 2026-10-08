
void FUN_1005cf530(long param_1)

{
  QString *pQVar1;
  char *pcVar2;
  QPixmap *pQVar3;
  undefined *puVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  size_t sVar8;
  QArrayData *pQVar9;
  QVariant *pQVar10;
  int iVar11;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QFontMetrics local_78 [8];
  QPixmap local_70 [32];
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  pvVar6 = operator_new(0xa0);
  *(void **)(param_1 + 0x18) = pvVar6;
  uVar7 = CDeclarativeWizardProxyPage::sourcePage();
  FUN_1005d3ce0(pvVar6,uVar7);
  WidgetUtils::Adjuster::adjustWidgetPlacement(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x28));
  pQVar1 = *(QString **)(param_1 + 0x10);
  QMetaObject::tr((char *)&local_40,"",0x1e04858);
  CAbstractWizardPage::setTitle(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cf5de;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005cf5de:
  pcVar2 = *(char **)(*(long *)(param_1 + 0x18) + 0x70);
  pvVar6 = (void *)QLabel::pixmap();
  QVariant::QVariant(&local_50,0x41,pvVar6);
  QObject::setProperty(pcVar2,(QVariant *)"WarningPixmap");
  QVariant::~QVariant(&local_50);
  pQVar3 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x70);
  QPixmap::QPixmap(local_70);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_70);
  QFontMetrics::QFontMetrics
            (local_78,(QFont *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x68) + 0x28) + 0x38
                               ));
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68);
  QFontMetrics::width(local_78,0x57);
  QWidget::setMinimumWidth((int)uVar7);
  FUN_1001327f0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),(QString *)(param_1 + 0x20));
  puVar4 = PTR_s_QWidget___color__rgba__255__255__102271080;
  iVar11 = -1;
  if (PTR_s_QWidget___color__rgba__255__255__102271080 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_QWidget___color__rgba__255__255__102271080);
    iVar11 = (int)sVar8;
  }
  pQVar9 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar11);
  local_88 = pQVar9;
  FUN_100137810(&local_80,&local_88,PTR_s_QMenu___background_color___33343_102271050);
  QWidget::setStyleSheet((QString *)(param_1 + 0x20));
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cf71c;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005cf71c:
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_31 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cf749;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_1005cf749:
  QActionGroup::setExclusive((bool)((char)param_1 + 'P'));
  pQVar1 = (QString *)(param_1 + 0x60);
  iVar11 = 0;
  while( true ) {
    iVar5 = QComboBox::count();
    if (iVar5 <= iVar11) break;
    QComboBox::itemText((int)&local_90);
    pQVar10 = (QVariant *)QMenu::addAction(pQVar1);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005cf790;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1005cf790:
    QVariant::QVariant(&local_a0,iVar11);
    QAction::setData(pQVar10);
    QVariant::~QVariant(&local_a0);
    QAction::setCheckable(SUB81(pQVar10,0));
    QAction::setChecked(SUB81(pQVar10,0));
    QActionGroup::addAction((QAction *)(param_1 + 0x90));
    iVar11 = iVar11 + 1;
  }
  FUN_1001327f0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),pQVar1);
  puVar4 = PTR_s_QWidget___color__rgba__255__255__102271080;
  iVar11 = -1;
  if (PTR_s_QWidget___color__rgba__255__255__102271080 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_QWidget___color__rgba__255__255__102271080);
    iVar11 = (int)sVar8;
  }
  pQVar9 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar11);
  local_b0 = pQVar9;
  FUN_100137810(&local_a8,&local_b0,PTR_s_QMenu___background_color___33343_102271050);
  QWidget::setStyleSheet(pQVar1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cf909;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1005cf909:
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_31 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cf934;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_1005cf934:
  QActionGroup::setExclusive(SUB81((QAction *)(param_1 + 0x90),0));
  QFontMetrics::~QFontMetrics(local_78);
  return;
}

