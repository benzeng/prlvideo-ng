
void FUN_100b1b9d0(undefined8 param_1,long param_2,long param_3)

{
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_100df99c0("","dimg",0,"CCompImage::IMAGE_PARAMETERS");
  QString::fromUtf8_helper((char *)&local_30,(int)param_2);
  QString::toUtf8();
  FUN_100df99c0("","dimg",0,"  Signature: [%s]",local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b1ba77;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100b1ba77:
  FUN_100df99c0("","dimg",0,"  Disk type: %u",*(undefined4 *)(param_2 + 0x10));
  FUN_100df99c0("","dimg",0,"  CHS: %u-%u-%u",*(undefined4 *)(param_2 + 0x18),
                *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x1c));
  FUN_100df99c0("","dimg",0,"  BAT size (# of blocks): %u",*(undefined4 *)(param_2 + 0x20));
  FUN_100df99c0("","dimg",0,"  Size of disk in sectors: %llu",*(undefined8 *)(param_2 + 0x24));
  FUN_100df99c0("","dimg",0,"  Disk is in use: 0x%X",*(undefined4 *)(param_2 + 0x2c));
  FUN_100df99c0("","dimg",0,"  First data block offset: %u sectors (%llu bytes)",
                (ulong)*(uint *)(param_2 + 0x30),param_3 * (ulong)*(uint *)(param_2 + 0x30));
  FUN_100df99c0("","dimg",0,"  Flags: 0x%X",*(undefined4 *)(param_2 + 0x34));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

