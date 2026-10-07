
xmlExpNodePtr _xmlExpStringDerive(xmlExpCtxtPtr ctxt,xmlExpNodePtr expr,xmlChar *str,int len)

{
  xmlChar *pxVar1;
  undefined8 local_40;
  
  if (((expr == (xmlExpNodePtr)0x0) || (ctxt == (xmlExpCtxtPtr)0x0)) || (str == (xmlChar *)0x0)) {
    local_40 = (xmlExpNodePtr)0x0;
  }
  else {
    pxVar1 = _xmlDictExists(*(xmlDictPtr *)ctxt,str,len);
    if (pxVar1 == (xmlChar *)0x0) {
      local_40 = (xmlExpNodePtr)_forbiddenExp;
    }
    else {
      local_40 = (xmlExpNodePtr)FUN_1001e444a(ctxt,expr,pxVar1);
    }
  }
  return local_40;
}

