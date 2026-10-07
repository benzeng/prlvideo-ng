
undefined8 FUN_1006d1b40(QString *param_1,QString *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = operator==(param_1,param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = operator==(param_1 + 1,param_2 + 1);
  }
  return uVar2;
}

