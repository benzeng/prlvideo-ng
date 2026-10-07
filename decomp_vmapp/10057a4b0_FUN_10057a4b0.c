
void FUN_10057a4b0(long param_1)

{
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("Compact","vdisk",3,"[%p] # of dropped blocks %llu",
                  *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x70));
  }
  *(undefined4 *)(param_1 + 0x30) = 4;
  FUN_100577e90(param_1);
  return;
}

