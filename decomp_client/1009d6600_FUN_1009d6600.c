
long FUN_1009d6600(long param_1,ulong param_2)

{
  kern_return_t kVar1;
  long lVar2;
  mach_vm_address_t mVar3;
  mach_vm_size_t local_a0;
  mach_vm_address_t local_98;
  mach_msg_type_number_t local_8c;
  byte local_88 [20];
  int local_74;
  natural_t local_44;
  mach_vm_size_t local_40;
  ulong local_38;
  
  local_44 = 0;
  local_8c = 0x11;
  lVar2 = 0;
  if (param_2 != 0) {
    local_38 = param_2;
    kVar1 = _mach_vm_region_recurse
                      (*(vm_map_t *)(param_1 + 0x30),&local_38,&local_40,&local_44,
                       (vm_region_recurse_info_t)local_88,&local_8c);
    lVar2 = 0;
    if ((kVar1 == 0) && (local_38 <= param_2)) {
      if (local_74 == 0x1e) {
        while( true ) {
          mVar3 = local_40 + local_38;
          local_44 = 0;
          local_8c = 0x11;
          local_98 = mVar3;
          kVar1 = _mach_vm_region_recurse
                            (*(vm_map_t *)(param_1 + 0x30),&local_98,&local_a0,&local_44,
                             (vm_region_recurse_info_t)local_88,&local_8c);
          if ((((kVar1 != 0) || (local_98 != mVar3)) || (local_74 != 0x1e)) ||
             ((local_88[0] & 1) == 0)) break;
          local_40 = local_40 + local_a0;
        }
      }
      lVar2 = (local_38 - param_2) + local_40;
    }
  }
  return lVar2;
}

