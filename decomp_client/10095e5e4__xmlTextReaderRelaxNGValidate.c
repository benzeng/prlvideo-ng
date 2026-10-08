
undefined4 _xmlTextReaderRelaxNGValidate(int *param_1,char *param_2)

{
  xmlRelaxNGParserCtxtPtr ctxt;
  xmlRelaxNGPtr pxVar1;
  xmlRelaxNGValidCtxtPtr pxVar2;
  undefined4 local_2c;
  
  if (param_1 == (int *)0x0) {
    local_2c = 0xffffffff;
  }
  else if (param_2 == (char *)0x0) {
    if (*(long *)(param_1 + 0x36) != 0) {
      _xmlRelaxNGFreeValidCtxt(*(xmlRelaxNGValidCtxtPtr *)(param_1 + 0x36));
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    if (*(long *)(param_1 + 0x34) != 0) {
      _xmlRelaxNGFree(*(xmlRelaxNGPtr *)(param_1 + 0x34));
      param_1[0x34] = 0;
      param_1[0x35] = 0;
    }
    local_2c = 0;
  }
  else if (*param_1 == 0) {
    if (*(long *)(param_1 + 0x34) != 0) {
      _xmlRelaxNGFree(*(xmlRelaxNGPtr *)(param_1 + 0x34));
      param_1[0x34] = 0;
      param_1[0x35] = 0;
    }
    if (*(long *)(param_1 + 0x36) != 0) {
      _xmlRelaxNGFreeValidCtxt(*(xmlRelaxNGValidCtxtPtr *)(param_1 + 0x36));
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    ctxt = _xmlRelaxNGNewParserCtxt(param_2);
    if (*(long *)(param_1 + 0x30) != 0) {
      _xmlRelaxNGSetParserErrors(ctxt,FUN_10095de0b,FUN_10095df82,param_1);
    }
    if (*(long *)(param_1 + 0x52) != 0) {
      _xmlRelaxNGSetValidStructuredErrors
                (*(xmlRelaxNGValidCtxtPtr *)(param_1 + 0x36),FUN_10095e0f9,param_1);
    }
    pxVar1 = _xmlRelaxNGParse(ctxt);
    *(xmlRelaxNGPtr *)(param_1 + 0x34) = pxVar1;
    _xmlRelaxNGFreeParserCtxt(ctxt);
    if (*(long *)(param_1 + 0x34) == 0) {
      local_2c = 0xffffffff;
    }
    else {
      pxVar2 = _xmlRelaxNGNewValidCtxt(*(xmlRelaxNGPtr *)(param_1 + 0x34));
      *(xmlRelaxNGValidCtxtPtr *)(param_1 + 0x36) = pxVar2;
      if (*(long *)(param_1 + 0x36) == 0) {
        _xmlRelaxNGFree(*(xmlRelaxNGPtr *)(param_1 + 0x34));
        param_1[0x34] = 0;
        param_1[0x35] = 0;
        local_2c = 0xffffffff;
      }
      else {
        if (*(long *)(param_1 + 0x30) != 0) {
          _xmlRelaxNGSetValidErrors
                    (*(xmlRelaxNGValidCtxtPtr *)(param_1 + 0x36),FUN_10095de0b,FUN_10095df82,param_1
                    );
        }
        if (*(long *)(param_1 + 0x52) != 0) {
          _xmlRelaxNGSetValidStructuredErrors
                    (*(xmlRelaxNGValidCtxtPtr *)(param_1 + 0x36),FUN_10095e0f9,param_1);
        }
        param_1[0x38] = 0;
        param_1[0x3a] = 0;
        param_1[0x3b] = 0;
        param_1[4] = 2;
        local_2c = 0;
      }
    }
  }
  else {
    local_2c = 0xffffffff;
  }
  return local_2c;
}

