
undefined4 *
FUN_100921fad(long param_1,long param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *local_40;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_40 = (undefined4 *)0x0;
  }
  else {
    local_40 = (undefined4 *)(*(code *)_xmlMalloc)(0x30);
    if (local_40 == (undefined4 *)0x0) {
      FUN_10091b97e(param_1,"allocating particle component",0);
      local_40 = (undefined4 *)0x0;
    }
    else {
      *local_40 = 0x19;
      *(undefined8 *)(local_40 + 2) = 0;
      *(undefined8 *)(local_40 + 10) = param_3;
      local_40[8] = param_4;
      local_40[9] = param_5;
      *(undefined8 *)(local_40 + 4) = 0;
      *(undefined8 *)(local_40 + 6) = 0;
      FUN_10091eeca(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x48,local_40);
    }
  }
  return local_40;
}

