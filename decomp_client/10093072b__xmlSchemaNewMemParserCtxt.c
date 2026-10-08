
long _xmlSchemaNewMemParserCtxt(long param_1,int param_2)

{
  xmlDictPtr pxVar1;
  undefined8 local_30;
  
  if ((param_1 == 0) || (param_2 < 1)) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_10092b76e();
    if (local_30 == 0) {
      local_30 = 0;
    }
    else {
      *(long *)(local_30 + 0x68) = param_1;
      *(int *)(local_30 + 0x70) = param_2;
      pxVar1 = _xmlDictCreate();
      *(xmlDictPtr *)(local_30 + 0x98) = pxVar1;
    }
  }
  return local_30;
}

