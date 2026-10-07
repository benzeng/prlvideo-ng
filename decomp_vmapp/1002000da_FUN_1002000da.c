
undefined4 FUN_1002000da(long param_1,xmlChar *param_2)

{
  int iVar1;
  undefined4 local_2c;
  undefined8 *local_10;
  
  if (param_1 == 0) {
    local_2c = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      if (((*(long *)(param_1 + 0x38) != 0) && (param_2 != (xmlChar *)0x0)) &&
         (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_1 + 0x38) + 8),param_2), iVar1 == 0)) {
        return 1;
      }
    }
    else {
      for (local_10 = *(undefined8 **)(param_1 + 0x30); local_10 != (undefined8 *)0x0;
          local_10 = (undefined8 *)*local_10) {
        iVar1 = _xmlStrEqual((xmlChar *)local_10[1],param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
    local_2c = 0;
  }
  else {
    local_2c = 1;
  }
  return local_2c;
}

