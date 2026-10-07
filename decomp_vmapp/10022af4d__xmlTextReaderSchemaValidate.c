
undefined4 _xmlTextReaderSchemaValidate(int *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_2c;
  
  if (param_1 == (int *)0x0) {
    local_2c = 0xffffffff;
  }
  else if (param_2 == 0) {
    if (*(long *)(param_1 + 0x42) != 0) {
      _xmlSchemaSAXUnplug(*(undefined8 *)(param_1 + 0x42));
      param_1[0x42] = 0;
      param_1[0x43] = 0;
    }
    if (*(long *)(param_1 + 0x3c) != 0) {
      _xmlSchemaFree(*(undefined8 *)(param_1 + 0x3c));
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
    }
    if (*(long *)(param_1 + 0x3e) != 0) {
      _xmlSchemaFreeValidCtxt(*(undefined8 *)(param_1 + 0x3e));
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
    }
    local_2c = 0;
  }
  else if ((*param_1 == 0) && (*(long *)(param_1 + 8) != 0)) {
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
    uVar1 = _xmlSchemaNewParserCtxt(param_2);
    if (*(long *)(param_1 + 0x30) != 0) {
      _xmlSchemaSetParserErrors(uVar1,FUN_10022a4e3,FUN_10022a65a,param_1);
    }
    uVar2 = _xmlSchemaParse(uVar1);
    *(undefined8 *)(param_1 + 0x3c) = uVar2;
    _xmlSchemaFreeParserCtxt(uVar1);
    if (*(long *)(param_1 + 0x3c) == 0) {
      local_2c = 0xffffffff;
    }
    else {
      uVar1 = _xmlSchemaNewValidCtxt(*(undefined8 *)(param_1 + 0x3c));
      *(undefined8 *)(param_1 + 0x3e) = uVar1;
      if (*(long *)(param_1 + 0x3e) == 0) {
        _xmlSchemaFree(*(undefined8 *)(param_1 + 0x3c));
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        local_2c = 0xffffffff;
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
          local_2c = 0xffffffff;
        }
        else {
          if (*(long *)(param_1 + 0x30) != 0) {
            _xmlSchemaSetValidErrors
                      (*(undefined8 *)(param_1 + 0x3e),FUN_10022a4e3,FUN_10022a65a,param_1);
          }
          if (*(long *)(param_1 + 0x52) != 0) {
            _xmlSchemaSetValidStructuredErrors
                      (*(undefined8 *)(param_1 + 0x3e),FUN_10022a7d1,param_1);
          }
          param_1[0x40] = 0;
          param_1[4] = 4;
          local_2c = 0;
        }
      }
    }
  }
  else {
    local_2c = 0xffffffff;
  }
  return local_2c;
}

