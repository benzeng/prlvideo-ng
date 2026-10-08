
long FUN_100da4230(QString *param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  
  cVar1 = QFile::exists(param_1);
  lVar3 = 0;
  if (cVar1 != '\0') {
    cVar1 = FUN_100da2150(param_1);
    lVar3 = 1;
    if (cVar1 == '\0') {
      cVar1 = FUN_100da0de0(param_1);
      lVar3 = 2;
      if (cVar1 == '\0') {
        cVar1 = FUN_100da2630(param_1);
        lVar3 = 3;
        if (cVar1 == '\0') {
          bVar2 = FUN_100da2820(param_1);
          lVar3 = (ulong)bVar2 << 2;
        }
      }
    }
  }
  return lVar3;
}

