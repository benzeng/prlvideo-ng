
void FUN_1000a9020(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if ((*(byte *)(*(long *)(param_1 + 0x109c8) + 499) & 10) != 0) {
    uVar2 = (ulong)*(uint *)(*(long *)(param_1 + 0x109c8) + 0x338);
    iVar1 = FUN_1007da300("vm.mem_prelock_all",0);
    if (iVar1 == 0) {
      _memcpy(*(void **)(param_1 + 0x1928),*(void **)(*(long *)(param_1 + 0x109c8) + 0x348),uVar2);
    }
    else {
      _memset(*(void **)(param_1 + 0x1928),0xff,uVar2);
    }
  }
  return;
}

