
htmlDocPtr _htmlParseFile(char *filename,char *encoding)

{
  htmlDocPtr pxVar1;
  
  pxVar1 = _htmlSAXParseFile(filename,encoding,(htmlSAXHandlerPtr)0x0,(void *)0x0);
  return pxVar1;
}

