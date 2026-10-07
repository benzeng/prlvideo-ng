
void _xmlDumpElementTable(xmlBufferPtr buf,xmlElementTablePtr table)

{
  if ((buf != (xmlBufferPtr)0x0) && (table != (xmlElementTablePtr)0x0)) {
    _xmlHashScan(table,FUN_100186aec,buf);
  }
  return;
}

