
void FUN_100621000(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_2 - param_3 != 0) {
    lVar1 = 0;
    do {
      QSslCertificate::QSslCertificate
                ((QSslCertificate *)(param_2 + lVar1),(QSslCertificate *)(param_4 + lVar1));
      lVar1 = lVar1 + 8;
    } while ((param_2 - param_3) + lVar1 != 0);
  }
  return;
}

