
void _htmlNodeDumpFormatOutput
               (xmlOutputBufferPtr buf,xmlDocPtr doc,xmlNodePtr cur,char *encoding,int format)

{
  int iVar1;
  xmlChar *str;
  htmlElemDesc *local_18;
  
  _xmlInitParser();
  if (cur == (xmlNodePtr)0x0) {
    return;
  }
  if (buf == (xmlOutputBufferPtr)0x0) {
    return;
  }
  if (cur->type == XML_DTD_NODE) {
    return;
  }
  if ((cur->type == XML_HTML_DOCUMENT_NODE) || (cur->type == XML_DOCUMENT_NODE)) {
    _htmlDocContentDumpOutput(buf,(xmlDocPtr)cur,encoding);
    return;
  }
  if (cur->type == XML_TEXT_NODE) {
    if (cur->content == (xmlChar *)0x0) {
      return;
    }
    if (((cur->name == "text") || (cur->name != (xmlChar *)"textnoenc")) &&
       ((cur->parent == (_xmlNode *)0x0 ||
        ((iVar1 = _xmlStrcasecmp(cur->parent->name,(xmlChar *)"script"), iVar1 != 0 &&
         (iVar1 = _xmlStrcasecmp(cur->parent->name,(xmlChar *)"style"), iVar1 != 0)))))) {
      str = _xmlEncodeEntitiesReentrant(doc,cur->content);
      if (str == (xmlChar *)0x0) {
        return;
      }
      _xmlOutputBufferWriteString(buf,(char *)str);
      (*(code *)_xmlFree)(str);
      return;
    }
    _xmlOutputBufferWriteString(buf,(char *)cur->content);
    return;
  }
  if (cur->type == XML_COMMENT_NODE) {
    if (cur->content == (xmlChar *)0x0) {
      return;
    }
    _xmlOutputBufferWriteString(buf,"<!--");
    _xmlOutputBufferWriteString(buf,(char *)cur->content);
    _xmlOutputBufferWriteString(buf,"-->");
    return;
  }
  if (cur->type == XML_PI_NODE) {
    if (cur->name == (xmlChar *)0x0) {
      return;
    }
    _xmlOutputBufferWriteString(buf,"<?");
    _xmlOutputBufferWriteString(buf,(char *)cur->name);
    if (cur->content != (xmlChar *)0x0) {
      _xmlOutputBufferWriteString(buf," ");
      _xmlOutputBufferWriteString(buf,(char *)cur->content);
    }
    _xmlOutputBufferWriteString(buf,">");
    return;
  }
  if (cur->type == XML_ENTITY_REF_NODE) {
    _xmlOutputBufferWriteString(buf,"&");
    _xmlOutputBufferWriteString(buf,(char *)cur->name);
    _xmlOutputBufferWriteString(buf,";");
    return;
  }
  if (cur->type == XML_CDATA_SECTION_NODE) {
    if (cur->content == (xmlChar *)0x0) {
      return;
    }
    _xmlOutputBufferWriteString(buf,(char *)cur->content);
    return;
  }
  if (cur->ns == (xmlNs *)0x0) {
    local_18 = _htmlTagLookup(cur->name);
  }
  else {
    local_18 = (htmlElemDesc *)0x0;
  }
  _xmlOutputBufferWriteString(buf,"<");
  if ((cur->ns != (xmlNs *)0x0) && (cur->ns->prefix != (xmlChar *)0x0)) {
    _xmlOutputBufferWriteString(buf,(char *)cur->ns->prefix);
    _xmlOutputBufferWriteString(buf,":");
  }
  _xmlOutputBufferWriteString(buf,(char *)cur->name);
  if (cur->nsDef != (xmlNs *)0x0) {
    _xmlNsListDumpOutput(buf,cur->nsDef);
  }
  if (cur->properties != (_xmlAttr *)0x0) {
    FUN_10019d3de(buf,doc,cur->properties,encoding);
  }
  if ((local_18 == (htmlElemDesc *)0x0) || (local_18->empty == '\0')) {
    if (((cur->type == XML_ELEMENT_NODE) || (cur->content == (xmlChar *)0x0)) &&
       (cur->children == (_xmlNode *)0x0)) {
      if ((((local_18 == (htmlElemDesc *)0x0) || (local_18->saveEndTag == '\0')) ||
          (iVar1 = _xmlStrcmp((xmlChar *)local_18->name,(xmlChar *)"html"), iVar1 == 0)) ||
         (iVar1 = _xmlStrcmp((xmlChar *)local_18->name,(xmlChar *)"body"), iVar1 == 0)) {
        _xmlOutputBufferWriteString(buf,"></");
        if ((cur->ns != (xmlNs *)0x0) && (cur->ns->prefix != (xmlChar *)0x0)) {
          _xmlOutputBufferWriteString(buf,(char *)cur->ns->prefix);
          _xmlOutputBufferWriteString(buf,":");
        }
        _xmlOutputBufferWriteString(buf,(char *)cur->name);
        _xmlOutputBufferWriteString(buf,">");
      }
      else {
        _xmlOutputBufferWriteString(buf,">");
      }
      if ((((format != 0) && (cur->next != (_xmlNode *)0x0)) &&
          ((local_18 != (htmlElemDesc *)0x0 &&
           ((((local_18->isinline == '\0' && (cur->next->type != XML_TEXT_NODE)) &&
             (cur->next->type != XML_ENTITY_REF_NODE)) &&
            ((cur->parent != (_xmlNode *)0x0 && (cur->parent->name != (xmlChar *)0x0)))))))) &&
         (*cur->parent->name != 'p')) {
        _xmlOutputBufferWriteString(buf,"\n");
      }
      return;
    }
    _xmlOutputBufferWriteString(buf,">");
    if ((cur->type != XML_ELEMENT_NODE) && (cur->content != (xmlChar *)0x0)) {
      _xmlOutputBufferWriteString(buf,(char *)cur->content);
    }
    if (cur->children != (_xmlNode *)0x0) {
      if (((format != 0) && (local_18 != (htmlElemDesc *)0x0)) &&
         ((local_18->isinline == '\0' &&
          ((((cur->children->type != XML_TEXT_NODE && (cur->children->type != XML_ENTITY_REF_NODE))
            && (cur->children != cur->last)) &&
           ((cur->name != (xmlChar *)0x0 && (*cur->name != 'p')))))))) {
        _xmlOutputBufferWriteString(buf,"\n");
      }
      FUN_10019d429(buf,doc,cur->children,encoding,format);
      if ((((format != 0) && (local_18 != (htmlElemDesc *)0x0)) &&
          ((local_18->isinline == '\0' &&
           (((cur->last->type != XML_TEXT_NODE && (cur->last->type != XML_ENTITY_REF_NODE)) &&
            (cur->children != cur->last)))))) &&
         ((cur->name != (xmlChar *)0x0 && (*cur->name != 'p')))) {
        _xmlOutputBufferWriteString(buf,"\n");
      }
    }
    _xmlOutputBufferWriteString(buf,"</");
    if ((cur->ns != (xmlNs *)0x0) && (cur->ns->prefix != (xmlChar *)0x0)) {
      _xmlOutputBufferWriteString(buf,(char *)cur->ns->prefix);
      _xmlOutputBufferWriteString(buf,":");
    }
    _xmlOutputBufferWriteString(buf,(char *)cur->name);
    _xmlOutputBufferWriteString(buf,">");
    if (format == 0) {
      return;
    }
    if (local_18 == (htmlElemDesc *)0x0) {
      return;
    }
    if (local_18->isinline != '\0') {
      return;
    }
    if (cur->next == (_xmlNode *)0x0) {
      return;
    }
    if (cur->next->type == XML_TEXT_NODE) {
      return;
    }
    if (cur->next->type == XML_ENTITY_REF_NODE) {
      return;
    }
    if (cur->parent == (_xmlNode *)0x0) {
      return;
    }
    if (cur->parent->name == (xmlChar *)0x0) {
      return;
    }
    if (*cur->parent->name == 'p') {
      return;
    }
    _xmlOutputBufferWriteString(buf,"\n");
    return;
  }
  _xmlOutputBufferWriteString(buf,">");
  if (format == 0) {
    return;
  }
  if (local_18->isinline != '\0') {
    return;
  }
  if (cur->next == (_xmlNode *)0x0) {
    return;
  }
  if (cur->next->type == XML_TEXT_NODE) {
    return;
  }
  if (cur->next->type == XML_ENTITY_REF_NODE) {
    return;
  }
  if (cur->parent == (_xmlNode *)0x0) {
    return;
  }
  if (cur->parent->name == (xmlChar *)0x0) {
    return;
  }
  if (*cur->parent->name == 'p') {
    return;
  }
  _xmlOutputBufferWriteString(buf,"\n");
  return;
}

