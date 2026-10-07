
long FUN_1001fed4c(long param_1)

{
  long local_10;
  
  local_10 = param_1;
  while( true ) {
    if (local_10 == 0) {
      return 0;
    }
    if ((*(int *)(local_10 + 0xa0) == 0x2e) || ((*(uint *)(local_10 + 0x58) >> 0xe & 1) != 0))
    break;
    local_10 = *(long *)(local_10 + 0x70);
  }
  return local_10;
}

