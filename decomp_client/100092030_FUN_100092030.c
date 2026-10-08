
void FUN_100092030(long param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined4 param_5
                  )

{
  undefined1 local_870 [32];
  undefined1 *local_850;
  int local_848;
  undefined4 local_844;
  undefined4 local_840;
  undefined1 local_38 [8];
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,"sendEventDrop");
  }
  FUN_100091be0(local_38,param_1,param_2,1,param_3);
  FUN_100099d90(local_870,7,0,200);
  local_848 = (uint)(param_3 != 0) + (uint)(param_3 != 0) * 4;
  local_850 = local_38;
  local_844 = param_4;
  local_840 = param_5;
  FUN_1003342c0(*(undefined8 *)(param_1 + 0x10),local_870);
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_100039a80(local_38);
  return;
}

