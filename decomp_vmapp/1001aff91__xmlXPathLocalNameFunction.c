
void _xmlXPathLocalNameFunction(long param_1,int param_2)

{
  xmlElementType xVar1;
  undefined8 uVar2;
  xmlXPathObjectPtr obj;
  int local_24;
  
  if (param_1 == 0) {
    return;
  }
  local_24 = param_2;
  if (param_2 == 0) {
    uVar2 = _xmlXPathNewNodeSet(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
    _valuePush(param_1,uVar2);
    local_24 = 1;
  }
  if (param_1 == 0) {
    return;
  }
  if (local_24 != 1) {
    _xmlXPathErr(param_1,0xc);
    return;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     ((**(int **)(param_1 + 0x20) != 1 && (**(int **)(param_1 + 0x20) != 9)))) {
    _xmlXPathErr(param_1,0xb);
    return;
  }
  obj = (xmlXPathObjectPtr)_valuePop(param_1);
  if ((obj->nodesetval == (xmlNodeSetPtr)0x0) || (obj->nodesetval->nodeNr == 0)) {
    uVar2 = _xmlXPathNewCString("");
    _valuePush(param_1,uVar2);
    goto LAB_1001b0102;
  }
  xVar1 = (*obj->nodesetval->nodeTab)->type;
  if (xVar1 == XML_PI_NODE) {
LAB_1001b00bb:
    if (*(*obj->nodesetval->nodeTab)->name == ' ') {
      uVar2 = _xmlXPathNewCString("");
      _valuePush(param_1,uVar2);
    }
    else {
      uVar2 = _xmlXPathNewString((*obj->nodesetval->nodeTab)->name);
      _valuePush(param_1,uVar2);
    }
  }
  else {
    if (xVar1 < XML_COMMENT_NODE) {
      if (xVar1 - XML_ELEMENT_NODE < 2) goto LAB_1001b00bb;
    }
    else if (xVar1 == XML_NAMESPACE_DECL) {
      uVar2 = _xmlXPathNewString((*obj->nodesetval->nodeTab)->children);
      _valuePush(param_1,uVar2);
      goto LAB_1001b0102;
    }
    uVar2 = _xmlXPathNewCString("");
    _valuePush(param_1,uVar2);
  }
LAB_1001b0102:
  _xmlXPathFreeObject(obj);
  return;
}

