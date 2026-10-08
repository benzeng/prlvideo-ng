
int FUN_10086be69(byte *param_1,int *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *local_40;
  byte *local_28;
  int local_c;
  
  iVar2 = *param_2;
  iVar3 = *param_4;
  local_40 = param_1;
  local_28 = param_3;
  while( true ) {
    iVar4 = (int)local_28;
    if ((param_3 + iVar3 <= local_28) || ((long)*param_2 <= (long)(local_40 + (5 - (long)param_1))))
    break;
    bVar1 = *local_28;
    local_28 = local_28 + 1;
    if (param_1 + iVar2 <= local_40) break;
    if (0x7f < bVar1) {
      *param_2 = (int)local_40 - (int)param_1;
      *param_4 = iVar4 - (int)param_3;
      return -1;
    }
    *local_40 = bVar1;
    local_c = -6;
    while ((local_40 = local_40 + 1, -1 < local_c && (local_40 < param_1 + iVar2))) {
      *local_40 = bVar1 >> ((byte)local_c & 0x1f) & 0x3f | 0x80;
      local_c = local_c + -6;
    }
  }
  *param_2 = (int)local_40 - (int)param_1;
  *param_4 = iVar4 - (int)param_3;
  return *param_2;
}

