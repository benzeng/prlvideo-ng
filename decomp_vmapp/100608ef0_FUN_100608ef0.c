
void FUN_100608ef0(undefined2 *param_1)

{
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"hfsp::CatFile {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"type: FILE (%u / 0x%X)",*param_1,*param_1);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"flags: %u (0x%X)",param_1[1],param_1[1]);
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"reserved1: %u",*(undefined4 *)(param_1 + 2));
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
        FUN_1008e3970("","vdisk",2,"FileInfo {");
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"fdType: %u (0x%X)",*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x18));
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("","vdisk",2,"fdCreator: %u (0x%X)",*(undefined4 *)(param_1 + 0x1a),
                          *(undefined4 *)(param_1 + 0x1a));
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("","vdisk",2,"fdFlags: %u (0x%X)",param_1[0x1c],param_1[0x1c]);
              if (1 < DAT_1011b55f8) {
                FUN_1008e3970("","vdisk",2,"fdLocation: h = %u, v = %u",(int)(short)param_1[0x1e],
                              (int)(short)param_1[0x1d]);
                if (1 < DAT_1011b55f8) {
                  FUN_1008e3970("","vdisk",2,"fdFldr: %u (0x%X)",param_1[0x1f],param_1[0x1f]);
                  if (1 < DAT_1011b55f8) {
                    FUN_1008e3970("","vdisk",2,"} FileInfo");
                    if (1 < DAT_1011b55f8) {
                      FUN_1008e3970("","vdisk",2,"} user_info");
                      if (1 < DAT_1011b55f8) {
                        FUN_1008e3970("","vdisk",2,"finder_info {");
                        if (1 < DAT_1011b55f8) {
                          FUN_1008e3970("","vdisk",2,"FileXInfo {");
                          if (1 < DAT_1011b55f8) {
                            FUN_1008e3970("","vdisk",2,"fdIconID: %u (0x%X)",
                                          (int)(short)param_1[0x20],(int)(short)param_1[0x20]);
                            if (1 < DAT_1011b55f8) {
                              FUN_1008e3970("","vdisk",2,"fdUnused[0]: %u (0x%X)",
                                            (int)(short)param_1[0x21],(int)(short)param_1[0x21]);
                              if (1 < DAT_1011b55f8) {
                                FUN_1008e3970("","vdisk",2,"fdUnused[1]: %u (0x%X)",
                                              (int)(short)param_1[0x22],(int)(short)param_1[0x22]);
                                if (1 < DAT_1011b55f8) {
                                  FUN_1008e3970("","vdisk",2,"fdUnused[2]: %u (0x%X)",
                                                (int)(short)param_1[0x23],(int)(short)param_1[0x23])
                                  ;
                                  if (1 < DAT_1011b55f8) {
                                    FUN_1008e3970("","vdisk",2,"fdUnused[3]: %u (0x%X)",
                                                  (int)(short)param_1[0x24],
                                                  (int)(short)param_1[0x24]);
                                    if (1 < DAT_1011b55f8) {
                                      FUN_1008e3970("","vdisk",2,"fdComment: %u (0x%X)",
                                                    (int)(short)param_1[0x25],
                                                    (int)(short)param_1[0x25]);
                                      if (1 < DAT_1011b55f8) {
                                        FUN_1008e3970("","vdisk",2,"fdPutAway: %u (0x%X)",
                                                      *(undefined4 *)(param_1 + 0x26),
                                                      *(undefined4 *)(param_1 + 0x26));
                                        if (1 < DAT_1011b55f8) {
                                          FUN_1008e3970("","vdisk",2,"} FileXInfo");
                                          if (1 < DAT_1011b55f8) {
                                            FUN_1008e3970("","vdisk",2,"} finder_info");
                                            if (1 < DAT_1011b55f8) {
                                              FUN_1008e3970("","vdisk",2,"text_encoding: %u (0x%X)",
                                                            *(undefined4 *)(param_1 + 0x28),
                                                            *(undefined4 *)(param_1 + 0x28));
                                              if (1 < DAT_1011b55f8) {
                                                FUN_1008e3970("","vdisk",2,"reserved2: %u (0x%X)",
                                                              *(undefined4 *)(param_1 + 0x2a),
                                                              *(undefined4 *)(param_1 + 0x2a));
                                                if (1 < DAT_1011b55f8) {
                                                  FUN_1008e3970("","vdisk",2,"data_fork {");
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
  FUN_100605a30(param_1 + 0x2c);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} data_fork");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"res_fork {");
    }
  }
  FUN_100605a30(param_1 + 0x54);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} res_fork");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"} hfsp::CatFile");
      return;
    }
  }
  return;
}

