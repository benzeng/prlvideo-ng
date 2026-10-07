
void _xmlFreeNodeList(xmlNodePtr cur)

{
  _xmlNode *p_Var1;
  int iVar2;
  xmlDeregisterNodeFunc *ppxVar3;
  xmlNodePtr local_20;
  xmlDictPtr local_10;
  
  local_10 = (xmlDictPtr)0x0;
  if (cur != (xmlNodePtr)0x0) {
    if (cur->type == XML_NAMESPACE_DECL) {
      _xmlFreeNsList((xmlNsPtr)cur);
    }
    else if (((cur->type == XML_DOCUMENT_NODE) || (cur->type == XML_DOCB_DOCUMENT_NODE)) ||
            (cur->type == XML_HTML_DOCUMENT_NODE)) {
      _xmlFreeDoc((xmlDocPtr)cur);
    }
    else {
      p_Var1 = cur;
      if (cur->doc != (_xmlDoc *)0x0) {
        local_10 = cur->doc->dict;
        p_Var1 = cur;
      }
      while (local_20 = p_Var1, local_20 != (xmlNodePtr)0x0) {
        p_Var1 = local_20->next;
        if (local_20->type != XML_DTD_NODE) {
          if ((___xmlRegisterCallbacks != 0) &&
             (ppxVar3 = ___xmlDeregisterNodeDefaultValue(), *ppxVar3 != (xmlDeregisterNodeFunc)0x0))
          {
            ppxVar3 = ___xmlDeregisterNodeDefaultValue();
            (**ppxVar3)(local_20);
          }
          if ((local_20->children != (_xmlNode *)0x0) && (local_20->type != XML_ENTITY_REF_NODE)) {
            _xmlFreeNodeList(local_20->children);
          }
          if ((((local_20->type == XML_ELEMENT_NODE) || (local_20->type == XML_XINCLUDE_START)) ||
              (local_20->type == XML_XINCLUDE_END)) && (local_20->properties != (_xmlAttr *)0x0)) {
            _xmlFreePropList(local_20->properties);
          }
          if ((((local_20->type != XML_ELEMENT_NODE) && (local_20->type != XML_XINCLUDE_START)) &&
              ((local_20->type != XML_XINCLUDE_END &&
               ((local_20->type != XML_ENTITY_REF_NODE &&
                ((_xmlAttr **)local_20->content != &local_20->properties)))))) &&
             ((local_20->content != (xmlChar *)0x0 &&
              ((local_10 == (xmlDictPtr)0x0 ||
               (iVar2 = _xmlDictOwns(local_10,local_20->content), iVar2 == 0)))))) {
            (*(code *)_xmlFree)(local_20->content);
          }
          if ((((local_20->type == XML_ELEMENT_NODE) || (local_20->type == XML_XINCLUDE_START)) ||
              (local_20->type == XML_XINCLUDE_END)) && (local_20->nsDef != (xmlNs *)0x0)) {
            _xmlFreeNsList(local_20->nsDef);
          }
          if ((((local_20->name != (xmlChar *)0x0) && (local_20->type != XML_TEXT_NODE)) &&
              ((local_20->type != XML_COMMENT_NODE && (local_20->name != (xmlChar *)0x0)))) &&
             ((local_10 == (xmlDictPtr)0x0 ||
              (iVar2 = _xmlDictOwns(local_10,local_20->name), iVar2 == 0)))) {
            (*(code *)_xmlFree)(local_20->name);
          }
          (*(code *)_xmlFree)(local_20);
        }
      }
    }
  }
  return;
}

