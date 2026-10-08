
/* WARNING: Enum "enum_2039": Some values do not have unique names */

void FUN_1008c9e09(long param_1,xmlChar *param_2)

{
  long lVar1;
  long lVar2;
  xmlCharEncoding xVar3;
  int iVar4;
  xmlChar *pxVar5;
  xmlCharEncodingHandlerPtr pxVar6;
  xmlChar *local_38;
  
  if (((param_1 != 0) && (param_2 != (xmlChar *)0x0)) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x50) == 0)) {
    local_38 = _xmlStrcasestr(param_2,(xmlChar *)"charset=");
    if (local_38 == (xmlChar *)0x0) {
      local_38 = _xmlStrcasestr(param_2,(xmlChar *)"charset =");
      if (local_38 != (xmlChar *)0x0) {
        local_38 = local_38 + 9;
      }
    }
    else {
      local_38 = local_38 + 8;
    }
    if (local_38 != (xmlChar *)0x0) {
      for (; (*local_38 == ' ' || (*local_38 == '\t')); local_38 = local_38 + 1) {
      }
      if (*(long *)(*(long *)(param_1 + 0x38) + 0x50) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x50));
      }
      lVar1 = *(long *)(param_1 + 0x38);
      pxVar5 = _xmlStrdup(local_38);
      *(xmlChar **)(lVar1 + 0x50) = pxVar5;
      xVar3 = _xmlParseCharEncoding((char *)local_38);
      if (xVar3 == ~XML_CHAR_ENCODING_ERROR) {
        pxVar6 = _xmlFindCharEncodingHandler((char *)local_38);
        if (pxVar6 == (xmlCharEncodingHandlerPtr)0x0) {
          *(undefined4 *)(param_1 + 0x88) = 0x20;
        }
        else {
          _xmlSwitchToEncoding(param_1,pxVar6);
          *(undefined4 *)(param_1 + 0x198) = 1;
        }
      }
      else {
        _xmlSwitchEncoding(param_1,xVar3);
        *(undefined4 *)(param_1 + 0x198) = 1;
      }
      if (((**(long **)(param_1 + 0x38) != 0) &&
          (*(long *)(**(long **)(param_1 + 0x38) + 0x18) != 0)) &&
         ((*(long *)(**(long **)(param_1 + 0x38) + 0x28) != 0 &&
          (*(long *)(**(long **)(param_1 + 0x38) + 0x20) != 0)))) {
        _xmlBufferShrink(*(xmlBufferPtr *)(**(long **)(param_1 + 0x38) + 0x20),
                         (int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20) -
                         (int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18));
        iVar4 = _xmlCharEncInFunc(*(xmlCharEncodingHandler **)(**(long **)(param_1 + 0x38) + 0x18),
                                  *(xmlBufferPtr *)(**(long **)(param_1 + 0x38) + 0x20),
                                  *(xmlBufferPtr *)(**(long **)(param_1 + 0x38) + 0x28));
        if (iVar4 < 0) {
          FUN_1008c3ec0(param_1,0x51,"htmlCheckEncoding: encoder error\n",0,0);
        }
        lVar1 = *(long *)(param_1 + 0x38);
        lVar2 = *(long *)(param_1 + 0x38);
        *(undefined8 *)(lVar2 + 0x20) = **(undefined8 **)(**(long **)(param_1 + 0x38) + 0x20);
        *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x20);
      }
    }
  }
  return;
}

