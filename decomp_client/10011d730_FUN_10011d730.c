
void FUN_10011d730(void)

{
  char cVar1;
  
  CDispCommonPreferences::getDebug();
  cVar1 = CDspDebug::isVerboseLogEnabled();
  if (cVar1 != '\0') {
    FUN_100dfa570(3);
    return;
  }
  FUN_100dfa570(0xffffffff);
  return;
}

