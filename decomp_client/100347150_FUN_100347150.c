
undefined4 * FUN_100347150(undefined4 *param_1,long param_2)

{
  char cVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = *(undefined4 *)(param_2 + 0x158);
  uStack_24 = *(undefined4 *)(param_2 + 0x15c);
  uStack_20 = *(undefined4 *)(param_2 + 0x160);
  uStack_1c = *(undefined4 *)(param_2 + 0x164);
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  cVar1 = *(char *)(param_2 + 0x168);
  *(char *)(param_1 + 4) = cVar1;
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)(param_2 + 0x169);
  if (cVar1 == '\x03') {
    cVar1 = FUN_100345d70(param_2,&local_28,2);
    if (cVar1 != '\0') {
      *param_1 = local_28;
      param_1[1] = uStack_24;
      param_1[2] = uStack_20;
      param_1[3] = uStack_1c;
    }
  }
  return param_1;
}

