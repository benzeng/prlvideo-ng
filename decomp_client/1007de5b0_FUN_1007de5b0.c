
void FUN_1007de5b0(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (iVar1 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  }
  CAbstractProgressOperation::setProgress(iVar1);
  return;
}

