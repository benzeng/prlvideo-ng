
xmlAttributePtr _xmlGetDtdAttrDesc(xmlDtdPtr dtd,xmlChar *elem,xmlChar *name)

{
  xmlAttributePtr local_48;
  xmlChar *local_28;
  xmlHashTablePtr local_20;
  xmlAttributePtr local_18;
  xmlChar *local_10;
  
  local_10 = (xmlChar *)0x0;
  local_28 = (xmlChar *)0x0;
  if (dtd == (xmlDtdPtr)0x0) {
    local_48 = (xmlAttributePtr)0x0;
  }
  else if (dtd->attributes == (void *)0x0) {
    local_48 = (xmlAttributePtr)0x0;
  }
  else {
    local_20 = dtd->attributes;
    if (local_20 == (xmlHashTablePtr)0x0) {
      local_48 = (xmlAttributePtr)0x0;
    }
    else {
      local_10 = _xmlSplitQName2(name,&local_28);
      if (local_10 == (xmlChar *)0x0) {
        local_18 = _xmlHashLookup3(local_20,name,(xmlChar *)0x0,elem);
      }
      else {
        local_18 = _xmlHashLookup3(local_20,local_10,local_28,elem);
        if (local_28 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_28);
        }
        if (local_10 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_10);
        }
      }
      local_48 = local_18;
    }
  }
  return local_48;
}

