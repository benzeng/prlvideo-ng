
long FUN_100ddda60(ulong param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  long lVar2;
  uint64_t *puVar3;
  uint64_t local_20;
  
  puVar3 = &local_20;
  if (param_2 != (uint64_t *)0x0) {
    puVar3 = param_2;
  }
  uVar1 = _mach_absolute_time();
  *puVar3 = uVar1;
  lVar2 = uVar1 - param_1;
  if (uVar1 < param_1) {
    lVar2 = param_1 + 1 + ~uVar1;
  }
  return lVar2;
}

