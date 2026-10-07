
void FUN_0040c5b0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  long local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  puVar2 = PTR_prl_xfunctions_0061bd60;
  lVar1 = *param_1;
  if (DAT_0061d900 == 0) {
    DAT_0061d900 = (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x68))(lVar1,"_NET_ACTIVE_WINDOW",0);
  }
  local_d8[0] = 0x21;
  local_d0 = 0;
  local_c8 = 1;
  local_a8 = 0x20;
  local_b0 = DAT_0061d900;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_b8 = param_2;
  (**(code **)(puVar2 + 0x80))
            (lVar1,*(undefined8 *)
                    ((long)*(int *)(lVar1 + 0xe0) * 0x80 + 0x10 + *(long *)(lVar1 + 0xe8)),0,
             0x180000,local_d8);
  return;
}

