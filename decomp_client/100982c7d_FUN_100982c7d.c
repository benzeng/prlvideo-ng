
void FUN_100982c7d(long param_1,xmlEntityPtr param_2)

{
  int iVar1;
  xmlOutputBufferPtr out;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  int local_4c;
  _xmlNode *local_28;
  xmlChar *local_20;
  xmlChar *local_18;
  
  if (((param_2 != (xmlEntityPtr)0x0) &&
      (out = *(xmlOutputBufferPtr *)(param_1 + 0x28), param_2->type != XML_XINCLUDE_START)) &&
     (param_2->type != XML_XINCLUDE_END)) {
    if ((param_2->type == XML_DOCUMENT_NODE) || (param_2->type == XML_HTML_DOCUMENT_NODE)) {
      FUN_100983424(param_1,param_2);
    }
    else if (param_2->type == XML_DTD_NODE) {
      FUN_100982835(param_1,param_2);
    }
    else if (param_2->type == XML_DOCUMENT_FRAG_NODE) {
      FUN_100982b97(param_1,param_2->children);
    }
    else if (param_2->type == XML_ELEMENT_DECL) {
      _xmlDumpElementDecl((xmlBufferPtr)out->buffer,(xmlElementPtr)param_2);
    }
    else if (param_2->type == XML_ATTRIBUTE_DECL) {
      _xmlDumpAttributeDecl((xmlBufferPtr)out->buffer,(xmlAttributePtr)param_2);
    }
    else if (param_2->type == XML_ENTITY_DECL) {
      _xmlDumpEntityDecl((xmlBufferPtr)out->buffer,param_2);
    }
    else if (param_2->type == XML_TEXT_NODE) {
      if (param_2->content != (xmlChar *)0x0) {
        if (param_2->name == (xmlChar *)"textnoenc") {
          _xmlOutputBufferWriteString(out,(char *)param_2->content);
        }
        else {
          _xmlOutputBufferWriteEscape
                    (out,param_2->content,*(xmlCharEncodingOutputFunc *)(param_1 + 0x90));
        }
      }
    }
    else if (param_2->type == XML_PI_NODE) {
      if (param_2->content == (xmlChar *)0x0) {
        _xmlOutputBufferWrite(out,2,"<?");
        _xmlOutputBufferWriteString(out,(char *)param_2->name);
        _xmlOutputBufferWrite(out,2,"?>");
      }
      else {
        _xmlOutputBufferWrite(out,2,"<?");
        _xmlOutputBufferWriteString(out,(char *)param_2->name);
        if (param_2->content != (xmlChar *)0x0) {
          _xmlOutputBufferWrite(out,1," ");
          _xmlOutputBufferWriteString(out,(char *)param_2->content);
        }
        _xmlOutputBufferWrite(out,2,"?>");
      }
    }
    else if (param_2->type == XML_COMMENT_NODE) {
      if (param_2->content != (xmlChar *)0x0) {
        _xmlOutputBufferWrite(out,4,"<!--");
        _xmlOutputBufferWriteString(out,(char *)param_2->content);
        _xmlOutputBufferWrite(out,3,"-->");
      }
    }
    else if (param_2->type == XML_ENTITY_REF_NODE) {
      _xmlOutputBufferWrite(out,1,"&");
      _xmlOutputBufferWriteString(out,(char *)param_2->name);
      _xmlOutputBufferWrite(out,1,";");
    }
    else if (param_2->type == XML_CDATA_SECTION_NODE) {
      if (param_2->content == (xmlChar *)0x0) {
        _xmlOutputBufferWrite(out,0xc,"<![CDATA[]]>");
      }
      else {
        local_20 = param_2->content;
        for (local_18 = local_20; *local_18 != '\0'; local_18 = local_18 + 1) {
          if (((*local_18 == ']') && (local_18[1] == ']')) && (local_18[2] == '>')) {
            local_18 = local_18 + 2;
            _xmlOutputBufferWrite(out,9,"<![CDATA[");
            _xmlOutputBufferWrite(out,(int)local_18 - (int)local_20,(char *)local_20);
            _xmlOutputBufferWrite(out,3,"]]>");
            local_20 = local_18;
          }
        }
        if (local_20 != local_18) {
          _xmlOutputBufferWrite(out,9,"<![CDATA[");
          _xmlOutputBufferWriteString(out,(char *)local_20);
          _xmlOutputBufferWrite(out,3,"]]>");
        }
      }
    }
    else if (param_2->type == XML_ATTRIBUTE_NODE) {
      FUN_100982a7d(param_1,param_2);
    }
    else if (param_2->type == XML_NAMESPACE_DECL) {
      FUN_10098272a(out,param_2);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == 1) {
        for (local_28 = param_2->children; local_28 != (_xmlNode *)0x0; local_28 = local_28->next) {
          if (((local_28->type == XML_TEXT_NODE) || (local_28->type == XML_CDATA_SECTION_NODE)) ||
             (local_28->type == XML_ENTITY_REF_NODE)) {
            *(undefined4 *)(param_1 + 0x40) = 0;
            break;
          }
        }
      }
      _xmlOutputBufferWrite(out,1,"<");
      if ((param_2->orig != (xmlChar *)0x0) && (*(long *)(param_2->orig + 0x18) != 0)) {
        _xmlOutputBufferWriteString(out,*(char **)(param_2->orig + 0x18));
        _xmlOutputBufferWrite(out,1,":");
      }
      _xmlOutputBufferWriteString(out,(char *)param_2->name);
      if (param_2->ExternalID != (xmlChar *)0x0) {
        _xmlNsListDumpOutput(out,param_2->ExternalID);
      }
      lVar2._0_4_ = param_2->length;
      lVar2._4_4_ = param_2->etype;
      if (lVar2 != 0) {
        uVar3._0_4_ = param_2->length;
        uVar3._4_4_ = param_2->etype;
        FUN_100982b5c(param_1,uVar3);
      }
      if ((((param_2->type == XML_ELEMENT_NODE) || (param_2->content == (xmlChar *)0x0)) &&
          (param_2->children == (_xmlNode *)0x0)) &&
         (((*(uint *)(param_1 + 0x38) >> 2 ^ 1) & 1) != 0)) {
        _xmlOutputBufferWrite(out,2,"/>");
        *(int *)(param_1 + 0x40) = iVar1;
      }
      else {
        _xmlOutputBufferWrite(out,1,">");
        if ((param_2->type != XML_ELEMENT_NODE) && (param_2->content != (xmlChar *)0x0)) {
          _xmlOutputBufferWriteEscape
                    (out,param_2->content,*(xmlCharEncodingOutputFunc *)(param_1 + 0x90));
        }
        if (param_2->children != (_xmlNode *)0x0) {
          if (*(int *)(param_1 + 0x40) != 0) {
            _xmlOutputBufferWrite(out,1,"\n");
          }
          if (-1 < *(int *)(param_1 + 0x3c)) {
            *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
          }
          FUN_100982b97(param_1,param_2->children);
          if (0 < *(int *)(param_1 + 0x3c)) {
            *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
          }
          piVar4 = ___xmlIndentTreeOutput();
          if ((*piVar4 != 0) && (*(int *)(param_1 + 0x40) != 0)) {
            local_4c = *(int *)(param_1 + 0x3c);
            if (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x3c)) {
              local_4c = *(int *)(param_1 + 0x84);
            }
            _xmlOutputBufferWrite(out,*(int *)(param_1 + 0x88) * local_4c,(char *)(param_1 + 0x44));
          }
        }
        _xmlOutputBufferWrite(out,2,"</");
        if ((param_2->orig != (xmlChar *)0x0) && (*(long *)(param_2->orig + 0x18) != 0)) {
          _xmlOutputBufferWriteString(out,*(char **)(param_2->orig + 0x18));
          _xmlOutputBufferWrite(out,1,":");
        }
        _xmlOutputBufferWriteString(out,(char *)param_2->name);
        _xmlOutputBufferWrite(out,1,">");
        *(int *)(param_1 + 0x40) = iVar1;
      }
    }
  }
  return;
}

