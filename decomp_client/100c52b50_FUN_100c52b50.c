
bool FUN_100c52b50(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_100c27160(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
                        *(undefined8 *)(*(long *)(param_2 + 0x20) + 8));
  if (iVar1 == 0) {
    iVar1 = FUN_100c27160(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
                          *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

