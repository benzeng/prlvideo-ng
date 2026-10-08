
uint FUN_1008ebcfd(long param_1,long param_2,int param_3,long *param_4,long *param_5)

{
  int iVar1;
  undefined4 uVar2;
  xmlElementType xVar3;
  xmlElementType xVar4;
  long lVar5;
  xmlChar *str1;
  xmlNodeSetPtr pxVar6;
  xmlGenericErrorFunc pxVar7;
  int iVar8;
  xmlXPathObjectPtr obj;
  undefined8 uVar9;
  xmlNodeSetPtr pxVar10;
  xmlGenericErrorFunc *ppxVar11;
  void **ppvVar12;
  uint local_c8;
  long *local_c0;
  long *local_b8;
  xmlChar *local_78;
  int local_6c;
  uint local_68;
  int local_64;
  code *local_58;
  xmlNodePtr local_48;
  
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  xVar3 = *(xmlElementType *)(param_2 + 0x14);
  lVar5 = *(long *)(param_2 + 0x18);
  str1 = *(xmlChar **)(param_2 + 0x20);
  local_78 = (xmlChar *)0x0;
  local_68 = 0;
  local_58 = (code *)0x0;
  if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 1)) {
    _xmlXPathErr(param_1,0xb);
    local_c8 = 0;
  }
  else {
    obj = (xmlXPathObjectPtr)_valuePop(param_1);
    if ((lVar5 == 0) ||
       (local_78 = (xmlChar *)_xmlXPathNsLookup(*(undefined8 *)(param_1 + 0x18),lVar5),
       local_78 != (xmlChar *)0x0)) {
      local_c0 = param_5;
      local_b8 = param_4;
      switch(iVar1) {
      case 1:
        local_b8 = (long *)0x0;
        local_58 = _xmlXPathNextAncestor;
        break;
      case 2:
        local_b8 = (long *)0x0;
        local_58 = _xmlXPathNextAncestorOrSelf;
        break;
      case 3:
        local_b8 = (long *)0x0;
        local_c0 = (long *)0x0;
        local_58 = _xmlXPathNextAttribute;
        break;
      case 4:
        local_c0 = (long *)0x0;
        local_58 = _xmlXPathNextChild;
        break;
      case 5:
        local_c0 = (long *)0x0;
        local_58 = _xmlXPathNextDescendant;
        break;
      case 6:
        local_c0 = (long *)0x0;
        local_58 = _xmlXPathNextDescendantOrSelf;
        break;
      case 7:
        local_c0 = (long *)0x0;
        local_58 = _xmlXPathNextFollowing;
        break;
      case 8:
        local_c0 = (long *)0x0;
        local_58 = _xmlXPathNextFollowingSibling;
        break;
      case 9:
        local_c0 = (long *)0x0;
        local_b8 = (long *)0x0;
        local_58 = _xmlXPathNextNamespace;
        break;
      case 10:
        local_b8 = (long *)0x0;
        local_58 = _xmlXPathNextParent;
        break;
      case 0xb:
        local_b8 = (long *)0x0;
        local_58 = FUN_1008e2ebf;
        break;
      case 0xc:
        local_b8 = (long *)0x0;
        local_58 = _xmlXPathNextPrecedingSibling;
        break;
      case 0xd:
        local_b8 = (long *)0x0;
        local_c0 = (long *)0x0;
        local_58 = _xmlXPathNextSelf;
      }
      if (local_58 == (code *)0x0) {
        _xmlXPathFreeObject(obj);
        local_c8 = 0;
      }
      else {
        pxVar6 = obj->nodesetval;
        if (pxVar6 == (xmlNodeSetPtr)0x0) {
          _xmlXPathFreeObject(obj);
          uVar9 = _xmlXPathWrapNodeSet(0);
          _valuePush(param_1,uVar9);
          local_c8 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
          pxVar10 = _xmlXPathNodeSetCreate((xmlNodePtr)0x0);
          for (local_64 = 0; local_64 < pxVar6->nodeNr; local_64 = local_64 + 1) {
            *(xmlNodePtr *)(*(long *)(param_1 + 0x18) + 8) = pxVar6->nodeTab[local_64];
            local_48 = (xmlNodePtr)0x0;
            local_6c = 0;
            do {
              local_48 = (xmlNodePtr)(*local_58)(param_1,local_48);
              if ((((local_48 == (xmlNodePtr)0x0) ||
                   ((local_b8 != (long *)0x0 && ((xmlNodePtr)*local_b8 == local_48)))) ||
                  (((local_68 & 0xff) == 0 &&
                   (((local_b8 != (long *)0x0 && (*local_b8 != 0)) &&
                    (iVar8 = _xmlXPathCmpNodes((xmlNodePtr)*local_b8,local_48), -1 < iVar8)))))) ||
                 (((local_c0 != (long *)0x0 && ((xmlNodePtr)*local_c0 == local_48)) ||
                  ((((local_68 & 0xff) == 0 && ((local_c0 != (long *)0x0 && (*local_c0 != 0)))) &&
                   (iVar8 = _xmlXPathCmpNodes(local_48,(xmlNodePtr)*local_c0), -1 < iVar8))))))
              break;
              local_68 = local_68 + 1;
              switch(uVar2) {
              case 0:
                *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = uVar9;
                ppxVar11 = ___xmlGenericError();
                pxVar7 = *ppxVar11;
                ppvVar12 = ___xmlGenericErrorContext();
                (*pxVar7)(*ppvVar12,"Internal error at %s:%d\n","xpath.c",0x2623);
                return 0;
              case 1:
                if ((((local_48->type == xVar3) ||
                     ((xVar3 == 0 &&
                      (((((local_48->type == XML_DOCUMENT_NODE ||
                          (local_48->type == XML_HTML_DOCUMENT_NODE)) ||
                         ((local_48->type == XML_ELEMENT_NODE ||
                          ((local_48->type == XML_PI_NODE || (local_48->type == XML_COMMENT_NODE))))
                         )) || (local_48->type == XML_CDATA_SECTION_NODE)) ||
                       (local_48->type == XML_TEXT_NODE)))))) ||
                    ((xVar3 == XML_TEXT_NODE && (local_48->type == XML_CDATA_SECTION_NODE)))) &&
                   (local_6c = local_6c + 1, local_6c == param_3)) {
                  _xmlXPathNodeSetAddUnique(pxVar10,local_48);
                }
                break;
              case 2:
                if ((local_48->type == XML_PI_NODE) &&
                   (((str1 == (xmlChar *)0x0 ||
                     (iVar8 = _xmlStrEqual(str1,local_48->name), iVar8 != 0)) &&
                    (local_6c = local_6c + 1, local_6c == param_3)))) {
                  _xmlXPathNodeSetAddUnique(pxVar10,local_48);
                }
                break;
              case 3:
                if (iVar1 == 3) {
                  if ((local_48->type == XML_ATTRIBUTE_NODE) &&
                     (local_6c = local_6c + 1, local_6c == param_3)) {
                    _xmlXPathNodeSetAddUnique(pxVar10,local_48);
                  }
                }
                else if (iVar1 == 9) {
                  if ((local_48->type == XML_NAMESPACE_DECL) &&
                     (local_6c = local_6c + 1, local_6c == param_3)) {
                    _xmlXPathNodeSetAddNs
                              (pxVar10,*(undefined8 *)(*(long *)(param_1 + 0x18) + 8),local_48);
                  }
                }
                else if (local_48->type == XML_ELEMENT_NODE) {
                  if (lVar5 == 0) {
                    local_6c = local_6c + 1;
                    if (local_6c == param_3) {
                      _xmlXPathNodeSetAddUnique(pxVar10,local_48);
                    }
                  }
                  else if (((local_48->ns != (xmlNs *)0x0) &&
                           (iVar8 = _xmlStrEqual(local_78,local_48->ns->href), iVar8 != 0)) &&
                          (local_6c = local_6c + 1, local_6c == param_3)) {
                    _xmlXPathNodeSetAddUnique(pxVar10,local_48);
                  }
                }
                break;
              case 4:
                ppxVar11 = ___xmlGenericError();
                pxVar7 = *ppxVar11;
                ppvVar12 = ___xmlGenericErrorContext();
                (*pxVar7)(*ppvVar12,"Unimplemented block at %s:%d\n","xpath.c",0x265d);
                break;
              case 5:
                xVar4 = local_48->type;
                if (xVar4 == XML_ATTRIBUTE_NODE) {
                  iVar8 = _xmlStrEqual(str1,local_48->name);
                  if (iVar8 != 0) {
                    if (lVar5 == 0) {
                      if (((local_48->ns == (xmlNs *)0x0) ||
                          (local_48->ns->prefix == (xmlChar *)0x0)) &&
                         (local_6c = local_6c + 1, local_6c == param_3)) {
                        _xmlXPathNodeSetAddUnique(pxVar10,local_48);
                      }
                    }
                    else if (((local_48->ns != (xmlNs *)0x0) &&
                             (iVar8 = _xmlStrEqual(local_78,local_48->ns->href), iVar8 != 0)) &&
                            (local_6c = local_6c + 1, local_6c == param_3)) {
                      _xmlXPathNodeSetAddUnique(pxVar10,local_48);
                    }
                  }
                }
                else if (xVar4 == XML_NAMESPACE_DECL) {
                  if (((local_48->type == XML_NAMESPACE_DECL) &&
                      (local_48->children != (_xmlNode *)0x0)) &&
                     ((str1 != (xmlChar *)0x0 &&
                      ((iVar8 = _xmlStrEqual((xmlChar *)local_48->children,str1), iVar8 != 0 &&
                       (local_6c = local_6c + 1, local_6c == param_3)))))) {
                    _xmlXPathNodeSetAddNs
                              (pxVar10,*(undefined8 *)(*(long *)(param_1 + 0x18) + 8),local_48);
                  }
                }
                else if ((xVar4 == XML_ELEMENT_NODE) &&
                        (iVar8 = _xmlStrEqual(str1,local_48->name), iVar8 != 0)) {
                  if (lVar5 == 0) {
                    if ((local_48->ns == (xmlNs *)0x0) &&
                       (local_6c = local_6c + 1, local_6c == param_3)) {
                      _xmlXPathNodeSetAddUnique(pxVar10,local_48);
                    }
                  }
                  else if (((local_48->ns != (xmlNs *)0x0) &&
                           (iVar8 = _xmlStrEqual(local_78,local_48->ns->href), iVar8 != 0)) &&
                          (local_6c = local_6c + 1, local_6c == param_3)) {
                    _xmlXPathNodeSetAddUnique(pxVar10,local_48);
                  }
                }
              }
            } while (local_6c < param_3);
          }
          *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = uVar9;
          uVar9 = _xmlXPathWrapNodeSet(pxVar10);
          _valuePush(param_1,uVar9);
          if ((obj->boolval != 0) && (obj->user != (void *)0x0)) {
            *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x10) = 1;
            *(void **)(*(long *)(param_1 + 0x20) + 0x28) = obj->user;
            obj->user = (void *)0x0;
            obj->boolval = 0;
          }
          _xmlXPathFreeObject(obj);
          local_c8 = local_68;
        }
      }
    }
    else {
      _xmlXPathFreeObject(obj);
      _xmlXPathErr(param_1,0x13);
      local_c8 = 0;
    }
  }
  return local_c8;
}

