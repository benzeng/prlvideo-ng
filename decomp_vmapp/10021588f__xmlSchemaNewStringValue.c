
undefined8 * _xmlSchemaNewStringValue(int param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  
  if (param_1 == 1) {
    local_30 = (undefined8 *)(*(code *)_xmlMalloc)(0x30);
    if (local_30 == (undefined8 *)0x0) {
      local_30 = (undefined8 *)0x0;
    }
    else {
      puVar2 = local_30;
      for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined4 *)local_30 = 1;
      local_30[2] = param_2;
    }
  }
  else {
    local_30 = (undefined8 *)0x0;
  }
  return local_30;
}

