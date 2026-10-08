
undefined8 * FUN_10021c2f0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar1 = *(uint *)(param_2 + 0x34);
  if ((uVar1 & 0x40) != 0) {
    local_30[0] = 1;
    FUN_100129840(param_1,local_30);
  }
  if ((uVar1 & 1) != 0) {
    local_34 = 2;
    FUN_100129840(param_1,&local_34);
  }
  if ((uVar1 & 4) != 0) {
    local_38 = 8;
    FUN_100129840(param_1,&local_38);
  }
  if ((uVar1 & 8) != 0) {
    local_3c = 7;
    FUN_100129840(param_1,&local_3c);
    local_40 = 3;
    FUN_100129840(param_1,&local_40);
  }
  local_44 = 4;
  FUN_100129840(param_1,&local_44);
  local_48 = 0x10;
  FUN_100129840(param_1,&local_48);
  if ((uVar1 & 0x20) != 0) {
    local_4c = 9;
    FUN_100129840(param_1,&local_4c);
  }
  if ((uVar1 & 2) != 0) {
    local_50 = 0xb;
    FUN_100129840(param_1,&local_50);
    local_54 = 10;
    FUN_100129840(param_1,&local_54);
  }
  if ((uVar1 & 0x200) != 0) {
    local_58 = 0xc;
    FUN_100129840(param_1,&local_58);
  }
  local_5c = 0xd;
  FUN_100129840(param_1,&local_5c);
  local_60 = 0xe;
  FUN_100129840(param_1,&local_60);
  if ((uVar1 & 2) != 0) {
    uVar3 = 0;
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_2 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
    }
    iVar2 = FUN_10018f860(uVar3);
    if (iVar2 == 9) {
      local_64 = 0xf;
      FUN_100129840(param_1,&local_64);
    }
  }
  local_68 = 6;
  FUN_100129840(param_1,&local_68);
  return param_1;
}

