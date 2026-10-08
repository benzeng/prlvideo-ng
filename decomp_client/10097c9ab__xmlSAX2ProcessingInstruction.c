
void _xmlSAX2ProcessingInstruction(void *ctx,xmlChar *target,xmlChar *data)

{
  xmlNodePtr cur;
  xmlNodePtr elem;
  
  if (ctx != (void *)0x0) {
    elem = _xmlNewDocPI(*(xmlDocPtr *)((long)ctx + 0x10),target,data);
    if (elem != (xmlNodePtr)0x0) {
      cur = *(xmlNodePtr *)((long)ctx + 0x50);
      if ((*(int *)((long)ctx + 0x1b4) != 0) && (*(long *)((long)ctx + 0x38) != 0)) {
        if (*(int *)(*(long *)((long)ctx + 0x38) + 0x34) < 0xffff) {
          elem->line = (ushort)*(undefined4 *)(*(long *)((long)ctx + 0x38) + 0x34);
        }
        else {
          elem->line = 0xffff;
        }
      }
      if (*(int *)((long)ctx + 0x150) == 1) {
        _xmlAddChild(*(xmlNodePtr *)(*(long *)((long)ctx + 0x10) + 0x50),elem);
      }
      else if (*(int *)((long)ctx + 0x150) == 2) {
        _xmlAddChild(*(xmlNodePtr *)(*(long *)((long)ctx + 0x10) + 0x58),elem);
      }
      else if ((*(long *)(*(long *)((long)ctx + 0x10) + 0x18) == 0) || (cur == (xmlNodePtr)0x0)) {
        _xmlAddChild(*(xmlNodePtr *)((long)ctx + 0x10),elem);
      }
      else if (cur->type == XML_ELEMENT_NODE) {
        _xmlAddChild(cur,elem);
      }
      else {
        _xmlAddSibling(cur,elem);
      }
    }
  }
  return;
}

