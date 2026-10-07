
void FUN_100609930(undefined2 *param_1)

{
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"hfsp::CatThread {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"type: THREAD (%u / 0x%X)",*param_1,*param_1);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"reserved: %u (0x%X)",param_1[1],param_1[1]);
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"parent cnid: %u (0x%X)",*(undefined4 *)(param_1 + 2),
                        *(undefined4 *)(param_1 + 2));
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("","vdisk",2,"nodeName {");
          }
        }
      }
    }
  }
  FUN_100607b90(param_1 + 4);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} nodeName");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"} hfsp::CatThread");
      return;
    }
  }
  return;
}

