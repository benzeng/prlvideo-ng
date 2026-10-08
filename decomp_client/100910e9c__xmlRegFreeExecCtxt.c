
void _xmlRegFreeExecCtxt(xmlRegExecCtxtPtr exec)

{
  int local_10;
  int local_c;
  
  if (exec != (xmlRegExecCtxtPtr)0x0) {
    if (*(long *)(exec + 0x38) != 0) {
      if (*(long *)(exec + 0x40) != 0) {
        for (local_10 = 0; local_10 < *(int *)(exec + 0x30); local_10 = local_10 + 1) {
          if (*(long *)(*(long *)(exec + 0x38) + (long)local_10 * 0x18 + 0x10) != 0) {
            (*(code *)_xmlFree)(*(undefined8 *)
                                 (*(long *)(exec + 0x38) + (long)local_10 * 0x18 + 0x10));
          }
        }
      }
      (*(code *)_xmlFree)(*(undefined8 *)(exec + 0x38));
    }
    if (*(long *)(exec + 0x40) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(exec + 0x40));
    }
    if (*(long *)(exec + 0x68) != 0) {
      for (local_c = 0; local_c < *(int *)(exec + 0x4c); local_c = local_c + 1) {
        if (*(long *)(*(long *)(exec + 0x68) + (long)local_c * 0x10) != 0) {
          (*(code *)_xmlFree)(*(undefined8 *)(*(long *)(exec + 0x68) + (long)local_c * 0x10));
        }
      }
      (*(code *)_xmlFree)(*(undefined8 *)(exec + 0x68));
    }
    if (*(long *)(exec + 0x80) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(exec + 0x80));
    }
    (*(code *)_xmlFree)(exec);
  }
  return;
}

