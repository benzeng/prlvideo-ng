
void * FUN_100715bd0(void)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  utsname local_538;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  _uname(&local_538);
  sVar2 = _strlen(local_538.sysname);
  sVar3 = _strlen(local_538.release);
  sVar4 = _strlen(local_538.version);
  sVar2 = (long)(((ulong)(uint)((int)sVar4 + (int)sVar3 + (int)sVar2) << 0x20) + 0x400000000) >>
          0x20;
  pvVar5 = _malloc(sVar2);
  if (pvVar5 == (void *)0x0) {
    FUN_10071e690(0xfffffffe,0);
  }
  else {
    ___snprintf_chk(pvVar5,sVar2,0,0xffffffffffffffff,"%s %s %s",&local_538,local_538.release,
                    local_538.version);
  }
  if (lVar1 == local_38) {
    return pvVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

