
void _xmlXPathSubstringAfterFunction(long param_1,int param_2)

{
  xmlChar *pxVar1;
  int iVar2;
  int iVar3;
  xmlXPathObjectPtr obj;
  xmlXPathObjectPtr obj_00;
  xmlBufferPtr buf;
  xmlChar *pxVar4;
  undefined8 uVar5;
  
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
        pxVar4 = _xmlStrstr(obj_00->stringval,obj->stringval);
        if (pxVar4 != (xmlChar *)0x0) {
          pxVar1 = obj_00->stringval;
          iVar2 = _xmlStrlen(obj->stringval);
          iVar2 = ((int)pxVar4 - (int)pxVar1) + iVar2;
          iVar3 = _xmlStrlen(obj_00->stringval);
          _xmlBufferAdd(buf,obj_00->stringval + iVar2,iVar3 - iVar2);
        }
        pxVar4 = _xmlBufferContent(buf);
        uVar5 = _xmlXPathNewString(pxVar4);
        _valuePush(param_1,uVar5);
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

