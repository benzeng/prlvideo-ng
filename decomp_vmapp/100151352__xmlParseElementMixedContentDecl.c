
xmlElementContentPtr _xmlParseElementMixedContentDecl(long param_1,int param_2)

{
  int iVar1;
  xmlElementContentPtr pxVar2;
  xmlElementContentPtr pxVar3;
  xmlElementContentPtr local_28;
  xmlElementContentPtr local_20;
  xmlChar *local_10;
  
  local_28 = (xmlElementContentPtr)0x0;
  local_20 = (xmlElementContentPtr)0x0;
  local_10 = (xmlChar *)0x0;
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      0xfa)) {
    FUN_100146394(param_1);
  }
  if (((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '#') &&
        (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'P')) &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'C')) &&
      ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'D' &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'A')))) &&
     ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'T' &&
      (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6) == 'A')))) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 7;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 7;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 7;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
       (iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar1 < 1)) {
      _xmlPopInput(param_1);
    }
    _xmlSkipBlankChars(param_1);
    if (((*(int *)(param_1 + 0x1c4) == 0) &&
        (500 < *(long *)(*(long *)(param_1 + 0x38) + 0x20) -
               *(long *)(*(long *)(param_1 + 0x38) + 0x18))) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        500)) {
      FUN_100146347(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ')') {
      if ((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 100) != param_2))
      {
        FUN_10014446b(param_1,0x5a,
                      "Element content declaration doesn\'t start and stop in the same entity\n",0);
      }
      _xmlNextChar(param_1);
      pxVar2 = _xmlNewDocElementContent
                         (*(xmlDocPtr *)(param_1 + 0x10),(xmlChar *)0x0,XML_ELEMENT_CONTENT_PCDATA);
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '*') {
        return pxVar2;
      }
      pxVar2->ocur = XML_ELEMENT_CONTENT_MULT;
      _xmlNextChar(param_1);
      return pxVar2;
    }
    if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '(') ||
        (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '|')) &&
       (local_28 = _xmlNewDocElementContent
                             (*(xmlDocPtr *)(param_1 + 0x10),(xmlChar *)0x0,
                              XML_ELEMENT_CONTENT_PCDATA), local_20 = local_28,
       local_28 == (xmlElementContentPtr)0x0)) {
      return (xmlElementContentPtr)0x0;
    }
    while (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '|') {
      _xmlNextChar(param_1);
      if (local_10 == (xmlChar *)0x0) {
        local_28 = _xmlNewDocElementContent
                             (*(xmlDocPtr *)(param_1 + 0x10),(xmlChar *)0x0,XML_ELEMENT_CONTENT_OR);
        if (local_28 == (xmlElementContentPtr)0x0) {
          return (xmlElementContentPtr)0x0;
        }
        local_28->c1 = local_20;
        pxVar2 = local_28;
        if (local_20 != (xmlElementContentPtr)0x0) {
          local_20->parent = local_28;
          pxVar2 = local_28;
        }
      }
      else {
        pxVar2 = _xmlNewDocElementContent
                           (*(xmlDocPtr *)(param_1 + 0x10),(xmlChar *)0x0,XML_ELEMENT_CONTENT_OR);
        if (pxVar2 == (xmlElementContentPtr)0x0) {
          return (xmlElementContentPtr)0x0;
        }
        pxVar3 = _xmlNewDocElementContent
                           (*(xmlDocPtr *)(param_1 + 0x10),local_10,XML_ELEMENT_CONTENT_ELEMENT);
        pxVar2->c1 = pxVar3;
        if (pxVar2->c1 != (_xmlElementContent *)0x0) {
          pxVar2->c1->parent = pxVar2;
        }
        local_20->c2 = pxVar2;
        if (pxVar2 != (xmlElementContentPtr)0x0) {
          pxVar2->parent = local_20;
        }
      }
      local_20 = pxVar2;
      _xmlSkipBlankChars(param_1);
      local_10 = (xmlChar *)_xmlParseName(param_1);
      if (local_10 == (xmlChar *)0x0) {
        FUN_100144217(param_1,0x44,"xmlParseElementMixedContentDecl : Name expected\n");
        _xmlFreeDocElementContent(*(xmlDocPtr *)(param_1 + 0x10),local_20);
        return (xmlElementContentPtr)0x0;
      }
      _xmlSkipBlankChars(param_1);
      if ((*(int *)(param_1 + 0x1c4) == 0) &&
         (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20)
          < 0xfa)) {
        FUN_100146394(param_1);
      }
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ')') ||
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) != '*')) {
      _xmlFreeDocElementContent(*(xmlDocPtr *)(param_1 + 0x10),local_28);
      FUN_100143bf8(param_1,0x34,0);
      return (xmlElementContentPtr)0x0;
    }
    if (local_10 != (xmlChar *)0x0) {
      pxVar2 = _xmlNewDocElementContent
                         (*(xmlDocPtr *)(param_1 + 0x10),local_10,XML_ELEMENT_CONTENT_ELEMENT);
      local_20->c2 = pxVar2;
      if (local_20->c2 != (_xmlElementContent *)0x0) {
        local_20->c2->parent = local_20;
      }
    }
    local_28->ocur = XML_ELEMENT_CONTENT_MULT;
    if ((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 100) != param_2)) {
      FUN_10014446b(param_1,0x5a,
                    "Element content declaration doesn\'t start and stop in the same entity\n",0);
    }
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 2;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 2;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
       (iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar1 < 1)) {
      _xmlPopInput(param_1);
    }
  }
  else {
    FUN_100143bf8(param_1,0x45,0);
  }
  return local_28;
}

