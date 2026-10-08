
xmlAutomataStatePtr
_xmlAutomataNewNegTrans
          (xmlAutomataPtr am,xmlAutomataStatePtr from,xmlAutomataStatePtr to,xmlChar *token,
          xmlChar *token2,void *data)

{
  xmlChar xVar1;
  int iVar2;
  xmlChar *pxVar3;
  long lVar4;
  xmlAutomataStatePtr local_120;
  xmlChar local_e8 [199];
  undefined1 local_21;
  long local_20;
  int local_18;
  int local_14;
  xmlChar *local_10;
  
  if (((am == (xmlAutomataPtr)0x0) || (from == (xmlAutomataStatePtr)0x0)) ||
     (token == (xmlChar *)0x0)) {
    local_120 = (xmlAutomataStatePtr)0x0;
  }
  else {
    local_20 = FUN_10090c33e(am,5);
    if (local_20 == 0) {
      local_120 = (xmlAutomataStatePtr)0x0;
    }
    else {
      *(void **)(local_20 + 0x50) = data;
      *(undefined4 *)(local_20 + 0x28) = 1;
      if ((token2 == (xmlChar *)0x0) || (*token2 == '\0')) {
        pxVar3 = _xmlStrdup(token);
        *(xmlChar **)(local_20 + 0x18) = pxVar3;
      }
      else {
        lVar4 = -1;
        pxVar3 = token2;
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          xVar1 = *pxVar3;
          pxVar3 = pxVar3 + 1;
        } while (xVar1 != '\0');
        local_18 = ~(uint)lVar4 - 1;
        lVar4 = -1;
        pxVar3 = token;
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          xVar1 = *pxVar3;
          pxVar3 = pxVar3 + 1;
        } while (xVar1 != '\0');
        local_14 = ~(uint)lVar4 - 1;
        local_10 = (xmlChar *)(*(code *)_xmlMallocAtomic)((long)(local_14 + local_18 + 2));
        if (local_10 == (xmlChar *)0x0) {
          FUN_10090c3d2(local_20);
          return (xmlAutomataStatePtr)0x0;
        }
        pxVar3 = local_10;
        for (lVar4 = (long)local_14; lVar4 != 0; lVar4 = lVar4 + -1) {
          *pxVar3 = *token;
          token = token + 1;
          pxVar3 = pxVar3 + 1;
        }
        local_10[local_14] = '|';
        pxVar3 = local_10 + local_14;
        for (lVar4 = (long)local_18; pxVar3 = pxVar3 + 1, lVar4 != 0; lVar4 = lVar4 + -1) {
          *pxVar3 = *token2;
          token2 = token2 + 1;
        }
        local_10[(long)(local_14 + local_18) + 1] = '\0';
        *(xmlChar **)(local_20 + 0x18) = local_10;
      }
      _snprintf((char *)local_e8,199,"not %s",*(undefined8 *)(local_20 + 0x18));
      local_21 = 0;
      pxVar3 = _xmlStrdup(local_e8);
      *(xmlChar **)(local_20 + 0x20) = pxVar3;
      iVar2 = FUN_10090e079(am,from,to,local_20);
      if (iVar2 < 0) {
        FUN_10090c3d2(local_20);
        local_120 = (xmlAutomataStatePtr)0x0;
      }
      else {
        *(int *)(am + 0x6c) = *(int *)(am + 0x6c) + 1;
        local_120 = to;
        if (to == (xmlAutomataStatePtr)0x0) {
          local_120 = *(xmlAutomataStatePtr *)(am + 0x28);
        }
      }
    }
  }
  return local_120;
}

