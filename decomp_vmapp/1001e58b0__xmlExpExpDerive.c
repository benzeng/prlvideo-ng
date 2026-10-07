
xmlExpNodePtr _xmlExpExpDerive(xmlExpCtxtPtr ctxt,xmlExpNodePtr expr,xmlExpNodePtr sub)

{
  int iVar1;
  xmlExpNodePtr local_28;
  
  if (((expr == (xmlExpNodePtr)0x0) || (ctxt == (xmlExpCtxtPtr)0x0)) || (sub == (xmlExpNodePtr)0x0))
  {
    local_28 = (xmlExpNodePtr)0x0;
  }
  else if ((((byte)sub[1] & 1) == 0) || (((byte)expr[1] & 1) != 0)) {
    iVar1 = FUN_1001e4830(expr,sub);
    if (iVar1 == 0) {
      local_28 = (xmlExpNodePtr)_forbiddenExp;
    }
    else {
      local_28 = (xmlExpNodePtr)FUN_1001e4a72(ctxt,expr,sub);
    }
  }
  else {
    local_28 = (xmlExpNodePtr)_forbiddenExp;
  }
  return local_28;
}

