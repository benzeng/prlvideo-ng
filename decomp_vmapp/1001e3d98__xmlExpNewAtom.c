
xmlExpNodePtr _xmlExpNewAtom(xmlExpCtxtPtr ctxt,xmlChar *name,int len)

{
  xmlChar *pxVar1;
  undefined8 local_28;
  
  if ((ctxt == (xmlExpCtxtPtr)0x0) || (name == (xmlChar *)0x0)) {
    local_28 = (xmlExpNodePtr)0x0;
  }
  else {
    pxVar1 = _xmlDictLookup(*(xmlDictPtr *)ctxt,name,len);
    if (pxVar1 == (xmlChar *)0x0) {
      local_28 = (xmlExpNodePtr)0x0;
    }
    else {
      local_28 = (xmlExpNodePtr)FUN_1001e3261(ctxt,2,0,0,pxVar1,0,0);
    }
  }
  return local_28;
}

