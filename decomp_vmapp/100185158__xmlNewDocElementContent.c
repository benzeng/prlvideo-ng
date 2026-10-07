
xmlElementContentPtr
_xmlNewDocElementContent(xmlDocPtr doc,xmlChar *name,xmlElementContentType type)

{
  xmlChar *pxVar1;
  long lVar2;
  xmlElementContentPtr pxVar3;
  xmlElementContentPtr local_48;
  int local_24;
  xmlElementContentPtr local_20;
  _xmlDict *local_18;
  xmlChar *local_10;
  
  local_18 = (_xmlDict *)0x0;
  if (doc != (xmlDocPtr)0x0) {
    local_18 = doc->dict;
  }
  if (type == XML_ELEMENT_CONTENT_ELEMENT) {
    if (name == (xmlChar *)0x0) {
      FUN_100183b80(0,1,"xmlNewElementContent : name == NULL !\n",0);
    }
LAB_1001851fa:
    local_20 = (xmlElementContentPtr)(*(code *)_xmlMalloc)(0x30);
    if (local_20 == (xmlElementContentPtr)0x0) {
      FUN_1001839fc(0,"malloc failed");
      local_48 = (xmlElementContentPtr)0x0;
    }
    else {
      pxVar3 = local_20;
      for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
        pxVar3->type = 0;
        pxVar3->ocur = 0;
        pxVar3 = (xmlElementContentPtr)&pxVar3->name;
      }
      local_20->type = type;
      local_20->ocur = XML_ELEMENT_CONTENT_ONCE;
      if (name != (xmlChar *)0x0) {
        local_10 = _xmlSplitQName3(name,&local_24);
        if (local_10 == (xmlChar *)0x0) {
          if (local_18 == (xmlDictPtr)0x0) {
            pxVar1 = _xmlStrdup(name);
            local_20->name = pxVar1;
          }
          else {
            pxVar1 = _xmlDictLookup(local_18,name,-1);
            local_20->name = pxVar1;
          }
        }
        else if (local_18 == (xmlDictPtr)0x0) {
          pxVar1 = _xmlStrndup(name,local_24);
          local_20->prefix = pxVar1;
          pxVar1 = _xmlStrdup(local_10);
          local_20->name = pxVar1;
        }
        else {
          pxVar1 = _xmlDictLookup(local_18,name,local_24);
          local_20->prefix = pxVar1;
          pxVar1 = _xmlDictLookup(local_18,local_10,-1);
          local_20->name = pxVar1;
        }
      }
      local_48 = local_20;
    }
  }
  else {
    if (type < XML_ELEMENT_CONTENT_SEQ) {
      if (type == XML_ELEMENT_CONTENT_PCDATA) {
LAB_1001851cf:
        if (name != (xmlChar *)0x0) {
          FUN_100183b80(0,1,"xmlNewElementContent : name != NULL !\n",0);
        }
        goto LAB_1001851fa;
      }
    }
    else if (type < (XML_ELEMENT_CONTENT_OR|XML_ELEMENT_CONTENT_PCDATA)) goto LAB_1001851cf;
    FUN_100183b80(0,1,"Internal: ELEMENT content corrupted invalid type\n",0);
    local_48 = (xmlElementContentPtr)0x0;
  }
  return local_48;
}

