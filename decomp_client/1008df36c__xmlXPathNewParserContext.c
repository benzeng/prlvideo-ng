
undefined8 * _xmlXPathNewParserContext(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *local_30;
  
  local_30 = (undefined8 *)(*(code *)_xmlMalloc)(0x50);
  if (local_30 == (undefined8 *)0x0) {
    FUN_1008d87c3(param_2,"creating parser context\n");
    local_30 = (undefined8 *)0x0;
  }
  else {
    _memset(local_30,0,0x50);
    local_30[1] = param_1;
    *local_30 = local_30[1];
    local_30[3] = param_2;
    uVar1 = FUN_1008d8d82();
    local_30[7] = uVar1;
    if (local_30[7] == 0) {
      (*(code *)_xmlFree)(local_30[6]);
      (*(code *)_xmlFree)(local_30);
      local_30 = (undefined8 *)0x0;
    }
    else if ((param_2 != 0) && (*(long *)(param_2 + 0x148) != 0)) {
      *(undefined8 *)(local_30[7] + 0x20) = *(undefined8 *)(param_2 + 0x148);
      _xmlDictReference(*(xmlDictPtr *)(local_30[7] + 0x20));
    }
  }
  return local_30;
}

