
void FUN_1000ec380(long param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_48 [32];
  
  uVar2 = 0;
  if (0x24 < param_3) {
    uVar2 = 0;
    iVar1 = FUN_100a68200(local_48,param_2 + 0x24,param_3 - 0x24,0);
    if (iVar1 == 0) {
      uVar2 = 0;
      do {
        iVar1 = FUN_100a683a0(local_48);
        if (iVar1 == 0x202b) {
          uVar2 = FUN_100a68370(local_48);
          break;
        }
        iVar1 = FUN_100a682f0(local_48);
      } while (iVar1 == 0);
    }
  }
  FUN_1000c5cd0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x14),uVar2,
                (*(uint *)(param_2 + 0xc) & 0x1000) >> 0xc,*(undefined8 *)(param_2 + 0x1c));
  return;
}

