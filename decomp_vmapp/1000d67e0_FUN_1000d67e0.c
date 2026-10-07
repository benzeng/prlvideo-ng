
undefined8 FUN_1000d67e0(QString *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  (**(code **)(param_1->field0_0x0 + 0x70))();
  *(undefined4 *)&param_1[2].field0_0x0 = 0;
  QFile::setFileName(param_1);
  cVar1 = QFile::open(param_1,0xb);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000d6740(param_1,0x1000000);
  }
  return uVar2;
}

