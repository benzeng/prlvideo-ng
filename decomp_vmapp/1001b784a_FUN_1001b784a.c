
uint FUN_1001b784a(long param_1,long param_2,long *param_3,long *param_4)

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
  xmlGenericErrorFunc *ppxVar10;
  void **ppvVar11;
  undefined8 uVar12;
  xmlXPathObjectPtr obj_00;
  uint local_d0;
  long *local_c8;
  long *local_c0;
  xmlChar *local_88;
  int local_80;
  uint local_7c;
  xmlNodeSetPtr local_78;
  xmlNodeSetPtr local_70;
  code *local_68;
  code *local_58;
  xmlNodePtr local_50;
  
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  xVar3 = *(xmlElementType *)(param_2 + 0x14);
  lVar5 = *(long *)(param_2 + 0x18);
  str1 = *(xmlChar **)(param_2 + 0x20);
  local_88 = (xmlChar *)0x0;
  local_7c = 0;
  local_68 = (code *)0x0;
  if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 1)) {
    _xmlXPathErr(param_1,0xb);
    local_d0 = 0;
  }
  else {
    obj = (xmlXPathObjectPtr)_valuePop(param_1);
    local_58 = _xmlXPathNodeSetMerge;
    if ((lVar5 == 0) ||
       (local_88 = (xmlChar *)_xmlXPathNsLookup(*(undefined8 *)(param_1 + 0x18),lVar5),
       local_88 != (xmlChar *)0x0)) {
      local_c8 = param_4;
      local_c0 = param_3;
      switch(iVar1) {
      case 1:
        local_c0 = (long *)0x0;
        local_68 = _xmlXPathNextAncestor;
        break;
      case 2:
        local_c0 = (long *)0x0;
        local_68 = _xmlXPathNextAncestorOrSelf;
        break;
      case 3:
        local_c0 = (long *)0x0;
        local_c8 = (long *)0x0;
        local_68 = _xmlXPathNextAttribute;
        local_58 = FUN_1001a90b8;
        break;
      case 4:
        local_c8 = (long *)0x0;
        local_68 = _xmlXPathNextChild;
        local_58 = FUN_1001a90b8;
        break;
      case 5:
        local_c8 = (long *)0x0;
        local_68 = _xmlXPathNextDescendant;
        break;
      case 6:
        local_c8 = (long *)0x0;
        local_68 = _xmlXPathNextDescendantOrSelf;
        break;
      case 7:
        local_c8 = (long *)0x0;
        local_68 = _xmlXPathNextFollowing;
        break;
      case 8:
        local_c8 = (long *)0x0;
        local_68 = _xmlXPathNextFollowingSibling;
        break;
      case 9:
        local_c0 = (long *)0x0;
        local_c8 = (long *)0x0;
        local_68 = _xmlXPathNextNamespace;
        local_58 = FUN_1001a90b8;
        break;
      case 10:
        local_c0 = (long *)0x0;
        local_68 = _xmlXPathNextParent;
        break;
      case 0xb:
        local_c0 = (long *)0x0;
        local_68 = FUN_1001af597;
        break;
      case 0xc:
        local_c0 = (long *)0x0;
        local_68 = _xmlXPathNextPrecedingSibling;
        break;
      case 0xd:
        local_c0 = (long *)0x0;
        local_c8 = (long *)0x0;
        local_68 = _xmlXPathNextSelf;
        local_58 = FUN_1001a90b8;
      }
      if (local_68 == (code *)0x0) {
        _xmlXPathFreeObject(obj);
        local_d0 = 0;
      }
      else {
        pxVar6 = obj->nodesetval;
        if (pxVar6 == (xmlNodeSetPtr)0x0) {
          _xmlXPathFreeObject(obj);
          uVar9 = _xmlXPathWrapNodeSet(0);
          _valuePush(param_1,uVar9);
          local_d0 = 0;
        }
        else {
          local_78 = (xmlNodeSetPtr)0x0;
          uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
          for (local_80 = 0; local_80 < pxVar6->nodeNr; local_80 = local_80 + 1) {
            *(xmlNodePtr *)(*(long *)(param_1 + 0x18) + 8) = pxVar6->nodeTab[local_80];
            local_50 = (xmlNodePtr)0x0;
            local_70 = _xmlXPathNodeSetCreate((xmlNodePtr)0x0);
            do {
              local_50 = (xmlNodePtr)(*local_68)(param_1,local_50);
              if ((((local_50 == (xmlNodePtr)0x0) ||
                   ((local_c0 != (long *)0x0 && ((xmlNodePtr)*local_c0 == local_50)))) ||
                  (((local_7c & 0xff) == 0 &&
                   (((local_c0 != (long *)0x0 && (*local_c0 != 0)) &&
                    (iVar8 = _xmlXPathCmpNodes((xmlNodePtr)*local_c0,local_50), -1 < iVar8)))))) ||
                 (((local_c8 != (long *)0x0 && ((xmlNodePtr)*local_c8 == local_50)) ||
                  ((((local_7c & 0xff) == 0 && ((local_c8 != (long *)0x0 && (*local_c8 != 0)))) &&
                   (iVar8 = _xmlXPathCmpNodes(local_50,(xmlNodePtr)*local_c8), -1 < iVar8))))))
              break;
              local_7c = local_7c + 1;
              switch(uVar2) {
              case 0:
                *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = uVar9;
                _xmlXPathFreeObject(obj);
                ppxVar10 = ___xmlGenericError();
                pxVar7 = *ppxVar10;
                ppvVar11 = ___xmlGenericErrorContext();
                (*pxVar7)(*ppvVar11,"Internal error at %s:%d\n","xpath.c",0x2472);
                return local_7c;
              case 1:
                if (((local_50->type == xVar3) ||
                    ((xVar3 == 0 &&
                     (((((local_50->type == XML_DOCUMENT_NODE ||
                         (local_50->type == XML_HTML_DOCUMENT_NODE)) ||
                        (local_50->type == XML_ELEMENT_NODE)) ||
                       (((local_50->type == XML_NAMESPACE_DECL ||
                         (local_50->type == XML_ATTRIBUTE_NODE)) ||
                        ((local_50->type == XML_PI_NODE ||
                         ((local_50->type == XML_COMMENT_NODE ||
                          (local_50->type == XML_CDATA_SECTION_NODE)))))))) ||
                      (local_50->type == XML_TEXT_NODE)))))) ||
                   ((xVar3 == XML_TEXT_NODE && (local_50->type == XML_CDATA_SECTION_NODE)))) {
                  _xmlXPathNodeSetAddUnique(local_70,local_50);
                }
                break;
              case 2:
                if ((local_50->type == XML_PI_NODE) &&
                   ((str1 == (xmlChar *)0x0 ||
                    (iVar8 = _xmlStrEqual(str1,local_50->name), iVar8 != 0)))) {
                  _xmlXPathNodeSetAddUnique(local_70,local_50);
                }
                break;
              case 3:
                if (iVar1 == 3) {
                  if (local_50->type == XML_ATTRIBUTE_NODE) {
                    _xmlXPathNodeSetAddUnique(local_70,local_50);
                  }
                }
                else if (iVar1 == 9) {
                  if (local_50->type == XML_NAMESPACE_DECL) {
                    _xmlXPathNodeSetAddNs
                              (local_70,*(undefined8 *)(*(long *)(param_1 + 0x18) + 8),local_50);
                  }
                }
                else if (local_50->type == XML_ELEMENT_NODE) {
                  if (lVar5 == 0) {
                    _xmlXPathNodeSetAddUnique(local_70,local_50);
                  }
                  else if ((local_50->ns != (xmlNs *)0x0) &&
                          (iVar8 = _xmlStrEqual(local_88,local_50->ns->href), iVar8 != 0)) {
                    _xmlXPathNodeSetAddUnique(local_70,local_50);
                  }
                }
                break;
              case 4:
                ppxVar10 = ___xmlGenericError();
                pxVar7 = *ppxVar10;
                ppvVar11 = ___xmlGenericErrorContext();
                (*pxVar7)(*ppvVar11,"Unimplemented block at %s:%d\n","xpath.c",0x24b4);
                break;
              case 5:
                xVar4 = local_50->type;
                if (xVar4 == XML_ATTRIBUTE_NODE) {
                  iVar8 = _xmlStrEqual(str1,local_50->name);
                  if (iVar8 != 0) {
                    if (lVar5 == 0) {
                      if ((local_50->ns == (xmlNs *)0x0) || (local_50->ns->prefix == (xmlChar *)0x0)
                         ) {
                        _xmlXPathNodeSetAddUnique(local_70,local_50);
                      }
                    }
                    else if ((local_50->ns != (xmlNs *)0x0) &&
                            (iVar8 = _xmlStrEqual(local_88,local_50->ns->href), iVar8 != 0)) {
                      _xmlXPathNodeSetAddUnique(local_70,local_50);
                    }
                  }
                }
                else if (xVar4 == XML_NAMESPACE_DECL) {
                  if ((((local_50->type == XML_NAMESPACE_DECL) &&
                       (local_50->children != (_xmlNode *)0x0)) && (str1 != (xmlChar *)0x0)) &&
                     (iVar8 = _xmlStrEqual((xmlChar *)local_50->children,str1), iVar8 != 0)) {
                    _xmlXPathNodeSetAddNs
                              (local_70,*(undefined8 *)(*(long *)(param_1 + 0x18) + 8),local_50);
                  }
                }
                else if ((xVar4 == XML_ELEMENT_NODE) &&
                        (iVar8 = _xmlStrEqual(str1,local_50->name), iVar8 != 0)) {
                  if (lVar5 == 0) {
                    if (local_50->ns == (xmlNs *)0x0) {
                      _xmlXPathNodeSetAddUnique(local_70,local_50);
                    }
                  }
                  else if ((local_50->ns != (xmlNs *)0x0) &&
                          (iVar8 = _xmlStrEqual(local_88,local_50->ns->href), iVar8 != 0)) {
                    _xmlXPathNodeSetAddUnique(local_70,local_50);
                  }
                }
              }
            } while (local_50 != (xmlNodePtr)0x0);
            if (((*(int *)(param_2 + 8) != -1) && (local_70 != (xmlNodeSetPtr)0x0)) &&
               (0 < local_70->nodeNr)) {
              uVar12 = _xmlXPathWrapNodeSet(local_70);
              _valuePush(param_1,uVar12);
              FUN_1001b9e7d(param_1,*(long *)(*(long *)(param_1 + 0x38) + 8) +
                                    (long)*(int *)(param_2 + 8) * 0x38);
              if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 1)) {
                _xmlXPathErr(param_1,0xb);
                return 0;
              }
              obj_00 = (xmlXPathObjectPtr)_valuePop(param_1);
              local_70 = obj_00->nodesetval;
              obj_00->nodesetval = (xmlNodeSetPtr)0x0;
              _xmlXPathFreeObject(obj_00);
              if (*(int *)(param_1 + 0x10) != 0) {
                _xmlXPathFreeObject(obj);
                _xmlXPathFreeNodeSet(local_70);
                return 0;
              }
            }
            if (local_78 == (xmlNodeSetPtr)0x0) {
              local_78 = local_70;
            }
            else {
              local_78 = (xmlNodeSetPtr)(*local_58)(local_78,local_70);
              _xmlXPathFreeNodeSet(local_70);
            }
          }
          *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = uVar9;
          uVar9 = _xmlXPathWrapNodeSet(local_78);
          _valuePush(param_1,uVar9);
          if ((obj->boolval != 0) && (obj->user != (void *)0x0)) {
            *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x10) = 1;
            *(void **)(*(long *)(param_1 + 0x20) + 0x28) = obj->user;
            obj->user = (void *)0x0;
            obj->boolval = 0;
          }
          _xmlXPathFreeObject(obj);
          local_d0 = local_7c;
        }
      }
    }
    else {
      _xmlXPathFreeObject(obj);
      _xmlXPathErr(param_1,0x13);
      local_d0 = 0;
    }
  }
  return local_d0;
}

