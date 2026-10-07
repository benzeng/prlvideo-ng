
xmlAutomataStatePtr
_xmlAutomataNewEpsilon(xmlAutomataPtr am,xmlAutomataStatePtr from,xmlAutomataStatePtr to)

{
  xmlAutomataStatePtr local_28;
  
  if ((am == (xmlAutomataPtr)0x0) || (from == (xmlAutomataStatePtr)0x0)) {
    local_28 = (xmlAutomataStatePtr)0x0;
  }
  else {
    FUN_1001da607(am,from,to);
    local_28 = to;
    if (to == (xmlAutomataStatePtr)0x0) {
      local_28 = *(xmlAutomataStatePtr *)(am + 0x28);
    }
  }
  return local_28;
}

