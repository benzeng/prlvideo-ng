
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserNodeInfo * _xmlParserFindNodeInfo(xmlParserCtxtPtr ctxt,xmlNodePtr node)

{
  ulong uVar1;
  xmlParserNodeInfo *local_30;
  
  if ((ctxt == (xmlParserCtxtPtr)0x0) || (node == (xmlNodePtr)0x0)) {
    local_30 = (xmlParserNodeInfo *)0x0;
  }
  else {
    uVar1 = _xmlParserFindNodeInfoIndex(&ctxt->node_seq,node);
    if ((uVar1 < (ctxt->node_seq).length) && ((ctxt->node_seq).buffer[uVar1].node == node)) {
      local_30 = (ctxt->node_seq).buffer + uVar1;
    }
    else {
      local_30 = (xmlParserNodeInfo *)0x0;
    }
  }
  return local_30;
}

