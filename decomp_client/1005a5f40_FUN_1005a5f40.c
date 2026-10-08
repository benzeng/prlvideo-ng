
undefined8 FUN_1005a5f40(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    uVar2 = CDispCommonPreferences::isLockedSign();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

