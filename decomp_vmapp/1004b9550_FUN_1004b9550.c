
void FUN_1004b9550(long param_1,long param_2)

{
  if (((*(uint *)(param_2 + 0x48) & 0x20) == 0) || (*(long *)(param_2 + 0x70) == 0)) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 0x868) != 0) {
      *(undefined1 *)(param_2 + 0x21) = 1;
    }
    if ((*(uint *)(param_2 + 0x48) & 0x41) == 0) {
      FUN_1004bf6a0(param_1 + 0x1030,param_2 + 0x58);
      return;
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x7c) = 1;
  }
  return;
}

