
undefined8 * FUN_100921ed1(long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *local_40;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_40 = (undefined8 *)0x0;
  }
  else {
    local_40 = (undefined8 *)(*(code *)_xmlMalloc)(0x28);
    if (local_40 == (undefined8 *)0x0) {
      FUN_10091b97e(param_1,"allocating model group component",0);
      local_40 = (undefined8 *)0x0;
    }
    else {
      *local_40 = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      local_40[4] = 0;
      *(undefined4 *)local_40 = param_3;
      local_40[4] = param_4;
      FUN_10091eeca(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x48,local_40);
    }
  }
  return local_40;
}

