
htmlDocPtr _htmlParseDoc(xmlChar *cur,char *encoding)

{
  htmlDocPtr pxVar1;
  
  pxVar1 = _htmlSAXParseDoc(cur,encoding,(htmlSAXHandlerPtr)0x0,(void *)0x0);
  return pxVar1;
}

