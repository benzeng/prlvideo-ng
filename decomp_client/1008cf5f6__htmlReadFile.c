
htmlDocPtr _htmlReadFile(char *URL,char *encoding,int options)

{
  long lVar1;
  undefined8 local_38;
  
  lVar1 = _htmlCreateFileParserCtxt(URL,encoding);
  if (lVar1 == 0) {
    local_38 = (htmlDocPtr)0x0;
  }
  else {
    local_38 = (htmlDocPtr)FUN_1008cf47d(lVar1,0,0,options,0);
  }
  return local_38;
}

