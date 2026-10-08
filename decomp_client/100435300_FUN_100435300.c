
QComboBox * FUN_100435300(undefined8 param_1,QWidget *param_2,undefined8 *param_3)

{
  uint uVar1;
  QComboBox *this;
  int iVar2;
  Data_conflict local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  Connection local_88 [8];
  Data_conflict local_80;
  undefined4 local_78;
  Data_conflict local_70;
  Data_conflict local_68;
  undefined4 local_60;
  Data_conflict local_58;
  QString local_50;
  QString local_48;
  QVariant local_40;
  undefined1 local_29;
  
  this = operator_new(0x30);
  QComboBox::QComboBox(this,param_2);
  FontUtils::setSmallFont((QWidget *)this,false);
  QMetaObject::tr(&local_58.field0,PTR_staticMetaObject_1021e1520,(int)PTR_s_Read_only_10226e910);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  uVar1 = QComboBox::count();
  QIcon::QIcon((QIcon *)&local_50);
  iVar2 = (int)this;
  QComboBox::insertItem(iVar2,(QIcon *)(ulong)uVar1,&local_50,(QVariant *)&local_58);
  QIcon::~QIcon((QIcon *)&local_50);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58.field15 != -1) {
    if (*(int *)local_58.field15 != 0) {
      LOCK();
      *(int *)local_58.field15 = *(int *)local_58.field15 + -1;
      local_29 = *(int *)local_58.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004353d9;
    }
    QArrayData::deallocate((QArrayData *)local_58.field15,2,8);
  }
LAB_1004353d9:
  QMetaObject::tr(&local_70.field0,PTR_staticMetaObject_1021e1520,(int)PTR_s_Read___Write_10226e918)
  ;
  local_78 = 0x80000000;
  local_80.field7 = 0;
  uVar1 = QComboBox::count();
  QIcon::QIcon((QIcon *)&local_48);
  QComboBox::insertItem(iVar2,(QIcon *)(ulong)uVar1,&local_48,(QVariant *)&local_70);
  QIcon::~QIcon((QIcon *)&local_48);
  QVariant::~QVariant((QVariant *)&local_80);
  if (*(int *)local_70.field15 != -1) {
    if (*(int *)local_70.field15 != 0) {
      LOCK();
      *(int *)local_70.field15 = *(int *)local_70.field15 + -1;
      local_29 = *(int *)local_70.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100435475;
    }
    QArrayData::deallocate((QArrayData *)local_70.field15,2,8);
  }
LAB_100435475:
  QWidget::setMaximumHeight(iVar2);
  QObject::connect(local_88,this,"2currentIndexChanged(int)",param_1,"1onEditorIndexChanged(int)",0)
  ;
  QMetaObject::Connection::~Connection(local_88);
  local_90 = param_3[2];
  local_a0 = *param_3;
  local_98 = param_3[1];
  local_a8 = 0x80000000;
  local_b0.field7 = 0;
  QVariant::QVariant(&local_40,0x2a,&local_a0,0);
  QVariant::operator=((QVariant *)&local_b0,&local_40);
  QVariant::~QVariant(&local_40);
  QObject::setProperty((char *)this,(QVariant *)"ModelIndex");
  QVariant::~QVariant((QVariant *)&local_b0);
  return this;
}

