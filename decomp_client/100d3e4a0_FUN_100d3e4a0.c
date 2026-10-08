
undefined4 FUN_100d3e4a0(undefined8 param_1,QString *param_2,undefined1 param_3)

{
  char cVar1;
  undefined4 uVar2;
  QFile local_30 [16];
  
  QFile::QFile(local_30,param_2);
  cVar1 = QFile::open(local_30,2);
  uVar2 = 1;
  if (cVar1 != '\0') {
    uVar2 = FUN_100d3e520(param_1,local_30,param_3);
  }
  QFile::~QFile(local_30);
  return uVar2;
}

