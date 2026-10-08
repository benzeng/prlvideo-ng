
int _xmlAutomataIsDeterminist(xmlAutomataPtr am)

{
  undefined4 local_24;
  
  if (am == (xmlAutomataPtr)0x0) {
    local_24 = -1;
  }
  else {
    local_24 = FUN_10090f268(am);
  }
  return local_24;
}

