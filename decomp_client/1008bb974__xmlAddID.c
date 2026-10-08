
xmlIDPtr _xmlAddID(xmlValidCtxtPtr ctxt,xmlDocPtr doc,xmlChar *value,xmlAttrPtr attr)

{
  int iVar1;
  xmlChar *pxVar2;
  long lVar3;
  xmlIDPtr local_40;
  xmlHashTablePtr local_10;
  
  if (doc == (xmlDocPtr)0x0) {
    local_40 = (xmlIDPtr)0x0;
  }
  else if (value == (xmlChar *)0x0) {
    local_40 = (xmlIDPtr)0x0;
  }
  else if (attr == (xmlAttrPtr)0x0) {
    local_40 = (xmlIDPtr)0x0;
  }
  else {
    local_10 = doc->ids;
    if (local_10 == (xmlHashTablePtr)0x0) {
      local_10 = _xmlHashCreateDict(0,doc->dict);
      doc->ids = local_10;
    }
    if (local_10 == (xmlHashTablePtr)0x0) {
      FUN_1008b7324(ctxt,"xmlAddID: Table creation failed!\n");
      local_40 = (xmlIDPtr)0x0;
    }
    else {
      local_40 = (xmlIDPtr)(*(code *)_xmlMalloc)(0x30);
      if (local_40 == (xmlIDPtr)0x0) {
        FUN_1008b7324(ctxt,"malloc failed");
        local_40 = (xmlIDPtr)0x0;
      }
      else {
        pxVar2 = _xmlStrdup(value);
        local_40->value = pxVar2;
        local_40->doc = doc;
        if ((ctxt == (xmlValidCtxtPtr)0x0) || (ctxt->vstateNr == 0)) {
          local_40->attr = attr;
          local_40->name = (xmlChar *)0x0;
        }
        else {
          if (doc->dict == (_xmlDict *)0x0) {
            pxVar2 = _xmlStrdup(attr->name);
            local_40->name = pxVar2;
          }
          else {
            pxVar2 = _xmlDictLookup(doc->dict,attr->name,-1);
            local_40->name = pxVar2;
          }
          local_40->attr = (xmlAttrPtr)0x0;
        }
        lVar3 = _xmlGetLineNo(attr->parent);
        local_40->lineno = (int)lVar3;
        iVar1 = _xmlHashAddEntry(local_10,value,local_40);
        if (iVar1 < 0) {
          if ((ctxt != (xmlValidCtxtPtr)0x0) && (ctxt->error != (xmlValidityErrorFunc)0x0)) {
            FUN_1008b763a(ctxt,attr->parent,0x201,"ID %s already defined\n",value,0,0);
          }
          FUN_1008bb889(local_40);
          local_40 = (xmlIDPtr)0x0;
        }
        else if (attr != (xmlAttrPtr)0x0) {
          attr->atype = XML_ATTRIBUTE_ID;
        }
      }
    }
  }
  return local_40;
}

