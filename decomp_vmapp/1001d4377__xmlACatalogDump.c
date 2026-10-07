
void _xmlACatalogDump(xmlCatalogPtr catal,FILE *out)

{
  if ((out != (FILE *)0x0) && (catal != (xmlCatalogPtr)0x0)) {
    if (*(int *)catal == 1) {
      FUN_1001cfbc2(out,*(undefined8 *)(catal + 0x70));
    }
    else {
      _xmlHashScan(*(xmlHashTablePtr *)(catal + 0x60),FUN_1001cf409,out);
    }
  }
  return;
}

