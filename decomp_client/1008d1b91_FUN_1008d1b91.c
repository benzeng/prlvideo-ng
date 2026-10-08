
undefined4 FUN_1008d1b91(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 local_2c;
  long local_20;
  undefined8 *local_18;
  
  if ((param_1 == 0) || (param_2 == (undefined8 *)0x0)) {
    local_2c = 0xffffffff;
  }
  else {
    local_20 = param_1;
    if ((((*(int *)(param_1 + 8) == 1) || (*(int *)(param_1 + 8) == 2)) ||
        (*(int *)(param_1 + 8) == 9)) ||
       (((*(int *)(param_1 + 8) == 3 || (*(int *)(param_1 + 8) == 0xd)) ||
        (*(int *)(param_1 + 8) == 0x13)))) {
      for (; (local_20 != 0 &&
             (((*(int *)(local_20 + 8) == 1 || (*(int *)(local_20 + 8) == 2)) ||
              ((*(int *)(local_20 + 8) == 3 || (*(int *)(local_20 + 8) == 0x13))))));
          local_20 = *(long *)(local_20 + 0x28)) {
        if ((*(int *)(local_20 + 8) == 1) || (*(int *)(local_20 + 8) == 0x13)) {
          for (local_18 = *(undefined8 **)(local_20 + 0x60); local_18 != (undefined8 *)0x0;
              local_18 = (undefined8 *)*local_18) {
            if (local_18 == param_2) {
              return 1;
            }
            iVar1 = _xmlStrEqual((xmlChar *)local_18[3],(xmlChar *)param_2[3]);
            if (iVar1 != 0) {
              return 0xfffffffe;
            }
          }
        }
      }
      if ((local_20 == 0) ||
         (((*(int *)(local_20 + 8) != 9 && (*(int *)(local_20 + 8) != 0xd)) ||
          (*(undefined8 **)(local_20 + 0x60) != param_2)))) {
        local_2c = 0xfffffffd;
      }
      else {
        local_2c = 1;
      }
    }
    else {
      local_2c = 0xfffffffe;
    }
  }
  return local_2c;
}

