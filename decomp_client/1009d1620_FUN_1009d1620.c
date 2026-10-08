
kern_return_t FUN_1009d1620(vm_map_t param_1,ulong param_2,ulong param_3,long *param_4)

{
  int iVar1;
  kern_return_t kVar2;
  ulong uVar3;
  ulong address;
  void *pvVar4;
  uint local_3c;
  mach_vm_address_t local_38;
  
  iVar1 = _getpagesize();
  address = (long)-iVar1 & param_2;
  kVar2 = _mach_vm_read(param_1,address,
                        ((long)(iVar1 + -1) + param_3 + param_2 & (long)-iVar1) - address,&local_38,
                        &local_3c);
  if (kVar2 == 0) {
    pvVar4 = (void *)*param_4;
    uVar3 = param_4[1] - (long)pvVar4;
    if (uVar3 < param_3) {
      FUN_1009d2870(param_4,param_3 - uVar3);
      pvVar4 = (void *)*param_4;
    }
    else if ((param_3 < uVar3) && (param_4[1] != (long)pvVar4 + param_3)) {
      param_4[1] = (long)pvVar4 + param_3;
    }
    _memcpy(pvVar4,(void *)((param_2 - address) + local_38),param_3);
    _mach_vm_deallocate(*(vm_map_t *)PTR__mach_task_self__1021e1c58,local_38,(ulong)local_3c);
    kVar2 = 0;
  }
  return kVar2;
}

