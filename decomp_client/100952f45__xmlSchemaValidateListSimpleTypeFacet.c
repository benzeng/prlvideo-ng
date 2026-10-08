
undefined4
_xmlSchemaValidateListSimpleTypeFacet
          (int *param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == 0x3f1) {
    if (*(ulong *)(*(long *)(param_1 + 0xe) + 0x10) != param_3) {
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x10);
      }
      return 0x726;
    }
  }
  else if (*param_1 == 0x3f3) {
    if (param_3 < *(ulong *)(*(long *)(param_1 + 0xe) + 0x10)) {
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x10);
      }
      return 0x727;
    }
  }
  else {
    if (*param_1 != 0x3f2) {
      uVar1 = _xmlSchemaValidateFacet(0,param_1,param_2,0);
      return uVar1;
    }
    if (*(ulong *)(*(long *)(param_1 + 0xe) + 0x10) < param_3) {
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x10);
      }
      return 0x728;
    }
  }
  return 0;
}

