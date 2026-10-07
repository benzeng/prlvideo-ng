
uint FUN_1002f4a50(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long local_40;
  byte local_31;
  
  local_31 = 0;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x98))(*(long **)(param_1 + 0x28),&local_31);
  if ((iVar1 == 0) && (local_31 != 0)) {
    uVar2 = 0;
    do {
      local_40 = 0;
      iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0xa8))
                        (*(long **)(param_1 + 0x28),uVar2 & 0xff,&local_40);
      if (((iVar1 == 0) && (local_40 != 0)) && (*(byte *)(local_40 + 5) == param_2)) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_31);
  }
  return 0xffffffff;
}

