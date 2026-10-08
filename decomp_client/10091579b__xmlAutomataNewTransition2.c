
xmlAutomataStatePtr
_xmlAutomataNewTransition2
          (xmlAutomataPtr am,xmlAutomataStatePtr from,xmlAutomataStatePtr to,xmlChar *token,
          xmlChar *token2,void *data)

{
  xmlChar xVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  xmlChar *pxVar5;
  xmlChar *pxVar6;
  long lVar7;
  xmlAutomataStatePtr local_60;
  
  if (((am == (xmlAutomataPtr)0x0) || (from == (xmlAutomataStatePtr)0x0)) ||
     (token == (xmlChar *)0x0)) {
    local_60 = (xmlAutomataStatePtr)0x0;
  }
  else {
    lVar4 = FUN_10090c33e(am,5);
    *(void **)(lVar4 + 0x50) = data;
    if (lVar4 == 0) {
      local_60 = (xmlAutomataStatePtr)0x0;
    }
    else {
      if ((token2 == (xmlChar *)0x0) || (*token2 == '\0')) {
        pxVar5 = _xmlStrdup(token);
        *(xmlChar **)(lVar4 + 0x18) = pxVar5;
      }
      else {
        lVar7 = -1;
        pxVar5 = token2;
        do {
          if (lVar7 == 0) break;
          lVar7 = lVar7 + -1;
          xVar1 = *pxVar5;
          pxVar5 = pxVar5 + 1;
        } while (xVar1 != '\0');
        iVar3 = ~(uint)lVar7 - 1;
        lVar7 = -1;
        pxVar5 = token;
        do {
          if (lVar7 == 0) break;
          lVar7 = lVar7 + -1;
          xVar1 = *pxVar5;
          pxVar5 = pxVar5 + 1;
        } while (xVar1 != '\0');
        iVar2 = ~(uint)lVar7 - 1;
        pxVar5 = (xmlChar *)(*(code *)_xmlMallocAtomic)((long)(iVar2 + iVar3 + 2));
        if (pxVar5 == (xmlChar *)0x0) {
          FUN_10090c3d2(lVar4);
          return (xmlAutomataStatePtr)0x0;
        }
        pxVar6 = pxVar5;
        for (lVar7 = (long)iVar2; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pxVar6 = *token;
          token = token + 1;
          pxVar6 = pxVar6 + 1;
        }
        pxVar5[iVar2] = '|';
        pxVar6 = pxVar5 + iVar2;
        for (lVar7 = (long)iVar3; pxVar6 = pxVar6 + 1, lVar7 != 0; lVar7 = lVar7 + -1) {
          *pxVar6 = *token2;
          token2 = token2 + 1;
        }
        pxVar5[(long)(iVar2 + iVar3) + 1] = '\0';
        *(xmlChar **)(lVar4 + 0x18) = pxVar5;
      }
      iVar3 = FUN_10090e079(am,from,to,lVar4);
      if (iVar3 < 0) {
        FUN_10090c3d2(lVar4);
        local_60 = (xmlAutomataStatePtr)0x0;
      }
      else {
        local_60 = to;
        if (to == (xmlAutomataStatePtr)0x0) {
          local_60 = *(xmlAutomataStatePtr *)(am + 0x28);
        }
      }
    }
  }
  return local_60;
}

