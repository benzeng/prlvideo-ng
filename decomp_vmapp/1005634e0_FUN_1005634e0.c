
undefined8 FUN_1005634e0(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 8) == 0) {
    FUN_1008e3970("","StatesUtils",0,"ASSERT( %s ) occured in %s:%d [%s]","bootSecBuff.Get()",
                  "BootCampStatesHelper.cpp",0x431,"DetectFsType");
  }
  if (((*(ulong *)(param_1 + 0x10) < 0x200) &&
      (FUN_1008e3970("","StatesUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                     "bootSecBuff.GetSize() >= sizeof(NTFSBootSector)","BootCampStatesHelper.cpp",
                     0x432,"DetectFsType"), *(ulong *)(param_1 + 0x10) < 0x200)) &&
     (FUN_1008e3970("","StatesUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "bootSecBuff.GetSize() >= sizeof(FAT32BootSector)","BootCampStatesHelper.cpp",
                    0x433,"DetectFsType"), *(ulong *)(param_1 + 0x10) < 0x200)) {
    FUN_1008e3970("","StatesUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "bootSecBuff.GetSize() >= sizeof(FAT16BootSector)","BootCampStatesHelper.cpp",
                  0x434,"DetectFsType");
  }
  lVar1 = *(long *)(param_1 + 8);
  iVar2 = _strncmp((char *)(lVar1 + 3),"NTFS    ",8);
  if (iVar2 == 0) {
    if (DAT_1011b55f8 < 3) {
      return 3;
    }
    pcVar5 = "NTFS volume detected";
    uVar6 = 3;
  }
  else {
    iVar2 = _strncmp((char *)(lVar1 + 0x52),"MSWIN",5);
    if ((iVar2 != 0) && (iVar2 = _strncmp((char *)(lVar1 + 0x52),"FAT32   ",8), iVar2 != 0)) {
      pcVar5 = (char *)(lVar1 + 0x36);
      iVar2 = _strncmp(pcVar5,"MSDOS",5);
      if (((iVar2 != 0) &&
          ((iVar2 = _strncmp(pcVar5,"FAT16   ",8), iVar2 != 0 &&
           (iVar2 = _strncmp(pcVar5,"FAT12   ",8), iVar2 != 0)))) &&
         (iVar2 = _strncmp(pcVar5,"FAT     ",8), iVar2 != 0)) {
        return 0xff;
      }
    }
    uVar3 = (uint)*(ushort *)(lVar1 + 0x16);
    if (*(ushort *)(lVar1 + 0x16) == 0) {
      uVar3 = *(uint *)(lVar1 + 0x24);
    }
    uVar4 = (uint)*(ushort *)(lVar1 + 0x13);
    if (*(ushort *)(lVar1 + 0x13) == 0) {
      uVar4 = *(uint *)(lVar1 + 0x20);
    }
    uVar3 = (((uVar4 - (int)((*(ushort *)(lVar1 + 0xb) - 1) + (uint)*(ushort *)(lVar1 + 0x11) * 0x20
                            ) / (int)(uint)*(ushort *)(lVar1 + 0xb)) -
             (uint)*(ushort *)(lVar1 + 0xe)) - *(byte *)(lVar1 + 0x10) * uVar3) /
            (uint)*(byte *)(lVar1 + 0xd);
    if (uVar3 < 0xff5) {
      uVar6 = 1;
      if (DAT_1011b55f8 < 3) {
        return 1;
      }
      pcVar5 = "FAT12 volume detected";
    }
    else if (uVar3 < 0xfff5) {
      uVar6 = 1;
      if (DAT_1011b55f8 < 3) {
        return 1;
      }
      pcVar5 = "FAT16 volume detected";
    }
    else {
      uVar6 = 2;
      if (DAT_1011b55f8 < 3) {
        return 2;
      }
      pcVar5 = "FAT32 volume detected";
    }
  }
  FUN_1008e3970("","StatesUtils",3,pcVar5);
  return uVar6;
}

