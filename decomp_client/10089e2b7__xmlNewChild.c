
xmlNodePtr _xmlNewChild(xmlNodePtr parent,xmlNsPtr ns,xmlChar *name,xmlChar *content)

{
  _xmlNode *p_Var1;
  xmlNodePtr local_40;
  xmlNodePtr local_18;
  
  if (parent == (xmlNodePtr)0x0) {
    local_40 = (xmlNodePtr)0x0;
  }
  else if (name == (xmlChar *)0x0) {
    local_40 = (xmlNodePtr)0x0;
  }
  else {
    if (parent->type == XML_ELEMENT_NODE) {
      if (ns == (xmlNsPtr)0x0) {
        local_18 = _xmlNewDocNode(parent->doc,parent->ns,name,content);
      }
      else {
        local_18 = _xmlNewDocNode(parent->doc,ns,name,content);
      }
    }
    else if ((parent->type == XML_DOCUMENT_NODE) || (parent->type == XML_HTML_DOCUMENT_NODE)) {
      if (ns == (xmlNsPtr)0x0) {
        local_18 = _xmlNewDocNode((xmlDocPtr)parent,(xmlNsPtr)0x0,name,content);
      }
      else {
        local_18 = _xmlNewDocNode((xmlDocPtr)parent,ns,name,content);
      }
    }
    else {
      if (parent->type != XML_DOCUMENT_FRAG_NODE) {
        return (xmlNodePtr)0x0;
      }
      local_18 = _xmlNewDocNode(parent->doc,ns,name,content);
    }
    if (local_18 == (xmlNodePtr)0x0) {
      local_40 = (xmlNodePtr)0x0;
    }
    else {
      local_18->type = XML_ELEMENT_NODE;
      local_18->parent = parent;
      local_18->doc = parent->doc;
      if (parent->children == (_xmlNode *)0x0) {
        parent->children = local_18;
        parent->last = local_18;
      }
      else {
        p_Var1 = parent->last;
        p_Var1->next = local_18;
        local_18->prev = p_Var1;
        parent->last = local_18;
      }
      local_40 = local_18;
    }
  }
  return local_40;
}

