
xmlAutomataStatePtr
_xmlAutomataNewTransition
          (xmlAutomataPtr am,xmlAutomataStatePtr from,xmlAutomataStatePtr to,xmlChar *token,
          void *data)

{
  int iVar1;
  long lVar2;
  xmlChar *pxVar3;
  xmlAutomataStatePtr local_48;
  
  if (((am == (xmlAutomataPtr)0x0) || (from == (xmlAutomataStatePtr)0x0)) ||
     (token == (xmlChar *)0x0)) {
    local_48 = (xmlAutomataStatePtr)0x0;
  }
  else {
    lVar2 = FUN_1001d8a16(am,5);
    if (lVar2 == 0) {
      local_48 = (xmlAutomataStatePtr)0x0;
    }
    else {
      *(void **)(lVar2 + 0x50) = data;
      if (lVar2 == 0) {
        local_48 = (xmlAutomataStatePtr)0x0;
      }
      else {
        pxVar3 = _xmlStrdup(token);
        *(xmlChar **)(lVar2 + 0x18) = pxVar3;
        iVar1 = FUN_1001da751(am,from,to,lVar2);
        if (iVar1 < 0) {
          FUN_1001d8aaa(lVar2);
          local_48 = (xmlAutomataStatePtr)0x0;
        }
        else {
          local_48 = to;
          if (to == (xmlAutomataStatePtr)0x0) {
            local_48 = *(xmlAutomataStatePtr *)(am + 0x28);
          }
        }
      }
    }
  }
  return local_48;
}

