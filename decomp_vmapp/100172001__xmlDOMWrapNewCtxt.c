
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

xmlDOMWrapCtxtPtr _xmlDOMWrapNewCtxt(void)

{
  xmlDOMWrapCtxtPtr local_20;
  
  local_20 = (xmlDOMWrapCtxtPtr)(*(code *)_xmlMalloc)(8);
  if (local_20 == (xmlDOMWrapCtxtPtr)0x0) {
    FUN_1001658b8("allocating DOM-wrapper context");
    local_20 = (xmlDOMWrapCtxtPtr)0x0;
  }
  else {
    local_20->_private = (void *)0x0;
  }
  return local_20;
}

