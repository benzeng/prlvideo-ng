
void FUN_1000759a0(long param_1)

{
  undefined8 in_R9;
  undefined4 local_bc;
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
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 *local_20;
  char *local_18;
  
  FUN_1008e3970("","vm",0,"WARNING: Stopping VM because of a fatal failure (!).");
  FUN_10008fa70(*(undefined8 *)(param_1 + 0x20),0x4e27);
  QThread::wait(*(ulong *)(param_1 + 0x20));
  local_bc = 0xffffffff;
  local_38 = 0;
  uStack_30 = 0;
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
  local_20 = &local_bc;
  local_18 = "int";
  QMetaObject::invokeMethod
            (*(undefined8 *)PTR_self_100ba2100,"exit",2,0,0,in_R9,local_20,"int",0,0,0,0,0,0,0,0,0,0
             ,0,0,0,0,0,0,0,0);
  return;
}

