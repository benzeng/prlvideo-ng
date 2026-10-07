
undefined8 FUN_1002d9950(long param_1,long param_2)

{
  undefined4 uVar1;
  
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] CheckOverlappedStatus, SysError = %08X, Transfered = %u/%u",
                  *(long *)(param_1 + 0x10) + 0xcf,*(undefined4 *)(param_2 + 0x46c),
                  *(undefined4 *)(param_2 + 0x454),*(undefined4 *)(param_2 + 0x43c));
  }
  uVar1 = 0;
  if (*(int *)(param_2 + 0x46c) != 0) {
    *(undefined4 *)(param_2 + 0x454) = 0;
    uVar1 = 0xc;
  }
  *(undefined4 *)(param_2 + 0x468) = uVar1;
  return 1;
}

