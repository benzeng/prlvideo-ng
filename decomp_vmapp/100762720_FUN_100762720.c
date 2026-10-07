
void FUN_100762720(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (-1 < iVar1) {
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1008e3970("","etrace",0,"Etrace: memory is already registered, overwriting...");
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0x100000000;
      _munmap(0,0);
      iVar1 = *(int *)(param_1 + 0x28);
    }
    _close(iVar1);
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    if (*(char *)(param_1 + 0x38) != '\0') {
      _shm_unlink(*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  return;
}

