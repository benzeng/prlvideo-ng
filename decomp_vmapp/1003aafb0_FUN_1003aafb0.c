
void FUN_1003aafb0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x10;
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_1 + 0x18);
  *(long *)(*(long *)(param_1 + 0x18) + 0x10) = lVar2;
  *(long *)(param_1 + 0x20) = lVar1;
  *(long *)(param_1 + 8) = param_2;
  *(long *)(param_1 + 0x18) = param_2 + 0x48;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x58);
  *(long *)(*(long *)(param_2 + 0x58) + 8) = lVar1;
  *(long *)(param_2 + 0x58) = lVar1;
  return;
}

