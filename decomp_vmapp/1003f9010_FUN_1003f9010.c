
void FUN_1003f9010(undefined4 param_1,undefined4 param_2)

{
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined1 local_38 [24];
  
  FUN_10006a060(local_38);
  FUN_10006a860(local_38,5,0);
  FUN_10006a860(local_38,param_1,1);
  local_58 = (void *)0x0;
  pvStack_50 = (void *)0x0;
  local_48 = 0;
  FUN_1000648b0(DAT_1011c3650,param_2,&local_58,local_38);
  if (local_58 != (void *)0x0) {
    if (pvStack_50 != local_58) {
      pvStack_50 = (void *)((~((long)pvStack_50 + (-4 - (long)local_58)) & 0xfffffffffffffffcU) +
                           (long)pvStack_50);
    }
    operator_delete(local_58);
  }
  FUN_10006a680(local_38);
  return;
}

