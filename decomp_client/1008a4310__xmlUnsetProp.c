
int _xmlUnsetProp(xmlNodePtr node,xmlChar *name)

{
  int iVar1;
  xmlNodePtr local_18;
  
  if (((node != (xmlNodePtr)0x0) && (node->type == XML_ELEMENT_NODE)) && (name != (xmlChar *)0x0)) {
    for (local_18 = (xmlNodePtr)node->properties; local_18 != (xmlNodePtr)0x0;
        local_18 = local_18->next) {
      iVar1 = _xmlStrEqual(local_18->name,name);
      if ((iVar1 != 0) && (local_18->ns == (xmlNs *)0x0)) {
        _xmlUnlinkNode(local_18);
        _xmlFreeProp((xmlAttrPtr)local_18);
        return 0;
      }
    }
  }
  return -1;
}

