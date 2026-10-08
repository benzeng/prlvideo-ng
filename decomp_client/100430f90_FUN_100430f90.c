
void FUN_100430f90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x20);
  FUN_1004312d0(lVar1 + 0x10,*(long *)(param_1 + 0x60) + 0x28,lVar1,0);
  QDialog::accept();
  return;
}

