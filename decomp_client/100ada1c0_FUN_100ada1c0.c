
void FUN_100ada1c0(long param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x80))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x78))();
    if (cVar1 != '\0') {
      DAT_102311848 = 0;
      FUN_100ae3790(param_1,0);
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}

