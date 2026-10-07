
void FUN_100605e90(char *param_1)

{
  char *pcVar1;
  ulong local_28;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"hfsp::VolumeHeader {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"signature: \'%c%c\' (0x%X)",(int)param_1[1],(int)*param_1,
                    *(undefined2 *)param_1);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"version: %u",*(undefined2 *)(param_1 + 2));
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"attributes: 0x%X",*(undefined4 *)(param_1 + 4));
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("","vdisk",2,"lastMountVers: 0x%X {",*(undefined4 *)(param_1 + 8));
          }
        }
      }
    }
  }
  FUN_1007d8550(param_1 + 8,4);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} lastMountVers");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"journalInfoBlock: %u (0x%X)",*(undefined4 *)(param_1 + 0xc),
                    *(undefined4 *)(param_1 + 0xc));
      if (1 < DAT_1011b55f8) {
        local_28 = (ulong)(*(int *)(param_1 + 0x10) + 0x83da4f80);
        pcVar1 = _ctime((time_t *)&local_28);
        FUN_1008e3970("","vdisk",2,"createDate: %s",pcVar1);
        if (1 < DAT_1011b55f8) {
          local_28 = (ulong)(*(int *)(param_1 + 0x14) + 0x83da4f80);
          pcVar1 = _ctime((time_t *)&local_28);
          FUN_1008e3970("","vdisk",2,"modifyDate: %s",pcVar1);
          if (1 < DAT_1011b55f8) {
            local_28 = (ulong)(*(int *)(param_1 + 0x18) + 0x83da4f80);
            pcVar1 = _ctime((time_t *)&local_28);
            FUN_1008e3970("","vdisk",2,"backupDate: %s",pcVar1);
            if (1 < DAT_1011b55f8) {
              local_28 = (ulong)(*(int *)(param_1 + 0x1c) + 0x83da4f80);
              pcVar1 = _ctime((time_t *)&local_28);
              FUN_1008e3970("","vdisk",2,"checkedDate: %s",pcVar1);
              if (1 < DAT_1011b55f8) {
                FUN_1008e3970("","vdisk",2,"fileCount: %u",*(undefined4 *)(param_1 + 0x20));
                if (1 < DAT_1011b55f8) {
                  FUN_1008e3970("","vdisk",2,"folderCount: %u",*(undefined4 *)(param_1 + 0x24));
                  if (1 < DAT_1011b55f8) {
                    FUN_1008e3970("","vdisk",2,"blockSize: %u bytes",*(undefined4 *)(param_1 + 0x28)
                                 );
                    if (1 < DAT_1011b55f8) {
                      FUN_1008e3970("","vdisk",2,"totalBlocks: %u",*(undefined4 *)(param_1 + 0x2c));
                      if (1 < DAT_1011b55f8) {
                        FUN_1008e3970("","vdisk",2,"freeBlocks: %u",*(undefined4 *)(param_1 + 0x30))
                        ;
                        if (1 < DAT_1011b55f8) {
                          FUN_1008e3970("","vdisk",2,"nextAlloc: %u block",
                                        *(undefined4 *)(param_1 + 0x34));
                          if (1 < DAT_1011b55f8) {
                            FUN_1008e3970("","vdisk",2,"rsrcClumpSize: %u bytes",
                                          *(undefined4 *)(param_1 + 0x38));
                            if (1 < DAT_1011b55f8) {
                              FUN_1008e3970("","vdisk",2,"dataClumpSize: %u bytes",
                                            *(undefined4 *)(param_1 + 0x3c));
                              if (1 < DAT_1011b55f8) {
                                FUN_1008e3970("","vdisk",2,"nextCnid: %u",
                                              *(undefined4 *)(param_1 + 0x40));
                                if (1 < DAT_1011b55f8) {
                                  FUN_1008e3970("","vdisk",2,"writeCount: %u",
                                                *(undefined4 *)(param_1 + 0x44));
                                  if (1 < DAT_1011b55f8) {
                                    FUN_1008e3970("","vdisk",2,"encodingsBitmap: 0x%llX",
                                                  *(undefined8 *)(param_1 + 0x48));
                                    if (1 < DAT_1011b55f8) {
                                      FUN_1008e3970("","vdisk",2,"finderInfo:");
                                      if (1 < DAT_1011b55f8) {
                                        FUN_1008e3970("","vdisk",2,"0. dirID bootable system: %u",
                                                      *(undefined4 *)(param_1 + 0x50));
                                        if (1 < DAT_1011b55f8) {
                                          FUN_1008e3970("","vdisk",2,
                                                        "1. Startup app parent dirID: %u",
                                                        *(undefined4 *)(param_1 + 0x54));
                                          if (1 < DAT_1011b55f8) {
                                            FUN_1008e3970("","vdisk",2,"2. Finder initial dirID: %u"
                                                          ,*(undefined4 *)(param_1 + 0x58));
                                            if (1 < DAT_1011b55f8) {
                                              FUN_1008e3970("","vdisk",2,
                                                            "3. OS 9 bootable folder dirID: %u",
                                                            *(undefined4 *)(param_1 + 0x5c));
                                              if (1 < DAT_1011b55f8) {
                                                FUN_1008e3970("","vdisk",2,"4. reserved: %u",
                                                              *(undefined4 *)(param_1 + 0x60));
                                                if (1 < DAT_1011b55f8) {
                                                  FUN_1008e3970("","vdisk",2,
                                                                "5. OS X bootable folder dirID: %u",
                                                                *(undefined4 *)(param_1 + 100));
                                                  if (1 < DAT_1011b55f8) {
                                                    FUN_1008e3970("","vdisk",2,
                                                                                                                                    
                                                  "6-7. Volume ID: %u %u (0x%08X 0x%08X) {",
                                                  *(undefined4 *)(param_1 + 0x68),
                                                  *(undefined4 *)(param_1 + 0x6c),
                                                  *(undefined4 *)(param_1 + 0x68),
                                                  *(undefined4 *)(param_1 + 0x6c));
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
  FUN_1007d8550(param_1 + 0x68,8);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"  } Volume ID");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"allocFile {");
    }
  }
  FUN_100605a30(param_1 + 0x70);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} allocFile");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"extFile {");
    }
  }
  FUN_100605a30(param_1 + 0xc0);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} extFile");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"catFile {");
    }
  }
  FUN_100605a30(param_1 + 0x110);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} catFile");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"attrFile {");
    }
  }
  FUN_100605a30(param_1 + 0x160);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} attrFile");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"startFile {");
    }
  }
  FUN_100605a30(param_1 + 0x1b0);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} startFile");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"} hfsp::VolumeHeader");
    }
  }
  return;
}

