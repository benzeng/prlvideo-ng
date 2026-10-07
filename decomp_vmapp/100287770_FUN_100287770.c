
void FUN_100287770(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint local_2c;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  if ((*(uint *)(lVar1 + 0x1c) & *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8)) != 0) {
    do {
      local_2c = 0;
      iVar3 = FUN_1007d75f0(lVar1 + 8,&local_2c,4);
      if (iVar3 != 4) {
        FUN_1008e3970("","LocalDevices",0,"LSI: beware request fifo");
        return;
      }
      if (local_2c < 8) {
        if ((*(byte *)(*(long *)(param_1 + 0x98) + 0x1087) & 8) == 0) {
          FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "m_sh_data->doorbell_shadow & MPI_DOORBELL_ACTIVE","../Scsi/Lsi/dev.cpp",
                        0x2cd,"process_msg_frames");
        }
        if ((*(uint *)(lVar1 + 0x1c) & *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8)) != 0) {
          FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "!lrb_used_size(req_fifo)","../Scsi/Lsi/dev.cpp",0x2ce,"process_msg_frames")
          ;
        }
        if ((local_2c & 4) == 0) {
          return;
        }
        FUN_100287ca0(param_1);
        return;
      }
      FUN_100287fe0(param_1,CONCAT44(*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x10a0),local_2c));
      lVar2 = *(long *)(param_1 + 0xa0);
    } while ((*(uint *)(lVar2 + 0x1c) & *(int *)(lVar2 + 0xc) - *(int *)(lVar2 + 8)) != 0);
  }
  return;
}

