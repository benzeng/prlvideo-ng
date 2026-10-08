
undefined4 * FUN_10092259c(long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 *local_40;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_40 = (undefined4 *)0x0;
  }
  else {
    local_40 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
    if (local_40 == (undefined4 *)0x0) {
      FUN_10091b97e(param_1,"adding wildcard",0);
      local_40 = (undefined4 *)0x0;
    }
    else {
      _memset(local_40,0,0x48);
      *local_40 = param_3;
      *(undefined8 *)(local_40 + 6) = param_4;
      local_40[8] = 1;
      local_40[9] = 1;
      FUN_10091eeca(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x48,local_40);
    }
  }
  return local_40;
}

