
void _xmlFreeCatalog(xmlCatalogPtr catal)

{
  if (catal != (xmlCatalogPtr)0x0) {
    if (*(long *)(catal + 0x70) != 0) {
      FUN_100902b80(*(undefined8 *)(catal + 0x70));
    }
    if (*(long *)(catal + 0x60) != 0) {
      _xmlHashFree(*(xmlHashTablePtr *)(catal + 0x60),FUN_100902a3c);
    }
    (*(code *)_xmlFree)(catal);
  }
  return;
}

