
xmlDocPtr _xmlReadFile(char *URL,char *encoding,int options)

{
  long lVar1;
  undefined8 local_38;
  
  lVar1 = _xmlCreateURLParserCtxt(URL,options);
  if (lVar1 == 0) {
    local_38 = (xmlDocPtr)0x0;
  }
  else {
    local_38 = (xmlDocPtr)FUN_1001650f8(lVar1,0,encoding,options,0);
  }
  return local_38;
}

