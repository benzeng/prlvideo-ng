
undefined4 * _xmlReaderWalker(long param_1)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  xmlDictPtr pxVar4;
  undefined4 *local_38;
  
  if (param_1 == 0) {
    local_38 = (undefined4 *)0x0;
  }
  else {
    local_38 = (undefined4 *)(*(code *)_xmlMalloc)(0x150);
    if (local_38 == (undefined4 *)0x0) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"xmlNewTextReader : malloc failed\n");
      local_38 = (undefined4 *)0x0;
    }
    else {
      _memset(local_38,0,0x150);
      local_38[0x2c] = 0;
      *(undefined8 *)(local_38 + 0xc) = 0;
      *local_38 = 0;
      *(undefined8 *)(local_38 + 0x1c) = 0;
      *(undefined8 *)(local_38 + 0x1e) = 0;
      local_38[0x1a] = 0;
      local_38[0x1b] = 0;
      local_38[5] = 2;
      *(long *)(local_38 + 2) = param_1;
      local_38[6] = 0;
      pxVar4 = _xmlDictCreate();
      *(xmlDictPtr *)(local_38 + 0x28) = pxVar4;
    }
  }
  return local_38;
}

