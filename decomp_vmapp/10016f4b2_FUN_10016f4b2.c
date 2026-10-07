
undefined4 FUN_10016f4b2(undefined8 param_1,long param_2,long param_3,xmlChar *param_4)

{
  int iVar1;
  undefined4 local_3c;
  long local_28;
  undefined8 *local_10;
  
  local_28 = param_2;
  do {
    if ((local_28 == 0) || (local_28 == param_3)) {
      if (local_28 == param_3) {
        local_3c = 1;
      }
      else {
        local_3c = 0xffffffff;
      }
      return local_3c;
    }
    if (((*(int *)(local_28 + 8) == 5) || (*(int *)(local_28 + 8) == 6)) ||
       (*(int *)(local_28 + 8) == 0x11)) {
      return 0xffffffff;
    }
    if (*(int *)(local_28 + 8) == 1) {
      for (local_10 = *(undefined8 **)(local_28 + 0x60); local_10 != (undefined8 *)0x0;
          local_10 = (undefined8 *)*local_10) {
        if ((local_10[3] == 0) && (param_4 == (xmlChar *)0x0)) {
          return 0;
        }
        if (((local_10[3] != 0) && (param_4 != (xmlChar *)0x0)) &&
           (iVar1 = _xmlStrEqual((xmlChar *)local_10[3],param_4), iVar1 != 0)) {
          return 0;
        }
      }
    }
    local_28 = *(long *)(local_28 + 0x28);
  } while( true );
}

