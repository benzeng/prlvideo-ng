
void _xmlFreeNsList(xmlNsPtr cur)

{
  _xmlNs *p_Var1;
  xmlNsPtr local_20;
  
  local_20 = cur;
  if (cur != (xmlNsPtr)0x0) {
    while (local_20 != (xmlNsPtr)0x0) {
      p_Var1 = local_20->next;
      _xmlFreeNs(local_20);
      local_20 = p_Var1;
    }
  }
  return;
}

