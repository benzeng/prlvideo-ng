
void _xmlLsOneNode(FILE *output,xmlNodePtr node)

{
  uint uVar1;
  
  if (output != (FILE *)0x0) {
    if (node == (xmlNodePtr)0x0) {
      _fwrite("NULL\n",1,5,output);
    }
    else {
      switch(node->type) {
      default:
        _fputc(0x3f,output);
        break;
      case XML_ELEMENT_NODE:
        _fputc(0x2d,output);
        break;
      case XML_ATTRIBUTE_NODE:
        _fputc(0x61,output);
        break;
      case XML_TEXT_NODE:
        _fputc(0x74,output);
        break;
      case XML_CDATA_SECTION_NODE:
        _fputc(0x43,output);
        break;
      case XML_ENTITY_REF_NODE:
        _fputc(0x65,output);
        break;
      case XML_ENTITY_NODE:
        _fputc(0x45,output);
        break;
      case XML_PI_NODE:
        _fputc(0x70,output);
        break;
      case XML_COMMENT_NODE:
        _fputc(99,output);
        break;
      case XML_DOCUMENT_NODE:
        _fputc(100,output);
        break;
      case XML_DOCUMENT_TYPE_NODE:
        _fputc(0x54,output);
        break;
      case XML_DOCUMENT_FRAG_NODE:
        _fputc(0x46,output);
        break;
      case XML_NOTATION_NODE:
        _fputc(0x4e,output);
        break;
      case XML_HTML_DOCUMENT_NODE:
        _fputc(0x68,output);
        break;
      case XML_NAMESPACE_DECL:
        _fputc(0x6e,output);
      }
      if (node->type != XML_NAMESPACE_DECL) {
        if (node->properties == (_xmlAttr *)0x0) {
          _fputc(0x2d,output);
        }
        else {
          _fputc(0x61,output);
        }
        if (node->nsDef == (xmlNs *)0x0) {
          _fputc(0x2d,output);
        }
        else {
          _fputc(0x6e,output);
        }
      }
      uVar1 = _xmlLsCountNode(node);
      _fprintf(output," %8d ",(ulong)uVar1);
      switch(node->type) {
      default:
        if (node->name != (xmlChar *)0x0) {
          _fputs((char *)node->name,output);
        }
        break;
      case XML_ELEMENT_NODE:
        if (node->name != (xmlChar *)0x0) {
          _fputs((char *)node->name,output);
        }
        break;
      case XML_ATTRIBUTE_NODE:
        if (node->name != (xmlChar *)0x0) {
          _fputs((char *)node->name,output);
        }
        break;
      case XML_TEXT_NODE:
        if (node->content != (xmlChar *)0x0) {
          _xmlDebugDumpString(output,node->content);
        }
        break;
      case XML_CDATA_SECTION_NODE:
      case XML_COMMENT_NODE:
      case XML_DOCUMENT_NODE:
      case XML_DOCUMENT_TYPE_NODE:
      case XML_DOCUMENT_FRAG_NODE:
      case XML_NOTATION_NODE:
      case XML_HTML_DOCUMENT_NODE:
        break;
      case XML_ENTITY_REF_NODE:
        if (node->name != (xmlChar *)0x0) {
          _fputs((char *)node->name,output);
        }
        break;
      case XML_ENTITY_NODE:
        if (node->name != (xmlChar *)0x0) {
          _fputs((char *)node->name,output);
        }
        break;
      case XML_PI_NODE:
        if (node->name != (xmlChar *)0x0) {
          _fputs((char *)node->name,output);
        }
        break;
      case XML_NAMESPACE_DECL:
        if (node->children == (_xmlNode *)0x0) {
          _fprintf(output,"default -> %s",node->name);
        }
        else {
          _fprintf(output,"%s -> %s",node->children,node->name);
        }
      }
      _fputc(10,output);
    }
  }
  return;
}

