
void FUN_100a22350(undefined8 *param_1,QSslError *param_2)

{
  QSslError *this;
  undefined8 *puVar1;
  undefined8 local_20;
  
  if (*(uint *)*param_1 < 2) {
    QSslError::QSslError((QSslError *)&local_20,param_2);
    puVar1 = (undefined8 *)QListData::append();
    *puVar1 = local_20;
  }
  else {
    this = (QSslError *)FUN_100a22400(param_1,0x7fffffff,1);
    QSslError::QSslError(this,param_2);
  }
  return;
}

