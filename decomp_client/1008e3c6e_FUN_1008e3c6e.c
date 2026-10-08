
void FUN_1008e3c6e(long param_1,int param_2)

{
  undefined8 uVar1;
  xmlXPathObjectPtr obj;
  int local_34;
  xmlChar *local_10;
  
  local_34 = param_2;
  if (param_2 == 0) {
    uVar1 = _xmlXPathNewNodeSet(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
    _valuePush(param_1,uVar1);
    local_34 = 1;
  }
  if (param_1 != 0) {
    if (local_34 == 1) {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         ((**(int **)(param_1 + 0x20) != 1 && (**(int **)(param_1 + 0x20) != 9)))) {
        _xmlXPathErr(param_1,0xb);
      }
      else {
        obj = (xmlXPathObjectPtr)_valuePop(param_1);
        if ((obj->nodesetval == (xmlNodeSetPtr)0x0) || (obj->nodesetval->nodeNr == 0)) {
          uVar1 = _xmlXPathNewCString("");
          _valuePush(param_1,uVar1);
        }
        else if ((*obj->nodesetval->nodeTab)->type - XML_ELEMENT_NODE < 2) {
          if (*(*obj->nodesetval->nodeTab)->name == ' ') {
            uVar1 = _xmlXPathNewCString("");
            _valuePush(param_1,uVar1);
          }
          else if (((*obj->nodesetval->nodeTab)->ns == (xmlNs *)0x0) ||
                  ((*obj->nodesetval->nodeTab)->ns->prefix == (xmlChar *)0x0)) {
            uVar1 = _xmlXPathNewString((*obj->nodesetval->nodeTab)->name);
            _valuePush(param_1,uVar1);
          }
          else {
            local_10 = _xmlBuildQName((*obj->nodesetval->nodeTab)->name,
                                      (*obj->nodesetval->nodeTab)->ns->prefix,(xmlChar *)0x0,0);
            if ((*obj->nodesetval->nodeTab)->name == local_10) {
              local_10 = _xmlStrdup((*obj->nodesetval->nodeTab)->name);
            }
            if (local_10 == (xmlChar *)0x0) {
              _xmlXPathErr(param_1,0xf);
              return;
            }
            uVar1 = _xmlXPathWrapString(local_10);
            _valuePush(param_1,uVar1);
          }
        }
        else {
          uVar1 = _xmlXPathNewNodeSet(*obj->nodesetval->nodeTab);
          _valuePush(param_1,uVar1);
          _xmlXPathLocalNameFunction(param_1,1);
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

