
undefined8 FUN_10091cceb(undefined8 param_1,long param_2,long param_3)

{
  undefined8 local_28;
  
  if (param_3 == 0) {
    if (param_2 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_10091a69e(param_1,*(undefined8 *)(param_2 + 0x20),
                               *(undefined8 *)(param_2 + 0x18));
    }
  }
  else if (*(long *)(param_3 + 0x48) == 0) {
    local_28 = FUN_10091a69e(param_1,0,*(undefined8 *)(param_3 + 0x10));
  }
  else {
    local_28 = FUN_10091a69e(param_1,*(undefined8 *)(*(long *)(param_3 + 0x48) + 0x10),
                             *(undefined8 *)(param_3 + 0x10));
  }
  return local_28;
}

