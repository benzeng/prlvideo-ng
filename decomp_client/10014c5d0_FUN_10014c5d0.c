
void FUN_10014c5d0(QSize *param_1,QSize param_2,QSize param_3,QSize param_4,int param_5,
                  undefined8 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  QSize QVar3;
  QString *pQVar4;
  undefined4 extraout_var;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  Connection local_60 [8];
  Connection local_58 [8];
  Connection local_50 [8];
  int local_48;
  undefined4 local_44;
  QArrayData *local_40;
  undefined1 local_31;
  
  CBaseDialog::CBaseDialog((CBaseDialog *)param_1,param_6,0,0);
  *param_1 = (QSize)&PTR_FUN_1021fc8c0;
  param_1[2] = (QSize)&PTR_FUN_1021fcab0;
  param_1[6] = (QSize)&PTR_FUN_1021fcb00;
  param_1[0x20] = param_2;
  param_1[0x21] = param_3;
  param_1[0x22] = param_4;
  param_1[0x23].field0_0x0 = param_5;
  FUN_10014fb70(param_1 + 0xc,param_1);
  QWidget::hide();
  QWidget::hide();
  QWidget::hide();
  CPrlFileDevSelectorWidget::setCustomWidgetType(param_1[0x1d],1);
  FUN_10015a320(param_1[0x20]);
  CDispUser::getUserWorkspace();
  CDispUserWorkspace::getUserHomeFolder();
  pQVar4 = (QString *)CPrlFileDevSelectorWidget::getFileDevSelector();
  CPrlFileDevSelector::setServerUserHomeFolder(pQVar4);
  iVar1 = *(int *)((long)param_1[5] + 0x14);
  iVar2 = *(int *)((long)param_1[5] + 0x1c);
  (**(code **)((long)*param_1 + 0x78))(param_1);
  local_48 = (iVar2 + 1) - iVar1;
  local_44 = extraout_var;
  QWidget::setFixedSize(param_1);
  QObject::connect(local_50,param_1[0x1f],"2accepted()",param_1,"1onOk()",0);
  QMetaObject::Connection::~Connection(local_50);
  QObject::connect(local_58,param_1[0x1f],"2rejected()",param_1,"1reject()",0);
  QMetaObject::Connection::~Connection(local_58);
  QObject::connect(local_60,param_1[0x1d],
                   "2currentItemChanged(CPrlFileDevSelectorItem::FileDevSelectorItemType, QString, QString)"
                   ,param_1,
                   "1onCurrentItemChanged(CPrlFileDevSelectorItem::FileDevSelectorItemType, QString, QString)"
                   ,0);
  QMetaObject::Connection::~Connection(local_60);
  if (param_1[0x22] == (QSize)0x0) goto LAB_10014c91b;
  QWidget::setFocus(param_1[0x1d],7);
  QVar3 = param_1[0x1d];
  CVmSharedFolder::getPath();
  CVmSharedFolder::getPath();
  CPrlFileDevSelectorWidget::setCurrentItem(QVar3,2,&local_68,&local_70,1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10014c7fd;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10014c7fd:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10014c82d;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10014c82d:
  QVar3 = param_1[0x1a];
  CVmSharedFolder::getDescription();
  QTextEdit::setPlainText((QString *)QVar3);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10014c880;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10014c880:
  QVar3 = param_1[0xe];
  CVmSharedFolder::isEnabled();
  QAbstractButton::setChecked(QVar3.field0_0x0._0_1_);
  QVar3 = param_1[0x1c];
  CVmSharedFolder::isReadOnly();
  QAbstractButton::setChecked(QVar3.field0_0x0._0_1_);
  QVar3 = param_1[0x18];
  CVmSharedFolder::getName();
  QLineEdit::setText((QString *)QVar3);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10014c90c;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10014c90c:
  if (param_7 == 0) {
    FUN_10014cad0(param_1);
  }
LAB_10014c91b:
  QGridLayout::setHorizontalSpacing(param_1[0xd].field0_0x0);
  QWidget::setAttribute(param_1[0x1a],0x58,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

