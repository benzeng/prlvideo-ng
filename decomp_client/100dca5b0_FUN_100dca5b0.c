
undefined8 FUN_100dca5b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  kern_return_t kVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_a0;
  size_t local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  mach_msg_type_number_t local_34 [3];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar5 = 0xffffffff;
  local_28 = lVar1;
  if (param_1 != (undefined8 *)0x0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 7) = 0x1000;
    if (((DAT_102319230 != 0) || (DAT_102319230 = _mach_host_self(), DAT_102319230 != 0)) &&
       ((DAT_102319238 != 0 ||
        (kVar3 = _host_page_size(DAT_102319230,(vm_size_t *)&DAT_102319238), kVar3 == 0)))) {
      local_34[0] = 0xf;
      kVar3 = _host_statistics(DAT_102319230,2,(host_info_t)&local_70,local_34);
      if (kVar3 == 0) {
        local_34[1] = 2;
        local_34[2] = 5;
        local_98 = 0x20;
        iVar4 = _sysctl((int *)(local_34 + 1),2,local_90,&local_98,(void *)0x0,0);
        if (iVar4 == 0) {
          param_1[5] = local_80;
        }
        local_34[1] = 6;
        local_34[2] = 0x18;
        local_98 = 8;
        uVar5 = 0;
        iVar4 = _sysctl((int *)(local_34 + 1),2,&local_a0,&local_98,(void *)0x0,0);
        if (iVar4 == 0) {
          *param_1 = local_a0;
        }
        lVar2 = DAT_102319238;
        *(int *)(param_1 + 7) = (int)DAT_102319238;
        param_1[1] = (ulong)local_70 * lVar2;
        param_1[3] = (ulong)local_6c * lVar2;
        param_1[2] = (ulong)local_68 * lVar2;
        param_1[4] = (ulong)local_64 * lVar2;
      }
    }
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

