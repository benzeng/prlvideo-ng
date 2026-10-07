
xmlAutomataStatePtr
_xmlAutomataNewCountTrans2
          (xmlAutomataPtr am,xmlAutomataStatePtr from,xmlAutomataStatePtr to,xmlChar *token,
          xmlChar *token2,int min,int max,void *data)

{
  xmlChar xVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  xmlChar *pxVar5;
  xmlChar *pxVar6;
  long lVar7;
  xmlAutomataStatePtr local_60;
  xmlAutomataStatePtr local_40;
  
  if (((am == (xmlAutomataPtr)0x0) || (from == (xmlAutomataStatePtr)0x0)) ||
     (token == (xmlChar *)0x0)) {
    local_60 = (xmlAutomataStatePtr)0x0;
  }
  else if (min < 0) {
    local_60 = (xmlAutomataStatePtr)0x0;
  }
  else if ((max < min) || (max < 1)) {
    local_60 = (xmlAutomataStatePtr)0x0;
  }
  else {
    lVar4 = FUN_1001d8a16(am,5);
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
          FUN_1001d8aaa(lVar4);
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
      *(void **)(lVar4 + 0x50) = data;
      if (min == 0) {
        *(undefined4 *)(lVar4 + 0xc) = 1;
      }
      else {
        *(int *)(lVar4 + 0xc) = min;
      }
      *(int *)(lVar4 + 0x10) = max;
      iVar3 = FUN_1001d9cfc(am);
      *(int *)(*(long *)(am + 0x60) + (long)iVar3 * 8) = min;
      *(int *)(*(long *)(am + 0x60) + (long)iVar3 * 8 + 4) = max;
      local_40 = to;
      if (to == (xmlAutomataStatePtr)0x0) {
        local_40 = (xmlAutomataStatePtr)FUN_1001d8bb3(am);
        FUN_1001da3f9(am,local_40);
      }
      FUN_1001da12b(am,from,lVar4,local_40,iVar3,0xffffffff,0);
      FUN_1001d9e67(am,lVar4);
      *(xmlAutomataStatePtr *)(am + 0x28) = local_40;
      if (local_40 == (xmlAutomataStatePtr)0x0) {
        local_40 = *(xmlAutomataStatePtr *)(am + 0x28);
      }
      if (local_40 == (xmlAutomataStatePtr)0x0) {
        local_60 = (xmlAutomataStatePtr)0x0;
      }
      else {
        if (min == 0) {
          FUN_1001da607(am,from,local_40);
        }
        local_60 = local_40;
      }
    }
  }
  return local_60;
}

