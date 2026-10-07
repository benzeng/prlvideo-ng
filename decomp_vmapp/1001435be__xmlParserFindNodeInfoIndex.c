
ulong _xmlParserFindNodeInfoIndex(xmlParserNodeInfoSeqPtr seq,xmlNodePtr node)

{
  bool bVar1;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  bVar1 = false;
  if ((seq == (xmlParserNodeInfoSeqPtr)0x0) || (node == (xmlNodePtr)0x0)) {
    local_40 = 0xffffffffffffffff;
  }
  else {
    local_20 = 1;
    local_28 = seq->length;
    local_18 = 0;
    while ((local_20 <= local_28 && (!bVar1))) {
      local_18 = (local_28 - local_20 >> 1) + local_20;
      if (seq->buffer[local_18 - 1].node == node) {
        bVar1 = true;
      }
      else if (node < seq->buffer[local_18 - 1].node) {
        local_28 = local_18 - 1;
      }
      else {
        local_20 = local_18 + 1;
      }
    }
    if ((local_18 == 0) || (seq->buffer[local_18 - 1].node < node)) {
      local_40 = local_18;
    }
    else {
      local_40 = local_18 - 1;
    }
  }
  return local_40;
}

