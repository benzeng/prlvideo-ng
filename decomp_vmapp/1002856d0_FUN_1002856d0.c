
ulong FUN_1002856d0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined1 local_3c [4];
  long local_38;
  long local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar2 = *(int *)(param_2 + 4);
  local_20 = lVar1;
  if (iVar2 == 5) {
    uVar3 = FUN_100285a60(param_1,param_2);
    return uVar3;
  }
  uVar3 = 0;
  if (iVar2 - 3U < 2) {
    local_38 = *(long *)(param_1 + 0xa0) + 8;
    local_30 = *(long *)(param_1 + 0xa0) + 0x1028;
    if (1 < iVar2 - 3U) {
      FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "data->type == DEV_REQ_FIFO || data->type == DEV_RF_FIFO","../Scsi/Lsi/dev.cpp",
                    0x16e,"resume_fifo");
      iVar2 = *(int *)(param_2 + 4);
    }
    iVar2 = FUN_1000ec3b0(*(undefined8 *)((ulong)&local_38 | (ulong)(iVar2 != 3) << 3),
                          *(undefined4 *)(param_2 + 8),local_3c,0);
    uVar3 = (ulong)(iVar2 == 0);
  }
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

