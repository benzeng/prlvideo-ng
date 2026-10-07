
void FUN_100710d10(QThread *param_1)

{
  char cVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_100bce290;
  cVar1 = FUN_100711ee0();
  if (cVar1 != '\0') {
    FUN_100711e70(param_1);
  }
  QThread::~QThread(param_1);
  operator_delete(param_1);
  return;
}

