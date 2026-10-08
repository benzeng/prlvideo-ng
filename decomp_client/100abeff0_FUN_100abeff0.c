
undefined8 FUN_100abeff0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    return 0;
  }
  uVar3 = 0xffff;
  uVar2 = 0xffff;
  if (*(char *)(param_1 + 0x51) == '\0') goto LAB_100abf0c4;
  local_28 = QCursor::pos();
  local_38 = 0;
  local_30 = 0xffffffffffffffff;
  FUN_100ae7810(local_48);
  iVar1 = FUN_100ae7f00(&local_38,0,0);
  FUN_100abea30(iVar1,&local_38);
  if (iVar1 == 0) {
    iVar1 = (int)local_30 + 9;
LAB_100abf075:
    local_28 = CONCAT44(local_28._4_4_,iVar1);
  }
  else {
    if (iVar1 == 2) {
      iVar1 = (int)local_38 + -9;
      goto LAB_100abf075;
    }
    if (iVar1 == 3) {
      local_28 = CONCAT44(local_38._4_4_ + -9,(undefined4)local_28);
    }
  }
  if (((*(long *)(param_1 + 0x20) == 0) || (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0)) ||
     (*(long *)(param_1 + 0x28) == 0)) {
    FUN_100ae79a0(local_48);
    return 0;
  }
  uVar2 = FUN_100319c50();
  uVar2 = FUN_100331080(uVar2,&local_28);
  uVar3 = (undefined2)((ulong)uVar2 >> 0x20);
  FUN_100ae79a0(local_48);
LAB_100abf0c4:
  local_50 = 0x11;
  local_4c = (undefined2)uVar2;
  local_4a = uVar3;
  FUN_100a4a170(param_1 + 0x10,&local_50,8);
  return 1;
}

