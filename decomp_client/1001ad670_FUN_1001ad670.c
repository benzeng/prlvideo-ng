
void FUN_1001ad670(long param_1)

{
  char cVar1;
  
  if ((((*(long *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) &&
      (*(long *)(param_1 + 0x50) != 0)) &&
     (((*(byte *)(*(long *)(*(long *)(param_1 + 0x50) + 0x28) + 9) & 0x80) != 0 &&
      (cVar1 = FUN_1001a97c0(param_1), cVar1 == '\0')))) {
    QWidget::close();
    return;
  }
  return;
}

