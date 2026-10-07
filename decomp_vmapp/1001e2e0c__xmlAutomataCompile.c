
xmlRegexpPtr _xmlAutomataCompile(xmlAutomataPtr am)

{
  xmlRegexpPtr local_28;
  
  if ((am == (xmlAutomataPtr)0x0) || (*(int *)(am + 0x10) != 0)) {
    local_28 = (xmlRegexpPtr)0x0;
  }
  else {
    FUN_1001db1b5(am);
    local_28 = (xmlRegexpPtr)FUN_1001d7e96(am);
  }
  return local_28;
}

