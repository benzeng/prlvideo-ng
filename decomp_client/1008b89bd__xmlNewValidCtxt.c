
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

xmlValidCtxtPtr _xmlNewValidCtxt(void)

{
  xmlValidCtxtPtr local_20;
  
  local_20 = (xmlValidCtxtPtr)(*(code *)_xmlMalloc)(0x70);
  if (local_20 == (xmlValidCtxtPtr)0x0) {
    FUN_1008b7324(0,"malloc failed");
    local_20 = (xmlValidCtxtPtr)0x0;
  }
  else {
    _memset(local_20,0,0x70);
  }
  return local_20;
}

