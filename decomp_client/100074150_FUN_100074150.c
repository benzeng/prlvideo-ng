
undefined8 FUN_100074150(QString *param_1,QString *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)&param_2[1].field0_0x0 == *(int *)&param_1[1].field0_0x0) {
    cVar1 = operator==(param_2,param_1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      cVar1 = FUN_100075e70(param_2 + 3,param_1 + 3);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_100075e70(param_2 + 2,param_1 + 2);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

