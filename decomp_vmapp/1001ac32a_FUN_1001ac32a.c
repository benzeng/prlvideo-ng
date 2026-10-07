
bool FUN_1001ac32a(int param_1,int param_2,xmlXPathObjectPtr param_3,xmlXPathObjectPtr param_4)

{
  xmlNodeSetPtr pxVar1;
  xmlNodeSetPtr pxVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  double val;
  double dVar7;
  int local_3c;
  int local_38;
  
  bVar4 = false;
  bVar3 = false;
  if ((param_3 == (xmlXPathObjectPtr)0x0) ||
     ((param_3->type != XPATH_NODESET && (param_3->type != XPATH_XSLT_TREE)))) {
    _xmlXPathFreeObject(param_4);
    bVar3 = false;
  }
  else if ((param_4 == (xmlXPathObjectPtr)0x0) ||
          ((param_4->type != XPATH_NODESET && (param_4->type != XPATH_XSLT_TREE)))) {
    _xmlXPathFreeObject(param_3);
    _xmlXPathFreeObject(param_4);
    bVar3 = false;
  }
  else {
    pxVar1 = param_3->nodesetval;
    pxVar2 = param_4->nodesetval;
    if ((pxVar1 == (xmlNodeSetPtr)0x0) || (pxVar1->nodeNr < 1)) {
      _xmlXPathFreeObject(param_3);
      _xmlXPathFreeObject(param_4);
      bVar3 = false;
    }
    else if ((pxVar2 == (xmlNodeSetPtr)0x0) || (pxVar2->nodeNr < 1)) {
      _xmlXPathFreeObject(param_3);
      _xmlXPathFreeObject(param_4);
      bVar3 = false;
    }
    else {
      lVar6 = (*(code *)_xmlMalloc)((long)pxVar2->nodeNr * 8);
      if (lVar6 == 0) {
        FUN_1001a4e9b(0,"comparing nodesets\n");
        _xmlXPathFreeObject(param_3);
        _xmlXPathFreeObject(param_4);
        bVar3 = false;
      }
      else {
        for (local_3c = 0; local_3c < pxVar1->nodeNr; local_3c = local_3c + 1) {
          val = _xmlXPathCastNodeToNumber(pxVar1->nodeTab[local_3c]);
          iVar5 = _xmlXPathIsNaN(val);
          if (iVar5 == 0) {
            for (local_38 = 0; local_38 < pxVar2->nodeNr; local_38 = local_38 + 1) {
              if (!bVar4) {
                dVar7 = _xmlXPathCastNodeToNumber(pxVar2->nodeTab[local_38]);
                *(double *)((long)local_38 * 8 + lVar6) = dVar7;
              }
              iVar5 = _xmlXPathIsNaN(*(double *)((long)local_38 * 8 + lVar6));
              if (iVar5 == 0) {
                if ((param_1 == 0) || (param_2 == 0)) {
                  if ((param_1 == 0) || (param_2 != 0)) {
                    if ((param_1 == 0) && (param_2 != 0)) {
                      bVar3 = *(double *)((long)local_38 * 8 + lVar6) < val;
                    }
                    else if ((param_1 == 0) && (param_2 == 0)) {
                      bVar3 = *(double *)((long)local_38 * 8 + lVar6) <= val;
                    }
                  }
                  else {
                    bVar3 = val <= *(double *)((long)local_38 * 8 + lVar6);
                  }
                }
                else {
                  bVar3 = val < *(double *)((long)local_38 * 8 + lVar6);
                }
                if (bVar3 != false) break;
              }
            }
            if (bVar3 != false) break;
            bVar4 = true;
          }
        }
        (*(code *)_xmlFree)(lVar6);
        _xmlXPathFreeObject(param_3);
        _xmlXPathFreeObject(param_4);
      }
    }
  }
  return bVar3;
}

