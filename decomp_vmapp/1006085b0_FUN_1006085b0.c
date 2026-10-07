
void FUN_1006085b0(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"hfsp::CatFolder {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"type: FOLDER (%u / 0x%X)",*param_1,*param_1);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"flags: %u (0x%X)",param_1[1],param_1[1]);
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"valence: %u (0x%X)",*(undefined4 *)(param_1 + 2),
                        *(undefined4 *)(param_1 + 2));
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("","vdisk",2,"own cnid: %u (0x%X)",*(undefined4 *)(param_1 + 4),
                          *(undefined4 *)(param_1 + 4));
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("","vdisk",2,"createDate: %u",*(undefined4 *)(param_1 + 6));
              if (1 < DAT_1011b55f8) {
                FUN_1008e3970("","vdisk",2,"contentModDate: %u",*(undefined4 *)(param_1 + 8));
                if (1 < DAT_1011b55f8) {
                  FUN_1008e3970("","vdisk",2,"attributeModDate: %u",*(undefined4 *)(param_1 + 10));
                  if (1 < DAT_1011b55f8) {
                    FUN_1008e3970("","vdisk",2,"accessDate: %u",*(undefined4 *)(param_1 + 0xc));
                    if (1 < DAT_1011b55f8) {
                      FUN_1008e3970("","vdisk",2,"backupDate: %u",*(undefined4 *)(param_1 + 0xe));
                      if (1 < DAT_1011b55f8) {
                        FUN_1008e3970("","vdisk",2,"permissions {");
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
  FUN_100608340(param_1 + 0x10);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} permissions");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"user_info {");
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"DirInfo {");
        if (1 < DAT_1011b55f8) {
          iVar1 = (int)(short)param_1[0x1a];
          iVar2 = (int)(short)param_1[0x1b];
          FUN_1008e3970("","vdisk",2,"frRect: top = %u, left = %u, bottom = %u, right %u",
                        (int)(short)param_1[0x18],(int)(short)param_1[0x19],iVar1,iVar2);
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("","vdisk",2,"frFlags: %u (0x%X)",(int)(short)param_1[0x1c],
                          (int)(short)param_1[0x1c],iVar1,iVar2);
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("","vdisk",2,"frLocation: h = %u, v = %u",(int)(short)param_1[0x1e],
                            (int)(short)param_1[0x1d],iVar1,iVar2);
              if (1 < DAT_1011b55f8) {
                FUN_1008e3970("","vdisk",2,"frView: %u (0x%X)",(int)(short)param_1[0x1f],
                              (int)(short)param_1[0x1f],iVar1,iVar2);
                if (1 < DAT_1011b55f8) {
                  FUN_1008e3970("","vdisk",2,"} DirInfo");
                  if (1 < DAT_1011b55f8) {
                    FUN_1008e3970("","vdisk",2,"} user_info");
                    if (1 < DAT_1011b55f8) {
                      FUN_1008e3970("","vdisk",2,"finder_info {");
                      if (1 < DAT_1011b55f8) {
                        FUN_1008e3970("","vdisk",2,"DirXInfo {");
                        if (1 < DAT_1011b55f8) {
                          FUN_1008e3970("","vdisk",2,"frScroll: h = %u, v = %u",
                                        (int)(short)param_1[0x21],(int)(short)param_1[0x20]);
                          if (1 < DAT_1011b55f8) {
                            FUN_1008e3970("","vdisk",2,"frOpenChain: %u (0x%X)",
                                          *(undefined4 *)(param_1 + 0x22),
                                          *(undefined4 *)(param_1 + 0x22));
                            if (1 < DAT_1011b55f8) {
                              FUN_1008e3970("","vdisk",2,"frUnused: %u (0x%X)",
                                            (int)(short)param_1[0x24],(int)(short)param_1[0x24]);
                              if (1 < DAT_1011b55f8) {
                                FUN_1008e3970("","vdisk",2,"frComment: %u (0x%X)",
                                              (int)(short)param_1[0x25],(int)(short)param_1[0x25]);
                                if (1 < DAT_1011b55f8) {
                                  FUN_1008e3970("","vdisk",2,"frPutAway: %u (0x%X)",
                                                *(undefined4 *)(param_1 + 0x26),
                                                *(undefined4 *)(param_1 + 0x26));
                                  if (1 < DAT_1011b55f8) {
                                    FUN_1008e3970("","vdisk",2,"} DirXInfo");
                                    if (1 < DAT_1011b55f8) {
                                      FUN_1008e3970("","vdisk",2,"} finder_info");
                                      if (1 < DAT_1011b55f8) {
                                        FUN_1008e3970("","vdisk",2,"text_encoding: %u (0x%X)",
                                                      *(undefined4 *)(param_1 + 0x28),
                                                      *(undefined4 *)(param_1 + 0x28));
                                        if (1 < DAT_1011b55f8) {
                                          FUN_1008e3970("","vdisk",2,"reserved: %u (0x%X)",
                                                        *(undefined4 *)(param_1 + 0x2a),
                                                        *(undefined4 *)(param_1 + 0x2a));
                                          if (1 < DAT_1011b55f8) {
                                            FUN_1008e3970("","vdisk",2,"} hfsp::CatFolder");
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
  return;
}

