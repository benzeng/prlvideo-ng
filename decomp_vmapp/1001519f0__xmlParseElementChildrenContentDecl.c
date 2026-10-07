
xmlElementContentPtr _xmlParseElementChildrenContentDecl(long param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  xmlElementContentPtr pxVar3;
  xmlElementContentPtr pxVar4;
  xmlChar *pxVar5;
  xmlElementContentPtr local_40;
  xmlElementContentPtr local_38;
  xmlElementContentPtr local_30;
  char local_15;
  
  local_30 = (xmlElementContentPtr)0x0;
  local_15 = '\0';
  _xmlSkipBlankChars(param_1);
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      0xfa)) {
    FUN_100146394(param_1);
  }
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '(') {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 100);
    _xmlNextChar(param_1);
    _xmlSkipBlankChars(param_1);
    local_38 = (xmlElementContentPtr)_xmlParseElementChildrenContentDecl(param_1,uVar1);
    _xmlSkipBlankChars(param_1);
    if ((*(int *)(param_1 + 0x1c4) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        0xfa)) {
      FUN_100146394(param_1);
    }
  }
  else {
    pxVar5 = (xmlChar *)_xmlParseName(param_1);
    if (pxVar5 == (xmlChar *)0x0) {
      FUN_100143bf8(param_1,0x36,0);
      return (xmlElementContentPtr)0x0;
    }
    local_38 = _xmlNewDocElementContent
                         (*(xmlDocPtr *)(param_1 + 0x10),pxVar5,XML_ELEMENT_CONTENT_ELEMENT);
    if (local_38 == (xmlElementContentPtr)0x0) {
      _xmlErrMemory(param_1,0);
      return (xmlElementContentPtr)0x0;
    }
    if ((*(int *)(param_1 + 0x1c4) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        0xfa)) {
      FUN_100146394(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '?') {
      local_38->ocur = XML_ELEMENT_CONTENT_OPT;
      _xmlNextChar(param_1);
    }
    else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '*') {
      local_38->ocur = XML_ELEMENT_CONTENT_MULT;
      _xmlNextChar(param_1);
    }
    else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '+') {
      local_38->ocur = XML_ELEMENT_CONTENT_PLUS;
      _xmlNextChar(param_1);
    }
    else {
      local_38->ocur = XML_ELEMENT_CONTENT_ONCE;
    }
    if ((*(int *)(param_1 + 0x1c4) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        0xfa)) {
      FUN_100146394(param_1);
    }
  }
  _xmlSkipBlankChars(param_1);
  local_40 = local_38;
  if (((*(int *)(param_1 + 0x1c4) == 0) &&
      (500 < *(long *)(*(long *)(param_1 + 0x38) + 0x20) -
             *(long *)(*(long *)(param_1 + 0x38) + 0x18))) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      500)) {
    FUN_100146347(param_1);
  }
  do {
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ')') {
      if (((local_38 != (xmlElementContentPtr)0x0) && (local_30 != (xmlElementContentPtr)0x0)) &&
         (local_38->c2 = local_30, local_30 != (xmlElementContentPtr)0x0)) {
        local_30->parent = local_38;
      }
      if ((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 100) != param_2))
      {
        FUN_10014446b(param_1,0x5a,
                      "Element content declaration doesn\'t start and stop in the same entity\n",0);
      }
      _xmlNextChar(param_1);
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '?') {
        if (local_40 != (xmlElementContentPtr)0x0) {
          if ((local_40->ocur == XML_ELEMENT_CONTENT_PLUS) ||
             (local_40->ocur == XML_ELEMENT_CONTENT_MULT)) {
            local_40->ocur = XML_ELEMENT_CONTENT_MULT;
          }
          else {
            local_40->ocur = XML_ELEMENT_CONTENT_OPT;
          }
        }
        _xmlNextChar(param_1);
      }
      else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '*') {
        if (local_40 != (xmlElementContentPtr)0x0) {
          local_40->ocur = XML_ELEMENT_CONTENT_MULT;
          for (local_38 = local_40; local_38->type == XML_ELEMENT_CONTENT_OR;
              local_38 = local_38->c2) {
            if ((local_38->c1 != (_xmlElementContent *)0x0) &&
               ((local_38->c1->ocur == XML_ELEMENT_CONTENT_OPT ||
                (local_38->c1->ocur == XML_ELEMENT_CONTENT_MULT)))) {
              local_38->c1->ocur = XML_ELEMENT_CONTENT_ONCE;
            }
            if ((local_38->c2 != (_xmlElementContent *)0x0) &&
               ((local_38->c2->ocur == XML_ELEMENT_CONTENT_OPT ||
                (local_38->c2->ocur == XML_ELEMENT_CONTENT_MULT)))) {
              local_38->c2->ocur = XML_ELEMENT_CONTENT_ONCE;
            }
          }
        }
        _xmlNextChar(param_1);
      }
      else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '+') {
        if (local_40 != (xmlElementContentPtr)0x0) {
          bVar2 = false;
          if ((local_40->ocur == XML_ELEMENT_CONTENT_OPT) ||
             (local_40->ocur == XML_ELEMENT_CONTENT_MULT)) {
            local_40->ocur = XML_ELEMENT_CONTENT_MULT;
          }
          else {
            local_40->ocur = XML_ELEMENT_CONTENT_PLUS;
          }
          for (; local_38->type == XML_ELEMENT_CONTENT_OR; local_38 = local_38->c2) {
            if ((local_38->c1 != (_xmlElementContent *)0x0) &&
               ((local_38->c1->ocur == XML_ELEMENT_CONTENT_OPT ||
                (local_38->c1->ocur == XML_ELEMENT_CONTENT_MULT)))) {
              local_38->c1->ocur = XML_ELEMENT_CONTENT_ONCE;
              bVar2 = true;
            }
            if ((local_38->c2 != (_xmlElementContent *)0x0) &&
               ((local_38->c2->ocur == XML_ELEMENT_CONTENT_OPT ||
                (local_38->c2->ocur == XML_ELEMENT_CONTENT_MULT)))) {
              local_38->c2->ocur = XML_ELEMENT_CONTENT_ONCE;
              bVar2 = true;
            }
          }
          if (bVar2) {
            local_40->ocur = XML_ELEMENT_CONTENT_MULT;
          }
        }
        _xmlNextChar(param_1);
      }
      return local_40;
    }
    pxVar3 = local_40;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ',') {
      if (local_15 == '\0') {
        local_15 = **(char **)(*(long *)(param_1 + 0x38) + 0x20);
      }
      else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != local_15) {
        FUN_1001445a9(param_1,0x42,"xmlParseElementChildrenContentDecl : \'%c\' expected\n",local_15
                     );
        if ((local_30 != (xmlElementContentPtr)0x0) && (local_30 != local_40)) {
          _xmlFreeDocElementContent(*(xmlDocPtr *)(param_1 + 0x10),local_30);
        }
        if (local_40 != (xmlElementContentPtr)0x0) {
          _xmlFreeDocElementContent(*(xmlDocPtr *)(param_1 + 0x10),local_40);
        }
        return (xmlElementContentPtr)0x0;
      }
      _xmlNextChar(param_1);
      pxVar4 = _xmlNewDocElementContent
                         (*(xmlDocPtr *)(param_1 + 0x10),(xmlChar *)0x0,XML_ELEMENT_CONTENT_SEQ);
      if (pxVar4 == (xmlElementContentPtr)0x0) {
        if ((local_30 != (xmlElementContentPtr)0x0) && (local_30 != local_40)) {
          _xmlFreeDocElementContent(*(xmlDocPtr *)(param_1 + 0x10),local_30);
        }
        _xmlFreeDocElementContent(*(xmlDocPtr *)(param_1 + 0x10),local_40);
        return (xmlElementContentPtr)0x0;
      }
      if (local_30 == (xmlElementContentPtr)0x0) {
        pxVar4->c1 = local_40;
        pxVar3 = pxVar4;
        local_38 = pxVar4;
        if (local_40 != (xmlElementContentPtr)0x0) {
          local_40->parent = pxVar4;
        }
      }
      else {
        local_38->c2 = pxVar4;
        if (pxVar4 != (xmlElementContentPtr)0x0) {
          pxVar4->parent = local_38;
        }
        pxVar4->c1 = local_30;
        local_38 = pxVar4;
        if (local_30 != (xmlElementContentPtr)0x0) {
          local_30->parent = pxVar4;
        }
      }
    }
    else {
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '|') {
        FUN_100143bf8(param_1,0x37,0);
        if (local_40 != (xmlElementContentPtr)0x0) {
          _xmlFreeDocElementContent(*(xmlDocPtr *)(param_1 + 0x10),local_40);
        }
        return (xmlElementContentPtr)0x0;
      }
      if (local_15 == '\0') {
        local_15 = **(char **)(*(long *)(param_1 + 0x38) + 0x20);
      }
      else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != local_15) {
        FUN_1001445a9(param_1,0x42,"xmlParseElementChildrenContentDecl : \'%c\' expected\n",local_15
                     );
        if ((local_30 != (xmlElementContentPtr)0x0) && (local_30 != local_40)) {
          _xmlFreeDocElementContent(*(xmlDocPtr *)(param_1 + 0x10),local_30);
        }
        if (local_40 != (xmlElementContentPtr)0x0) {
          _xmlFreeDocElementContent(*(xmlDocPtr *)(param_1 + 0x10),local_40);
        }
        return (xmlElementContentPtr)0x0;
      }
      _xmlNextChar(param_1);
      pxVar4 = _xmlNewDocElementContent
                         (*(xmlDocPtr *)(param_1 + 0x10),(xmlChar *)0x0,XML_ELEMENT_CONTENT_OR);
      if (pxVar4 == (xmlElementContentPtr)0x0) {
        if ((local_30 != (xmlElementContentPtr)0x0) && (local_30 != local_40)) {
          _xmlFreeDocElementContent(*(xmlDocPtr *)(param_1 + 0x10),local_30);
        }
        if (local_40 != (xmlElementContentPtr)0x0) {
          _xmlFreeDocElementContent(*(xmlDocPtr *)(param_1 + 0x10),local_40);
        }
        return (xmlElementContentPtr)0x0;
      }
      if (local_30 == (xmlElementContentPtr)0x0) {
        pxVar4->c1 = local_40;
        pxVar3 = pxVar4;
        local_38 = pxVar4;
        if (local_40 != (xmlElementContentPtr)0x0) {
          local_40->parent = pxVar4;
        }
      }
      else {
        local_38->c2 = pxVar4;
        if (pxVar4 != (xmlElementContentPtr)0x0) {
          pxVar4->parent = local_38;
        }
        pxVar4->c1 = local_30;
        local_38 = pxVar4;
        if (local_30 != (xmlElementContentPtr)0x0) {
          local_30->parent = pxVar4;
        }
      }
    }
    local_40 = pxVar3;
    if ((*(int *)(param_1 + 0x1c4) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        0xfa)) {
      FUN_100146394(param_1);
    }
    _xmlSkipBlankChars(param_1);
    if ((*(int *)(param_1 + 0x1c4) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        0xfa)) {
      FUN_100146394(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '(') {
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 100);
      _xmlNextChar(param_1);
      _xmlSkipBlankChars(param_1);
      local_30 = (xmlElementContentPtr)_xmlParseElementChildrenContentDecl(param_1,uVar1);
      _xmlSkipBlankChars(param_1);
    }
    else {
      pxVar5 = (xmlChar *)_xmlParseName(param_1);
      if (pxVar5 == (xmlChar *)0x0) {
        FUN_100143bf8(param_1,0x36,0);
        if (local_40 != (xmlElementContentPtr)0x0) {
          _xmlFreeDocElementContent(*(xmlDocPtr *)(param_1 + 0x10),local_40);
        }
        return (xmlElementContentPtr)0x0;
      }
      local_30 = _xmlNewDocElementContent
                           (*(xmlDocPtr *)(param_1 + 0x10),pxVar5,XML_ELEMENT_CONTENT_ELEMENT);
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '?') {
        local_30->ocur = XML_ELEMENT_CONTENT_OPT;
        _xmlNextChar(param_1);
      }
      else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '*') {
        local_30->ocur = XML_ELEMENT_CONTENT_MULT;
        _xmlNextChar(param_1);
      }
      else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '+') {
        local_30->ocur = XML_ELEMENT_CONTENT_PLUS;
        _xmlNextChar(param_1);
      }
      else {
        local_30->ocur = XML_ELEMENT_CONTENT_ONCE;
      }
    }
    _xmlSkipBlankChars(param_1);
    if ((*(int *)(param_1 + 0x1c4) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        0xfa)) {
      FUN_100146394(param_1);
    }
  } while( true );
}

