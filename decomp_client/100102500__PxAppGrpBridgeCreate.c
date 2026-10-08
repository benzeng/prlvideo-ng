
undefined8 _PxAppGrpBridgeCreate(undefined8 param_1,undefined8 *param_2)

{
  undefined4 local_38;
  undefined8 local_34;
  char *local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_38 = 0x24;
  local_34 = *param_2;
  local_2c = "Windows";
  local_24 = *(undefined4 *)(param_2 + 1);
  uStack_20 = *(undefined4 *)((long)param_2 + 0xc);
  uStack_1c = *(undefined4 *)(param_2 + 2);
  uStack_18 = *(undefined4 *)((long)param_2 + 0x14);
  FUN_1001025d0(param_1,&local_38);
  return 0;
}

