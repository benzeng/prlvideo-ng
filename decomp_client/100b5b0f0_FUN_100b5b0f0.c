
void FUN_100b5b0f0(QThread *param_1)

{
  char cVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10223f680;
  cVar1 = FUN_100b5c390();
  if (cVar1 != '\0') {
    FUN_100b5c320(param_1);
  }
  QThread::~QThread(param_1);
  operator_delete(param_1);
  return;
}

