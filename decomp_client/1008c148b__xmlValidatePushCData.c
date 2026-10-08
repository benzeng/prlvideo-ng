
int _xmlValidatePushCData(xmlValidCtxtPtr ctxt,xmlChar *data,int len)

{
  xmlValidState *pxVar1;
  int local_44;
  int local_24;
  int local_c;
  
  local_24 = 1;
  if (ctxt == (xmlValidCtxtPtr)0x0) {
    local_44 = 0;
  }
  else if (len < 1) {
    local_44 = 1;
  }
  else {
    if (((0 < ctxt->vstateNr) && (ctxt->vstate != (xmlValidState *)0x0)) &&
       (pxVar1 = ctxt->vstate, *(long *)pxVar1 != 0)) {
      switch(*(undefined4 *)(*(long *)pxVar1 + 0x48)) {
      case 0:
        local_24 = 0;
        break;
      case 1:
        FUN_1008b763a(ctxt,*(long *)(pxVar1 + 8),0x210,
                      "Element %s was declared EMPTY this one has content\n",
                      *(undefined8 *)(*(long *)(pxVar1 + 8) + 0x10),0,0);
        local_24 = 0;
        break;
      case 4:
        if (0 < len) {
          for (local_c = 0; local_c < len; local_c = local_c + 1) {
            if (((data[local_c] != ' ') && ((data[local_c] < 9 || (10 < data[local_c])))) &&
               (data[local_c] != '\r')) {
              FUN_1008b763a(ctxt,*(long *)(pxVar1 + 8),0x1f8,
                            "Element %s content does not follow the DTD, Text not allowed\n",
                            *(undefined8 *)(*(long *)(pxVar1 + 8) + 0x10),0,0);
              local_24 = 0;
              break;
            }
          }
        }
      }
    }
    local_44 = local_24;
  }
  return local_44;
}

