
xmlAutomataStatePtr
_xmlAutomataNewAllTrans(xmlAutomataPtr am,xmlAutomataStatePtr from,xmlAutomataStatePtr to,int lax)

{
  xmlAutomataStatePtr local_30;
  
  if ((am == (xmlAutomataPtr)0x0) || (from == (xmlAutomataStatePtr)0x0)) {
    local_30 = (xmlAutomataStatePtr)0x0;
  }
  else {
    FUN_1001da567(am,from,to,lax);
    local_30 = to;
    if (to == (xmlAutomataStatePtr)0x0) {
      local_30 = *(xmlAutomataStatePtr *)(am + 0x28);
    }
  }
  return local_30;
}

