
void FUN_100698750(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  uVar2 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  uVar2 = FUN_100319c50(uVar2);
  FUN_100330c70(uVar2,0,1);
  FUN_100331200(uVar2,1);
  uVar2 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  iVar1 = FUN_100319ae0(uVar2);
  if (iVar1 == 2) {
    local_30 = 3;
    local_28 = 0;
    local_2c = 0;
    local_24 = 0xffff;
    local_20 = 0;
    local_1c = 0;
    puVar3 = &local_30;
    uVar4 = 1;
  }
  else {
    local_48 = 3;
    local_40 = 0;
    local_44 = 0;
    local_3c = 0xffff;
    local_38 = 0;
    local_34 = 0;
    puVar3 = &local_48;
    uVar4 = 2;
  }
  FUN_10031bef0(uVar2,uVar4,puVar3);
  return;
}

