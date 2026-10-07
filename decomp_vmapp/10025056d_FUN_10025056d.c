
void FUN_10025056d(long param_1,xmlEntityPtr param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  xmlOutputBufferPtr out;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  xmlChar *pxVar8;
  int local_9c;
  int local_84;
  int local_6c;
  int local_58;
  _xmlNode *local_50;
  xmlChar *local_48;
  xmlChar *local_40;
  _xmlNode *local_28;
  
  bVar5 = false;
  if (param_2 != (xmlEntityPtr)0x0) {
    if ((param_2->type == XML_DOCUMENT_NODE) || (param_2->type == XML_HTML_DOCUMENT_NODE)) {
      FUN_10024fafc(param_1,param_2);
    }
    else if ((param_2->type != XML_XINCLUDE_START) && (param_2->type != XML_XINCLUDE_END)) {
      if (param_2->type == XML_DTD_NODE) {
        FUN_10024ef0d(param_1,param_2);
      }
      else {
        out = *(xmlOutputBufferPtr *)(param_1 + 0x28);
        if (param_2->type == XML_ELEMENT_DECL) {
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
            if ((param_2->name == "text") || (param_2->name != (xmlChar *)"textnoenc")) {
              _xmlOutputBufferWriteEscape
                        (out,param_2->content,*(xmlCharEncodingOutputFunc *)(param_1 + 0x90));
            }
            else {
              _xmlOutputBufferWriteString(out,(char *)param_2->content);
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
          local_48 = param_2->content;
          for (local_40 = local_48; *local_40 != '\0'; local_40 = local_40 + 1) {
            if (((*local_40 == ']') && (local_40[1] == ']')) && (local_40[2] == '>')) {
              local_40 = local_40 + 2;
              _xmlOutputBufferWrite(out,9,"<![CDATA[");
              _xmlOutputBufferWrite(out,(int)local_40 - (int)local_48,(char *)local_48);
              _xmlOutputBufferWrite(out,3,"]]>");
              local_48 = local_40;
            }
          }
          if (local_48 != local_40) {
            _xmlOutputBufferWrite(out,9,"<![CDATA[");
            _xmlOutputBufferWriteString(out,(char *)local_48);
            _xmlOutputBufferWrite(out,3,"]]>");
          }
        }
        else {
          local_58 = *(int *)(param_1 + 0x40);
          if (local_58 == 1) {
            for (local_50 = param_2->children; local_50 != (_xmlNode *)0x0;
                local_50 = local_50->next) {
              if ((local_50->type == XML_TEXT_NODE) || (local_50->type == XML_ENTITY_REF_NODE)) {
                local_58 = 0;
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
          iVar6 = _xmlStrEqual(param_2->name,(xmlChar *)"html");
          if (((iVar6 != 0) && (param_2->orig == (xmlChar *)0x0)) &&
             (param_2->ExternalID == (xmlChar *)0x0)) {
            _xmlOutputBufferWriteString(out," xmlns=\"http://www.w3.org/1999/xhtml\"");
          }
          lVar3._0_4_ = param_2->length;
          lVar3._4_4_ = param_2->etype;
          if (lVar3 != 0) {
            uVar4._0_4_ = param_2->length;
            uVar4._4_4_ = param_2->etype;
            FUN_1002500aa(param_1,uVar4);
          }
          if (((param_2->type == XML_ELEMENT_NODE) && (param_2->parent != (_xmlDtd *)0x0)) &&
             ((param_2->parent->parent == param_2->doc &&
              ((iVar6 = _xmlStrEqual(param_2->name,(xmlChar *)"head"), iVar6 != 0 &&
               (iVar6 = _xmlStrEqual(param_2->parent->name,(xmlChar *)"html"), iVar6 != 0)))))) {
            for (local_50 = param_2->children; local_50 != (xmlNodePtr)0x0;
                local_50 = local_50->next) {
              iVar6 = _xmlStrEqual(local_50->name,(xmlChar *)"meta");
              if ((iVar6 != 0) &&
                 (pxVar8 = _xmlGetProp(local_50,(xmlChar *)"http-equiv"), pxVar8 != (xmlChar *)0x0))
              {
                iVar6 = _xmlStrcasecmp(pxVar8,(xmlChar *)"Content-Type");
                if (iVar6 == 0) {
                  (*(code *)_xmlFree)(pxVar8);
                  break;
                }
                (*(code *)_xmlFree)(pxVar8);
              }
            }
            if (local_50 == (xmlNodePtr)0x0) {
              bVar5 = true;
            }
          }
          if ((param_2->type == XML_ELEMENT_NODE) && (param_2->children == (_xmlNode *)0x0)) {
            if (((param_2->orig != (xmlChar *)0x0) && (*(long *)(param_2->orig + 0x18) != 0)) ||
               ((iVar6 = FUN_10024fd66(param_2), iVar6 != 1 || (bVar5)))) {
              if (bVar5) {
                _xmlOutputBufferWrite(out,1,">");
                if (*(int *)(param_1 + 0x40) != 0) {
                  _xmlOutputBufferWrite(out,1,"\n");
                  piVar7 = ___xmlIndentTreeOutput();
                  if (*piVar7 != 0) {
                    local_9c = *(int *)(param_1 + 0x3c) + 1;
                    if (*(int *)(param_1 + 0x84) < local_9c) {
                      local_9c = *(int *)(param_1 + 0x84);
                    }
                    _xmlOutputBufferWrite
                              (out,*(int *)(param_1 + 0x88) * local_9c,(char *)(param_1 + 0x44));
                  }
                }
                _xmlOutputBufferWriteString
                          (out,"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=");
                if (*(long *)(param_1 + 0x18) == 0) {
                  _xmlOutputBufferWrite(out,5,"UTF-8");
                }
                else {
                  _xmlOutputBufferWriteString(out,*(char **)(param_1 + 0x18));
                }
                _xmlOutputBufferWrite(out,4,"\" />");
                if (*(int *)(param_1 + 0x40) != 0) {
                  _xmlOutputBufferWrite(out,1,"\n");
                }
              }
              else {
                _xmlOutputBufferWrite(out,1,">");
              }
              _xmlOutputBufferWrite(out,2,"</");
              if ((param_2->orig != (xmlChar *)0x0) && (*(long *)(param_2->orig + 0x18) != 0)) {
                _xmlOutputBufferWriteString(out,*(char **)(param_2->orig + 0x18));
                _xmlOutputBufferWrite(out,1,":");
              }
              _xmlOutputBufferWriteString(out,(char *)param_2->name);
              _xmlOutputBufferWrite(out,1,">");
            }
            else {
              _xmlOutputBufferWrite(out,3," />");
            }
          }
          else {
            _xmlOutputBufferWrite(out,1,">");
            if (bVar5) {
              if (*(int *)(param_1 + 0x40) != 0) {
                _xmlOutputBufferWrite(out,1,"\n");
                piVar7 = ___xmlIndentTreeOutput();
                if (*piVar7 != 0) {
                  local_84 = *(int *)(param_1 + 0x3c) + 1;
                  if (*(int *)(param_1 + 0x84) < local_84) {
                    local_84 = *(int *)(param_1 + 0x84);
                  }
                  _xmlOutputBufferWrite
                            (out,*(int *)(param_1 + 0x88) * local_84,(char *)(param_1 + 0x44));
                }
              }
              _xmlOutputBufferWriteString
                        (out,"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=");
              if (*(long *)(param_1 + 0x18) == 0) {
                _xmlOutputBufferWrite(out,5,"UTF-8");
              }
              else {
                _xmlOutputBufferWriteString(out,*(char **)(param_1 + 0x18));
              }
              _xmlOutputBufferWrite(out,4,"\" />");
            }
            if ((param_2->type != XML_ELEMENT_NODE) && (param_2->content != (xmlChar *)0x0)) {
              _xmlOutputBufferWriteEscape
                        (out,param_2->content,*(xmlCharEncodingOutputFunc *)(param_1 + 0x90));
            }
            if (((param_2->type == XML_ELEMENT_NODE) &&
                ((iVar6 = _xmlStrEqual(param_2->name,(xmlChar *)"script"), iVar6 != 0 ||
                 (iVar6 = _xmlStrEqual(param_2->name,(xmlChar *)"style"), iVar6 != 0)))) &&
               ((param_2->orig == (xmlChar *)0x0 ||
                (iVar6 = _xmlStrEqual(*(xmlChar **)(param_2->orig + 0x10),
                                      (xmlChar *)"http://www.w3.org/1999/xhtml"), iVar6 != 0)))) {
              for (local_28 = param_2->children; local_28 != (_xmlNode *)0x0;
                  local_28 = local_28->next) {
                if (local_28->type == XML_TEXT_NODE) {
                  pxVar8 = _xmlStrchr(local_28->content,'<');
                  if (((pxVar8 == (xmlChar *)0x0) &&
                      (pxVar8 = _xmlStrchr(local_28->content,'&'), pxVar8 == (xmlChar *)0x0)) &&
                     (pxVar8 = _xmlStrstr(local_28->content,(xmlChar *)"]]>"),
                     pxVar8 == (xmlChar *)0x0)) {
                    uVar1 = *(undefined4 *)(param_1 + 0x3c);
                    uVar2 = *(undefined4 *)(param_1 + 0x40);
                    *(undefined4 *)(param_1 + 0x3c) = 0;
                    *(undefined4 *)(param_1 + 0x40) = 0;
                    _xmlOutputBufferWriteString(out,(char *)local_28->content);
                    *(undefined4 *)(param_1 + 0x3c) = uVar1;
                    *(undefined4 *)(param_1 + 0x40) = uVar2;
                  }
                  else {
                    local_48 = local_28->content;
                    for (local_40 = local_48; *local_40 != '\0'; local_40 = local_40 + 1) {
                      if (((*local_40 == ']') && (local_40[1] == ']')) && (local_40[2] == '>')) {
                        local_40 = local_40 + 2;
                        _xmlOutputBufferWrite(out,9,"<![CDATA[");
                        _xmlOutputBufferWrite(out,(int)local_40 - (int)local_48,(char *)local_48);
                        _xmlOutputBufferWrite(out,3,"]]>");
                        local_48 = local_40;
                      }
                    }
                    if (local_48 != local_40) {
                      _xmlOutputBufferWrite(out,9,"<![CDATA[");
                      _xmlOutputBufferWrite(out,(int)local_40 - (int)local_48,(char *)local_48);
                      _xmlOutputBufferWrite(out,3,"]]>");
                    }
                  }
                }
                else {
                  uVar1 = *(undefined4 *)(param_1 + 0x3c);
                  uVar2 = *(undefined4 *)(param_1 + 0x40);
                  *(undefined4 *)(param_1 + 0x3c) = 0;
                  *(undefined4 *)(param_1 + 0x40) = 0;
                  FUN_10025056d(param_1,local_28);
                  *(undefined4 *)(param_1 + 0x3c) = uVar1;
                  *(undefined4 *)(param_1 + 0x40) = uVar2;
                }
              }
            }
            else if (param_2->children != (_xmlNode *)0x0) {
              uVar1 = *(undefined4 *)(param_1 + 0x40);
              if (local_58 != 0) {
                _xmlOutputBufferWrite(out,1,"\n");
              }
              if (-1 < *(int *)(param_1 + 0x3c)) {
                *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
              }
              *(int *)(param_1 + 0x40) = local_58;
              FUN_100250487(param_1,param_2->children);
              if (0 < *(int *)(param_1 + 0x3c)) {
                *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
              }
              *(undefined4 *)(param_1 + 0x40) = uVar1;
              piVar7 = ___xmlIndentTreeOutput();
              if ((*piVar7 != 0) && (local_58 != 0)) {
                local_6c = *(int *)(param_1 + 0x3c);
                if (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x3c)) {
                  local_6c = *(int *)(param_1 + 0x84);
                }
                _xmlOutputBufferWrite
                          (out,*(int *)(param_1 + 0x88) * local_6c,(char *)(param_1 + 0x44));
              }
            }
            _xmlOutputBufferWrite(out,2,"</");
            if ((param_2->orig != (xmlChar *)0x0) && (*(long *)(param_2->orig + 0x18) != 0)) {
              _xmlOutputBufferWriteString(out,*(char **)(param_2->orig + 0x18));
              _xmlOutputBufferWrite(out,1,":");
            }
            _xmlOutputBufferWriteString(out,(char *)param_2->name);
            _xmlOutputBufferWrite(out,1,">");
          }
        }
      }
    }
  }
  return;
}

