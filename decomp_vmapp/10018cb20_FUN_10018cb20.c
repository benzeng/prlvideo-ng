
void FUN_10018cb20(char *param_1,int param_2,xmlNodePtr param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  xmlNodePtr local_28;
  
  if (param_3 != (xmlNodePtr)0x0) {
    local_28 = param_3;
    if (param_4 != 0) {
      _strcat(param_1,"(");
    }
    for (; local_28 != (xmlNodePtr)0x0; local_28 = local_28->next) {
      lVar4 = -1;
      pcVar5 = param_1;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar2 = ~(uint)lVar4 - 1;
      if (param_2 - iVar2 < 0x32) {
        if (param_2 - iVar2 < 5) {
          return;
        }
        if (param_1[(long)iVar2 + -1] == '.') {
          return;
        }
        _strcat(param_1," ...");
        return;
      }
      switch(local_28->type) {
      case XML_ELEMENT_NODE:
        if ((local_28->ns != (xmlNs *)0x0) && (local_28->ns->prefix != (xmlChar *)0x0)) {
          iVar3 = _xmlStrlen(local_28->ns->prefix);
          if (param_2 - iVar2 < iVar3 + 10) {
            if (param_2 - iVar2 < 5) {
              return;
            }
            if (param_1[(long)iVar2 + -1] == '.') {
              return;
            }
            _strcat(param_1," ...");
            return;
          }
          _strcat(param_1,(char *)local_28->ns->prefix);
          _strcat(param_1,":");
        }
        iVar3 = _xmlStrlen(local_28->name);
        if (param_2 - iVar2 < iVar3 + 10) {
          if (param_2 - iVar2 < 5) {
            return;
          }
          if (param_1[(long)iVar2 + -1] == '.') {
            return;
          }
          _strcat(param_1," ...");
          return;
        }
        _strcat(param_1,(char *)local_28->name);
        if (local_28->next != (_xmlNode *)0x0) {
          _strcat(param_1," ");
        }
        break;
      case XML_ATTRIBUTE_NODE:
      case XML_DOCUMENT_NODE:
      case XML_DOCUMENT_TYPE_NODE:
      case XML_DOCUMENT_FRAG_NODE:
      case XML_NOTATION_NODE:
      case XML_HTML_DOCUMENT_NODE:
      case XML_NAMESPACE_DECL:
      case XML_DOCB_DOCUMENT_NODE:
        _strcat(param_1,"???");
        if (local_28->next != (_xmlNode *)0x0) {
          _strcat(param_1," ");
        }
        break;
      case XML_TEXT_NODE:
        iVar2 = _xmlIsBlankNode(local_28);
        if (iVar2 == 0) goto switchD_10018cc11_caseD_4;
        break;
      case XML_CDATA_SECTION_NODE:
      case XML_ENTITY_REF_NODE:
switchD_10018cc11_caseD_4:
        _strcat(param_1,"CDATA");
        if (local_28->next != (_xmlNode *)0x0) {
          _strcat(param_1," ");
        }
      }
    }
    if (param_4 != 0) {
      _strcat(param_1,")");
    }
  }
  return;
}

