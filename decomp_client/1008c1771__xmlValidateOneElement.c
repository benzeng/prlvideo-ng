
int _xmlValidateOneElement(xmlValidCtxtPtr ctxt,xmlDocPtr doc,xmlNodePtr elem)

{
  int iVar1;
  int local_dc;
  xmlChar local_b8 [52];
  int local_84;
  long local_80;
  int *local_78;
  long local_70;
  _xmlNode *local_68;
  int local_60;
  int local_5c;
  xmlChar *local_58;
  xmlChar *local_50;
  byte *local_48;
  int local_3c;
  xmlNs *local_38;
  xmlNs *local_30;
  _xmlAttr *local_28;
  xmlNs *local_20;
  xmlNs *local_18;
  xmlNs *local_10;
  
  local_80 = 0;
  local_60 = 1;
  local_84 = 0;
  if (doc == (xmlDocPtr)0x0) {
    local_dc = 0;
  }
  else if ((doc->intSubset == (_xmlDtd *)0x0) && (doc->extSubset == (_xmlDtd *)0x0)) {
    local_dc = 0;
  }
  else if (elem == (xmlNodePtr)0x0) {
    local_dc = 0;
  }
  else {
    switch(elem->type) {
    default:
      FUN_1008b763a(ctxt,elem,1,"unknown element type\n",0,0,0);
      local_dc = 0;
      break;
    case XML_ELEMENT_NODE:
      local_80 = FUN_1008c104e(ctxt,doc,elem,&local_84);
      if (local_80 == 0) {
        local_dc = 0;
      }
      else {
        if (ctxt->vstateNr == 0) {
          switch(*(undefined4 *)(local_80 + 0x48)) {
          case 0:
            FUN_1008b763a(ctxt,elem,0x216,"No declaration for element %s\n",elem->name,0,0);
            return 0;
          case 1:
            if (elem->children != (_xmlNode *)0x0) {
              FUN_1008b763a(ctxt,elem,0x210,"Element %s was declared EMPTY this one has content\n",
                            elem->name,0,0);
              local_60 = 0;
            }
            break;
          case 3:
            if ((*(long *)(local_80 + 0x50) == 0) || (**(int **)(local_80 + 0x50) != 1)) {
              for (local_68 = elem->children; local_68 != (_xmlNode *)0x0; local_68 = local_68->next
                  ) {
                if (local_68->type == XML_ELEMENT_NODE) {
                  local_58 = local_68->name;
                  if ((local_68->ns != (xmlNs *)0x0) && (local_68->ns->prefix != (xmlChar *)0x0)) {
                    local_50 = _xmlBuildQName(local_68->name,local_68->ns->prefix,local_b8,0x32);
                    if (local_50 == (xmlChar *)0x0) {
                      return 0;
                    }
                    for (local_78 = *(int **)(local_80 + 0x50); local_78 != (int *)0x0;
                        local_78 = *(int **)(local_78 + 6)) {
                      if (*local_78 == 2) {
                        iVar1 = _xmlStrEqual(*(xmlChar **)(local_78 + 2),local_50);
joined_r0x0001008c1e39:
                        if (iVar1 != 0) break;
                      }
                      else {
                        if (((*local_78 == 4) && (*(long *)(local_78 + 4) != 0)) &&
                           (**(int **)(local_78 + 4) == 2)) {
                          iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_78 + 4) + 8),local_50);
                          goto joined_r0x0001008c1e39;
                        }
                        if (((*local_78 != 4) || (*(long *)(local_78 + 4) == 0)) ||
                           (**(int **)(local_78 + 4) != 1)) {
                          FUN_1008b74a8(0,0x207,"Internal: MIXED struct corrupted\n",0);
                          break;
                        }
                      }
                    }
                    if ((local_b8 != local_50) && (local_68->name != local_50)) {
                      (*(code *)_xmlFree)(local_50);
                    }
                    if (local_78 != (int *)0x0) goto LAB_1008c1fdb;
                  }
                  for (local_78 = *(int **)(local_80 + 0x50); local_78 != (int *)0x0;
                      local_78 = *(int **)(local_78 + 6)) {
                    if (*local_78 == 2) {
                      iVar1 = _xmlStrEqual(*(xmlChar **)(local_78 + 2),local_58);
joined_r0x0001008c1f43:
                      if (iVar1 != 0) break;
                    }
                    else {
                      if (((*local_78 == 4) && (*(long *)(local_78 + 4) != 0)) &&
                         (**(int **)(local_78 + 4) == 2)) {
                        iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_78 + 4) + 8),local_58);
                        goto joined_r0x0001008c1f43;
                      }
                      if (((*local_78 != 4) || (*(long *)(local_78 + 4) == 0)) ||
                         (**(int **)(local_78 + 4) != 1)) {
                        FUN_1008b74a8(ctxt,0x207,"Internal: MIXED struct corrupted\n",0);
                        break;
                      }
                    }
                  }
                  if (local_78 == (int *)0x0) {
                    FUN_1008b763a(ctxt,elem,0x203,
                                  "Element %s is not declared in %s list of possible children\n",
                                  local_58,elem->name,0);
                    local_60 = 0;
                  }
                }
LAB_1008c1fdb:
              }
            }
            else {
              local_60 = FUN_1008c0c75(ctxt,doc,elem);
              if (local_60 == 0) {
                FUN_1008b763a(ctxt,elem,0x211,
                              "Element %s was declared #PCDATA but contains non text nodes\n",
                              elem->name,0,0);
              }
            }
            break;
          case 4:
            if ((doc->standalone == 1) && (local_84 == 1)) {
              for (local_68 = elem->children; local_68 != (_xmlNode *)0x0; local_68 = local_68->next
                  ) {
                if (local_68->type == XML_TEXT_NODE) {
                  for (local_48 = local_68->content;
                      (*local_48 == 0x20 ||
                      (((8 < *local_48 && (*local_48 < 0xb)) || (*local_48 == 0xd))));
                      local_48 = local_48 + 1) {
                  }
                  if (*local_48 == 0) {
                    FUN_1008b763a(ctxt,elem,0x214,
                                  "standalone: %s declared in the external subset contains white spaces nodes\n"
                                  ,elem->name,0,0);
                    local_60 = 0;
                    break;
                  }
                }
              }
            }
            local_68 = elem->children;
            local_78 = *(int **)(local_80 + 0x50);
            local_5c = FUN_1008c0774(ctxt,local_68,local_80,1,elem);
            if (local_5c < 1) {
              local_60 = local_5c;
            }
          }
        }
        for (local_70 = *(long *)(local_80 + 0x58); local_70 != 0;
            local_70 = *(long *)(local_70 + 0x48)) {
          if (*(int *)(local_70 + 0x54) == 2) {
            local_3c = -1;
            if ((*(long *)(local_70 + 0x68) == 0) &&
               (iVar1 = _xmlStrEqual(*(xmlChar **)(local_70 + 0x10),(xmlChar *)"xmlns"), iVar1 != 0)
               ) {
              for (local_38 = elem->nsDef; local_38 != (xmlNs *)0x0; local_38 = local_38->next) {
                if (local_38->prefix == (xmlChar *)0x0) goto LAB_1008c25b8;
              }
            }
            else {
              iVar1 = _xmlStrEqual(*(xmlChar **)(local_70 + 0x68),(xmlChar *)"xmlns");
              if (iVar1 == 0) {
                for (local_28 = elem->properties; local_28 != (_xmlAttr *)0x0;
                    local_28 = local_28->next) {
                  iVar1 = _xmlStrEqual(local_28->name,*(xmlChar **)(local_70 + 0x10));
                  if (iVar1 != 0) {
                    if (*(long *)(local_70 + 0x68) == 0) goto LAB_1008c25b8;
                    local_20 = local_28->ns;
                    if (local_20 == (xmlNs *)0x0) {
                      local_20 = elem->ns;
                    }
                    if (local_20 == (xmlNs *)0x0) {
                      if (local_3c < 0) {
                        local_3c = 0;
                      }
                    }
                    else {
                      iVar1 = _xmlStrEqual(local_20->prefix,*(xmlChar **)(local_70 + 0x68));
                      if (iVar1 != 0) goto LAB_1008c25b8;
                      if (local_3c < 1) {
                        local_3c = 1;
                      }
                    }
                  }
                }
              }
              else {
                for (local_30 = elem->nsDef; local_30 != (xmlNs *)0x0; local_30 = local_30->next) {
                  iVar1 = _xmlStrEqual(*(xmlChar **)(local_70 + 0x10),local_30->prefix);
                  if (iVar1 != 0) goto LAB_1008c25b8;
                }
              }
            }
            if (local_3c == -1) {
              if (*(long *)(local_70 + 0x68) == 0) {
                FUN_1008b763a(ctxt,elem,0x206,"Element %s does not carry attribute %s\n",elem->name,
                              *(undefined8 *)(local_70 + 0x10),0);
                local_60 = 0;
              }
              else {
                FUN_1008b763a(ctxt,elem,0x206,"Element %s does not carry attribute %s:%s\n",
                              elem->name,*(undefined8 *)(local_70 + 0x68),
                              *(undefined8 *)(local_70 + 0x10));
                local_60 = 0;
              }
            }
            else if (local_3c == 0) {
              FUN_1008b78a2(ctxt,elem,0x20c,"Element %s required attribute %s:%s has no prefix\n",
                            elem->name,*(undefined8 *)(local_70 + 0x68),
                            *(undefined8 *)(local_70 + 0x10));
            }
            else if (local_3c == 1) {
              FUN_1008b78a2(ctxt,elem,0x1fa,
                            "Element %s required attribute %s:%s has different prefix\n",elem->name,
                            *(undefined8 *)(local_70 + 0x68),*(undefined8 *)(local_70 + 0x10));
            }
          }
          else if (*(int *)(local_70 + 0x54) == 4) {
            if ((*(long *)(local_70 + 0x68) == 0) &&
               (iVar1 = _xmlStrEqual(*(xmlChar **)(local_70 + 0x10),(xmlChar *)"xmlns"), iVar1 != 0)
               ) {
              for (local_18 = elem->nsDef; local_18 != (xmlNs *)0x0; local_18 = local_18->next) {
                if (local_18->prefix == (xmlChar *)0x0) {
                  iVar1 = _xmlStrEqual(*(xmlChar **)(local_70 + 0x58),local_18->href);
                  if (iVar1 == 0) {
                    FUN_1008b763a(ctxt,elem,0x1fb,
                                  "Element %s namespace name for default namespace does not match the DTD\n"
                                  ,elem->name,0,0);
                    local_60 = 0;
                  }
                  break;
                }
              }
            }
            else {
              iVar1 = _xmlStrEqual(*(xmlChar **)(local_70 + 0x68),(xmlChar *)"xmlns");
              if (iVar1 != 0) {
                for (local_10 = elem->nsDef; local_10 != (xmlNs *)0x0; local_10 = local_10->next) {
                  iVar1 = _xmlStrEqual(*(xmlChar **)(local_70 + 0x10),local_10->prefix);
                  if (iVar1 != 0) {
                    iVar1 = _xmlStrEqual(*(xmlChar **)(local_70 + 0x58),local_10->href);
                    if (iVar1 == 0) {
                      FUN_1008b763a(ctxt,elem,0x1fc,
                                    "Element %s namespace name for %s does not match the DTD\n",
                                    elem->name,local_10->prefix,0);
                      local_60 = 0;
                    }
                    break;
                  }
                }
              }
            }
          }
LAB_1008c25b8:
        }
        local_dc = local_60;
      }
      break;
    case XML_ATTRIBUTE_NODE:
      FUN_1008b763a(ctxt,elem,1,"Attribute element not expected\n",0,0,0);
      local_dc = 0;
      break;
    case XML_TEXT_NODE:
      if (elem->children == (_xmlNode *)0x0) {
        if (elem->ns == (xmlNs *)0x0) {
          if (elem->content == (xmlChar *)0x0) {
            FUN_1008b763a(ctxt,elem,1,"Text element has no content !\n",0,0,0);
            local_dc = 0;
          }
          else {
            local_dc = 1;
          }
        }
        else {
          FUN_1008b763a(ctxt,elem,1,"Text element has namespace !\n",0,0,0);
          local_dc = 0;
        }
      }
      else {
        FUN_1008b763a(ctxt,elem,1,"Text element has children !\n",0,0,0);
        local_dc = 0;
      }
      break;
    case XML_CDATA_SECTION_NODE:
    case XML_ENTITY_REF_NODE:
    case XML_PI_NODE:
    case XML_COMMENT_NODE:
      local_dc = 1;
      break;
    case XML_ENTITY_NODE:
      FUN_1008b763a(ctxt,elem,1,"Entity element not expected\n",0,0,0);
      local_dc = 0;
      break;
    case XML_DOCUMENT_NODE:
    case XML_DOCUMENT_TYPE_NODE:
    case XML_DOCUMENT_FRAG_NODE:
      FUN_1008b763a(ctxt,elem,1,"Document element not expected\n",0,0,0);
      local_dc = 0;
      break;
    case XML_NOTATION_NODE:
      FUN_1008b763a(ctxt,elem,1,"Notation element not expected\n",0,0,0);
      local_dc = 0;
      break;
    case XML_HTML_DOCUMENT_NODE:
      FUN_1008b763a(ctxt,elem,1,"HTML Document not expected\n",0,0,0);
      local_dc = 0;
      break;
    case XML_XINCLUDE_START:
    case XML_XINCLUDE_END:
      local_dc = 1;
    }
  }
  return local_dc;
}

