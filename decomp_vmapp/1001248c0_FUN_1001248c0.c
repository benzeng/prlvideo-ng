
void FUN_1001248c0(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
  }
  CVmEventBase::setEventCode(iVar1);
  return;
}

