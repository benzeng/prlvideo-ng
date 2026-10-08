
void _xmlXPathTranslateFunction(long param_1,int param_2)

{
  byte bVar1;
  xmlGenericErrorFunc pxVar2;
  int iVar3;
  int iVar4;
  xmlXPathObjectPtr obj;
  xmlXPathObjectPtr obj_00;
  xmlXPathObjectPtr obj_01;
  xmlBufferPtr buf;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  xmlChar *pxVar7;
  undefined8 uVar8;
  byte local_29;
  byte *local_20;
  
  if (param_1 != 0) {
    if (param_2 == 3) {
      if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 4)) {
        _xmlXPathStringFunction(param_1,1);
      }
      obj = (xmlXPathObjectPtr)_valuePop(param_1);
      if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 4)) {
        _xmlXPathStringFunction(param_1,1);
      }
      obj_00 = (xmlXPathObjectPtr)_valuePop(param_1);
      if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 4)) {
        _xmlXPathStringFunction(param_1,1);
      }
      obj_01 = (xmlXPathObjectPtr)_valuePop(param_1);
      buf = _xmlBufferCreate();
      if (buf != (xmlBufferPtr)0x0) {
        iVar3 = _xmlUTF8Strlen(obj->stringval);
        local_20 = obj_01->stringval;
        do {
          do {
            local_29 = *local_20;
            if (local_29 == 0) goto LAB_1008e4fe9;
            iVar4 = _xmlUTF8Strloc(obj_00->stringval,local_20);
            if (iVar4 < 0) {
              iVar4 = _xmlUTF8Strsize(local_20,1);
              _xmlBufferAdd(buf,local_20,iVar4);
            }
            else if (iVar4 < iVar3) {
              pxVar7 = _xmlUTF8Strpos(obj->stringval,iVar4);
              if (pxVar7 != (xmlChar *)0x0) {
                iVar4 = _xmlUTF8Strsize(pxVar7,1);
                _xmlBufferAdd(buf,pxVar7,iVar4);
              }
            }
            local_20 = local_20 + 1;
          } while (-1 < (char)local_29);
          if ((local_29 & 0xc0) != 0xc0) {
            ppxVar5 = ___xmlGenericError();
            pxVar2 = *ppxVar5;
            ppvVar6 = ___xmlGenericErrorContext();
            (*pxVar2)(*ppvVar6,"xmlXPathTranslateFunction: Invalid UTF8 string\n");
            break;
          }
          do {
            local_29 = local_29 << 1;
            if (-1 < (char)local_29) goto LAB_1008e4fcd;
            bVar1 = *local_20;
            local_20 = local_20 + 1;
          } while ((bVar1 & 0xc0) == 0x80);
          ppxVar5 = ___xmlGenericError();
          pxVar2 = *ppxVar5;
          ppvVar6 = ___xmlGenericErrorContext();
          (*pxVar2)(*ppvVar6,"xmlXPathTranslateFunction: Invalid UTF8 string\n");
LAB_1008e4fcd:
        } while (-1 < (char)local_29);
      }
LAB_1008e4fe9:
      pxVar7 = _xmlBufferContent(buf);
      uVar8 = _xmlXPathNewString(pxVar7);
      _valuePush(param_1,uVar8);
      _xmlBufferFree(buf);
      _xmlXPathFreeObject(obj_01);
      _xmlXPathFreeObject(obj_00);
      _xmlXPathFreeObject(obj);
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

