
undefined4 * _xmlSchemaNewValidCtxt(undefined8 param_1)

{
  xmlDictPtr pxVar1;
  undefined8 uVar2;
  undefined4 *local_28;
  
  local_28 = (undefined4 *)(*(code *)_xmlMalloc)(0x130);
  if (local_28 == (undefined4 *)0x0) {
    FUN_10091bc84(0,"allocating validation context",0);
    local_28 = (undefined4 *)0x0;
  }
  else {
    _memset(local_28,0,0x130);
    *local_28 = 2;
    pxVar1 = _xmlDictCreate();
    *(xmlDictPtr *)(local_28 + 0x40) = pxVar1;
    uVar2 = FUN_10091e82d();
    *(undefined8 *)(local_28 + 0x4a) = uVar2;
    *(undefined8 *)(local_28 + 10) = param_1;
  }
  return local_28;
}

