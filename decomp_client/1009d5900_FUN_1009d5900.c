
undefined8 FUN_1009d5900(long param_1,undefined4 *param_2)

{
  long lVar1;
  thread_act_t target_act;
  ulong *puVar2;
  bool bVar3;
  char cVar4;
  mach_port_t mVar5;
  kern_return_t kVar6;
  int iVar7;
  size_t sVar8;
  ulong uVar9;
  uint uVar10;
  thread_state_flavor_t flavor;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined1 uVar14;
  void *local_498;
  void *pvStack_490;
  undefined8 local_488;
  long local_480;
  uint local_478;
  ulong local_470;
  mach_msg_type_number_t local_464;
  int local_460 [17];
  natural_t local_41c;
  mach_vm_size_t local_418;
  ulong local_410;
  mach_msg_type_number_t local_404;
  ulong local_400;
  ulong local_3f8;
  long local_3f0;
  int local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  int local_3c0;
  natural_t local_3b8 [10];
  uint local_390;
  ulong local_338;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar1 = param_1 + 8;
  local_3e8 = *(int *)(param_1 + 0x10);
  local_3c0 = 0;
  local_3c8 = 0;
  local_3d0 = 0;
  local_3d8 = 0;
  local_3e0 = 0;
  target_act = *(thread_act_t *)(param_1 + 0x2c);
  local_3f0 = lVar1;
  if (target_act == 0) {
    bVar3 = false;
  }
  else if (*(int *)(param_1 + 0x20) == 0) {
    bVar3 = false;
  }
  else {
    local_404 = 0x380;
    if (((*(long *)(param_1 + 0x40) == 0) || (mVar5 = _mach_thread_self(), mVar5 != target_act)) ||
       (uVar13 = *(uint *)(param_1 + 0x38), (uVar13 | 0x1000000) != 0x1000007)) {
      flavor = 1;
      if (*(int *)(param_1 + 0x38) != 7) {
        if (*(int *)(param_1 + 0x38) != 0x1000007) {
          bVar3 = false;
          goto LAB_1009d5b62;
        }
        flavor = 4;
      }
      kVar6 = _thread_get_state(target_act,flavor,local_3b8,&local_404);
      if (kVar6 != 0) {
        bVar3 = false;
        goto LAB_1009d5b62;
      }
      uVar13 = *(uint *)(param_1 + 0x38);
    }
    else {
      sVar8 = 0xa8;
      if (uVar13 == 7) {
        sVar8 = 0x40;
      }
      uVar10 = 0xa8;
      if (uVar13 == 7) {
        uVar10 = 0x40;
      }
      if (local_404 <= sVar8) {
        uVar10 = local_404;
        sVar8 = (ulong)local_404;
      }
      _memcpy(local_3b8,(void *)(*(long *)(*(long *)(param_1 + 0x40) + 0x30) + 0x10),sVar8);
      local_404 = uVar10;
    }
    uVar9 = local_338;
    if ((uVar13 != 0x1000007) && (uVar9 = 0, uVar13 == 7)) {
      uVar9 = (ulong)local_390;
    }
    local_41c = 0;
    local_464 = 0x11;
    local_410 = uVar9;
    kVar6 = _mach_vm_region_recurse
                      (*(vm_map_t *)(param_1 + 0x30),&local_410,&local_418,&local_41c,local_460,
                       &local_464);
    if (kVar6 == 0) {
      if (uVar9 < local_410) {
        bVar3 = false;
      }
      else {
        uVar12 = local_418 + local_410;
        if (uVar9 < uVar12) {
          local_400 = uVar9 - 0x80;
          if (local_400 <= local_410) {
            local_400 = local_410;
          }
          iVar7 = (int)(uVar9 + 0x80);
          if (uVar12 < uVar9 + 0x80) {
            iVar7 = (int)uVar12;
          }
          local_3f8 = CONCAT44(local_3f8._4_4_,iVar7 - (int)local_400);
          puVar2 = *(ulong **)(param_1 + 0x80);
          if (puVar2 == *(ulong **)(param_1 + 0x88)) {
            bVar3 = true;
            FUN_1009d7ab0(param_1 + 0x78,&local_400);
          }
          else {
            puVar2[1] = local_3f8;
            *puVar2 = local_400;
            *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 0x10;
            bVar3 = true;
          }
        }
        else {
          bVar3 = false;
        }
      }
    }
    else {
      bVar3 = false;
    }
  }
LAB_1009d5b62:
  lVar11 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78);
  local_3c0 = 3;
  cVar4 = FUN_1009cf2f0(&local_3f0,lVar11 + 8);
  if (cVar4 == '\0') {
    uVar14 = 0;
  }
  else {
    uVar12 = lVar11 >> 4;
    *param_2 = 5;
    *(ulong *)(param_2 + 1) = CONCAT44(local_3e8,(undefined4)local_3e0);
    local_3d8 = CONCAT44(local_3d8._4_4_,(int)uVar12);
    uVar13 = 0xfffffff8;
    uVar9 = 0;
    if (uVar12 != 0) {
      uVar13 = 1;
      iVar7 = 8;
      while( true ) {
        FUN_1009cf3f0(local_3f0,local_3e8 + iVar7,uVar9 * 0x10 + *(long *)(param_1 + 0x78),0x10);
        uVar9 = (ulong)uVar13;
        if (uVar12 <= uVar9) break;
        uVar13 = uVar13 + 1;
        iVar7 = iVar7 + 0x10;
      }
      uVar13 = uVar13 * 0x10 - 0x10 | 8;
    }
    uVar14 = 1;
    if (bVar3) {
      local_478 = *(uint *)(param_1 + 0x10);
      local_470 = 0;
      uVar9 = local_3f8 & 0xffffffff;
      local_480 = lVar1;
      cVar4 = FUN_1009cf2f0(&local_480,uVar9);
      if (cVar4 == '\0') {
        uVar14 = 0;
      }
      else {
        if (*(long *)(param_1 + 0x48) == 0) {
          FUN_1009cf450(&local_480,local_478,local_400,uVar9);
        }
        else {
          local_498 = (void *)0x0;
          pvStack_490 = (void *)0x0;
          local_488 = 0;
          iVar7 = FUN_1009d1620(*(undefined4 *)(param_1 + 0x30),local_400,uVar9,&local_498);
          if (iVar7 == 0) {
            FUN_1009cf450(&local_480,local_478,local_498,local_3f8 & 0xffffffff);
          }
          if (local_498 != (void *)0x0) {
            if (pvStack_490 != local_498) {
              pvStack_490 = local_498;
            }
            operator_delete(local_498);
          }
          if (iVar7 != 0) {
            uVar14 = 0;
            goto LAB_1009d5d70;
          }
        }
        local_3f8 = local_470 & 0xffffffff | (ulong)local_478 << 0x20;
        FUN_1009cf3f0(local_3f0,uVar13 + local_3e8,&local_400,0x10);
      }
    }
  }
LAB_1009d5d70:
  if (local_3c0 != 2) {
    FUN_1009cf3f0(local_3f0,local_3e8,&local_3d8,8);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_1021e1840 >> 8),uVar14);
}

