
void _xmlDumpAttributeTable(xmlBufferPtr buf,xmlAttributeTablePtr table)

{
  if ((buf != (xmlBufferPtr)0x0) && (table != (xmlAttributeTablePtr)0x0)) {
    _xmlHashScan(table,FUN_1008bb398,buf);
  }
  return;
}

