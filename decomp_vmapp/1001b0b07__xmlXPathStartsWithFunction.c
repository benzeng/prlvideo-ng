
void _xmlXPathStartsWithFunction(long param_1,int param_2)

{
  int iVar1;
  xmlXPathObjectPtr obj;
  xmlXPathObjectPtr obj_00;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    if (param_2 == 2) {
      if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 4)) {
        _xmlXPathStringFunction(param_1,1);
      }
      if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 4)) {
        _xmlXPathErr(param_1,0xb);
      }
      else {
        obj = (xmlXPathObjectPtr)_valuePop(param_1);
        if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 4)) {
          _xmlXPathStringFunction(param_1,1);
        }
        obj_00 = (xmlXPathObjectPtr)_valuePop(param_1);
        if ((obj_00 == (xmlXPathObjectPtr)0x0) || (obj_00->type != XPATH_STRING)) {
          _xmlXPathFreeObject(obj_00);
          _xmlXPathFreeObject(obj);
          _xmlXPathErr(param_1,0xb);
        }
        else {
          iVar1 = _xmlStrlen(obj->stringval);
          iVar1 = _xmlStrncmp(obj_00->stringval,obj->stringval,iVar1);
          if (iVar1 == 0) {
            uVar2 = _xmlXPathNewBoolean(1);
            _valuePush(param_1,uVar2);
          }
          else {
            uVar2 = _xmlXPathNewBoolean(0);
            _valuePush(param_1,uVar2);
          }
          _xmlXPathFreeObject(obj_00);
          _xmlXPathFreeObject(obj);
        }
      }
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

