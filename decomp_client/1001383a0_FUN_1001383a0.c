
void FUN_1001383a0(QLineEdit *param_1,QWidget *param_2)

{
  Connection local_30 [8];
  QArrayData *local_28;
  undefined1 local_19;
  
  QLineEdit::QLineEdit(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021fa600;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fa7b0;
  param_1[0x30] = (QLineEdit)0x0;
  local_28 = (QArrayData *)QString::fromAscii_helper("HH:HH:HH:HH:HH:HH;_",0x13);
  QLineEdit::setInputMask((QString *)param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100138420;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100138420:
  QObject::connect(local_30,param_1,"2cursorPositionChanged( int,int )",param_1,
                   "1onCursorPosChanged( int, int )",0);
  QMetaObject::Connection::~Connection(local_30);
  return;
}

