
void _xmlFreeNode(xmlNodePtr cur)

{
  int iVar1;
  xmlDeregisterNodeFunc *ppxVar2;
  xmlDictPtr local_10;
  
  local_10 = (xmlDictPtr)0x0;
  if (cur == (xmlNodePtr)0x0) {
    return;
  }
  if (cur->type == XML_DTD_NODE) {
    _xmlFreeDtd((xmlDtdPtr)cur);
    return;
  }
  if (cur->type == XML_NAMESPACE_DECL) {
    _xmlFreeNs((xmlNsPtr)cur);
    return;
  }
  if (cur->type != XML_ATTRIBUTE_NODE) {
    if ((___xmlRegisterCallbacks != 0) &&
       (ppxVar2 = ___xmlDeregisterNodeDefaultValue(), *ppxVar2 != (xmlDeregisterNodeFunc)0x0)) {
      ppxVar2 = ___xmlDeregisterNodeDefaultValue();
      (**ppxVar2)(cur);
    }
    if (cur->doc != (_xmlDoc *)0x0) {
      local_10 = cur->doc->dict;
    }
    if ((cur->children != (_xmlNode *)0x0) && (cur->type != XML_ENTITY_REF_NODE)) {
      _xmlFreeNodeList(cur->children);
    }
    if ((((cur->type == XML_ELEMENT_NODE) || (cur->type == XML_XINCLUDE_START)) ||
        (cur->type == XML_XINCLUDE_END)) && (cur->properties != (_xmlAttr *)0x0)) {
      _xmlFreePropList(cur->properties);
    }
    if (((((cur->type != XML_ELEMENT_NODE) && (cur->content != (xmlChar *)0x0)) &&
         ((cur->type != XML_ENTITY_REF_NODE &&
          ((cur->type != XML_XINCLUDE_END && (cur->type != XML_XINCLUDE_START)))))) &&
        ((_xmlAttr **)cur->content != &cur->properties)) &&
       ((cur->content != (xmlChar *)0x0 &&
        ((local_10 == (xmlDictPtr)0x0 || (iVar1 = _xmlDictOwns(local_10,cur->content), iVar1 == 0)))
        ))) {
      (*(code *)_xmlFree)(cur->content);
    }
    if ((((cur->name != (xmlChar *)0x0) && (cur->type != XML_TEXT_NODE)) &&
        (cur->type != XML_COMMENT_NODE)) &&
       ((cur->name != (xmlChar *)0x0 &&
        ((local_10 == (xmlDictPtr)0x0 || (iVar1 = _xmlDictOwns(local_10,cur->name), iVar1 == 0))))))
    {
      (*(code *)_xmlFree)(cur->name);
    }
    if ((((cur->type == XML_ELEMENT_NODE) || (cur->type == XML_XINCLUDE_START)) ||
        (cur->type == XML_XINCLUDE_END)) && (cur->nsDef != (xmlNs *)0x0)) {
      _xmlFreeNsList(cur->nsDef);
    }
    (*(code *)_xmlFree)(cur);
    return;
  }
  _xmlFreeProp((xmlAttrPtr)cur);
  return;
}

