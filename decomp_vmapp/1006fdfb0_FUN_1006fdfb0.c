
ulong FUN_1006fdfb0(undefined8 param_1,uint param_2)

{
  long lVar1;
  char *pcVar2;
  undefined1 local_428 [1024];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  ___strcpy_chk(local_428,param_1,0x400);
  pcVar2 = (char *)FUN_100701710(local_428);
  if (lVar1 == local_28) {
    return (ulong)(uint)(int)*pcVar2 % (ulong)param_2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

