
void FUN_100239ebb(long param_1,_xmlNode *param_2)

{
  int iVar1;
  xmlAttrPtr pxVar2;
  xmlChar *local_100;
  _xmlNode *local_f8;
  xmlNodePtr local_f0;
  xmlChar *local_e8;
  xmlChar *local_e0;
  xmlChar *local_d8;
  long local_d0;
  void *local_c8;
  xmlNodePtr local_c0;
  long local_b8;
  xmlChar *local_b0;
  xmlChar *local_a8;
  xmlChar *local_a0;
  long local_98;
  void *local_90;
  xmlNodePtr local_88;
  xmlChar *local_80;
  xmlChar *local_78;
  xmlNodePtr local_70;
  xmlNodePtr local_68;
  xmlNodePtr local_60;
  xmlChar *local_58;
  xmlChar *local_50;
  xmlChar *local_48;
  xmlNsPtr local_40;
  undefined4 local_34;
  xmlChar *local_30;
  xmlNodePtr local_28;
  xmlNodePtr local_20;
  _xmlNode *local_18;
  xmlNs *local_10;
  
  local_f0 = (xmlNodePtr)0x0;
  local_f8 = param_2;
LAB_10023b08a:
  do {
    if (local_f8 == (_xmlNode *)0x0) {
      if (local_f0 != (xmlNodePtr)0x0) {
        _xmlUnlinkNode(local_f0);
        _xmlFreeNode(local_f0);
      }
      return;
    }
    if (local_f0 != (xmlNodePtr)0x0) {
      _xmlUnlinkNode(local_f0);
      _xmlFreeNode(local_f0);
      local_f0 = (_xmlNode *)0x0;
    }
    if (local_f8->type == XML_ELEMENT_NODE) {
      if (local_f8->ns != (xmlNs *)0x0) {
        iVar1 = _xmlStrEqual(local_f8->ns->href,PTR_s_http___relaxng_org_ns_structure__1011151b0);
        if (iVar1 != 0) {
          FUN_100239a62(param_1,local_f8);
          iVar1 = _xmlStrEqual(local_f8->name,(xmlChar *)"externalRef");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(local_f8->name,(xmlChar *)"include");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(local_f8->name,(xmlChar *)"element");
              if (iVar1 == 0) {
                iVar1 = _xmlStrEqual(local_f8->name,(xmlChar *)"attribute");
                if (iVar1 != 0) goto LAB_10023a7b7;
                iVar1 = _xmlStrEqual(local_f8->name,(xmlChar *)"name");
                if (iVar1 == 0) {
                  iVar1 = _xmlStrEqual(local_f8->name,(xmlChar *)"nsName");
                  if (iVar1 == 0) {
                    iVar1 = _xmlStrEqual(local_f8->name,(xmlChar *)"value");
                    if (iVar1 == 0) {
                      iVar1 = _xmlStrEqual(local_f8->name,(xmlChar *)"except");
                      if ((iVar1 == 0) || (local_f8 == param_2)) {
                        iVar1 = _xmlStrEqual(local_f8->name,(xmlChar *)"anyName");
                        if (iVar1 != 0) {
                          if ((*(uint *)(param_1 + 0x40) >> 8 & 1) == 0) {
                            if ((*(uint *)(param_1 + 0x40) >> 9 & 1) != 0) {
                              FUN_10022d5a6(param_1,local_f8,0x43c,
                                            "Found nsName/except//anyName forbidden construct\n",0,0
                                           );
                            }
                          }
                          else {
                            FUN_10022d5a6(param_1,local_f8,0x42a,
                                          "Found anyName/except//anyName forbidden construct\n",0,0)
                            ;
                          }
                        }
                      }
                      else {
                        local_34 = *(undefined4 *)(param_1 + 0x40);
                        if (local_f8->parent != (_xmlNode *)0x0) {
                          iVar1 = _xmlStrEqual(local_f8->parent->name,(xmlChar *)"anyName");
                          if (iVar1 != 0) {
                            *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x100;
                            FUN_100239ebb(param_1,local_f8);
                            *(undefined4 *)(param_1 + 0x40) = local_34;
                            goto LAB_10023a032;
                          }
                        }
                        if (local_f8->parent != (_xmlNode *)0x0) {
                          iVar1 = _xmlStrEqual(local_f8->parent->name,(xmlChar *)"nsName");
                          if (iVar1 != 0) {
                            *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x200;
                            FUN_100239ebb(param_1,local_f8);
                            *(undefined4 *)(param_1 + 0x40) = local_34;
                            goto LAB_10023a032;
                          }
                        }
                      }
                      goto LAB_10023ada7;
                    }
                  }
                }
                pxVar2 = _xmlHasProp(local_f8,(xmlChar *)"ns");
                if (pxVar2 == (xmlAttrPtr)0x0) {
                  local_58 = (xmlChar *)0x0;
                  for (local_60 = local_f8->parent;
                      (local_60 != (xmlNodePtr)0x0 && (local_60->type == XML_ELEMENT_NODE));
                      local_60 = local_60->parent) {
                    local_58 = _xmlGetProp(local_60,(xmlChar *)"ns");
                    if (local_58 != (xmlChar *)0x0) break;
                  }
                  if (local_58 == (xmlChar *)0x0) {
                    _xmlSetProp(local_f8,(xmlChar *)"ns",(xmlChar *)"");
                  }
                  else {
                    _xmlSetProp(local_f8,(xmlChar *)"ns",local_58);
                    (*(code *)_xmlFree)(local_58);
                  }
                }
                iVar1 = _xmlStrEqual(local_f8->name,(xmlChar *)"name");
                if (iVar1 != 0) {
                  local_50 = _xmlNodeGetContent(local_f8);
                  if (local_50 != (xmlChar *)0x0) {
                    local_48 = _xmlSplitQName2(local_50,&local_100);
                    if (local_48 != (xmlChar *)0x0) {
                      local_40 = _xmlSearchNs(local_f8->doc,local_f8,local_100);
                      if (local_40 == (xmlNsPtr)0x0) {
                        FUN_10022d5a6(param_1,local_f8,0x449,
                                      "xmlRelaxNGParse: no namespace for prefix %s\n",local_100,0);
                      }
                      else {
                        _xmlSetProp(local_f8,(xmlChar *)"ns",local_40->href);
                        _xmlNodeSetContent(local_f8,local_48);
                      }
                      (*(code *)_xmlFree)(local_48);
                      (*(code *)_xmlFree)(local_100);
                    }
                    (*(code *)_xmlFree)(local_50);
                  }
                }
                iVar1 = _xmlStrEqual(local_f8->name,(xmlChar *)"nsName");
                if ((iVar1 != 0) && ((*(uint *)(param_1 + 0x40) >> 9 & 1) != 0)) {
                  FUN_10022d5a6(param_1,local_f8,0x43d,
                                "Found nsName/except//nsName forbidden construct\n",0,0);
                }
              }
              else {
LAB_10023a7b7:
                local_70 = (xmlNodePtr)0x0;
                local_80 = _xmlGetProp(local_f8,(xmlChar *)"name");
                if (local_80 != (xmlChar *)0x0) {
                  if (local_f8->children == (_xmlNode *)0x0) {
                    local_70 = _xmlNewChild(local_f8,local_f8->ns,(xmlChar *)"name",local_80);
                  }
                  else {
                    local_68 = _xmlNewDocNode(local_f8->doc,local_f8->ns,(xmlChar *)"name",
                                              (xmlChar *)0x0);
                    if (local_68 != (xmlNodePtr)0x0) {
                      _xmlAddPrevSibling(local_f8->children,local_68);
                      local_70 = _xmlNewText(local_80);
                      _xmlAddChild(local_68,local_70);
                      local_70 = local_68;
                    }
                  }
                  if (local_70 == (xmlNodePtr)0x0) {
                    FUN_10022d5a6(param_1,local_f8,0x3f0,"Failed to create a name %s element\n",
                                  local_80,0);
                  }
                  _xmlUnsetProp(local_f8,(xmlChar *)"name");
                  (*(code *)_xmlFree)(local_80);
                  local_78 = _xmlGetProp(local_f8,(xmlChar *)"ns");
                  if (local_78 == (xmlChar *)0x0) {
                    iVar1 = _xmlStrEqual(local_f8->name,(xmlChar *)"attribute");
                    if (iVar1 != 0) {
                      _xmlSetProp(local_70,(xmlChar *)"ns",(xmlChar *)"");
                    }
                  }
                  else {
                    if (local_70 != (xmlNodePtr)0x0) {
                      _xmlSetProp(local_70,(xmlChar *)"ns",local_78);
                    }
                    (*(code *)_xmlFree)(local_78);
                  }
                }
              }
LAB_10023ada7:
              iVar1 = _xmlStrEqual(local_f8->name,(xmlChar *)"div");
              if (iVar1 == 0) goto LAB_10023af7a;
              local_30 = _xmlGetProp(local_f8,(xmlChar *)"ns");
              local_28 = local_f8->children;
              local_20 = local_f8;
              while (local_28 != (xmlNodePtr)0x0) {
                if (local_30 != (xmlChar *)0x0) {
                  pxVar2 = _xmlHasProp(local_28,(xmlChar *)"ns");
                  if (pxVar2 == (xmlAttrPtr)0x0) {
                    _xmlSetProp(local_28,(xmlChar *)"ns",local_30);
                  }
                }
                local_18 = local_28->next;
                _xmlUnlinkNode(local_28);
                local_20 = _xmlAddNextSibling(local_20,local_28);
                local_28 = local_18;
              }
              if (local_30 != (xmlChar *)0x0) {
                (*(code *)_xmlFree)(local_30);
              }
              if (local_f8->nsDef != (xmlNs *)0x0) {
                for (local_10 = (xmlNs *)&local_f8->parent->nsDef; local_10->next != (_xmlNs *)0x0;
                    local_10 = local_10->next) {
                }
                local_10->next = local_f8->nsDef;
                local_f8->nsDef = (xmlNs *)0x0;
              }
              local_f0 = local_f8;
            }
            else {
              local_b0 = _xmlGetProp(local_f8,(xmlChar *)"href");
              if (local_b0 == (xmlChar *)0x0) {
                FUN_10022d5a6(param_1,local_f8,0x41c,
                              "xmlRelaxNGParse: include has no href attribute\n",0,0);
                local_f0 = local_f8;
              }
              else {
                local_a0 = _xmlNodeGetBase(local_f8->doc,local_f8);
                local_98 = _xmlBuildURI(local_b0,local_a0);
                if (local_98 == 0) {
                  FUN_10022d5a6(param_1,local_f8,0x411,"Failed to compute URL for include %s\n",
                                local_b0,0);
                  if (local_b0 != (xmlChar *)0x0) {
                    (*(code *)_xmlFree)(local_b0);
                  }
                  if (local_a0 != (xmlChar *)0x0) {
                    (*(code *)_xmlFree)(local_a0);
                  }
                  local_f0 = local_f8;
                }
                else {
                  if (local_b0 != (xmlChar *)0x0) {
                    (*(code *)_xmlFree)(local_b0);
                  }
                  if (local_a0 != (xmlChar *)0x0) {
                    (*(code *)_xmlFree)(local_a0);
                  }
                  local_a8 = _xmlGetProp(local_f8,(xmlChar *)"ns");
                  if (local_a8 == (xmlChar *)0x0) {
                    for (local_88 = local_f8->parent;
                        (local_88 != (xmlNodePtr)0x0 && (local_88->type == XML_ELEMENT_NODE));
                        local_88 = local_88->parent) {
                      local_a8 = _xmlGetProp(local_88,(xmlChar *)"ns");
                      if (local_a8 != (xmlChar *)0x0) break;
                    }
                  }
                  local_90 = (void *)FUN_10022f2ac(param_1,local_98,local_f8,local_a8);
                  if (local_a8 != (xmlChar *)0x0) {
                    (*(code *)_xmlFree)(local_a8);
                  }
                  if (local_90 != (void *)0x0) {
                    (*(code *)_xmlFree)(local_98);
                    local_f8->psvi = local_90;
                    goto LAB_10023ada7;
                  }
                  FUN_10022d5a6(param_1,local_f8,0x413,"Failed to load include %s\n",local_98,0);
                  (*(code *)_xmlFree)(local_98);
                  local_f0 = local_f8;
                }
              }
            }
          }
          else {
            local_e0 = _xmlGetProp(local_f8,(xmlChar *)"ns");
            if (local_e0 == (xmlChar *)0x0) {
              for (local_c0 = local_f8->parent;
                  (local_c0 != (xmlNodePtr)0x0 && (local_c0->type == XML_ELEMENT_NODE));
                  local_c0 = local_c0->parent) {
                local_e0 = _xmlGetProp(local_c0,(xmlChar *)"ns");
                if (local_e0 != (xmlChar *)0x0) break;
              }
            }
            local_e8 = _xmlGetProp(local_f8,(xmlChar *)"href");
            if (local_e8 == (xmlChar *)0x0) {
              FUN_10022d5a6(param_1,local_f8,0x41c,
                            "xmlRelaxNGParse: externalRef has no href attribute\n",0,0);
              if (local_e0 != (xmlChar *)0x0) {
                (*(code *)_xmlFree)(local_e0);
              }
              local_f0 = local_f8;
            }
            else {
              local_b8 = _xmlParseURI(local_e8);
              if (local_b8 == 0) {
                FUN_10022d5a6(param_1,local_f8,0x411,"Incorrect URI for externalRef %s\n",local_e8,0
                             );
                if (local_e0 != (xmlChar *)0x0) {
                  (*(code *)_xmlFree)(local_e0);
                }
                if (local_e8 != (xmlChar *)0x0) {
                  (*(code *)_xmlFree)(local_e8);
                }
                local_f0 = local_f8;
              }
              else if (*(long *)(local_b8 + 0x40) == 0) {
                _xmlFreeURI(local_b8);
                local_d8 = _xmlNodeGetBase(local_f8->doc,local_f8);
                local_d0 = _xmlBuildURI(local_e8,local_d8);
                if (local_d0 == 0) {
                  FUN_10022d5a6(param_1,local_f8,0x411,"Failed to compute URL for externalRef %s\n",
                                local_e8,0);
                  if (local_e0 != (xmlChar *)0x0) {
                    (*(code *)_xmlFree)(local_e0);
                  }
                  if (local_e8 != (xmlChar *)0x0) {
                    (*(code *)_xmlFree)(local_e8);
                  }
                  if (local_d8 != (xmlChar *)0x0) {
                    (*(code *)_xmlFree)(local_d8);
                  }
                  local_f0 = local_f8;
                }
                else {
                  if (local_e8 != (xmlChar *)0x0) {
                    (*(code *)_xmlFree)(local_e8);
                  }
                  if (local_d8 != (xmlChar *)0x0) {
                    (*(code *)_xmlFree)(local_d8);
                  }
                  local_c8 = (void *)FUN_10022fda1(param_1,local_d0,local_e0);
                  if (local_c8 != (void *)0x0) {
                    if (local_e0 != (xmlChar *)0x0) {
                      (*(code *)_xmlFree)(local_e0);
                    }
                    (*(code *)_xmlFree)(local_d0);
                    local_f8->psvi = local_c8;
                    goto LAB_10023ada7;
                  }
                  FUN_10022d5a6(param_1,local_f8,0x408,"Failed to load externalRef %s\n",local_d0,0)
                  ;
                  if (local_e0 != (xmlChar *)0x0) {
                    (*(code *)_xmlFree)(local_e0);
                  }
                  (*(code *)_xmlFree)(local_d0);
                  local_f0 = local_f8;
                }
              }
              else {
                FUN_10022d5a6(param_1,local_f8,0x411,
                              "Fragment forbidden in URI for externalRef %s\n",local_e8,0);
                if (local_e0 != (xmlChar *)0x0) {
                  (*(code *)_xmlFree)(local_e0);
                }
                _xmlFreeURI(local_b8);
                if (local_e8 != (xmlChar *)0x0) {
                  (*(code *)_xmlFree)(local_e8);
                }
                local_f0 = local_f8;
              }
            }
          }
          goto LAB_10023a032;
        }
      }
      if ((local_f8->parent != (_xmlNode *)0x0) && (local_f8->parent->type == XML_ELEMENT_NODE)) {
        iVar1 = _xmlStrEqual(local_f8->parent->name,(xmlChar *)"name");
        if (iVar1 == 0) {
          iVar1 = _xmlStrEqual(local_f8->parent->name,(xmlChar *)"value");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(local_f8->parent->name,(xmlChar *)"param");
            if (iVar1 == 0) goto LAB_10023a024;
          }
        }
        FUN_10022d5a6(param_1,local_f8,0x40b,"element %s doesn\'t allow foreign elements\n",
                      local_f8->parent->name,0);
      }
LAB_10023a024:
      local_f0 = local_f8;
LAB_10023a032:
      if (local_f8->next == (_xmlNode *)0x0) {
        do {
          local_f8 = local_f8->parent;
          if (local_f8 == (_xmlNode *)0x0) break;
          if (local_f8 == param_2) {
            local_f8 = (_xmlNode *)0x0;
            break;
          }
          if (local_f8->next != (_xmlNode *)0x0) {
            local_f8 = local_f8->next;
            break;
          }
        } while (local_f8 != (_xmlNode *)0x0);
      }
      else {
        local_f8 = local_f8->next;
      }
      goto LAB_10023b08a;
    }
    if ((local_f8->type != XML_TEXT_NODE) && (local_f8->type != XML_CDATA_SECTION_NODE)) {
      local_f0 = local_f8;
      goto LAB_10023a032;
    }
    iVar1 = FUN_10023256d(local_f8->content);
    if (iVar1 != 0) {
      if (local_f8->parent->type != XML_ELEMENT_NODE) {
        local_f0 = local_f8;
        goto LAB_10023a032;
      }
      iVar1 = _xmlStrEqual(local_f8->parent->name,(xmlChar *)"value");
      if (iVar1 == 0) {
        iVar1 = _xmlStrEqual(local_f8->parent->name,(xmlChar *)"param");
        if (iVar1 == 0) {
          local_f0 = local_f8;
        }
      }
    }
LAB_10023af7a:
    if ((((local_f8->children == (_xmlNode *)0x0) || (local_f8->children->type == XML_ENTITY_DECL))
        || (local_f8->children->type == XML_ENTITY_REF_NODE)) ||
       (local_f8->children->type == XML_ENTITY_NODE)) goto LAB_10023a032;
    local_f8 = local_f8->children;
  } while( true );
}

