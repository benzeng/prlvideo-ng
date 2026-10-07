
void _xmlRelaxNGFreeValidCtxt(xmlRelaxNGValidCtxtPtr ctxt)

{
  int local_14;
  xmlRegExecCtxtPtr local_10;
  
  if (ctxt != (xmlRelaxNGValidCtxtPtr)0x0) {
    if (*(long *)(ctxt + 0x68) != 0) {
      FUN_10022e384(0,*(undefined8 *)(ctxt + 0x68));
    }
    if (*(long *)(ctxt + 0x70) != 0) {
      for (local_14 = 0; local_14 < **(int **)(ctxt + 0x70); local_14 = local_14 + 1) {
        FUN_10022eca1(0,*(undefined8 *)(*(long *)(*(long *)(ctxt + 0x70) + 8) + (long)local_14 * 8))
        ;
      }
      FUN_10022e384(0,*(undefined8 *)(ctxt + 0x70));
    }
    if (*(long *)(ctxt + 0x80) != 0) {
      for (local_14 = 0; local_14 < *(int *)(ctxt + 0x78); local_14 = local_14 + 1) {
        FUN_10022e384(0,*(undefined8 *)(*(long *)(ctxt + 0x80) + (long)local_14 * 8));
      }
      (*(code *)_xmlFree)(*(undefined8 *)(ctxt + 0x80));
    }
    if (*(long *)(ctxt + 0x58) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(ctxt + 0x58));
    }
    if (*(long *)(ctxt + 0x98) != 0) {
      local_10 = (xmlRegExecCtxtPtr)FUN_10023c514(ctxt);
      while (local_10 != (xmlRegExecCtxtPtr)0x0) {
        _xmlRegFreeExecCtxt(local_10);
        local_10 = (xmlRegExecCtxtPtr)FUN_10023c514(ctxt);
      }
      (*(code *)_xmlFree)(*(undefined8 *)(ctxt + 0x98));
    }
    (*(code *)_xmlFree)(ctxt);
  }
  return;
}

