
xmlAutomataStatePtr
_xmlAutomataNewCountedTrans
          (xmlAutomataPtr am,xmlAutomataStatePtr from,xmlAutomataStatePtr to,int counter)

{
  xmlAutomataStatePtr local_30;
  
  if (((am == (xmlAutomataPtr)0x0) || (from == (xmlAutomataStatePtr)0x0)) || (counter < 0)) {
    local_30 = (xmlAutomataStatePtr)0x0;
  }
  else {
    FUN_1001da673(am,from,to,counter);
    local_30 = to;
    if (to == (xmlAutomataStatePtr)0x0) {
      local_30 = *(xmlAutomataStatePtr *)(am + 0x28);
    }
  }
  return local_30;
}

