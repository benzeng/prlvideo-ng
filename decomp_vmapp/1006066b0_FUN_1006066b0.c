
void FUN_1006066b0(undefined4 *param_1)

{
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"hfsp::JournalInfoBlock {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"flags = 0x%08X",*param_1);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"deviceSignature {");
      }
    }
  }
  FUN_1007d8550(param_1 + 1,0x20);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} deviceSignature");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"offset = %llu (0x%llX) bytes",*(undefined8 *)(param_1 + 9),
                    *(undefined8 *)(param_1 + 9));
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"size   = %llu (0x%llX) bytes",*(undefined8 *)(param_1 + 0xb),
                      *(undefined8 *)(param_1 + 0xb));
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"externalJournalUuid {");
        }
      }
    }
  }
  FUN_1007d8550(param_1 + 0xd,0x25);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} externalJournalUuid");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"machineSerialNum {");
    }
  }
  FUN_1007d8550((long)param_1 + 0x59,0x30);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} machineSerialNum");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"reserved {");
    }
  }
  FUN_1007d8550((long)param_1 + 0x89,0x2b);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} reserved");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"} hfsp::JournalInfoBlock");
      return;
    }
  }
  return;
}

