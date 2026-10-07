
undefined4 * FUN_10089b140(long *param_1,long *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_48 [4];
  int local_44;
  long local_40;
  char *local_38;
  
  if ((param_1 == (long *)0x0) || (puVar1 = (undefined4 *)*param_1, puVar1 == (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)FUN_1008afdf0(2);
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar1[1] = 2;
  }
  local_38 = (char *)*param_2;
  uVar2 = FUN_1008af630(&local_38,&local_40,&local_44,local_48,param_3);
  uVar5 = 0x66;
  if (((uVar2 & 0x80) == 0) && (uVar5 = 0x73, local_44 == 2)) {
    pvVar3 = (void *)FUN_10081ddd0((int)local_40 + 1,"a_int.c",0x13a);
    uVar5 = 0x41;
    if (pvVar3 != (void *)0x0) {
      puVar1[1] = 2;
      lVar4 = 0;
      if (local_40 != 0) {
        if ((local_40 != 1) && (*local_38 == '\0')) {
          local_38 = local_38 + 1;
          local_40 = local_40 + -1;
        }
        _memcpy(pvVar3,local_38,(long)(int)local_40);
        local_38 = local_38 + local_40;
        lVar4 = local_40;
      }
      if (*(long *)(puVar1 + 2) != 0) {
        FUN_10081e1a0();
        lVar4 = local_40;
      }
      *(void **)(puVar1 + 2) = pvVar3;
      *puVar1 = (int)lVar4;
      if (param_1 != (long *)0x0) {
        *param_1 = (long)puVar1;
      }
      *param_2 = (long)local_38;
      return puVar1;
    }
  }
  FUN_100887ce0(0xd,0x96,uVar5,"a_int.c",0x152);
  if ((param_1 == (long *)0x0) || ((undefined4 *)*param_1 != puVar1)) {
    FUN_1008afd70(puVar1);
  }
  return (undefined4 *)0x0;
}

