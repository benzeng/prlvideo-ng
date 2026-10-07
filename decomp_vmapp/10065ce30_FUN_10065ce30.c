
void FUN_10065ce30(long param_1,undefined4 param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long local_70;
  long local_68;
  undefined1 local_60 [48];
  long local_30;
  
  FUN_10065fa50(local_60);
  cVar1 = FUN_10065ff90(local_60,param_2);
  if (cVar1 != '\0') {
    local_68 = FUN_10065cf20(param_1,local_60);
    uVar2 = (ulong)*(uint *)(local_30 + 8);
    if ((int)*(uint *)(local_30 + 8) < *(int *)(local_30 + 0xc)) {
      lVar4 = local_68 + 0x98;
      lVar3 = 0;
      do {
        local_70 = FUN_10065d0d0(param_1,*(undefined8 *)(local_30 + 0x10 + ((int)uVar2 + lVar3) * 8)
                                );
        if (local_70 != 0) {
          FUN_100650940(lVar4,&local_70);
        }
        lVar3 = lVar3 + 1;
        uVar2 = (ulong)*(int *)(local_30 + 8);
      } while (lVar3 < (long)((long)*(int *)(local_30 + 0xc) - uVar2));
    }
    FUN_10064fc20(param_1 + 0x10,&local_68);
  }
  FUN_10065d4b0(local_60);
  return;
}

