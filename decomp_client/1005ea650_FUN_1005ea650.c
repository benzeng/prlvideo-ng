
void FUN_1005ea650(undefined8 param_1,QAction *param_2)

{
  undefined *puVar1;
  QMenu *this;
  size_t sVar2;
  QAction *pQVar3;
  undefined8 uVar4;
  int iVar5;
  Connection local_78 [8];
  QString local_70;
  QVariant local_68;
  QArrayData *local_58;
  Connection local_50 [8];
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  this = operator_new(0x30);
  QMenu::QMenu(this,(QWidget *)0x0);
  FontUtils::setMacContextMenuFont((QWidget *)this,false);
  puVar1 = PTR_s_QMenu___background_color___33343_102271050;
  iVar5 = -1;
  if (PTR_s_QMenu___background_color___33343_102271050 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_QMenu___background_color___33343_102271050);
    iVar5 = (int)sVar2;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  QWidget::setStyleSheet((QString *)this);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ea6ef;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005ea6ef:
  pQVar3 = operator_new(0x10);
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1dbad6c);
  QAction::QAction(pQVar3,&local_48,(QObject *)this);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ea75a;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005ea75a:
  QWidget::addAction((QAction *)this);
  uVar4 = QGraphicsItem::parentObject();
  QObject::connect(local_50,pQVar3,"2triggered()",uVar4,"1copy()",0);
  QMetaObject::Connection::~Connection(local_50);
  QGraphicsItem::parentObject();
  QObject::property((char *)&local_68);
  QVariant::toString();
  iVar5 = *(int *)(local_58 + 4);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ea7f5;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005ea7f5:
  QVariant::~QVariant(&local_68);
  if (iVar5 == 0) {
    QAction::setEnabled(SUB81(pQVar3,0));
  }
  QMenu::addSeparator();
  pQVar3 = operator_new(0x10);
  QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,0x1dcdd28);
  QAction::QAction(pQVar3,&local_70,(QObject *)this);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ea87f;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1005ea87f:
  QWidget::addAction((QAction *)this);
  uVar4 = QGraphicsItem::parentObject();
  QObject::connect(local_78,pQVar3,"2triggered()",uVar4,"1selectAll()",0);
  QMetaObject::Connection::~Connection(local_78);
  QMenu::exec((QPoint *)this,param_2);
  QObject::deleteLater();
  return;
}

