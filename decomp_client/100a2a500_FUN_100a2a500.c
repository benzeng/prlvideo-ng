
void FUN_100a2a500(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  long *plVar5;
  long ****pppplVar6;
  long local_108;
  long *local_100;
  long local_f8;
  long ***local_f0;
  long ***local_e8;
  long local_e0;
  long local_d8;
  char *local_d0;
  long ***local_c8;
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
  long local_40;
  char *local_38;
  
  local_e0 = 0;
  local_f0 = (long ***)&local_f0;
  local_e8 = (long ***)&local_f0;
  if (param_2 == 0) {
    FUN_100a24020(&local_108,param_3,1);
    FUN_100a2bc20(&local_f0,local_100,&local_108,0);
    if (local_f8 != 0) {
      lVar1 = *local_100;
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(local_108 + 8);
      **(long **)(local_108 + 8) = lVar1;
      local_f8 = 0;
      plVar5 = local_100;
      while (plVar5 != &local_108) {
        plVar2 = (long *)plVar5[1];
        std::string::~string((string *)(plVar5 + 2));
        operator_delete(plVar5);
        plVar5 = plVar2;
      }
    }
    if (local_e0 != 0) goto LAB_100a2a5e6;
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xdf;
LAB_100a2a5e6:
  local_d8 = param_1 + 0x18;
  local_40 = param_1 + 0x10;
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
  local_c0 = "const std::list<std::string> &";
  local_d0 = "CP_TOOL_FORMAT";
  local_38 = "QString";
  local_c8 = (long ***)&local_f0;
  QMetaObject::invokeMethod
            (*(undefined8 *)(param_1 + 8),"resolvePathesFromVmCompleted",2,0,0,param_6,local_40,
             "QString",local_d8,"CP_TOOL_FORMAT",&local_f0,"const std::list<std::string> &",0,0,0,0,
             0,0,0,0,0,0,0,0,0,0);
  if (local_e0 != 0) {
    ppplVar3 = (long ***)*local_e8;
    ppplVar3[1] = local_f0[1];
    *local_f0[1] = (long *)ppplVar3;
    local_e0 = 0;
    pppplVar6 = (long ****)local_e8;
    while (pppplVar6 != &local_f0) {
      pppplVar4 = (long ****)pppplVar6[1];
      std::string::~string((string *)(pppplVar6 + 2));
      operator_delete(pppplVar6);
      pppplVar6 = pppplVar4;
    }
  }
  return;
}

