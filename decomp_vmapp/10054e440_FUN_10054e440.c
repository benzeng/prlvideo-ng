
void FUN_10054e440(long param_1)

{
  if ((**(short **)(param_1 + 0x28) != 2) && (*(long *)(param_1 + 0x88) != 0)) {
    FUN_100751700(*(long *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
    FUN_10054dc10(param_1);
    *(undefined1 *)(param_1 + 0x20) = 0;
    return;
  }
  FUN_1008e3970("","TransMem",0,"Uncompress main memory: already stopped");
  return;
}

