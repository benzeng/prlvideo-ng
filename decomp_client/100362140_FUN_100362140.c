
void FUN_100362140(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(param_3 + 8);
  uVar1 = *(uint *)(lVar4 + 0x80);
  uVar3 = uVar1 ^ param_4;
  if ((param_4 & uVar3) == 0) {
    uVar5 = 0;
    if ((uVar1 == param_4) || ((uVar3 & uVar1) != 0)) goto LAB_1003621c7;
  }
  else {
    uVar5 = 1;
    if ((uVar3 & uVar1) == 0) goto LAB_1003621c7;
  }
  FUN_100df99c0("[HID_CTL]","prl_client_app",0,
                "Wrong saved mouse button state. stored mouse buttons: 0x%x, buttons: 0x%x, eventButton: 0x%x"
                ,uVar1,param_4,uVar3,param_1,param_2);
  lVar4 = *(long *)(param_3 + 8);
LAB_1003621c7:
  FUN_10035daa0(lVar4,param_4);
  if ((uVar3 & 1) != 0) {
    plVar2 = *(long **)(*(long *)(param_3 + 8) + 0x28);
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    local_58 = 0;
    local_38 = 1;
    local_68 = param_1;
    local_60 = param_2;
    (**(code **)(*plVar2 + 0xd0))(plVar2,&local_68,uVar5);
  }
  if ((uVar3 & 2) != 0) {
    plVar2 = *(long **)(*(long *)(param_3 + 8) + 0x28);
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_70 = 2;
    local_a0 = param_1;
    local_98 = param_2;
    (**(code **)(*plVar2 + 0xd0))(plVar2,&local_a0,uVar5);
  }
  if ((uVar3 & 4) != 0) {
    plVar2 = *(long **)(*(long *)(param_3 + 8) + 0x28);
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_a8 = 4;
    local_d8 = param_1;
    local_d0 = param_2;
    (**(code **)(*plVar2 + 0xd0))(plVar2,&local_d8,uVar5);
  }
  if (uVar1 == param_4) {
    plVar2 = *(long **)(*(long *)(param_3 + 8) + 0x28);
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_110 = param_1;
    local_108 = param_2;
    (**(code **)(*plVar2 + 0xd0))(plVar2,&local_110,uVar5);
  }
  return;
}

