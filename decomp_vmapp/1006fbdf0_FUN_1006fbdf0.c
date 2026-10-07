
long FUN_1006fbdf0(QString *param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  
  cVar1 = QFile::exists(param_1);
  lVar3 = 0;
  if (cVar1 != '\0') {
    cVar1 = FUN_1006f9d10(param_1);
    lVar3 = 1;
    if (cVar1 == '\0') {
      cVar1 = FUN_1006f89a0(param_1);
      lVar3 = 2;
      if (cVar1 == '\0') {
        cVar1 = FUN_1006fa1f0(param_1);
        lVar3 = 3;
        if (cVar1 == '\0') {
          bVar2 = FUN_1006fa3e0(param_1);
          lVar3 = (ulong)bVar2 << 2;
        }
      }
    }
  }
  return lVar3;
}

