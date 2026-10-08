
undefined8 * FUN_1009878c0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32 [2];
  
  *param_1 = &PTR_FUN_10227da00;
  param_1[1] = &PTR_FUN_10227da58;
  puVar1 = param_1 + 2;
  param_1[2] = PTR_shared_null_1021e15e8;
  local_32[0] = 8;
  FUN_100988a20(puVar1,local_32);
  local_33 = 9;
  FUN_100988a20(puVar1,&local_33);
  local_34 = 10;
  FUN_100988a20(puVar1,&local_34);
  if ((param_2 == 0) || (param_2 == 0xff)) {
    local_35 = 7;
    FUN_100988a20(puVar1,&local_35);
  }
  iVar2 = FUN_100d7e9e0();
  if (iVar2 != 0) {
    local_36 = 0xf;
    FUN_100988a20(puVar1,&local_36);
    local_37 = 0x10;
    FUN_100988a20(puVar1,&local_37);
    local_38 = 0xb;
    FUN_100988a20(puVar1,&local_38);
    local_39 = 0xc;
    FUN_100988a20(puVar1,&local_39);
    local_3a = 0xe;
    FUN_100988a20(puVar1,&local_3a);
    local_3b = 0xff;
    FUN_100988a20(puVar1,&local_3b);
  }
  return param_1;
}

