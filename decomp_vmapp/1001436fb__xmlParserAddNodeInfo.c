
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void _xmlParserAddNodeInfo(xmlParserCtxtPtr ctxt,xmlParserNodeInfoPtr info)

{
  ulong uVar1;
  xmlParserNodeInfo *pxVar2;
  int iVar3;
  ulong uVar4;
  xmlParserNodeInfo *pxVar5;
  xmlParserNodeInfo *local_20;
  ulong local_10;
  
  if ((ctxt != (xmlParserCtxtPtr)0x0) && (info != (xmlParserNodeInfoPtr)0x0)) {
    uVar4 = _xmlParserFindNodeInfoIndex(&ctxt->node_seq,info->node);
    if ((uVar4 < (ctxt->node_seq).length) && ((ctxt->node_seq).buffer[uVar4].node == info->node)) {
      pxVar5 = (ctxt->node_seq).buffer + uVar4;
      pxVar5->node = info->node;
      pxVar5->begin_pos = info->begin_pos;
      pxVar5->begin_line = info->begin_line;
      pxVar5->end_pos = info->end_pos;
      pxVar5->end_line = info->end_line;
    }
    else {
      if ((ctxt->node_seq).maximum < (ctxt->node_seq).length + 1) {
        if ((ctxt->node_seq).maximum == 0) {
          (ctxt->node_seq).maximum = 2;
        }
        uVar1 = (ctxt->node_seq).maximum;
        iVar3 = ((int)(uVar1 << 2) + (int)uVar1) * 0x10;
        if ((ctxt->node_seq).buffer == (xmlParserNodeInfo *)0x0) {
          local_20 = (xmlParserNodeInfo *)(*(code *)_xmlMalloc)(iVar3);
        }
        else {
          local_20 = (xmlParserNodeInfo *)(*(code *)_xmlRealloc)((ctxt->node_seq).buffer,iVar3);
        }
        if (local_20 == (xmlParserNodeInfo *)0x0) {
          _xmlErrMemory(ctxt,"failed to allocate buffer\n");
          return;
        }
        (ctxt->node_seq).buffer = local_20;
        (ctxt->node_seq).maximum = (ctxt->node_seq).maximum * 2;
      }
      if ((ctxt->node_seq).length != uVar4) {
        for (local_10 = (ctxt->node_seq).length; uVar4 < local_10; local_10 = local_10 - 1) {
          pxVar2 = (ctxt->node_seq).buffer;
          pxVar5 = (ctxt->node_seq).buffer + local_10;
          pxVar5->node = pxVar2[local_10 - 1].node;
          pxVar5->begin_pos = pxVar2[local_10 - 1].begin_pos;
          pxVar5->begin_line = pxVar2[local_10 - 1].begin_line;
          pxVar5->end_pos = pxVar2[local_10 - 1].end_pos;
          pxVar5->end_line = pxVar2[local_10 - 1].end_line;
        }
      }
      pxVar5 = (ctxt->node_seq).buffer + uVar4;
      pxVar5->node = info->node;
      pxVar5->begin_pos = info->begin_pos;
      pxVar5->begin_line = info->begin_line;
      pxVar5->end_pos = info->end_pos;
      pxVar5->end_line = info->end_line;
      (ctxt->node_seq).length = (ctxt->node_seq).length + 1;
    }
  }
  return;
}

