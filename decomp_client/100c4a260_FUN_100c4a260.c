
bool FUN_100c4a260(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_100c27160(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20),
                        *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  if (iVar1 == 0) {
    iVar1 = FUN_100c27160(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28),
                          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

