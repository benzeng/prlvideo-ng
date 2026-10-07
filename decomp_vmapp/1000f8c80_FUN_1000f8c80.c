
void FUN_1000f8c80(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 in_R9;
  undefined4 local_ac;
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
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 *local_18;
  char *local_10;
  
  local_28 = 0;
  uStack_20 = 0;
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
  local_18 = &local_ac;
  local_10 = "unsigned";
  local_ac = param_2;
  cVar1 = QMetaObject::invokeMethod
                    (param_1,"onVcpuCtxCollected",2,0,0,in_R9,local_18,"unsigned",0,0,0,0,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0);
  if (cVar1 == '\0') {
    FUN_1008e3970("","vm",0,
                  "Couldn\'t notify CGuestDumpCollector that vcpu %u context was collected",local_ac
                 );
  }
  return;
}

