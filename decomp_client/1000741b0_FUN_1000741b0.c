
byte FUN_1000741b0(QString *param_1,QString *param_2)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = 1;
  if (*(int *)&param_2[1].field0_0x0 == *(int *)&param_1[1].field0_0x0) {
    cVar1 = operator==(param_2,param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_100075e70(param_2 + 3,param_1 + 3);
      if (cVar1 != '\0') {
        bVar2 = FUN_100075e70(param_2 + 2,param_1 + 2);
        bVar2 = bVar2 ^ 1;
      }
    }
  }
  return bVar2;
}

