
void FUN_1001be25a(long param_1,int param_2)

{
  xmlChar *pxVar1;
  undefined8 uVar2;
  xmlChar local_38;
  char local_37;
  char local_36;
  undefined1 local_35;
  xmlXPathObjectPtr local_28;
  int local_1c;
  xmlBufferPtr local_18;
  byte *local_10;
  
  if (param_1 != 0) {
    if (param_2 == 2) {
      local_1c = _xmlXPathPopBoolean(param_1);
      if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 4)) {
        _xmlXPathStringFunction(param_1,1);
      }
      local_28 = (xmlXPathObjectPtr)_valuePop(param_1);
      local_18 = _xmlBufferCreate();
      local_38 = '%';
      local_35 = 0;
      if (local_18 != (xmlBufferPtr)0x0) {
        for (local_10 = local_28->stringval; *local_10 != 0; local_10 = local_10 + 1) {
          if (((((((*local_10 < 0x41) || (0x5a < *local_10)) &&
                 ((*local_10 < 0x61 || (0x7a < *local_10)))) &&
                (((((*local_10 < 0x30 || (0x39 < *local_10)) && (*local_10 != 0x2d)) &&
                  ((*local_10 != 0x5f && (*local_10 != 0x2e)))) &&
                 ((*local_10 != 0x21 && ((*local_10 != 0x7e && (*local_10 != 0x2a)))))))) &&
               ((*local_10 != 0x27 && ((*local_10 != 0x28 && (*local_10 != 0x29)))))) &&
              (((*local_10 != 0x25 ||
                ((((local_10[1] < 0x41 || (0x46 < local_10[1])) &&
                  ((local_10[1] < 0x61 || (0x66 < local_10[1])))) &&
                 ((local_10[1] < 0x30 || (0x39 < local_10[1])))))) ||
               (((local_10[2] < 0x41 || (0x46 < local_10[2])) &&
                (((local_10[2] < 0x61 || (0x66 < local_10[2])) &&
                 ((local_10[2] < 0x30 || (0x39 < local_10[2])))))))))) &&
             ((local_1c != 0 ||
              ((((((*local_10 != 0x3b && (*local_10 != 0x2f)) && (*local_10 != 0x3f)) &&
                 ((*local_10 != 0x3a && (*local_10 != 0x40)))) &&
                (((*local_10 != 0x26 && ((*local_10 != 0x3d && (*local_10 != 0x2b)))) &&
                 (*local_10 != 0x24)))) && (*local_10 != 0x2c)))))) {
            if (*local_10 >> 4 < 10) {
              local_37 = (*local_10 >> 4) + 0x30;
            }
            else {
              local_37 = (*local_10 >> 4) + 0x37;
            }
            if ((*local_10 & 0xf) < 10) {
              local_36 = (*local_10 & 0xf) + 0x30;
            }
            else {
              local_36 = (*local_10 & 0xf) + 0x37;
            }
            _xmlBufferAdd(local_18,&local_38,3);
          }
          else {
            _xmlBufferAdd(local_18,local_10,1);
          }
        }
      }
      pxVar1 = _xmlBufferContent(local_18);
      uVar2 = _xmlXPathNewString(pxVar1);
      _valuePush(param_1,uVar2);
      _xmlBufferFree(local_18);
      _xmlXPathFreeObject(local_28);
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

