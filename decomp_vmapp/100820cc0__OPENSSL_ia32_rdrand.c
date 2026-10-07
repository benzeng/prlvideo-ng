
long _OPENSSL_ia32_rdrand(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = 8;
  do {
    lVar1 = rdrand();
    bVar3 = (bool)rdrandIsValid();
    if (bVar3) break;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (lVar1 == 0) {
    lVar1 = lVar2;
  }
  return lVar1;
}

