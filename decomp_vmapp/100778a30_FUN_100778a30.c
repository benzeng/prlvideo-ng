
byte FUN_100778a30(QString *param_1)

{
  byte bVar1;
  
  bVar1 = QDir::isRelativePath(param_1);
  return bVar1 ^ 1;
}

