
void _xmlXPathCountFunction(long param_1,int param_2)

{
  xmlNodePtr pxVar1;
  xmlXPathObjectPtr obj;
  undefined8 uVar2;
  _xmlNode *local_18;
  int local_c;
  
  if (param_1 != 0) {
    if (param_2 == 1) {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         ((**(int **)(param_1 + 0x20) != 1 && (**(int **)(param_1 + 0x20) != 9)))) {
        _xmlXPathErr(param_1,0xb);
      }
      else {
        obj = (xmlXPathObjectPtr)_valuePop(param_1);
        if ((obj == (xmlXPathObjectPtr)0x0) || (obj->nodesetval == (xmlNodeSetPtr)0x0)) {
          uVar2 = _xmlXPathNewFloat(0);
          _valuePush(param_1,uVar2);
        }
        else if ((obj->type == XPATH_NODESET) || (obj->type == XPATH_XSLT_TREE)) {
          uVar2 = _xmlXPathNewFloat((double)obj->nodesetval->nodeNr);
          _valuePush(param_1,uVar2);
        }
        else if ((obj->nodesetval->nodeNr == 1) && (obj->nodesetval->nodeTab != (xmlNodePtr *)0x0))
        {
          local_c = 0;
          pxVar1 = *obj->nodesetval->nodeTab;
          if (pxVar1 != (xmlNodePtr)0x0) {
            for (local_18 = pxVar1->children; local_18 != (_xmlNode *)0x0; local_18 = local_18->next
                ) {
              local_c = local_c + 1;
            }
          }
          uVar2 = _xmlXPathNewFloat((double)local_c);
          _valuePush(param_1,uVar2);
        }
        else {
          uVar2 = _xmlXPathNewFloat(0);
          _valuePush(param_1,uVar2);
        }
        _xmlXPathFreeObject(obj);
      }
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

