
xmlNodePtr _xmlDocSetRootElement(xmlDocPtr doc,xmlNodePtr root)

{
  xmlNodePtr local_30;
  xmlNodePtr local_10;
  
  if (doc == (xmlDocPtr)0x0) {
    local_30 = (xmlNodePtr)0x0;
  }
  else if (root == (xmlNodePtr)0x0) {
    local_30 = (xmlNodePtr)0x0;
  }
  else {
    _xmlUnlinkNode(root);
    _xmlSetTreeDoc(root,doc);
    root->parent = (_xmlNode *)doc;
    for (local_10 = doc->children;
        (local_10 != (xmlNodePtr)0x0 && (local_10->type != XML_ELEMENT_NODE));
        local_10 = local_10->next) {
    }
    if (local_10 == (xmlNodePtr)0x0) {
      if (doc->children == (_xmlNode *)0x0) {
        doc->children = root;
        doc->last = root;
      }
      else {
        _xmlAddSibling(doc->children,root);
      }
    }
    else {
      _xmlReplaceNode(local_10,root);
    }
    local_30 = local_10;
  }
  return local_30;
}

