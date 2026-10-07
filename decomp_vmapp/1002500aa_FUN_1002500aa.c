
void FUN_1002500aa(long param_1,long param_2)

{
  xmlOutputBufferPtr out;
  long lVar1;
  int iVar2;
  xmlNodePtr pxVar3;
  long local_48;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  if (param_2 != 0) {
    out = *(xmlOutputBufferPtr *)(param_1 + 0x28);
    lVar1 = *(long *)(param_2 + 0x28);
    for (local_48 = param_2; local_48 != 0; local_48 = *(long *)(local_48 + 0x30)) {
      if ((*(long *)(local_48 + 0x48) == 0) &&
         (iVar2 = _xmlStrEqual(*(xmlChar **)(local_48 + 0x10),(xmlChar *)"id"), iVar2 != 0)) {
        local_20 = local_48;
      }
      else if ((*(long *)(local_48 + 0x48) == 0) &&
              (iVar2 = _xmlStrEqual(*(xmlChar **)(local_48 + 0x10),(xmlChar *)"name"), iVar2 != 0))
      {
        local_28 = local_48;
      }
      else if ((*(long *)(local_48 + 0x48) == 0) &&
              (iVar2 = _xmlStrEqual(*(xmlChar **)(local_48 + 0x10),(xmlChar *)"lang"), iVar2 != 0))
      {
        local_30 = local_48;
      }
      else if (((*(long *)(local_48 + 0x48) == 0) ||
               (iVar2 = _xmlStrEqual(*(xmlChar **)(local_48 + 0x10),(xmlChar *)"lang"), iVar2 == 0))
              || (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_48 + 0x48) + 0x18),
                                       (xmlChar *)"xml"), iVar2 == 0)) {
        if ((*(long *)(local_48 + 0x48) == 0) &&
           ((((*(long *)(local_48 + 0x18) == 0 ||
              (*(long *)(*(long *)(local_48 + 0x18) + 0x50) == 0)) ||
             (**(char **)(*(long *)(local_48 + 0x18) + 0x50) == '\0')) &&
            (iVar2 = _htmlIsBooleanAttr(*(xmlChar **)(local_48 + 0x10)), iVar2 != 0)))) {
          if (*(long *)(local_48 + 0x18) != 0) {
            _xmlFreeNode(*(xmlNodePtr *)(local_48 + 0x18));
          }
          pxVar3 = _xmlNewText(*(xmlChar **)(local_48 + 0x10));
          *(xmlNodePtr *)(local_48 + 0x18) = pxVar3;
          if (*(long *)(local_48 + 0x18) != 0) {
            *(long *)(*(long *)(local_48 + 0x18) + 0x28) = local_48;
          }
        }
      }
      else {
        local_38 = local_48;
      }
      FUN_10024f155(param_1,local_48);
    }
    if ((((local_28 != 0) && (local_20 == 0)) && ((lVar1 != 0 && (*(long *)(lVar1 + 0x10) != 0))))
       && (((((((iVar2 = _xmlStrEqual(*(xmlChar **)(lVar1 + 0x10),(xmlChar *)"a"), iVar2 != 0 ||
                (iVar2 = _xmlStrEqual(*(xmlChar **)(lVar1 + 0x10),(xmlChar *)"p"), iVar2 != 0)) ||
               (iVar2 = _xmlStrEqual(*(xmlChar **)(lVar1 + 0x10),(xmlChar *)"div"), iVar2 != 0)) ||
              ((iVar2 = _xmlStrEqual(*(xmlChar **)(lVar1 + 0x10),(xmlChar *)"img"), iVar2 != 0 ||
               (iVar2 = _xmlStrEqual(*(xmlChar **)(lVar1 + 0x10),(xmlChar *)"map"), iVar2 != 0))))
             || (iVar2 = _xmlStrEqual(*(xmlChar **)(lVar1 + 0x10),(xmlChar *)"applet"), iVar2 != 0))
            || ((iVar2 = _xmlStrEqual(*(xmlChar **)(lVar1 + 0x10),(xmlChar *)"form"), iVar2 != 0 ||
                (iVar2 = _xmlStrEqual(*(xmlChar **)(lVar1 + 0x10),(xmlChar *)"frame"), iVar2 != 0)))
            ) || (iVar2 = _xmlStrEqual(*(xmlChar **)(lVar1 + 0x10),(xmlChar *)"iframe"), iVar2 != 0)
           ))) {
      _xmlOutputBufferWrite(out,5," id=\"");
      FUN_10024ed37(out,local_28);
      _xmlOutputBufferWrite(out,1,"\"");
    }
    if ((local_30 == 0) || (local_38 != 0)) {
      if ((local_38 != 0) && (local_30 == 0)) {
        _xmlOutputBufferWrite(out,7," lang=\"");
        FUN_10024ed37(out,local_38);
        _xmlOutputBufferWrite(out,1,"\"");
      }
    }
    else {
      _xmlOutputBufferWrite(out,0xb," xml:lang=\"");
      FUN_10024ed37(out,local_30);
      _xmlOutputBufferWrite(out,1,"\"");
    }
    return;
  }
  return;
}

