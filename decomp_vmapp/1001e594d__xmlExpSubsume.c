
int _xmlExpSubsume(xmlExpCtxtPtr ctxt,xmlExpNodePtr expr,xmlExpNodePtr sub)

{
  int iVar1;
  xmlExpNodePtr expr_00;
  int local_34;
  
  if (((expr == (xmlExpNodePtr)0x0) || (ctxt == (xmlExpCtxtPtr)0x0)) || (sub == (xmlExpNodePtr)0x0))
  {
    local_34 = -1;
  }
  else if ((((byte)sub[1] & 1) == 0) || (((byte)expr[1] & 1) != 0)) {
    iVar1 = FUN_1001e4830(expr,sub);
    if (iVar1 == 0) {
      local_34 = 0;
    }
    else {
      expr_00 = (xmlExpNodePtr)FUN_1001e4a72(ctxt,expr,sub);
      if (expr_00 == (xmlExpNodePtr)0x0) {
        local_34 = -1;
      }
      else if (expr_00 == (xmlExpNodePtr)_forbiddenExp) {
        local_34 = 0;
      }
      else if (expr_00 == (xmlExpNodePtr)_emptyExp) {
        local_34 = 1;
      }
      else if ((expr_00 == (xmlExpNodePtr)0x0) || (((byte)expr_00[1] & 1) == 0)) {
        _xmlExpFree(ctxt,expr_00);
        local_34 = 0;
      }
      else {
        _xmlExpFree(ctxt,expr_00);
        local_34 = 1;
      }
    }
  }
  else {
    local_34 = 0;
  }
  return local_34;
}

