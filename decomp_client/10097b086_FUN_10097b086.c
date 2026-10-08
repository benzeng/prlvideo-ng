
xmlNodePtr FUN_10097b086(long param_1,byte *param_2,int param_3)

{
  byte bVar1;
  xmlChar *pxVar2;
  xmlRegisterNodeFunc *ppxVar3;
  long lVar4;
  byte *pbVar5;
  _xmlAttr **pp_Var6;
  xmlNodePtr local_58;
  xmlNodePtr local_30;
  _xmlAttr **local_28;
  int local_c;
  
  local_28 = (_xmlAttr **)0x0;
  if (*(long *)(param_1 + 0x240) == 0) {
    local_30 = (xmlNodePtr)(*(code *)_xmlMalloc)(0x78);
  }
  else {
    local_30 = *(xmlNodePtr *)(param_1 + 0x240);
    *(_xmlNode **)(param_1 + 0x240) = local_30->next;
    *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + -1;
  }
  if (local_30 == (xmlNodePtr)0x0) {
    _xmlErrMemory(param_1,"xmlSAX2Characters");
    local_58 = (xmlNodePtr)0x0;
  }
  else {
    _memset(local_30,0,0x78);
    if (*(int *)(param_1 + 0x238) != 0) {
      bVar1 = param_2[param_3];
      if ((param_3 < 0x10) && (((byte)((uint)*(undefined4 *)(param_1 + 0x234) >> 0x10) & 1) == 1)) {
        local_28 = &local_30->properties;
        pbVar5 = param_2;
        pp_Var6 = local_28;
        for (lVar4 = (long)param_3; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(byte *)pp_Var6 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          pp_Var6 = (_xmlAttr **)((long)pp_Var6 + 1);
        }
        *(undefined1 *)((long)local_28 + (long)param_3) = 0;
      }
      else if ((param_3 < 4) &&
              (((bVar1 == 0x22 || (bVar1 == 0x27)) ||
               ((bVar1 == 0x3c && (param_2[(long)param_3 + 1] != 0x21)))))) {
        local_28 = (_xmlAttr **)_xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),param_2,param_3);
      }
      else if (((*param_2 == 0x20) || (((8 < *param_2 && (*param_2 < 0xb)) || (*param_2 == 0xd))))
              && (((param_3 < 0x3c && (bVar1 == 0x3c)) && (param_2[(long)param_3 + 1] != 0x21)))) {
        for (local_c = 1; local_c < param_3; local_c = local_c + 1) {
          if (((param_2[local_c] != 0x20) && ((param_2[local_c] < 9 || (10 < param_2[local_c])))) &&
             (param_2[local_c] != 0xd)) goto LAB_10097b2c9;
        }
        local_28 = (_xmlAttr **)_xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),param_2,param_3);
      }
    }
LAB_10097b2c9:
    local_30->type = XML_TEXT_NODE;
    local_30->name = "text";
    if (local_28 == (_xmlAttr **)0x0) {
      pxVar2 = _xmlStrndup(param_2,param_3);
      local_30->content = pxVar2;
      if (local_30->content == (xmlChar *)0x0) {
        FUN_1009779d1(param_1,"xmlSAX2TextNode");
        (*(code *)_xmlFree)(local_30);
        return (xmlNodePtr)0x0;
      }
    }
    else {
      local_30->content = (xmlChar *)local_28;
    }
    if ((___xmlRegisterCallbacks != 0) &&
       (ppxVar3 = ___xmlRegisterNodeDefaultValue(), *ppxVar3 != (xmlRegisterNodeFunc)0x0)) {
      ppxVar3 = ___xmlRegisterNodeDefaultValue();
      (**ppxVar3)(local_30);
    }
    local_58 = local_30;
  }
  return local_58;
}

