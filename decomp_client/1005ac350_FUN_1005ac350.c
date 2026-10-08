
void FUN_1005ac350(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (iVar1 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
  }
  CAbstractProgressOperation::setProgress(iVar1);
  return;
}

