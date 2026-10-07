
undefined8 FUN_10008e0e0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  char local_1e0 [256];
  char local_e0 [160];
  int local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar4 = 1;
  local_38 = lVar1;
  if ((*(uint *)(param_1 + 0x5c0) & 0xffffff00) == 0x700) {
    _snprintf(local_1e0,0x100,"IODeviceTree:/efi/platform");
    _snprintf(local_e0,0x50,"VirtualizationVendor");
    FUN_100786570(local_1e0);
    if (local_40 < 1) {
      if (*(uint *)(param_1 + 0x5ac) < 0x200) {
        FUN_1008e3970("","vm",0,"MacOS requires at least 128mb memory");
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0;
        FUN_100408ff0(param_1 + 0x10b0,0x80000358,&local_218);
        puVar3 = &local_218;
      }
      else {
        iVar2 = FUN_1007782b0(0,0);
        if (iVar2 == 0x69746e65) {
          FUN_1008e3970("","vm",0,"MacOS isn\'t supported on AMD hosts");
          local_238 = 0;
          uStack_230 = 0;
          local_228 = 0;
          FUN_100408ff0(param_1 + 0x10b0,0x80000348,&local_238);
          puVar3 = &local_238;
        }
        else {
          if ((((*(byte *)(*(long *)(param_1 + 0x109c8) + 499) & 10) != 0) ||
              (*(int *)(param_1 + 0xb60) == 0)) || ((*(byte *)(param_1 + 0x580) & 3) != 0))
          goto LAB_10008e2b3;
          FUN_1008e3970("","vm",0,"EFI MAC firmware needs USB controller in VM configuration");
          local_258 = 0;
          uStack_250 = 0;
          local_248 = 0;
          FUN_100408ff0(param_1 + 0x10b0,0x80000578,&local_258);
          puVar3 = &local_258;
        }
      }
    }
    else {
      FUN_1008e3970("","vm",0,"Found IODeviceTree:/efi/platform/VirtualizationVendor");
      FUN_1008e3970("","vm",0,"MacOS can be started on MacOS Server only");
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      FUN_100408ff0(param_1 + 0x10b0,0x80000397,&local_1f8);
      puVar3 = &local_1f8;
    }
    uVar4 = 0;
    FUN_10002d9d0(puVar3);
  }
LAB_10008e2b3:
  if (lVar1 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

