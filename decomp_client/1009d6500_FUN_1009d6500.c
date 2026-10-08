
undefined1 FUN_1009d6500(long param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  long local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = param_1 + 8;
  local_38 = *(undefined4 *)(param_1 + 0x10);
  local_28 = 0;
  local_30 = 0;
  local_20 = 0x100000000;
  cVar1 = FUN_1009cf2f0(&local_40,0xc);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    *param_2 = 0x47670001;
    *(ulong *)(param_2 + 1) = CONCAT44(local_38,(undefined4)local_30);
    if ((*(int *)(param_1 + 0x2c) == 0) || (*(int *)(param_1 + 0x20) == 0)) {
      local_28 = CONCAT44(*(undefined4 *)(param_1 + 0x34),1);
      local_20 = (ulong)local_20._4_4_ << 0x20;
    }
    else {
      local_28 = CONCAT44(*(undefined4 *)(param_1 + 0x34),3);
      local_20 = CONCAT44(local_20._4_4_,*(int *)(param_1 + 0x2c));
    }
    uVar2 = 1;
  }
  if (local_20._4_4_ != 2) {
    FUN_1009cf3f0(local_40,local_38,&local_28,0xc);
  }
  return uVar2;
}

