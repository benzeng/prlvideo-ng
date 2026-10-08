
char * FUN_1009d1a10(char *param_1,vm_map_t param_2,mach_vm_address_t param_3)

{
  char *pcVar1;
  kern_return_t kVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  char *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  mach_vm_size_t local_90;
  mach_vm_address_t local_88;
  mach_msg_type_number_t local_7c;
  int local_78 [17];
  natural_t local_34;
  mach_vm_size_t local_30;
  mach_vm_address_t local_28;
  
  local_34 = 0;
  local_7c = 0x11;
  local_28 = param_3;
  kVar2 = _mach_vm_region_recurse(param_2,&local_28,&local_30,&local_34,local_78,&local_7c);
  if (kVar2 == 0) {
    if ((local_28 - param_3) + local_30 < 0x1000) {
      local_88 = local_30 + local_28;
      kVar2 = _mach_vm_region_recurse(param_2,&local_88,&local_90,&local_34,local_78,&local_7c);
      if ((kVar2 == 0) && (local_88 == local_30 + local_28)) {
        local_30 = local_30 + local_90;
      }
    }
    uVar4 = (local_30 - param_3) + local_28;
  }
  else {
    local_30 = 0;
    uVar4 = 0;
  }
  if (uVar4 == 0) {
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  else {
    uVar5 = 0x2000;
    if (uVar4 < 0x2001) {
      uVar5 = uVar4;
    }
    local_a8 = (char *)0x0;
    pcStack_a0 = (char *)0x0;
    local_98 = 0;
    iVar3 = FUN_1009d1620(param_2,param_3,uVar5,&local_a8);
    pcVar1 = local_a8;
    if (iVar3 == 0) {
      _strlen(local_a8);
      std::string::__init(param_1,(ulong)pcVar1);
    }
    else {
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
    }
    if (local_a8 != (char *)0x0) {
      if (pcStack_a0 != local_a8) {
        pcStack_a0 = local_a8;
      }
      operator_delete(local_a8);
    }
  }
  return param_1;
}

