
void _xmlXPathNamespaceURIFunction(long param_1,int param_2)

{
  undefined8 uVar1;
  xmlXPathObjectPtr obj;
  int local_24;
  
  if (param_1 != 0) {
    local_24 = param_2;
    if (param_2 == 0) {
      uVar1 = _xmlXPathNewNodeSet(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
      _valuePush(param_1,uVar1);
      local_24 = 1;
    }
    if (param_1 != 0) {
      if (local_24 == 1) {
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
            if ((*obj->nodesetval->nodeTab)->ns == (xmlNs *)0x0) {
              uVar1 = _xmlXPathNewCString("");
              _valuePush(param_1,uVar1);
            }
            else {
              uVar1 = _xmlXPathNewString((*obj->nodesetval->nodeTab)->ns->href);
              _valuePush(param_1,uVar1);
            }
          }
          else {
            uVar1 = _xmlXPathNewCString("");
            _valuePush(param_1,uVar1);
          }
          _xmlXPathFreeObject(obj);
        }
      }
      else {
        _xmlXPathErr(param_1,0xc);
      }
    }
  }
  return;
}

