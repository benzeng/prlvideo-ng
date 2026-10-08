
void _xmlXPathNormalizeFunction(long param_1,int param_2)

{
  xmlChar *pxVar1;
  undefined8 uVar2;
  int local_34;
  xmlChar local_21;
  xmlXPathObjectPtr local_20;
  byte *local_18;
  xmlBufferPtr local_10;
  
  local_20 = (xmlXPathObjectPtr)0x0;
  local_18 = (byte *)0x0;
  if (param_1 != 0) {
    local_34 = param_2;
    if (param_2 == 0) {
      pxVar1 = _xmlXPathCastNodeToString(*(xmlNodePtr *)(*(long *)(param_1 + 0x18) + 8));
      uVar2 = _xmlXPathWrapString(pxVar1);
      _valuePush(param_1,uVar2);
      local_34 = 1;
    }
    if (param_1 != 0) {
      if (local_34 == 1) {
        if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 4)) {
          _xmlXPathStringFunction(param_1,1);
        }
        if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 4)) {
          _xmlXPathErr(param_1,0xb);
        }
        else {
          local_20 = (xmlXPathObjectPtr)_valuePop(param_1);
          local_18 = local_20->stringval;
          local_10 = _xmlBufferCreate();
          if ((local_10 != (xmlBufferPtr)0x0) && (local_18 != (byte *)0x0)) {
            for (; (*local_18 == 0x20 ||
                   (((8 < *local_18 && (*local_18 < 0xb)) || (*local_18 == 0xd))));
                local_18 = local_18 + 1) {
            }
            local_21 = '\0';
            for (; *local_18 != 0; local_18 = local_18 + 1) {
              if (((*local_18 == 0x20) || ((8 < *local_18 && (*local_18 < 0xb)))) ||
                 (*local_18 == 0xd)) {
                local_21 = ' ';
              }
              else {
                if (local_21 != '\0') {
                  _xmlBufferAdd(local_10,&local_21,1);
                  local_21 = '\0';
                }
                _xmlBufferAdd(local_10,local_18,1);
              }
            }
            pxVar1 = _xmlBufferContent(local_10);
            uVar2 = _xmlXPathNewString(pxVar1);
            _valuePush(param_1,uVar2);
            _xmlBufferFree(local_10);
          }
          _xmlXPathFreeObject(local_20);
        }
      }
      else {
        _xmlXPathErr(param_1,0xc);
      }
    }
  }
  return;
}

