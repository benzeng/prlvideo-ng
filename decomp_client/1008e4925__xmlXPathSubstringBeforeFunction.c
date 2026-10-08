
void _xmlXPathSubstringBeforeFunction(long param_1,int param_2)

{
  xmlXPathObjectPtr obj;
  xmlXPathObjectPtr obj_00;
  xmlBufferPtr buf;
  xmlChar *pxVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    if (param_2 == 2) {
      if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 4)) {
        _xmlXPathStringFunction(param_1,1);
      }
      obj = (xmlXPathObjectPtr)_valuePop(param_1);
      if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 4)) {
        _xmlXPathStringFunction(param_1,1);
      }
      obj_00 = (xmlXPathObjectPtr)_valuePop(param_1);
      buf = _xmlBufferCreate();
      if (buf != (xmlBufferPtr)0x0) {
        pxVar1 = _xmlStrstr(obj_00->stringval,obj->stringval);
        if (pxVar1 != (xmlChar *)0x0) {
          _xmlBufferAdd(buf,obj_00->stringval,(int)pxVar1 - (int)obj_00->stringval);
        }
        pxVar1 = _xmlBufferContent(buf);
        uVar2 = _xmlXPathNewString(pxVar1);
        _valuePush(param_1,uVar2);
        _xmlBufferFree(buf);
      }
      _xmlXPathFreeObject(obj_00);
      _xmlXPathFreeObject(obj);
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

