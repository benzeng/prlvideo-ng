
QVariant * FUN_10073a5b0(QVariant *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 local_124;
  Data_conflict local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [24];
  undefined4 local_e0 [6];
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 *local_38;
  char *local_30;
  
  if (*(long *)(param_2[2] + 0x18) == 0) {
    (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
    (param_1->field0_0x0).field0_0x0.field7 = 0;
  }
  else {
    pcVar1 = *(code **)(*param_2 + 0x178);
    local_110 = 0xffffffff;
    local_10c = 0xffffffff;
    local_100 = 0;
    local_108 = 0;
    (**(code **)(*param_2 + 0x60))(local_f8,param_2,param_3,0,&local_110);
    (*pcVar1)(local_e0,param_2,local_f8);
    local_118 = 0x80000000;
    local_120.field7 = 0;
    local_124 = local_e0[0];
    local_48 = 0;
    uStack_40 = 0;
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
    local_c8 = 0;
    uStack_c0 = 0;
    local_38 = &local_124;
    local_30 = "int";
    QMetaObject::invokeMethod(*(undefined8 *)(param_2[2] + 0x18),"get",0,&local_120,"QVariant");
    QVariant::QVariant(param_1,(QVariant *)&local_120);
    QVariant::~QVariant((QVariant *)&local_120);
  }
  return param_1;
}

