
void _xmlNodeAddContent(xmlNodePtr cur,xmlChar *content)

{
  int len;
  
  if ((cur != (xmlNodePtr)0x0) && (content != (xmlChar *)0x0)) {
    len = _xmlStrlen(content);
    _xmlNodeAddContentLen(cur,content,len);
  }
  return;
}

