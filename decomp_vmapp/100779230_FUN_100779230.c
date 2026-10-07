
bool FUN_100779230(void)

{
  long lVar1;
  char local_1c8 [256];
  char local_c8 [160];
  int local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  _snprintf(local_1c8,0x100,"IODeviceTree:/efi/platform");
  _snprintf(local_c8,0x50,"VirtualizationVendor");
  FUN_100786570(local_1c8);
  if (local_28 >= 1) {
    FUN_1008e3970("","HostUtils",0,
                  "Found key IODeviceTree:/efi/platform/VirtualizationVendor; we may not run inside Mac OS X VM."
                 );
  }
  if (lVar1 == local_20) {
    return local_28 < 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

