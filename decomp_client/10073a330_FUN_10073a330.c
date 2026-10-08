
void FUN_10073a330(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 local_168 [6];
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [28];
  undefined4 local_11c;
  undefined4 local_118 [6];
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [24];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 *local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 *local_48;
  char *local_40;
  undefined4 *local_38;
  char *local_30;
  
  if (*(long *)(param_1[2] + 0x18) != 0) {
    pcVar1 = *(code **)(*param_1 + 0x178);
    local_100 = 0xffffffff;
    local_fc = 0xffffffff;
    local_f0 = 0;
    local_f8 = 0;
    local_cc = param_4;
    (**(code **)(*param_1 + 0x60))(local_e8,param_1,param_2,0,&local_100);
    (*pcVar1)(local_118,param_1,local_e8);
    local_d0 = local_118[0];
    pcVar1 = *(code **)(*param_1 + 0x178);
    local_150 = 0xffffffff;
    local_14c = 0xffffffff;
    local_140 = 0;
    local_148 = 0;
    (**(code **)(*param_1 + 0x60))(local_138,param_1,param_3,0,&local_150);
    (*pcVar1)(local_168,param_1,local_138);
    local_11c = local_168[0];
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = &local_cc;
    local_c0 = "int";
    local_38 = &local_d0;
    local_30 = "int";
    local_48 = &local_11c;
    local_40 = "int";
    QMetaObject::invokeMethod(*(undefined8 *)(param_1[2] + 0x18),"move",0,0,0);
  }
  return;
}

