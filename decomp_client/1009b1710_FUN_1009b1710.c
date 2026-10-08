
char FUN_1009b1710(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_1009983c0();
  cVar1 = FUN_100992560(uVar3);
  cVar2 = '\a';
  if (cVar1 == '\0') {
    uVar3 = FUN_1009983c0(param_1);
    cVar2 = FUN_100992020(uVar3);
    cVar2 = (cVar2 == '\0') * '\x02' + '\b';
  }
  return cVar2;
}

