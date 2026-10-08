
void FUN_1001398d0(QLineEdit *param_1,QWidget *param_2)

{
  QLineEdit::QLineEdit(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021fac10;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fadc0;
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(undefined2 *)(param_1 + 0x34) = 0;
  QWidget::setContextMenuPolicy(param_1,0);
  QLineEdit::setAlignment(param_1,0x84);
  return;
}

