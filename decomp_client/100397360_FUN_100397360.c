
void FUN_100397360(QObject *param_1,undefined8 *param_2)

{
  QString *pQVar1;
  undefined8 uVar2;
  QTimer *this;
  long lVar3;
  QObject *pQVar4;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  Connection local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar4 = param_1 + 0x18;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pQVar4 = *param_2;
    param_2 = param_2 + 1;
    pQVar4 = pQVar4 + 8;
  }
  QWidget::hide();
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  (this->field5_0x1c).bitField0_1 = (this->field5_0x1c).bitField0_1 | 1;
  QTimer::start((int)this);
  QObject::connect(local_38,this,"2timeout()",param_1,"1onStartSlideshow()",0);
  QMetaObject::Connection::~Connection(local_38);
  pQVar1 = *(QString **)(param_1 + 0x48);
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1df1211);
  local_30 = (QArrayData *)QString::fromAscii_helper("12.2.1 (41615)",0xe);
  QString::append(&local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10039744e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10039744e:
  QLabel::setText(pQVar1);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10039748a;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10039748a:
  pQVar1 = *(QString **)(param_1 + 0x50);
  QLabel::text();
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s__1Parallels_International_GmbH__A_10226e230);
  local_68 = (QArrayData *)QString::fromAscii_helper(" 1999-2017 ",0xb);
  QString::arg(&local_58,&local_60,&local_68,0,0x20);
  QString::arg(&local_48,&local_50,&local_58,0,0x20);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10039753f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10039753f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10039756f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10039756f:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10039759f;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10039759f:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003975cf;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003975cf:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003975ff;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003975ff:
  FUN_100397840(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x70))();
  CProgressIndicator::setIndicatorSize((int)uVar2);
  CProgressIndicator::hide();
  FUN_100399d90(param_1);
  FUN_100399eb0(param_1);
  return;
}

