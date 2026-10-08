
char FUN_1009a69b0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_1009983c0();
  iVar2 = FUN_100992e00(uVar3);
  cVar1 = '\x10';
  if (iVar2 != 1) {
    uVar3 = FUN_1009983c0(param_1);
    cVar1 = FUN_100992020(uVar3);
    cVar1 = (cVar1 == '\0') * '\x02' + '\b';
  }
  return cVar1;
}

