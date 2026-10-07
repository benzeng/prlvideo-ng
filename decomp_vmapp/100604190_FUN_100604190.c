
void FUN_100604190(undefined1 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"fat32::BootRecord {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"bootstrap code = 0x%02X 0x%02X 0x%02X",*param_1,param_1[1],
                    param_1[2]);
      if (1 < DAT_1011b55f8) {
        iVar1 = (int)(char)param_1[5];
        iVar3 = (int)(char)param_1[6];
        iVar5 = (int)(char)param_1[7];
        iVar8 = (int)(char)param_1[8];
        iVar9 = (int)(char)param_1[9];
        iVar7 = (int)(char)param_1[10];
        FUN_1008e3970("","vdisk",2,"system_id = \'%c%c%c%c%c%c%c%c\'",(int)(char)param_1[3],
                      (int)(char)param_1[4],iVar1,iVar3,iVar5,iVar8,iVar9,iVar7);
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"bytes per logical sector = %u bytes",
                        *(undefined2 *)(param_1 + 0xb));
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("","vdisk",2,"sectors per cluster = %u",param_1[0xd]);
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("","vdisk",2,"reserved = %u (0x%X) sectors",
                            *(undefined2 *)(param_1 + 0xe),*(undefined2 *)(param_1 + 0xe),iVar1,
                            iVar3,iVar5,iVar8,iVar9,iVar7);
              if (1 < DAT_1011b55f8) {
                FUN_1008e3970("","vdisk",2,"number of FATs = %u",param_1[0x10]);
                if (1 < DAT_1011b55f8) {
                  FUN_1008e3970("","vdisk",2,"root directory entries = %u",
                                *(undefined2 *)(param_1 + 0x11));
                  if (1 < DAT_1011b55f8) {
                    FUN_1008e3970("","vdisk",2,"number of sectors = %u",
                                  *(undefined2 *)(param_1 + 0x13));
                    if (1 < DAT_1011b55f8) {
                      FUN_1008e3970("","vdisk",2,"media code (unused) = 0x%X",param_1[0x15]);
                      if (1 < DAT_1011b55f8) {
                        FUN_1008e3970("","vdisk",2,"sectors per FAT = %u",
                                      *(undefined2 *)(param_1 + 0x16));
                        if (1 < DAT_1011b55f8) {
                          FUN_1008e3970("","vdisk",2,"sectors per track = %u",
                                        *(undefined2 *)(param_1 + 0x18));
                          if (1 < DAT_1011b55f8) {
                            FUN_1008e3970("","vdisk",2,"number of heads = %u",
                                          *(undefined2 *)(param_1 + 0x1a));
                            if (1 < DAT_1011b55f8) {
                              FUN_1008e3970("","vdisk",2,"hidden sectors (unused) = %u",
                                            *(undefined4 *)(param_1 + 0x1c));
                              if (1 < DAT_1011b55f8) {
                                FUN_1008e3970("","vdisk",2,
                                              "number of sectors (if number of sectors == 0) = %u",
                                              *(undefined4 *)(param_1 + 0x20));
                                if (1 < DAT_1011b55f8) {
                                  FUN_1008e3970("","vdisk",2,"--- FAT32 Specific ---");
                                  if (1 < DAT_1011b55f8) {
                                    FUN_1008e3970("","vdisk",2,"sectors/FAT = %u",
                                                  *(undefined4 *)(param_1 + 0x24));
                                    if (1 < DAT_1011b55f8) {
                                      FUN_1008e3970("","vdisk",2,"flags = 0x%X",
                                                    *(undefined2 *)(param_1 + 0x28));
                                      if (1 < DAT_1011b55f8) {
                                        FUN_1008e3970("","vdisk",2,
                                                      "filesystem version = %u.%u (0x%X.0x%X)",
                                                      param_1[0x2a],param_1[0x2b],param_1[0x2a],
                                                      param_1[0x2b]);
                                        if (1 < DAT_1011b55f8) {
                                          FUN_1008e3970("","vdisk",2,
                                                        "first cluster in root directory = %u",
                                                        *(undefined4 *)(param_1 + 0x2c));
                                          if (1 < DAT_1011b55f8) {
                                            FUN_1008e3970("","vdisk",2,
                                                          "filesystem info sector (FsInfo) = %u",
                                                          *(undefined2 *)(param_1 + 0x30));
                                            if (1 < DAT_1011b55f8) {
                                              FUN_1008e3970("","vdisk",2,"backup boot sector = %u",
                                                            *(undefined2 *)(param_1 + 0x32));
                                              if (1 < DAT_1011b55f8) {
                                                FUN_1008e3970("","vdisk",2,"BS_DrvNum = %u",
                                                              param_1[0x40]);
                                                if (1 < DAT_1011b55f8) {
                                                  FUN_1008e3970("","vdisk",2,"BS_Reserved1 = %u",
                                                                param_1[0x41]);
                                                  if (1 < DAT_1011b55f8) {
                                                    FUN_1008e3970("","vdisk",2,"BS_BootSig = %u",
                                                                  param_1[0x42]);
                                                    if (1 < DAT_1011b55f8) {
                                                      FUN_1008e3970("","vdisk",2,
                                                                                                                                        
                                                  "Volume ID = \'0x%X 0x%X 0x%X 0x%X\'",
                                                  param_1[0x43],param_1[0x44],param_1[0x45],
                                                  param_1[0x46]);
                                                  if (1 < DAT_1011b55f8) {
                                                    uVar6 = (uint)(byte)param_1[0x51];
                                                    uVar4 = (uint)(byte)param_1[0x50];
                                                    uVar2 = (uint)(byte)param_1[0x4f];
                                                    FUN_1008e3970("","vdisk",2,
                                                                                                                                    
                                                  "Volume Label = \'%c%c%c%c%c%c%c%c%c%c%c\'",
                                                  param_1[0x47],param_1[0x48],param_1[0x49],
                                                  param_1[0x4a],param_1[0x4b],param_1[0x4c],
                                                  param_1[0x4d],param_1[0x4e],uVar2,uVar4,uVar6);
                                                  if (1 < DAT_1011b55f8) {
                                                    FUN_1008e3970("","vdisk",2,
                                                                                                                                    
                                                  "File System Type = \'%c%c%c%c%c%c%c%c\'",
                                                  param_1[0x52],param_1[0x53],param_1[0x54],
                                                  param_1[0x55],param_1[0x56],param_1[0x57],
                                                  param_1[0x58],param_1[0x59],uVar2,uVar4,uVar6);
                                                  if (1 < DAT_1011b55f8) {
                                                    FUN_1008e3970("","vdisk",2,"marker = 0x%X",
                                                                  *(undefined2 *)(param_1 + 0x1fe));
                                                    if (1 < DAT_1011b55f8) {
                                                      FUN_1008e3970("","vdisk",2,
                                                                    "} fat32::BootRecord");
                                                      return;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

