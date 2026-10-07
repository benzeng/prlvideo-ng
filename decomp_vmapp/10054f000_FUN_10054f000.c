
void FUN_10054f000(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_10111da10;
  if (param_1[0xb] != 0) {
    iVar1 = FUN_100544d20(param_1[0xb],*(undefined4 *)(param_1 + 10));
    if (iVar1 != 0) {
      FUN_1008e3970("","TransMem",0,"CCompressedFileMapped::uumap_buff() unmap failed rc=%d!");
    }
  }
  operator_delete(param_1);
  return;
}

