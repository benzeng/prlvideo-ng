
long FUN_1008f83fe(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_50;
  long local_28;
  long local_18;
  long local_10;
  
  local_18 = 0;
  local_10 = 0;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (local_28 = param_4, param_4 == 0))
  {
    local_50 = 0;
  }
  else {
    for (; local_28 != 0; local_28 = *(long *)(local_28 + 0x30)) {
      lVar3 = FUN_1008f837e(param_1,param_2,param_3,local_28);
      lVar1 = local_18;
      lVar2 = local_10;
      if ((lVar3 != 0) && (lVar1 = lVar3, lVar2 = lVar3, local_18 != 0)) {
        *(long *)(local_10 + 0x30) = lVar3;
        *(long *)(lVar3 + 0x38) = local_10;
        lVar1 = local_18;
      }
      local_10 = lVar2;
      local_18 = lVar1;
    }
    local_50 = local_18;
  }
  return local_50;
}

