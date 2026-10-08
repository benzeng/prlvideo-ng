
void FUN_100a2a910(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long ***ppplVar4;
  long ****pppplVar5;
  long *plVar6;
  long ****pppplVar7;
  undefined1 local_c8 [8];
  void *local_c0;
  void *local_b8;
  string local_a0 [40];
  void *local_78;
  void *local_70;
  long local_60;
  long *local_58;
  long local_50;
  long ***local_48;
  long ***local_40;
  long local_38;
  
  local_48 = (long ***)&local_48;
  local_38 = 0;
  local_40 = local_48;
  if (param_2 == 0) {
    FUN_100a24020(&local_60,param_3,0);
    FUN_100a2bc20(&local_48,local_58,&local_60,0);
    if (local_50 != 0) {
      lVar1 = *local_58;
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(local_60 + 8);
      **(long **)(local_60 + 8) = lVar1;
      local_50 = 0;
      plVar6 = local_58;
      while (plVar6 != &local_60) {
        plVar2 = (long *)plVar6[1];
        std::string::~string((string *)(plVar6 + 2));
        operator_delete(plVar6);
        plVar6 = plVar2;
      }
    }
  }
  if ((*(int *)(param_1 + 0x10) == 6) && (local_38 == 0)) {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xdf;
  }
  FUN_100a23f10(&local_78,&local_48,*(int *)(param_1 + 0x10) == 6);
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_100a332c0(local_c8,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),1,local_78,
                (int)local_70 - (int)local_78);
  FUN_100a239c0(uVar3,local_c8);
  std::string::~string(local_a0);
  if (local_c0 != (void *)0x0) {
    if (local_b8 != local_c0) {
      local_b8 = local_c0;
    }
    operator_delete(local_c0);
  }
  if (local_78 != (void *)0x0) {
    if (local_70 != local_78) {
      local_70 = local_78;
    }
    operator_delete(local_78);
  }
  if (local_38 != 0) {
    ppplVar4 = (long ***)*local_40;
    ppplVar4[1] = local_48[1];
    *local_48[1] = (long *)ppplVar4;
    local_38 = 0;
    pppplVar7 = (long ****)local_40;
    while (pppplVar7 != &local_48) {
      pppplVar5 = (long ****)pppplVar7[1];
      std::string::~string((string *)(pppplVar7 + 2));
      operator_delete(pppplVar7);
      pppplVar7 = pppplVar5;
    }
  }
  return;
}

