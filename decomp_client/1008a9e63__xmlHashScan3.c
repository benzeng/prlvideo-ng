
void _xmlHashScan3(xmlHashTablePtr table,xmlChar *name,xmlChar *name2,xmlChar *name3,
                  xmlHashScanner f,void *data)

{
  _xmlHashScanFull3(table,name,name2,name3,(xmlHashScannerFull)f,data);
  return;
}

