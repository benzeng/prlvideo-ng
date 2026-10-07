
undefined8 FUN_1002f4ba0(long param_1,uint param_2)

{
  void *pvVar1;
  undefined2 uVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  void *local_40;
  byte local_31;
  
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] CheckoutConfigDescriptor, cfg 0x%X",
                  *(long *)(param_1 + 8) + 0x838,param_2);
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  local_31 = 0;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x98))(*(long **)(param_1 + 0x28),&local_31);
  if ((iVar3 == 0) && (local_31 != 0)) {
    uVar5 = 0;
    do {
      local_40 = (void *)0x0;
      iVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0xa8))
                        (*(long **)(param_1 + 0x28),uVar5 & 0xff,&local_40);
      if (2 < DAT_1011c568c) {
        uVar2 = 0;
        if (local_40 != (void *)0x0) {
          uVar2 = *(undefined2 *)((long)local_40 + 2);
        }
        FUN_1008e3970("","USB",0,"[%s] uConfigNumber = %u  uIndex = %u  wTotalLength = %u  ret = %X"
                      ,*(long *)(param_1 + 8) + 0x838,param_2,uVar5,uVar2,iVar3);
      }
      pvVar1 = local_40;
      if (((iVar3 == 0) && (local_40 != (void *)0x0)) && (*(byte *)((long)local_40 + 5) == param_2))
      {
        pvVar4 = _malloc((ulong)*(ushort *)((long)local_40 + 2));
        *(void **)(param_1 + 0x18) = pvVar4;
        if (pvVar4 != (void *)0x0) {
          _memcpy(pvVar4,pvVar1,(ulong)*(ushort *)((long)pvVar1 + 2));
          return 1;
        }
        if (-1 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[%s] Can\'t allocate memory for descriptor",
                        *(long *)(param_1 + 8) + 0x838);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_31);
  }
  return 0;
}

