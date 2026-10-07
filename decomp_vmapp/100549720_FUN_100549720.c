
void FUN_100549720(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  
  cVar2 = FUN_100544690(param_1 + 0x88);
  if (cVar2 != '\0') {
    if (*(long *)(param_1 + 0x28) != 0) {
      iVar3 = FUN_100544d20(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
      if (iVar3 != 0) {
        FUN_1008e3970("","TransMem",0,
                      "CGuestMemoryAnonymous::deinit_mem() failed to unmap video memory %p",
                      *(undefined8 *)(param_1 + 0x28));
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_1 + 0x60);
    FUN_1005446a0(param_1 + 0x88);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar3 = _munmap(*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0xb0));
    if (iVar3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      piVar4 = ___error();
      pcVar5 = _strerror(*piVar4);
      FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::deinit_mem() failed to unmap %p: %s",
                    uVar1,pcVar5);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  }
  return;
}

