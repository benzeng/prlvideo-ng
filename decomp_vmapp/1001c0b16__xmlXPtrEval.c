
xmlXPathObjectPtr _xmlXPtrEval(long param_1,long *param_2)

{
  long lVar1;
  xmlXPathObjectPtr obj;
  xmlXPathObjectPtr local_50;
  xmlXPathObjectPtr local_30;
  int local_14;
  
  local_30 = (xmlXPathObjectPtr)0x0;
  local_14 = 0;
  _xmlXPathInit();
  if ((param_2 == (long *)0x0) || (param_1 == 0)) {
    local_50 = (xmlXPathObjectPtr)0x0;
  }
  else {
    lVar1 = _xmlXPathNewParserContext(param_1,param_2);
    *(undefined4 *)(lVar1 + 0x40) = 1;
    FUN_1001c082b(lVar1);
    if ((*(long *)(lVar1 + 0x20) == 0) ||
       ((**(int **)(lVar1 + 0x20) == 1 || (**(int **)(lVar1 + 0x20) == 7)))) {
      local_30 = (xmlXPathObjectPtr)_valuePop(lVar1);
    }
    else {
      FUN_1001be911(lVar1,0x76e,"xmlXPtrEval: evaluation failed to return a node set\n",0);
    }
    do {
      obj = (xmlXPathObjectPtr)_valuePop(lVar1);
      if (obj != (xmlXPathObjectPtr)0x0) {
        if (obj != (xmlXPathObjectPtr)0x0) {
          if (obj->type == XPATH_NODESET) {
            if ((obj->nodesetval->nodeNr != 1) ||
               (*obj->nodesetval->nodeTab != (xmlNodePtr)*param_2)) {
              local_14 = local_14 + 1;
            }
          }
          else {
            local_14 = local_14 + 1;
          }
        }
        _xmlXPathFreeObject(obj);
      }
    } while (obj != (xmlXPathObjectPtr)0x0);
    if (local_14 != 0) {
      FUN_1001be911(lVar1,0x76f,"xmlXPtrEval: object(s) left on the eval stack\n",0);
    }
    if (*(int *)(lVar1 + 0x10) != 0) {
      _xmlXPathFreeObject(local_30);
      local_30 = (xmlXPathObjectPtr)0x0;
    }
    _xmlXPathFreeParserContext(lVar1);
    local_50 = local_30;
  }
  return local_50;
}

