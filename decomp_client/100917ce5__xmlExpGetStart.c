
int _xmlExpGetStart(xmlExpCtxtPtr ctxt,xmlExpNodePtr expr,xmlChar **tokList,int len)

{
  undefined4 local_28;
  
  if ((((ctxt == (xmlExpCtxtPtr)0x0) || (expr == (xmlExpNodePtr)0x0)) ||
      (tokList == (xmlChar **)0x0)) || (len < 1)) {
    local_28 = -1;
  }
  else {
    local_28 = FUN_100917abb(ctxt,expr,tokList,len,0);
  }
  return local_28;
}

