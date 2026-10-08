
int FUN_100914826(long param_1)

{
  bool bVar1;
  undefined4 local_24;
  undefined4 local_10;
  
  local_10 = 0;
  bVar1 = false;
  while ((0x2f < **(byte **)(param_1 + 8) && (**(byte **)(param_1 + 8) < 0x3a))) {
    local_10 = local_10 * 10 + (uint)**(byte **)(param_1 + 8) + -0x30;
    bVar1 = true;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  }
  if (bVar1) {
    local_24 = local_10;
  }
  else {
    local_24 = -1;
  }
  return local_24;
}

