
undefined4 FUN_1008f91cf(long *param_1,undefined8 param_2,int param_3)

{
  xmlNodeSetPtr pxVar1;
  int iVar2;
  long lVar3;
  xmlNodePtr pxVar4;
  undefined8 uVar5;
  xmlXPathObjectPtr obj;
  xmlChar *pxVar6;
  xmlChar *pxVar7;
  xmlChar *uri;
  ulong uVar8;
  undefined4 local_b8;
  long local_90;
  xmlChar *local_80;
  xmlChar *local_78;
  int local_70;
  xmlXPathContextPtr local_60;
  xmlNodePtr local_40;
  xmlChar *local_38;
  
  local_78 = (xmlChar *)0x0;
  lVar3 = _xmlParseURI(param_2);
  if (lVar3 == 0) {
    FUN_1008f6fe0(param_1,*(undefined8 *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x18),0x645,
                  "invalid value URI %s\n",param_2);
    local_b8 = 0xffffffff;
  }
  else {
    if (*(long *)(lVar3 + 0x40) != 0) {
      local_78 = *(xmlChar **)(lVar3 + 0x40);
      *(undefined8 *)(lVar3 + 0x40) = 0;
    }
    if (((param_1[3] != 0) && (*(long *)(param_1[3] + (long)param_3 * 8) != 0)) &&
       (*(long *)(*(long *)(param_1[3] + (long)param_3 * 8) + 8) != 0)) {
      if (local_78 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_78);
      }
      local_78 = _xmlStrdup(*(xmlChar **)(*(long *)(param_1[3] + (long)param_3 * 8) + 8));
    }
    local_80 = (xmlChar *)_xmlSaveUri(lVar3);
    _xmlFreeURI(lVar3);
    if (local_80 == (xmlChar *)0x0) {
      FUN_1008f6fe0(param_1,*(undefined8 *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x18),0x645,
                    "invalid value URI %s\n",param_2);
      if (local_78 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_78);
      }
      local_b8 = 0xffffffff;
    }
    else {
      if (((*local_80 == '\0') || (*local_80 == '#')) ||
         ((*param_1 != 0 &&
          (iVar2 = _xmlStrEqual(local_80,*(xmlChar **)(*param_1 + 0x88)), iVar2 != 0)))) {
        local_90 = 0;
      }
      else {
        for (local_70 = 0; local_70 < *(int *)((long)param_1 + 0xc); local_70 = local_70 + 1) {
          iVar2 = _xmlStrEqual(local_80,(xmlChar *)
                                        **(undefined8 **)(param_1[3] + (long)local_70 * 8));
          if ((iVar2 != 0) && (*(long *)(*(long *)(param_1[3] + (long)local_70 * 8) + 0x10) != 0)) {
            local_90 = *(long *)(*(long *)(param_1[3] + (long)local_70 * 8) + 0x10);
            goto LAB_1008f964b;
          }
        }
        lVar3 = param_1[0xb];
        if (local_78 != (xmlChar *)0x0) {
          *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 2;
        }
        local_90 = FUN_1008f7883(param_1,local_80);
        *(int *)(param_1 + 0xb) = (int)lVar3;
        if (local_90 == 0) {
          (*(code *)_xmlFree)(local_80);
          if (local_78 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_78);
          }
          return 0xffffffff;
        }
        *(long *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x10) = local_90;
        iVar2 = _xmlStrEqual(local_80,*(xmlChar **)(local_90 + 0x88));
        local_70 = param_3;
        if (iVar2 == 0) {
          (*(code *)_xmlFree)(local_80);
          local_80 = _xmlStrdup(*(xmlChar **)(local_90 + 0x88));
        }
        do {
          local_70 = local_70 + 1;
          if (*(int *)((long)param_1 + 0xc) <= local_70) goto LAB_1008f9617;
          iVar2 = _xmlStrEqual(local_80,(xmlChar *)
                                        **(undefined8 **)(param_1[3] + (long)local_70 * 8));
        } while (iVar2 == 0);
        lVar3 = *(long *)(param_1[3] + (long)param_3 * 8);
        *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x2c) + 1;
LAB_1008f9617:
        FUN_1008f904f(param_1,*param_1,local_90);
        FUN_1008f7f5a(param_1,local_90,local_80);
      }
LAB_1008f964b:
      if (local_78 == (xmlChar *)0x0) {
        if (local_90 == 0) {
          lVar3 = *(long *)(param_1[3] + (long)param_3 * 8);
          pxVar4 = _xmlCopyNodeList(*(xmlNodePtr *)(*param_1 + 0x18));
          *(xmlNodePtr *)(lVar3 + 0x20) = pxVar4;
        }
        else {
          lVar3 = *(long *)(param_1[3] + (long)param_3 * 8);
          uVar5 = FUN_1008f83fe(param_1,*param_1,local_90,*(undefined8 *)(local_90 + 0x18));
          *(undefined8 *)(lVar3 + 0x20) = uVar5;
        }
      }
      else {
        if (local_90 == 0) {
          local_60 = (xmlXPathContextPtr)
                     _xmlXPtrNewContext(*param_1,*(undefined8 *)
                                                  (*(long *)(param_1[3] + (long)param_3 * 8) + 0x18)
                                        ,0);
        }
        else {
          local_60 = (xmlXPathContextPtr)_xmlXPtrNewContext(local_90,0,0);
        }
        if (local_60 == (xmlXPathContextPtr)0x0) {
          FUN_1008f6fe0(param_1,*(undefined8 *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x18),
                        0x64c,"could not create XPointer context\n",0);
          (*(code *)_xmlFree)(local_80);
          (*(code *)_xmlFree)(local_78);
          return 0xffffffff;
        }
        obj = (xmlXPathObjectPtr)_xmlXPtrEval(local_78,local_60);
        if (obj == (xmlXPathObjectPtr)0x0) {
          FUN_1008f6fe0(param_1,*(undefined8 *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x18),
                        0x64c,"XPointer evaluation failed: #%s\n",local_78);
          _xmlXPathFreeContext(local_60);
          (*(code *)_xmlFree)(local_80);
          (*(code *)_xmlFree)(local_78);
          return 0xffffffff;
        }
        if (obj->type < (XPATH_USERS|XPATH_BOOLEAN)) {
          uVar8 = 1L << ((byte)obj->type & 0x3f);
          if ((uVar8 & 0x33d) != 0) {
            FUN_1008f6fe0(param_1,*(undefined8 *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x18),
                          0x64d,"XPointer is not a range: #%s\n",local_78);
            _xmlXPathFreeContext(local_60);
            (*(code *)_xmlFree)(local_80);
            (*(code *)_xmlFree)(local_78);
            return 0xffffffff;
          }
          if (((uVar8 & 2) != 0) &&
             ((obj->nodesetval == (xmlNodeSetPtr)0x0 || (obj->nodesetval->nodeNr < 1)))) {
            _xmlXPathFreeContext(local_60);
            (*(code *)_xmlFree)(local_80);
            (*(code *)_xmlFree)(local_78);
            return 0xffffffff;
          }
        }
        pxVar1 = obj->nodesetval;
        if (pxVar1 != (xmlNodeSetPtr)0x0) {
          for (local_70 = 0; local_70 < pxVar1->nodeNr; local_70 = local_70 + 1) {
            if (pxVar1->nodeTab[local_70] != (xmlNodePtr)0x0) {
              switch(pxVar1->nodeTab[local_70]->type) {
              case XML_ELEMENT_NODE:
                pxVar4 = pxVar1->nodeTab[local_70];
                pxVar6 = _xmlNodeGetBase(pxVar4->doc,pxVar4);
                if (pxVar6 != (xmlChar *)0x0) {
                  iVar2 = _xmlStrEqual(pxVar6,pxVar4->doc->URL);
                  if (iVar2 == 0) {
                    _xmlNodeSetBase(pxVar4,pxVar6);
                  }
                  (*(code *)_xmlFree)(pxVar6);
                }
                break;
              case XML_ATTRIBUTE_NODE:
                FUN_1008f6fe0(param_1,*(undefined8 *)
                                       (*(long *)(param_1[3] + (long)param_3 * 8) + 0x18),0x64d,
                              "XPointer selects an attribute: #%s\n",local_78);
                pxVar1->nodeTab[local_70] = (xmlNodePtr)0x0;
                break;
              case XML_DOCUMENT_TYPE_NODE:
              case XML_DOCUMENT_FRAG_NODE:
              case XML_NOTATION_NODE:
              case XML_DTD_NODE:
              case XML_ELEMENT_DECL:
              case XML_ATTRIBUTE_DECL:
              case XML_ENTITY_DECL:
              case XML_XINCLUDE_START:
              case XML_XINCLUDE_END:
                FUN_1008f6fe0(param_1,*(undefined8 *)
                                       (*(long *)(param_1[3] + (long)param_3 * 8) + 0x18),0x64d,
                              "XPointer selects unexpected nodes: #%s\n",local_78);
                pxVar1->nodeTab[local_70] = (xmlNodePtr)0x0;
                pxVar1->nodeTab[local_70] = (xmlNodePtr)0x0;
                break;
              case XML_NAMESPACE_DECL:
                FUN_1008f6fe0(param_1,*(undefined8 *)
                                       (*(long *)(param_1[3] + (long)param_3 * 8) + 0x18),0x64d,
                              "XPointer selects a namespace: #%s\n",local_78);
                pxVar1->nodeTab[local_70] = (xmlNodePtr)0x0;
              }
            }
          }
        }
        if (local_90 == 0) {
          *(xmlXPathObjectPtr *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x30) = obj;
          *(undefined8 *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x20) = 0;
        }
        else {
          lVar3 = *(long *)(param_1[3] + (long)param_3 * 8);
          uVar5 = FUN_1008f8a9f(param_1,*param_1,local_90,obj);
          *(undefined8 *)(lVar3 + 0x20) = uVar5;
          _xmlXPathFreeObject(obj);
        }
        _xmlXPathFreeContext(local_60);
        (*(code *)_xmlFree)(local_78);
      }
      if (((local_90 != 0) && (local_80 != (xmlChar *)0x0)) &&
         (pxVar6 = _xmlStrchr(local_80,'/'), pxVar6 != (xmlChar *)0x0)) {
        pxVar6 = _xmlGetNsProp(*(xmlNodePtr *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x18),
                               (xmlChar *)"base",(xmlChar *)"http://www.w3.org/XML/1998/namespace");
        local_38 = pxVar6;
        if (pxVar6 == (xmlChar *)0x0) {
          local_38 = (xmlChar *)_xmlBuildRelativeURI(local_80,param_1[0xc]);
          if (local_38 == (xmlChar *)0x0) {
            FUN_1008f6fe0(param_1,*(undefined8 *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x18),
                          0x645,"trying to build relative URI from %s\n",local_80);
            local_38 = pxVar6;
          }
          else {
            pxVar7 = _xmlStrchr(local_38,'/');
            if (pxVar7 == (xmlChar *)0x0) {
              (*(code *)_xmlFree)(local_38);
              local_38 = pxVar6;
            }
          }
        }
        if (local_38 != (xmlChar *)0x0) {
          for (local_40 = *(xmlNodePtr *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x20);
              local_40 != (xmlNodePtr)0x0; local_40 = local_40->next) {
            if (local_40->type == XML_ELEMENT_NODE) {
              pxVar6 = _xmlNodeGetBase(local_40->doc,local_40);
              if (pxVar6 == (xmlChar *)0x0) {
                _xmlNodeSetBase(local_40,local_38);
              }
              else {
                iVar2 = _xmlStrEqual(pxVar6,local_40->doc->URL);
                if (iVar2 == 0) {
                  pxVar7 = _xmlGetNsProp(local_40,(xmlChar *)"base",
                                         (xmlChar *)"http://www.w3.org/XML/1998/namespace");
                  if (pxVar7 != (xmlChar *)0x0) {
                    uri = (xmlChar *)_xmlBuildURI(pxVar7,local_38);
                    if (uri == (xmlChar *)0x0) {
                      FUN_1008f6fe0(param_1,*(undefined8 *)
                                             (*(long *)(param_1[3] + (long)param_3 * 8) + 0x18),
                                    0x645,"trying to rebuild base from %s\n",pxVar7);
                    }
                    else {
                      _xmlNodeSetBase(local_40,uri);
                      (*(code *)_xmlFree)(uri);
                    }
                    (*(code *)_xmlFree)(pxVar7);
                  }
                }
                else {
                  _xmlNodeSetBase(local_40,local_38);
                }
                (*(code *)_xmlFree)(pxVar6);
              }
            }
          }
          (*(code *)_xmlFree)(local_38);
        }
      }
      if (((param_3 < *(int *)((long)param_1 + 0xc)) &&
          (*(long *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x10) != 0)) &&
         (*(int *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x2c) < 2)) {
        _xmlFreeDoc(*(xmlDocPtr *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x10));
        *(undefined8 *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x10) = 0;
      }
      (*(code *)_xmlFree)(local_80);
      local_b8 = 0;
    }
  }
  return local_b8;
}

