
void _xmlExpFree(xmlExpCtxtPtr ctxt,xmlExpNodePtr expr)

{
  ulong uVar1;
  long local_10;
  
  if ((((expr != (xmlExpNodePtr)0x0) && (expr != (xmlExpNodePtr)_forbiddenExp)) &&
      (expr != (xmlExpNodePtr)_emptyExp)) &&
     (*(int *)(expr + 4) = *(int *)(expr + 4) + -1, *(int *)(expr + 4) == 0)) {
    uVar1 = (long)(ulong)*(ushort *)(expr + 2) % (long)*(int *)(ctxt + 0x10);
    if (*(xmlExpNodePtr *)(*(long *)(ctxt + 8) + (uVar1 & 0xffff) * 8) == expr) {
      *(undefined8 *)(*(long *)(ctxt + 8) + (uVar1 & 0xffff) * 8) = *(undefined8 *)(expr + 0x18);
    }
    else {
      for (local_10 = *(long *)(*(long *)(ctxt + 8) + (uVar1 & 0xffff) * 8); local_10 != 0;
          local_10 = *(long *)(local_10 + 0x18)) {
        if (*(xmlExpNodePtr *)(local_10 + 0x18) == expr) {
          *(undefined8 *)(local_10 + 0x18) = *(undefined8 *)(expr + 0x18);
          break;
        }
      }
    }
    if ((*expr == (xmlExpNode)0x3) || (*expr == (xmlExpNode)0x4)) {
      _xmlExpFree(ctxt,*(xmlExpNodePtr *)(expr + 0x10));
      _xmlExpFree(ctxt,*(xmlExpNodePtr *)(expr + 0x20));
    }
    else if (*expr == (xmlExpNode)0x5) {
      _xmlExpFree(ctxt,*(xmlExpNodePtr *)(expr + 0x10));
    }
    (*(code *)_xmlFree)(expr);
    *(int *)(ctxt + 0x18) = *(int *)(ctxt + 0x18) + -1;
  }
  return;
}

