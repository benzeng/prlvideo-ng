
void _xmlDumpEntityDecl(xmlBufferPtr buf,xmlEntityPtr ent)

{
  if ((buf != (xmlBufferPtr)0x0) && (ent != (xmlEntityPtr)0x0)) {
    switch(ent->etype) {
    default:
      FUN_10013676e(0x217,"xmlDumpEntitiesDecl: internal: unknown type entity type");
      break;
    case XML_INTERNAL_GENERAL_ENTITY:
      _xmlBufferWriteChar(buf,"<!ENTITY ");
      _xmlBufferWriteCHAR(buf,ent->name);
      _xmlBufferWriteChar(buf," ");
      if (ent->orig == (xmlChar *)0x0) {
        FUN_100137f15(buf,ent->content);
      }
      else {
        _xmlBufferWriteQuotedString(buf,ent->orig);
      }
      _xmlBufferWriteChar(buf,">\n");
      break;
    case XML_EXTERNAL_GENERAL_PARSED_ENTITY:
      _xmlBufferWriteChar(buf,"<!ENTITY ");
      _xmlBufferWriteCHAR(buf,ent->name);
      if (ent->ExternalID == (xmlChar *)0x0) {
        _xmlBufferWriteChar(buf," SYSTEM ");
        _xmlBufferWriteQuotedString(buf,ent->SystemID);
      }
      else {
        _xmlBufferWriteChar(buf," PUBLIC ");
        _xmlBufferWriteQuotedString(buf,ent->ExternalID);
        _xmlBufferWriteChar(buf," ");
        _xmlBufferWriteQuotedString(buf,ent->SystemID);
      }
      _xmlBufferWriteChar(buf,">\n");
      break;
    case XML_EXTERNAL_GENERAL_UNPARSED_ENTITY:
      _xmlBufferWriteChar(buf,"<!ENTITY ");
      _xmlBufferWriteCHAR(buf,ent->name);
      if (ent->ExternalID == (xmlChar *)0x0) {
        _xmlBufferWriteChar(buf," SYSTEM ");
        _xmlBufferWriteQuotedString(buf,ent->SystemID);
      }
      else {
        _xmlBufferWriteChar(buf," PUBLIC ");
        _xmlBufferWriteQuotedString(buf,ent->ExternalID);
        _xmlBufferWriteChar(buf," ");
        _xmlBufferWriteQuotedString(buf,ent->SystemID);
      }
      if (ent->content != (xmlChar *)0x0) {
        _xmlBufferWriteChar(buf," NDATA ");
        if (ent->orig == (xmlChar *)0x0) {
          _xmlBufferWriteCHAR(buf,ent->content);
        }
        else {
          _xmlBufferWriteCHAR(buf,ent->orig);
        }
      }
      _xmlBufferWriteChar(buf,">\n");
      break;
    case XML_INTERNAL_PARAMETER_ENTITY:
      _xmlBufferWriteChar(buf,"<!ENTITY % ");
      _xmlBufferWriteCHAR(buf,ent->name);
      _xmlBufferWriteChar(buf," ");
      if (ent->orig == (xmlChar *)0x0) {
        FUN_100137f15(buf,ent->content);
      }
      else {
        _xmlBufferWriteQuotedString(buf,ent->orig);
      }
      _xmlBufferWriteChar(buf,">\n");
      break;
    case XML_EXTERNAL_PARAMETER_ENTITY:
      _xmlBufferWriteChar(buf,"<!ENTITY % ");
      _xmlBufferWriteCHAR(buf,ent->name);
      if (ent->ExternalID == (xmlChar *)0x0) {
        _xmlBufferWriteChar(buf," SYSTEM ");
        _xmlBufferWriteQuotedString(buf,ent->SystemID);
      }
      else {
        _xmlBufferWriteChar(buf," PUBLIC ");
        _xmlBufferWriteQuotedString(buf,ent->ExternalID);
        _xmlBufferWriteChar(buf," ");
        _xmlBufferWriteQuotedString(buf,ent->SystemID);
      }
      _xmlBufferWriteChar(buf,">\n");
    }
  }
  return;
}

