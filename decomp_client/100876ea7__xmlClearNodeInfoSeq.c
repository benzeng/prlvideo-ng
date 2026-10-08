
void _xmlClearNodeInfoSeq(xmlParserNodeInfoSeqPtr seq)

{
  if (seq != (xmlParserNodeInfoSeqPtr)0x0) {
    if (seq->buffer != (xmlParserNodeInfo *)0x0) {
      (*(code *)_xmlFree)(seq->buffer);
    }
    _xmlInitNodeInfoSeq(seq);
  }
  return;
}

