
undefined8
FUN_100024ac0(long param_1,byte param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
             undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar1 = 0;
  }
  else {
    local_20 = (uint)param_2;
    local_c = param_7;
    local_1c = param_3;
    local_18 = param_4;
    local_14 = param_5;
    local_10 = param_6;
    uVar1 = FUN_1004c2f50(*(undefined8 *)(param_1 + 0x78),0xf,&local_20,0x18,1,0);
  }
  return uVar1;
}

