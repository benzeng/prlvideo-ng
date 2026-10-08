
void _xmlDumpNotationTable(xmlBufferPtr buf,xmlNotationTablePtr table)

{
  if ((buf != (xmlBufferPtr)0x0) && (table != (xmlNotationTablePtr)0x0)) {
    _xmlHashScan(table,FUN_1008bb836,buf);
  }
  return;
}

