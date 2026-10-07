
int _xmlRelaxNGValidatePopElement(xmlRelaxNGValidCtxtPtr ctxt,xmlDocPtr doc,xmlNodePtr elem)

{
  int iVar1;
  xmlRegExecCtxtPtr exec;
  int local_34;
  int local_14;
  
  if (((ctxt == (xmlRelaxNGValidCtxtPtr)0x0) || (*(long *)(ctxt + 0x88) == 0)) ||
     (elem == (xmlNodePtr)0x0)) {
    local_34 = -1;
  }
  else {
    exec = (xmlRegExecCtxtPtr)FUN_10023c514(ctxt);
    iVar1 = _xmlRegExecPushString(exec,(xmlChar *)0x0,(void *)0x0);
    if (iVar1 == 0) {
      FUN_100230bfa(ctxt,0x16,"",0,0);
      local_14 = -1;
    }
    else if (iVar1 < 0) {
      local_14 = -1;
    }
    else {
      local_14 = 1;
    }
    _xmlRegFreeExecCtxt(exec);
    local_34 = local_14;
  }
  return local_34;
}

