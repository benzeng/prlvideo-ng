
undefined8 FUN_1005285d0(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined8 *local_20;
  undefined1 local_18 [8];
  
  uVar1 = param_2 >> 0x10 ^ param_2;
  local_20 = *(undefined8 **)(param_1 + 8 + ((ulong)(uVar1 >> 8 ^ uVar1) & 0xff) * 8);
  while( true ) {
    if (local_20 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(uint *)(local_20 + 1) == param_2) break;
    local_20 = (undefined8 *)*local_20;
  }
  if (*(int *)(local_20 + 0x13) == param_3) {
    return 0;
  }
  *(int *)(local_20 + 0x13) = param_3;
  *(byte *)((long)local_20 + 0x91) = *(byte *)((long)local_20 + 0x91) | 2;
  FUN_100529480(param_1 + 0x838,&local_20,local_18);
  *(undefined1 *)(param_1 + 0x820) = 1;
  return 0;
}

