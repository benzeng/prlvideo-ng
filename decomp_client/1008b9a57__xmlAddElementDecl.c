
xmlElementPtr
_xmlAddElementDecl(xmlValidCtxtPtr ctxt,xmlDtdPtr dtd,xmlChar *name,xmlElementTypeVal type,
                  xmlElementContentPtr content)

{
  int iVar1;
  xmlChar *pxVar2;
  xmlElementContentPtr pxVar3;
  xmlChar *local_50;
  xmlNs *local_38;
  _xmlNode *local_30;
  xmlHashTablePtr local_28;
  xmlAttributePtr local_20;
  xmlChar *local_18;
  xmlDictPtr local_10;
  
  local_20 = (xmlAttributePtr)0x0;
  if (dtd == (xmlDtdPtr)0x0) {
    return (xmlElementPtr)0x0;
  }
  if (name == (xmlChar *)0x0) {
    return (xmlElementPtr)0x0;
  }
  if (type == XML_ELEMENT_TYPE_ANY) {
    if (content != (xmlElementContentPtr)0x0) {
      FUN_1008b74a8(ctxt,1,"xmlAddElementDecl: content != NULL for ANY\n",0);
      return (xmlElementPtr)0x0;
    }
  }
  else if (type < XML_ELEMENT_TYPE_MIXED) {
    if (type != XML_ELEMENT_TYPE_EMPTY) {
LAB_1008b9aba:
      FUN_1008b74a8(ctxt,1,"Internal: ELEMENT decl corrupted invalid type\n",0);
      return (xmlElementPtr)0x0;
    }
    if (content != (xmlElementContentPtr)0x0) {
      FUN_1008b74a8(ctxt,1,"xmlAddElementDecl: content != NULL for EMPTY\n",0);
      return (xmlElementPtr)0x0;
    }
  }
  else if (type == XML_ELEMENT_TYPE_MIXED) {
    if (content == (xmlElementContentPtr)0x0) {
      FUN_1008b74a8(ctxt,1,"xmlAddElementDecl: content == NULL for MIXED\n",0);
      return (xmlElementPtr)0x0;
    }
  }
  else {
    if (type != XML_ELEMENT_TYPE_ELEMENT) goto LAB_1008b9aba;
    if (content == (xmlElementContentPtr)0x0) {
      FUN_1008b74a8(ctxt,1,"xmlAddElementDecl: content == NULL for ELEMENT\n",0);
      return (xmlElementPtr)0x0;
    }
  }
  local_18 = _xmlSplitQName2(name,(xmlChar **)&local_38);
  local_50 = name;
  if (local_18 != (xmlChar *)0x0) {
    local_50 = local_18;
  }
  local_28 = dtd->elements;
  if (local_28 == (xmlHashTablePtr)0x0) {
    local_10 = (xmlDictPtr)0x0;
    if (dtd->doc != (_xmlDoc *)0x0) {
      local_10 = dtd->doc->dict;
    }
    local_28 = _xmlHashCreateDict(0,local_10);
    dtd->elements = local_28;
  }
  if (local_28 == (xmlHashTablePtr)0x0) {
    FUN_1008b7324(ctxt,"xmlAddElementDecl: Table creation failed!\n");
    if (local_18 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_18);
    }
    if (local_38 != (xmlNs *)0x0) {
      (*(code *)_xmlFree)(local_38);
    }
    return (xmlElementPtr)0x0;
  }
  if ((((dtd->doc != (_xmlDoc *)0x0) && (dtd->doc->intSubset != (_xmlDtd *)0x0)) &&
      (local_30 = _xmlHashLookup2(dtd->doc->intSubset->elements,local_50,(xmlChar *)local_38),
      local_30 != (void *)0x0)) && (*(int *)((long)local_30 + 0x48) == 0)) {
    local_20 = *(xmlAttributePtr *)((long)local_30 + 0x58);
    *(undefined8 *)((long)local_30 + 0x58) = 0;
    _xmlHashRemoveEntry2
              (dtd->doc->intSubset->elements,local_50,(xmlChar *)local_38,(xmlHashDeallocator)0x0);
    FUN_1008b99b4(local_30);
  }
  local_30 = _xmlHashLookup2(local_28,local_50,(xmlChar *)local_38);
  if (local_30 == (_xmlNode *)0x0) {
    local_30 = (_xmlNode *)(*(code *)_xmlMalloc)(0x70);
    if (local_30 == (_xmlNode *)0x0) {
      FUN_1008b7324(ctxt,"malloc failed");
      if (local_18 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_18);
      }
      if (local_38 != (xmlNs *)0x0) {
        (*(code *)_xmlFree)(local_38);
      }
      return (xmlElementPtr)0x0;
    }
    _memset(local_30,0,0x70);
    local_30->type = XML_ELEMENT_DECL;
    pxVar2 = _xmlStrdup(local_50);
    local_30->name = pxVar2;
    if (local_30->name == (xmlChar *)0x0) {
      FUN_1008b7324(ctxt,"malloc failed");
      if (local_18 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_18);
      }
      if (local_38 != (xmlNs *)0x0) {
        (*(code *)_xmlFree)(local_38);
      }
      (*(code *)_xmlFree)(local_30);
      return (xmlElementPtr)0x0;
    }
    local_30->nsDef = local_38;
    iVar1 = _xmlHashAddEntry2(local_28,local_50,(xmlChar *)local_38,local_30);
    if (iVar1 != 0) {
      FUN_1008b763a(ctxt,dtd,0x1fd,"Redefinition of element %s\n",local_50,0,0);
      FUN_1008b99b4(local_30);
      if (local_18 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_18);
      }
      return (xmlElementPtr)0x0;
    }
    local_30->properties = (_xmlAttr *)local_20;
  }
  else {
    if (*(xmlElementTypeVal *)&local_30->ns != XML_ELEMENT_TYPE_UNDEFINED) {
      FUN_1008b763a(ctxt,dtd,0x1fd,"Redefinition of element %s\n",local_50,0,0);
      if (local_18 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_18);
      }
      if (local_38 != (xmlNs *)0x0) {
        (*(code *)_xmlFree)(local_38);
      }
      return (xmlElementPtr)0x0;
    }
    if (local_38 != (xmlNs *)0x0) {
      (*(code *)_xmlFree)(local_38);
      local_38 = (xmlNs *)0x0;
    }
  }
  *(xmlElementTypeVal *)&local_30->ns = type;
  if ((ctxt == (xmlValidCtxtPtr)0x0) ||
     ((ctxt->finishDtd != 0xabcd1234 && (ctxt->finishDtd != 0xabcd1235)))) {
    pxVar3 = _xmlCopyDocElementContent(dtd->doc,content);
    local_30->content = (xmlChar *)pxVar3;
  }
  else {
    local_30->content = (xmlChar *)content;
    if (content != (xmlElementContentPtr)0x0) {
      content->parent = (_xmlElementContent *)0x1;
    }
  }
  local_30->parent = (_xmlNode *)dtd;
  local_30->doc = dtd->doc;
  if (dtd->last == (_xmlNode *)0x0) {
    dtd->last = local_30;
    dtd->children = dtd->last;
  }
  else {
    dtd->last->next = local_30;
    local_30->prev = dtd->last;
    dtd->last = local_30;
  }
  if (local_18 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_18);
  }
  return (xmlElementPtr)local_30;
}

