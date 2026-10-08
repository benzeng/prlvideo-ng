
void _xmlFreePropList(xmlAttrPtr cur)

{
  _xmlAttr *p_Var1;
  xmlAttrPtr local_20;
  
  local_20 = cur;
  if (cur != (xmlAttrPtr)0x0) {
    while (local_20 != (xmlAttrPtr)0x0) {
      p_Var1 = local_20->next;
      _xmlFreeProp(local_20);
      local_20 = p_Var1;
    }
  }
  return;
}

