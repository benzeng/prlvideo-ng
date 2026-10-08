
int _xmlRelaxParserSetFlag(xmlRelaxNGParserCtxtPtr ctxt,int flag)

{
  int local_18;
  uint local_14;
  
  if (ctxt == (xmlRelaxNGParserCtxtPtr)0x0) {
    local_18 = -1;
  }
  else {
    local_14 = flag;
    if ((flag & 1U) != 0) {
      *(uint *)(ctxt + 0xf8) = *(uint *)(ctxt + 0xf8) | 1;
      local_14 = flag - 1;
    }
    if ((local_14 >> 1 & 1) != 0) {
      *(uint *)(ctxt + 0xf8) = *(uint *)(ctxt + 0xf8) | 2;
      local_14 = local_14 - 2;
    }
    if (local_14 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = -1;
    }
  }
  return local_18;
}

