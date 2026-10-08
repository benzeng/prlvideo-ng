
xmlAutomataStatePtr _xmlAutomataGetInitState(xmlAutomataPtr am)

{
  xmlAutomataStatePtr local_18;
  
  if (am == (xmlAutomataPtr)0x0) {
    local_18 = (xmlAutomataStatePtr)0x0;
  }
  else {
    local_18 = *(xmlAutomataStatePtr *)(am + 0x18);
  }
  return local_18;
}

