
undefined4 * FUN_100921e20(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *local_40;
  
  local_40 = (undefined4 *)(*(code *)_xmlMalloc)(0x28);
  if (local_40 == (undefined4 *)0x0) {
    FUN_10091b97e(param_1,"allocating QName reference item",0);
    local_40 = (undefined4 *)0x0;
  }
  else {
    *local_40 = 2000;
    *(undefined8 *)(local_40 + 6) = param_3;
    *(undefined8 *)(local_40 + 8) = param_4;
    *(undefined8 *)(local_40 + 2) = 0;
    local_40[4] = param_2;
    FUN_10091eeca(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x48,local_40);
  }
  return local_40;
}

