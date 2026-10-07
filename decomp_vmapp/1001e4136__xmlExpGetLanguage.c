
int _xmlExpGetLanguage(xmlExpCtxtPtr ctxt,xmlExpNodePtr expr,xmlChar **langList,int len)

{
  undefined4 local_28;
  
  if ((((ctxt == (xmlExpCtxtPtr)0x0) || (expr == (xmlExpNodePtr)0x0)) ||
      (langList == (xmlChar **)0x0)) || (len < 1)) {
    local_28 = -1;
  }
  else {
    local_28 = FUN_1001e3fac(ctxt,expr,langList,len,0);
  }
  return local_28;
}

