
uint _xmlXPathNotEqualValues(long param_1)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  xmlXPathObjectPtr obj;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  uint local_48;
  xmlXPathObjectPtr local_38;
  xmlXPathObjectPtr local_30;
  uint local_1c;
  
  local_1c = 0;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    local_48 = 0;
  }
  else {
    local_30 = (xmlXPathObjectPtr)_valuePop(param_1);
    obj = (xmlXPathObjectPtr)_valuePop(param_1);
    if ((obj == (xmlXPathObjectPtr)0x0) || (local_30 == (xmlXPathObjectPtr)0x0)) {
      if (obj == (xmlXPathObjectPtr)0x0) {
        _xmlXPathFreeObject(local_30);
      }
      else {
        _xmlXPathFreeObject(obj);
      }
      _xmlXPathErr(param_1,10);
      local_48 = 0;
    }
    else if (obj == local_30) {
      _xmlXPathFreeObject(obj);
      local_48 = 0;
    }
    else if ((((local_30->type == XPATH_NODESET) || (local_30->type == XPATH_XSLT_TREE)) ||
             (obj->type == XPATH_NODESET)) || (obj->type == XPATH_XSLT_TREE)) {
      local_38 = obj;
      if ((obj->type != XPATH_NODESET) && (obj->type != XPATH_XSLT_TREE)) {
        local_38 = local_30;
        local_30 = obj;
      }
      switch(local_30->type) {
      case XPATH_NODESET:
      case XPATH_XSLT_TREE:
        local_1c = FUN_1008e03f4(local_38,local_30,1);
        break;
      case XPATH_BOOLEAN:
        if ((local_38->nodesetval == (xmlNodeSetPtr)0x0) || (local_38->nodesetval->nodeNr == 0)) {
          local_1c = 0;
        }
        else {
          local_1c = 1;
        }
        local_1c = (uint)(local_30->boolval != local_1c);
        break;
      case XPATH_NUMBER:
        local_1c = FUN_1008e0291(local_30->floatval,param_1,local_38,1);
        break;
      case XPATH_STRING:
        local_1c = FUN_1008e00f3(local_38,local_30->stringval,1);
        break;
      case XPATH_POINT:
      case XPATH_RANGE:
      case XPATH_LOCATIONSET:
      case XPATH_USERS:
        ppxVar3 = ___xmlGenericError();
        pxVar1 = *ppxVar3;
        ppvVar4 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar4,"Unimplemented block at %s:%d\n","xpath.c",0x13be);
      }
      _xmlXPathFreeObject(local_38);
      _xmlXPathFreeObject(local_30);
      local_48 = local_1c;
    }
    else {
      iVar2 = FUN_1008e095f(param_1,obj,local_30);
      local_48 = (uint)(iVar2 == 0);
    }
  }
  return local_48;
}

