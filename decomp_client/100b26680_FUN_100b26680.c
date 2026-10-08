
void FUN_100b26680(long param_1)

{
  FUN_100b20180();
  FUN_100df99c0("CountReclaimed","dimg",0,"BatScanningContext:");
  FUN_100df99c0("CountReclaimed","dimg",0,"Bat entry count: %llu (0x%llX)",
                *(undefined8 *)(param_1 + 0x8a0),*(undefined8 *)(param_1 + 0x8a0));
  FUN_100df99c0("CountReclaimed","dimg",0,"End idx: %llu (0x%llX)",*(undefined8 *)(param_1 + 0x8a8),
                *(undefined8 *)(param_1 + 0x8a8));
  FUN_100df99c0("CountReclaimed","dimg",0,"Dio.lba: %llu (0x%llX) sectors",
                *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x40));
  FUN_100df99c0("CountReclaimed","dimg",0,"Dio.di_vec.dv_size: %u (0x%X) bytes",
                *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x90));
  return;
}

