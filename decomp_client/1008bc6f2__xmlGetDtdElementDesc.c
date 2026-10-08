
xmlElementPtr _xmlGetDtdElementDesc(xmlDtdPtr dtd,xmlChar *name)

{
  xmlElementPtr local_40;
  xmlChar *local_38;
  xmlChar *local_28;
  xmlHashTablePtr local_20;
  xmlElementPtr local_18;
  xmlChar *local_10;
  
  local_10 = (xmlChar *)0x0;
  local_28 = (xmlChar *)0x0;
  if ((dtd == (xmlDtdPtr)0x0) || (name == (xmlChar *)0x0)) {
    local_40 = (xmlElementPtr)0x0;
  }
  else if (dtd->elements == (void *)0x0) {
    local_40 = (xmlElementPtr)0x0;
  }
  else {
    local_20 = dtd->elements;
    local_10 = _xmlSplitQName2(name,&local_28);
    local_38 = name;
    if (local_10 != (xmlChar *)0x0) {
      local_38 = local_10;
    }
    local_18 = _xmlHashLookup2(local_20,local_38,local_28);
    if (local_28 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_28);
    }
    if (local_10 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_10);
    }
    local_40 = local_18;
  }
  return local_40;
}

