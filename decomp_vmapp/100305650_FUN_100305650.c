
void FUN_100305650(long param_1,char *param_2,size_t param_3,char *param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  uVar3 = 0x32;
  if (*(ushort *)(param_1 + 0xa62c) < 300) {
    uVar3 = 0x14;
  }
  if (param_4 == (char *)0x0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    _sscanf(param_4,"%u.%u%n",&local_2c,&local_30,&local_34);
    uVar1 = (ulong)local_2c;
    if (local_2c < 2) {
      uVar2 = (ulong)local_30;
      if ((local_2c != 1) || (local_30 <= uVar3)) goto LAB_1003056e7;
    }
    local_2c = 1;
    uVar1 = 1;
    uVar2 = (ulong)uVar3;
    local_30 = uVar3;
  }
LAB_1003056e7:
  if ((ulong)local_34 == 0) {
    param_4 = "";
  }
  else {
    param_4 = param_4 + local_34;
  }
  _snprintf(param_2,param_3,"%u.%u%s",uVar1,uVar2,param_4);
  return;
}

