
void FUN_100025c00(long param_1,byte param_2)

{
  uint local_18 [4];
  
  local_18[0] = (uint)param_2;
  if ((local_18[0] != *(byte *)(param_1 + 0xa4)) &&
     (*(byte *)(param_1 + 0xa4) = param_2, *(char *)(param_1 + 0x70) != '\0')) {
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0;
    FUN_1004c2f50(*(undefined8 *)(param_1 + 0x78),0x13,local_18,0x10,1,0);
  }
  return;
}

