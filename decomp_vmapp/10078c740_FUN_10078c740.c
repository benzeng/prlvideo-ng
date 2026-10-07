
undefined1 FUN_10078c740(undefined4 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint local_24;
  size_t local_20;
  
  local_24 = 0;
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    *param_1 = 0;
    local_20 = 4;
    uVar2 = 0;
    iVar1 = _sysctlbyname("kern.memorystatus_vm_pressure_level",&local_24,&local_20,(void *)0x0,0);
    if (iVar1 != -1) {
      if (local_24 < 3) {
        uVar2 = 1;
        if (1 < local_24) {
          *param_1 = 1;
        }
      }
      else {
        *param_1 = 2;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

