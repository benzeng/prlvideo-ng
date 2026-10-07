
int _xmlUnsetNsProp(xmlNodePtr node,xmlNsPtr ns,xmlChar *name)

{
  int iVar1;
  int local_34;
  xmlNodePtr local_18;
  
  if (((node == (xmlNodePtr)0x0) || (node->type != XML_ELEMENT_NODE)) || (name == (xmlChar *)0x0)) {
    local_34 = -1;
  }
  else {
    local_18 = (xmlNodePtr)node->properties;
    if (ns == (xmlNsPtr)0x0) {
      local_34 = _xmlUnsetProp(node,name);
    }
    else if (ns->href == (xmlChar *)0x0) {
      local_34 = -1;
    }
    else {
      for (; local_18 != (xmlNodePtr)0x0; local_18 = local_18->next) {
        iVar1 = _xmlStrEqual(local_18->name,name);
        if (((iVar1 != 0) && (local_18->ns != (xmlNs *)0x0)) &&
           (iVar1 = _xmlStrEqual(local_18->ns->href,ns->href), iVar1 != 0)) {
          _xmlUnlinkNode(local_18);
          _xmlFreeProp((xmlAttrPtr)local_18);
          return 0;
        }
      }
      local_34 = -1;
    }
  }
  return local_34;
}

