
void FUN_1004ae3c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar1 = FUN_100097250(*(undefined8 *)(param_1 + 0x78));
  local_30 = 1;
  if (*(long *)(lVar1 + 0x868) != 0) {
    local_30 = 2;
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_38 = 0;
  FUN_1004b43e0(&local_38,param_3,&local_30,0x10);
  if (local_38 != 0) {
    FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_2);
  }
  return;
}

