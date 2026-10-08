
void FUN_10042e720(QSize *param_1)

{
  QPixmap *pQVar1;
  QString *pQVar2;
  QArrayData *local_68;
  QPixmap local_60 [32];
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10042f0e0(param_1[0xc],param_1);
  FUN_1001c72e0(&local_40);
  QWidget::setWindowTitle((QString *)param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10042e78a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10042e78a:
  pQVar1 = *(QPixmap **)((long)param_1[0xc] + 0x18);
  FUN_1001c8260(local_60,4);
  QLabel::setPixmap(pQVar1);
  QPixmap::~QPixmap(local_60);
  QLineEdit::setText(*(QString **)((long)param_1[0xc] + 0x40));
  QLineEdit::setEchoMode(*(undefined8 *)((long)param_1[0xc] + 0x50),2);
  QAbstractButton::setChecked(SUB81(*(undefined8 *)((long)param_1[0xc] + 0x58),0));
  pQVar2 = *(QString **)((long)param_1[0xc] + 0x60);
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Password_must_have_at_least_6_ch_10226e530);
  QLabel::setText(pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10042e850;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10042e850:
  FUN_10042ea00(param_1);
  (**(code **)((long)*param_1 + 0x78))(param_1);
  QWidget::setFixedSize(param_1);
  return;
}

