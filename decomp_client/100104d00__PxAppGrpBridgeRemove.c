
undefined8 _PxAppGrpBridgeRemove(undefined8 *param_1)

{
  undefined4 local_38;
  undefined8 local_34;
  char *local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_38 = 0x24;
  local_34 = *param_1;
  local_2c = "Windows";
  local_24 = *(undefined4 *)(param_1 + 1);
  uStack_20 = *(undefined4 *)((long)param_1 + 0xc);
  uStack_1c = *(undefined4 *)(param_1 + 2);
  uStack_18 = *(undefined4 *)((long)param_1 + 0x14);
  FUN_100104d80(&local_38);
  return 0;
}

