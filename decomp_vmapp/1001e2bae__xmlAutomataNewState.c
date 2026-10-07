
xmlAutomataStatePtr _xmlAutomataNewState(xmlAutomataPtr am)

{
  undefined8 local_28;
  
  if (am == (xmlAutomataPtr)0x0) {
    local_28 = (xmlAutomataStatePtr)0x0;
  }
  else {
    local_28 = (xmlAutomataStatePtr)FUN_1001d8bb3(am);
    FUN_1001da3f9(am,local_28);
  }
  return local_28;
}

