
undefined8 FUN_1002b1510(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  char *pcVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 uVar5;
  char local_b8 [128];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar5 = 0;
  local_38 = lVar1;
  _snprintf(local_b8,0x80,"devices.vgpu.%s",param_1);
  pcVar2 = (char *)FUN_1007da5e0(local_b8,"");
  if (*pcVar2 == '\0') {
    *param_2 = 0;
    uVar5 = 5;
  }
  else {
    sVar3 = _strlen(pcVar2);
    sVar3 = (long)((sVar3 << 0x20) + 0x100000000) >> 0x20;
    pvVar4 = _malloc(sVar3);
    *param_2 = pvVar4;
    _memcpy(pvVar4,pcVar2,sVar3);
  }
  if (lVar1 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

