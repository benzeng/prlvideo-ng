
bool FUN_100c4ef60(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_100c27160(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                        *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18));
  if ((iVar1 == 0) &&
     (iVar1 = FUN_100c27160(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
                            *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20)), iVar1 == 0)) {
    iVar1 = FUN_100c27160(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
                          *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28));
    return iVar1 == 0;
  }
  return false;
}

