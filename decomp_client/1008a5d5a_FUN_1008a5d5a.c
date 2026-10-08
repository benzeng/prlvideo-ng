
undefined8 * FUN_1008a5d5a(undefined8 *param_1,xmlChar *param_2)

{
  int iVar1;
  
  while( true ) {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (((xmlChar *)param_1[3] == param_2) ||
       (iVar1 = _xmlStrEqual(param_2,(xmlChar *)param_1[3]), iVar1 != 0)) break;
    param_1 = (undefined8 *)*param_1;
  }
  return param_1;
}

