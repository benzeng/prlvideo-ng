
void FUN_100200140(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 local_28 [8];
  uint *local_20;
  
  iVar2 = -0x7ffffff7;
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (iVar2 = *(int *)(*(long *)(param_1 + 0x68) + 0x3c), iVar2 == 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x78);
    local_20 = *(uint **)(param_1 + 0x78);
    if (1 < *local_20) {
      FUN_100036c40(puVar1,local_20[1]);
      local_20 = (uint *)*puVar1;
    }
    local_20 = local_20 + (long)(int)local_20[2] * 2 + 4;
    FUN_1000557c0(local_28,puVar1,&local_20);
    FUN_1001fe6c0(param_1);
    return;
  }
  FUN_1001ff8b0(param_1,iVar2);
  return;
}

