
void FUN_1005add80(long param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = param_2 % 0x10;
  if ((iVar1 < 1) || (iVar1 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"CacheFileHeader: signature = %s",param_1);
  }
  if ((iVar1 < 1) || (iVar1 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"CacheFileHeader: version = %s",param_1 + 8);
  }
  if ((iVar1 < 1) || (iVar1 <= DAT_1011b55f8)) {
    if (*(long *)(param_1 + 0x10) == 0) {
      pcVar2 = "Unused";
    }
    else {
      pcVar2 = (char *)(param_1 + 0x10);
    }
    FUN_1008e3970("","vdisk",param_2,"CacheFileHeader: in use = %s",pcVar2);
  }
  if ((iVar1 < 1) || (iVar1 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"CacheFileHeader: cache entry size = %u bytes",
                  *(undefined4 *)(param_1 + 0x20));
  }
  if ((iVar1 < 1) || (iVar1 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"CacheFileHeader: cache group size = %u bytes (%u entries)",
                  (ulong)*(uint *)(param_1 + 0x24),
                  (ulong)*(uint *)(param_1 + 0x24) / (ulong)*(uint *)(param_1 + 0x20));
  }
  if ((iVar1 < 1) || (iVar1 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"CacheFileHeader: cache group count = %u",
                  *(undefined4 *)(param_1 + 0x30));
  }
  if ((iVar1 < 1) || (iVar1 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"CacheFileHeader: \'current\' snapshot idx = %u",
                  *(undefined4 *)(param_1 + 0x2c));
  }
  if ((iVar1 < 1) || (iVar1 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"CacheFileHeader: disk size = %llu sect",
                  *(undefined8 *)(param_1 + 0x18));
  }
  if ((iVar1 < 1) || (iVar1 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"CacheFileHeader: disk logic sector size = %u bytes",
                  *(undefined4 *)(param_1 + 0x28));
  }
  if ((0 < iVar1) && (DAT_1011b55f8 < iVar1)) {
    return;
  }
  FUN_1008e3970("","vdisk",param_2,"CacheFileHeader: disk block size = %u sectors",
                *(undefined4 *)(param_1 + 0x34));
  return;
}

