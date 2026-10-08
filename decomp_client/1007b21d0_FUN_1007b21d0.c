
void FUN_1007b21d0(CBaseDialog *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  Connection local_40 [8];
  Connection local_38 [15];
  undefined1 local_29;
  
  CBaseDialog::CBaseDialog(param_1,param_3,0,0);
  *(undefined ***)param_1 = &PTR_FUN_10222d340;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222d548;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10222d598;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0xa8) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  FUN_1007b2af0(param_1 + 0x60,param_1);
  QWidget::setWindowFlags(param_1,*(uint *)(*(long *)(param_1 + 0x28) + 0xc) & 0xffffdfff);
  QLineEdit::setMaxLength((int)*(undefined8 *)(param_1 + 0x70));
  QLineEdit::setText(*(QString **)(param_1 + 0x70));
  QTextEdit::setPlainText(*(QString **)(param_1 + 0x80));
  QObject::connect(local_38,*(undefined8 *)(param_1 + 0xa0),"2accepted()",param_1,"1onOk()",0);
  QMetaObject::Connection::~Connection(local_38);
  QObject::connect(local_40,*(undefined8 *)(param_1 + 0xa0),"2rejected()",param_1,"1reject()",0);
  QMetaObject::Connection::~Connection(local_40);
  return;
}

