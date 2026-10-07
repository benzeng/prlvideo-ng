
void _xmlDumpAttributeDecl(xmlBufferPtr buf,xmlAttributePtr attr)

{
  xmlAttributeDefault xVar1;
  
  if (buf == (xmlBufferPtr)0x0) {
    return;
  }
  if (attr == (xmlAttributePtr)0x0) {
    return;
  }
  _xmlBufferWriteChar(buf,"<!ATTLIST ");
  _xmlBufferWriteCHAR(buf,attr->elem);
  _xmlBufferWriteChar(buf," ");
  if (attr->prefix != (xmlChar *)0x0) {
    _xmlBufferWriteCHAR(buf,attr->prefix);
    _xmlBufferWriteChar(buf,":");
  }
  _xmlBufferWriteCHAR(buf,attr->name);
  switch(attr->atype) {
  default:
    FUN_100183b80(0,1,"Internal: ATTRIBUTE struct corrupted invalid type\n",0);
    break;
  case XML_ATTRIBUTE_CDATA:
    _xmlBufferWriteChar(buf," CDATA");
    break;
  case XML_ATTRIBUTE_ID:
    _xmlBufferWriteChar(buf," ID");
    break;
  case XML_ATTRIBUTE_IDREF:
    _xmlBufferWriteChar(buf," IDREF");
    break;
  case XML_ATTRIBUTE_IDREFS:
    _xmlBufferWriteChar(buf," IDREFS");
    break;
  case XML_ATTRIBUTE_ENTITY:
    _xmlBufferWriteChar(buf," ENTITY");
    break;
  case XML_ATTRIBUTE_ENTITIES:
    _xmlBufferWriteChar(buf," ENTITIES");
    break;
  case XML_ATTRIBUTE_NMTOKEN:
    _xmlBufferWriteChar(buf," NMTOKEN");
    break;
  case XML_ATTRIBUTE_NMTOKENS:
    _xmlBufferWriteChar(buf," NMTOKENS");
    break;
  case XML_ATTRIBUTE_ENUMERATION:
    _xmlBufferWriteChar(buf," (");
    FUN_100186c87(buf,attr->tree);
    break;
  case XML_ATTRIBUTE_NOTATION:
    _xmlBufferWriteChar(buf," NOTATION (");
    FUN_100186c87(buf,attr->tree);
  }
  xVar1 = attr->def;
  if (xVar1 == XML_ATTRIBUTE_REQUIRED) {
    _xmlBufferWriteChar(buf," #REQUIRED");
    goto LAB_1001879ea;
  }
  if (xVar1 < XML_ATTRIBUTE_IMPLIED) {
    if (xVar1 == XML_ATTRIBUTE_NONE) goto LAB_1001879ea;
  }
  else {
    if (xVar1 == XML_ATTRIBUTE_IMPLIED) {
      _xmlBufferWriteChar(buf," #IMPLIED");
      goto LAB_1001879ea;
    }
    if (xVar1 == XML_ATTRIBUTE_FIXED) {
      _xmlBufferWriteChar(buf," #FIXED");
      goto LAB_1001879ea;
    }
  }
  FUN_100183b80(0,1,"Internal: ATTRIBUTE struct corrupted invalid def\n",0);
LAB_1001879ea:
  if (attr->defaultValue != (xmlChar *)0x0) {
    _xmlBufferWriteChar(buf," ");
    _xmlBufferWriteQuotedString(buf,attr->defaultValue);
  }
  _xmlBufferWriteChar(buf,">\n");
  return;
}

