
int _xmlRelaxNGValidatePushCData(xmlRelaxNGValidCtxtPtr ctxt,xmlChar *data,int len)

{
  int iVar1;
  int local_30;
  byte *local_28;
  
  if (((ctxt == (xmlRelaxNGValidCtxtPtr)0x0) || (*(long *)(ctxt + 0x88) == 0)) ||
     (local_28 = data, data == (xmlChar *)0x0)) {
    local_30 = -1;
  }
  else {
    for (; (*local_28 != 0 &&
           (((*local_28 == 0x20 || ((8 < *local_28 && (*local_28 < 0xb)))) || (*local_28 == 0xd))));
        local_28 = local_28 + 1) {
    }
    if (*local_28 == 0) {
      local_30 = 1;
    }
    else {
      iVar1 = _xmlRegExecPushString(*(xmlRegExecCtxtPtr *)(ctxt + 0x88),(xmlChar *)"#text",ctxt);
      if (iVar1 < 0) {
        FUN_100964522(ctxt,0x27," TODO ",0,0);
        local_30 = -1;
      }
      else {
        local_30 = 1;
      }
    }
  }
  return local_30;
}

