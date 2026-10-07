
undefined4 _xmlTextReaderRelaxNGSetSchema(int *param_1,xmlRelaxNGPtr param_2)

{
  xmlRelaxNGValidCtxtPtr pxVar1;
  undefined4 local_1c;
  
  if (param_1 == (int *)0x0) {
    local_1c = 0xffffffff;
  }
  else if (param_2 == (xmlRelaxNGPtr)0x0) {
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
    local_1c = 0;
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
    pxVar1 = _xmlRelaxNGNewValidCtxt(param_2);
    *(xmlRelaxNGValidCtxtPtr *)(param_1 + 0x36) = pxVar1;
    if (*(long *)(param_1 + 0x36) == 0) {
      local_1c = 0xffffffff;
    }
    else {
      if (*(long *)(param_1 + 0x30) != 0) {
        _xmlRelaxNGSetValidErrors
                  (*(xmlRelaxNGValidCtxtPtr *)(param_1 + 0x36),FUN_10022a4e3,FUN_10022a65a,param_1);
      }
      if (*(long *)(param_1 + 0x52) != 0) {
        _xmlRelaxNGSetValidStructuredErrors
                  (*(xmlRelaxNGValidCtxtPtr *)(param_1 + 0x36),FUN_10022a7d1,param_1);
      }
      param_1[0x38] = 0;
      param_1[0x3a] = 0;
      param_1[0x3b] = 0;
      param_1[4] = 2;
      local_1c = 0;
    }
  }
  else {
    local_1c = 0xffffffff;
  }
  return local_1c;
}

