
undefined8 FUN_1001e89d0(QString *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = QFileInfo::exists(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_1001e9440(param_1,param_2);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1001e95d0(param_1,param_2);
    }
  }
  return uVar2;
}

