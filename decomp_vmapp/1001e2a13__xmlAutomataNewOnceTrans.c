
xmlAutomataStatePtr
_xmlAutomataNewOnceTrans
          (xmlAutomataPtr am,xmlAutomataStatePtr from,xmlAutomataStatePtr to,xmlChar *token,int min,
          int max,void *data)

{
  int iVar1;
  long lVar2;
  xmlChar *pxVar3;
  xmlAutomataStatePtr local_48;
  xmlAutomataStatePtr local_30;
  
  if (((am == (xmlAutomataPtr)0x0) || (from == (xmlAutomataStatePtr)0x0)) ||
     (token == (xmlChar *)0x0)) {
    local_48 = (xmlAutomataStatePtr)0x0;
  }
  else if (min < 1) {
    local_48 = (xmlAutomataStatePtr)0x0;
  }
  else if ((max < min) || (max < 1)) {
    local_48 = (xmlAutomataStatePtr)0x0;
  }
  else {
    lVar2 = FUN_1001d8a16(am,5);
    if (lVar2 == 0) {
      local_48 = (xmlAutomataStatePtr)0x0;
    }
    else {
      pxVar3 = _xmlStrdup(token);
      *(xmlChar **)(lVar2 + 0x18) = pxVar3;
      *(void **)(lVar2 + 0x50) = data;
      *(undefined4 *)(lVar2 + 8) = 6;
      if (min == 0) {
        *(undefined4 *)(lVar2 + 0xc) = 1;
      }
      else {
        *(int *)(lVar2 + 0xc) = min;
      }
      *(int *)(lVar2 + 0x10) = max;
      iVar1 = FUN_1001d9cfc(am);
      *(undefined4 *)(*(long *)(am + 0x60) + (long)iVar1 * 8) = 1;
      *(undefined4 *)(*(long *)(am + 0x60) + (long)iVar1 * 8 + 4) = 1;
      local_30 = to;
      if (to == (xmlAutomataStatePtr)0x0) {
        local_30 = (xmlAutomataStatePtr)FUN_1001d8bb3(am);
        FUN_1001da3f9(am,local_30);
      }
      FUN_1001da12b(am,from,lVar2,local_30,iVar1,0xffffffff,0);
      FUN_1001d9e67(am,lVar2);
      *(xmlAutomataStatePtr *)(am + 0x28) = local_30;
      local_48 = local_30;
    }
  }
  return local_48;
}

