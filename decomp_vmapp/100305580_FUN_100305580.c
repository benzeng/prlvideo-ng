
void FUN_100305580(long param_1,char *param_2,size_t param_3,char *param_4)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  local_34 = 1;
  local_38 = 1;
  local_3c = 0;
  bVar1 = 299 < *(ushort *)(param_1 + 0xa62c);
  if (param_4 == (char *)0x0) {
    uVar4 = 1;
    uVar2 = 1;
  }
  else {
    uVar5 = bVar1 + 2;
    uVar3 = bVar1 + 1;
    _sscanf(param_4,"%u.%u%n",&local_34,&local_38,&local_3c);
    uVar2 = (ulong)local_34;
    if (local_34 <= uVar5) {
      uVar4 = (ulong)local_38;
      if ((local_34 != uVar5) || (local_38 <= uVar3)) goto LAB_100305614;
    }
    uVar4 = (ulong)uVar3;
    uVar2 = (ulong)uVar5;
    local_38 = uVar3;
    local_34 = uVar5;
  }
LAB_100305614:
  if ((ulong)local_3c == 0) {
    param_4 = "";
  }
  else {
    param_4 = param_4 + local_3c;
  }
  _snprintf(param_2,param_3,"%u.%u%s",uVar2,uVar4,param_4);
  return;
}

