
QMenu * FUN_1006245d0(QWidget *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  QMenu *this;
  size_t sVar4;
  QActionGroup *this_00;
  QVariant *pQVar5;
  QVariant *pQVar6;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  this = operator_new(0x30);
  QMenu::QMenu(this,param_1);
  FontUtils::setMacContextMenuFont((QWidget *)this,false);
  puVar1 = PTR_s_QMenu___background_color___33343_102271050;
  iVar2 = -1;
  if (PTR_s_QMenu___background_color___33343_102271050 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_QMenu___background_color___33343_102271050);
    iVar2 = (int)sVar4;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
  QWidget::setStyleSheet((QString *)this);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10062466d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10062466d:
  this_00 = operator_new(0x10);
  QActionGroup::QActionGroup(this_00,(QObject *)this);
  QActionGroup::setExclusive(SUB81(this_00,0));
  iVar2 = QComboBox::count();
  if (0 < iVar2) {
    iVar2 = 0;
    pQVar6 = (QVariant *)0x0;
    do {
      QComboBox::itemData((int)&local_58,(int)param_1);
      QVariant::toString();
      iVar3 = QString::compare_helper
                        (local_48 + *(long *)(local_48 + 0x10),*(undefined4 *)(local_48 + 4),
                         "separator",0xffffffff,1);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100624739;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100624739:
      QVariant::~QVariant(&local_58);
      if (iVar3 == 0) {
        QMenu::addSeparator();
      }
      else {
        QComboBox::itemText((int)&local_60);
        pQVar5 = (QVariant *)QMenu::addAction((QString *)this);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006247a1;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_1006247a1:
        QVariant::QVariant(&local_70,iVar2);
        QAction::setData(pQVar5);
        QVariant::~QVariant(&local_70);
        QAction::setCheckable(SUB81(pQVar5,0));
        QActionGroup::addAction((QAction *)this_00);
        iVar3 = QComboBox::currentIndex();
        if (iVar2 == iVar3) {
          pQVar6 = pQVar5;
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = QComboBox::count();
    } while (iVar2 < iVar3);
    if (pQVar6 != (QVariant *)0x0) {
      QAction::setChecked(SUB81(pQVar6,0));
      QMenu::setActiveAction((QAction *)this);
    }
  }
  iVar2 = WidgetUtils::getComboBoxPopupWidth((QComboBox *)param_1);
  WidgetUtils::alignMenuWidth(this,iVar2);
  FUN_1001327f0(param_1,this);
  return this;
}

