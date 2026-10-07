
void _xmlRelaxNGFreeParserCtxt(xmlRelaxNGParserCtxtPtr ctxt)

{
  int local_c;
  
  if (ctxt != (xmlRelaxNGParserCtxtPtr)0x0) {
    if (*(long *)(ctxt + 0x80) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(ctxt + 0x80));
    }
    if (*(long *)(ctxt + 0xb0) != 0) {
      FUN_10022d7de(*(undefined8 *)(ctxt + 0xb0));
    }
    if (*(long *)(ctxt + 0x68) != 0) {
      _xmlHashFree(*(xmlHashTablePtr *)(ctxt + 0x68),(xmlHashDeallocator)0x0);
    }
    if (*(long *)(ctxt + 0x70) != 0) {
      FUN_10022d858(*(undefined8 *)(ctxt + 0x70));
    }
    if (*(long *)(ctxt + 0x78) != 0) {
      FUN_10022d905(*(undefined8 *)(ctxt + 0x78));
    }
    if (*(long *)(ctxt + 0xc0) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(ctxt + 0xc0));
    }
    if (*(long *)(ctxt + 0xd8) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(ctxt + 0xd8));
    }
    if (*(long *)(ctxt + 0x98) != 0) {
      for (local_c = 0; local_c < *(int *)(ctxt + 0x90); local_c = local_c + 1) {
        FUN_10022def2(*(undefined8 *)(*(long *)(ctxt + 0x98) + (long)local_c * 8));
      }
      (*(code *)_xmlFree)(*(undefined8 *)(ctxt + 0x98));
    }
    if ((*(long *)(ctxt + 0x88) != 0) && (*(int *)(ctxt + 0xfc) != 0)) {
      _xmlFreeDoc(*(xmlDocPtr *)(ctxt + 0x88));
    }
    (*(code *)_xmlFree)(ctxt);
  }
  return;
}

