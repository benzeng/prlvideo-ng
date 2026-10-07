
undefined4 FUN_1001a24e9(long param_1,undefined8 param_2,long param_3)

{
  undefined4 local_3c;
  undefined8 *local_10;
  
  if ((((param_3 == 0) || (*(int *)(param_3 + 8) != 1)) || (*(long *)(param_3 + 0x60) == 0)) ||
     ((param_1 == 0 || (*(long *)(param_1 + 0x18) == 0)))) {
    local_3c = 0xffffffff;
  }
  else {
    for (local_10 = *(undefined8 **)(param_3 + 0x60); local_10 != (undefined8 *)0x0;
        local_10 = (undefined8 *)*local_10) {
      if (local_10[3] == 0) {
        _xmlXPathRegisterNs(*(undefined8 *)(param_1 + 0x18),"defaultns",local_10[2]);
      }
      else {
        _xmlXPathRegisterNs(*(undefined8 *)(param_1 + 0x18),local_10[3],local_10[2]);
      }
    }
    local_3c = 0;
  }
  return local_3c;
}

