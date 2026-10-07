
long FUN_100207363(long param_1,long param_2)

{
  undefined8 local_30;
  
  if (*(long *)(param_2 + 0x98) == 0) {
    local_30 = 0;
  }
  else {
    local_30 = param_2;
    if (*(long *)(param_2 + 0x98) != param_1) {
      if ((*(uint *)(*(long *)(param_2 + 0x98) + 0x58) >> 9 & 1) == 0) {
        *(uint *)(*(long *)(param_2 + 0x98) + 0x58) =
             *(uint *)(*(long *)(param_2 + 0x98) + 0x58) | 0x200;
        local_30 = FUN_100207363(param_1,*(undefined8 *)(param_2 + 0x98));
        *(uint *)(*(long *)(param_2 + 0x98) + 0x58) =
             *(uint *)(*(long *)(param_2 + 0x98) + 0x58) ^ 0x200;
      }
      else {
        local_30 = 0;
      }
    }
  }
  return local_30;
}

