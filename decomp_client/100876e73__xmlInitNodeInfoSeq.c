
void _xmlInitNodeInfoSeq(xmlParserNodeInfoSeqPtr seq)

{
  if (seq != (xmlParserNodeInfoSeqPtr)0x0) {
    seq->length = 0;
    seq->maximum = 0;
    seq->buffer = (xmlParserNodeInfo *)0x0;
  }
  return;
}

