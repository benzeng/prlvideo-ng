
xmlRelaxNGValidCtxtPtr _xmlRelaxNGNewValidCtxt(xmlRelaxNGPtr schema)

{
  xmlGenericErrorFunc *ppxVar1;
  void **ppvVar2;
  xmlRelaxNGValidCtxtPtr local_28;
  
  local_28 = (xmlRelaxNGValidCtxtPtr)(*(code *)_xmlMalloc)(0xc0);
  if (local_28 == (xmlRelaxNGValidCtxtPtr)0x0) {
    FUN_10022d41d(0,"building context\n");
    local_28 = (xmlRelaxNGValidCtxtPtr)0x0;
  }
  else {
    _memset(local_28,0,0xc0);
    *(xmlRelaxNGPtr *)(local_28 + 0x28) = schema;
    ppxVar1 = ___xmlGenericError();
    *(xmlGenericErrorFunc *)(local_28 + 8) = *ppxVar1;
    ppvVar2 = ___xmlGenericErrorContext();
    *(void **)local_28 = *ppvVar2;
    *(undefined4 *)(local_28 + 0x50) = 0;
    *(undefined4 *)(local_28 + 0x54) = 0;
    *(undefined8 *)(local_28 + 0x48) = 0;
    *(undefined8 *)(local_28 + 0x58) = 0;
    if (schema != (xmlRelaxNGPtr)0x0) {
      *(undefined4 *)(local_28 + 0x40) = *(undefined4 *)(schema + 0x18);
    }
    *(undefined8 *)(local_28 + 0x68) = 0;
    *(undefined8 *)(local_28 + 0x70) = 0;
    *(undefined8 *)(local_28 + 0x80) = 0;
    *(undefined4 *)(local_28 + 0x44) = 0;
  }
  return local_28;
}

