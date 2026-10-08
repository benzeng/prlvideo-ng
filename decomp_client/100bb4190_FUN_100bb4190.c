
void FUN_100bb4190(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  
  if ((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 0x38) == 0)) {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    if (uVar2 == *(uint *)(param_1 + 0x2c)) {
      uVar4 = 0x20;
      if (uVar2 != 0) {
        uVar4 = uVar2 * 3 >> 1;
      }
      pvVar3 = (void *)FUN_100bf3540(uVar4 * 4,"../src/snlic/sn_crypto_helper_15.c",0x160);
      if (pvVar3 == (void *)0x0) {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        return;
      }
      if ((ulong)*(uint *)(param_1 + 0x28) != 0) {
        _memcpy(pvVar3,*(void **)(param_1 + 0x20),(ulong)*(uint *)(param_1 + 0x28) << 2);
      }
      if (*(int *)(param_1 + 0x2c) != 0) {
        FUN_100bf3910(*(undefined8 *)(param_1 + 0x20));
      }
      *(void **)(param_1 + 0x20) = pvVar3;
      *(uint *)(param_1 + 0x2c) = uVar4;
      uVar2 = *(uint *)(param_1 + 0x28);
    }
    else {
      pvVar3 = *(void **)(param_1 + 0x20);
    }
    *(uint *)(param_1 + 0x28) = uVar2 + 1;
    *(undefined4 *)((long)pvVar3 + (ulong)uVar2 * 4) = uVar1;
  }
  else {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  return;
}

