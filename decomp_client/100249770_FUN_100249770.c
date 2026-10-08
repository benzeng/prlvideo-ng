
undefined8 FUN_100249770(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_10018c280(uVar1);
  uVar2 = FUN_100319c50(uVar1);
  uVar1 = 0;
  FUN_100330c70(uVar2,0,1);
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_10018c280(uVar1);
  uVar1 = FUN_100319c50(uVar1);
  FUN_100331200(uVar1,1);
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_10018c280(uVar1);
  local_30 = 3;
  local_28 = 0;
  local_2c = 0;
  local_24 = 0xffff;
  local_20 = 0;
  local_1c = 0;
  FUN_10031bef0(uVar1,1,&local_30);
  return 0;
}

