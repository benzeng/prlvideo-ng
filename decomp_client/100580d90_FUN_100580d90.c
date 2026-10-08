
QLineEdit * FUN_100580d90(undefined8 param_1,QWidget *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  QLineEdit *this;
  QRegExpValidator *this_00;
  QArrayData *local_38;
  QRegExp local_30 [15];
  undefined1 local_21;
  
  plVar1 = *(long **)(param_4 + 0x10);
  if (plVar1 == (long *)0x0) {
    return (QLineEdit *)0x0;
  }
  uVar2 = (**(code **)(*plVar1 + 0x130))(plVar1,param_4);
  if ((uVar2 & 2) == 0) {
    return (QLineEdit *)0x0;
  }
  this = operator_new(0x30);
  QLineEdit::QLineEdit(this,param_2);
  local_38 = (QArrayData *)QString::fromAscii_helper("[^?:\"<>|/\\\\*]*",0xe);
  QRegExp::QRegExp(local_30,&local_38,1,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100580e36;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100580e36:
  this_00 = operator_new(0x18);
  QRegExpValidator::QRegExpValidator(this_00,local_30,(QObject *)this);
  QLineEdit::setValidator((QValidator *)this);
  QRegExp::~QRegExp(local_30);
  return this;
}

