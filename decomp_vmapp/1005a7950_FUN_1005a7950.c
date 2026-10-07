
void FUN_1005a7950(long *param_1)

{
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",3,"Disk manager: wait processes completion");
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  if (DAT_1011b55f8 < 3) {
    return;
  }
  FUN_1008e3970("","vdisk",3,"Disk manager: all processes completed");
  return;
}

