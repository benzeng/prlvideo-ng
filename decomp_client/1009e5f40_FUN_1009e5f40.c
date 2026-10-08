
void FUN_1009e5f40(undefined8 *param_1,QSslCertificate *param_2)

{
  QSslCertificate *this;
  undefined8 *puVar1;
  undefined8 local_20;
  
  if (*(uint *)*param_1 < 2) {
    QSslCertificate::QSslCertificate((QSslCertificate *)&local_20,param_2);
    puVar1 = (undefined8 *)QListData::append();
    *puVar1 = local_20;
  }
  else {
    this = (QSslCertificate *)FUN_1009e5ff0(param_1,0x7fffffff,1);
    QSslCertificate::QSslCertificate(this,param_2);
  }
  return;
}

