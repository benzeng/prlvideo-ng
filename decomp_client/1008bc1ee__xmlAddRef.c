
xmlRefPtr _xmlAddRef(xmlValidCtxtPtr ctxt,xmlDocPtr doc,xmlChar *value,xmlAttrPtr attr)

{
  int iVar1;
  xmlChar *pxVar2;
  long lVar3;
  xmlRefPtr local_50;
  xmlHashTablePtr local_18;
  xmlListPtr local_10;
  
  if (doc == (xmlDocPtr)0x0) {
    local_50 = (xmlRefPtr)0x0;
  }
  else if (value == (xmlChar *)0x0) {
    local_50 = (xmlRefPtr)0x0;
  }
  else if (attr == (xmlAttrPtr)0x0) {
    local_50 = (xmlRefPtr)0x0;
  }
  else {
    local_18 = doc->refs;
    if (local_18 == (xmlHashTablePtr)0x0) {
      local_18 = _xmlHashCreateDict(0,doc->dict);
      doc->refs = local_18;
    }
    if (local_18 == (xmlHashTablePtr)0x0) {
      FUN_1008b7324(ctxt,"xmlAddRef: Table creation failed!\n");
      local_50 = (xmlRefPtr)0x0;
    }
    else {
      local_50 = (xmlRefPtr)(*(code *)_xmlMalloc)(0x28);
      if (local_50 == (xmlRefPtr)0x0) {
        FUN_1008b7324(ctxt,"malloc failed");
        local_50 = (xmlRefPtr)0x0;
      }
      else {
        pxVar2 = _xmlStrdup(value);
        local_50->value = pxVar2;
        if ((ctxt == (xmlValidCtxtPtr)0x0) || (ctxt->vstateNr == 0)) {
          local_50->name = (xmlChar *)0x0;
          local_50->attr = attr;
        }
        else {
          pxVar2 = _xmlStrdup(attr->name);
          local_50->name = pxVar2;
          local_50->attr = (xmlAttrPtr)0x0;
        }
        lVar3 = _xmlGetLineNo(attr->parent);
        local_50->lineno = (int)lVar3;
        local_10 = _xmlHashLookup(local_18,value);
        if (local_10 == (xmlListPtr)0x0) {
          local_10 = _xmlListCreate(FUN_1008bc0ea,FUN_1008bc1db);
          if (local_10 == (xmlListPtr)0x0) {
            FUN_1008b74a8(0,1,"xmlAddRef: Reference list creation failed!\n",0);
            return (xmlRefPtr)0x0;
          }
          iVar1 = _xmlHashAddEntry(local_18,value,local_10);
          if (iVar1 < 0) {
            _xmlListDelete(local_10);
            FUN_1008b74a8(0,1,"xmlAddRef: Reference list insertion failed!\n",0);
            return (xmlRefPtr)0x0;
          }
        }
        _xmlListAppend(local_10,local_50);
      }
    }
  }
  return local_50;
}

