
undefined8 FUN_100054660(long param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  QString *pQVar2;
  undefined8 uVar3;
  
  pQVar2 = (QString *)(param_1 + 0x58);
  QFile::setFileName(pQVar2);
  cVar1 = QFile::open(pQVar2,(param_3 == '\0') * '\x02' + '\x01');
  uVar3 = 3;
  if (cVar1 != '\0') {
    uVar3 = 0;
    (**(code **)(pQVar2->field0_0x0 + 0x88))(pQVar2,0);
  }
  return uVar3;
}

