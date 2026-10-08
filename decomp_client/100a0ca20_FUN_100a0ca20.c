
void FUN_100a0ca20(QObject *param_1)

{
  QNetworkAccessManager *this;
  QObject *pQVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102236e90;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e1288;
  this = operator_new(0x10);
  QNetworkAccessManager::QNetworkAccessManager(this,param_1);
  *(QNetworkAccessManager **)(param_1 + 0x10) = this;
  pQVar1 = operator_new(0x18);
  FUN_100a20c30(pQVar1,this);
  QObject::setParent(pQVar1);
  return;
}

