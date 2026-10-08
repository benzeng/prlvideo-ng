
undefined4 _xmlTextReaderSetSchema(int *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 local_1c;
  
  if (param_1 == (int *)0x0) {
    local_1c = 0xffffffff;
  }
  else if (param_2 == 0) {
    if (*(long *)(param_1 + 0x42) != 0) {
      _xmlSchemaSAXUnplug(*(undefined8 *)(param_1 + 0x42));
      param_1[0x42] = 0;
      param_1[0x43] = 0;
    }
    if (*(long *)(param_1 + 0x3e) != 0) {
      _xmlSchemaFreeValidCtxt(*(undefined8 *)(param_1 + 0x3e));
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
    }
    if (*(long *)(param_1 + 0x3c) != 0) {
      _xmlSchemaFree(*(undefined8 *)(param_1 + 0x3c));
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
    }
    local_1c = 0;
  }
  else if (*param_1 == 0) {
    if (*(long *)(param_1 + 0x42) != 0) {
      _xmlSchemaSAXUnplug(*(undefined8 *)(param_1 + 0x42));
      param_1[0x42] = 0;
      param_1[0x43] = 0;
    }
    if (*(long *)(param_1 + 0x3e) != 0) {
      _xmlSchemaFreeValidCtxt(*(undefined8 *)(param_1 + 0x3e));
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
    }
    if (*(long *)(param_1 + 0x3c) != 0) {
      _xmlSchemaFree(*(undefined8 *)(param_1 + 0x3c));
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
    }
    uVar1 = _xmlSchemaNewValidCtxt(param_2);
    *(undefined8 *)(param_1 + 0x3e) = uVar1;
    if (*(long *)(param_1 + 0x3e) == 0) {
      _xmlSchemaFree(*(undefined8 *)(param_1 + 0x3c));
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
      local_1c = 0xffffffff;
    }
    else {
      uVar1 = _xmlSchemaSAXPlug(*(undefined8 *)(param_1 + 0x3e),*(undefined8 *)(param_1 + 8),
                                *(long *)(param_1 + 8) + 8);
      *(undefined8 *)(param_1 + 0x42) = uVar1;
      if (*(long *)(param_1 + 0x42) == 0) {
        _xmlSchemaFree(*(undefined8 *)(param_1 + 0x3c));
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        _xmlSchemaFreeValidCtxt(*(undefined8 *)(param_1 + 0x3e));
        param_1[0x3e] = 0;
        param_1[0x3f] = 0;
        local_1c = 0xffffffff;
      }
      else {
        if (*(long *)(param_1 + 0x30) != 0) {
          _xmlSchemaSetValidErrors
                    (*(undefined8 *)(param_1 + 0x3e),FUN_10095de0b,FUN_10095df82,param_1);
        }
        if (*(long *)(param_1 + 0x52) != 0) {
          _xmlSchemaSetValidStructuredErrors(*(undefined8 *)(param_1 + 0x3e),FUN_10095e0f9,param_1);
        }
        param_1[0x40] = 0;
        param_1[4] = 4;
        local_1c = 0;
      }
    }
  }
  else {
    local_1c = 0xffffffff;
  }
  return local_1c;
}

