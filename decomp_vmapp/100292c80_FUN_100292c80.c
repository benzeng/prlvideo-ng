
void FUN_100292c80(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = *(byte *)(*(long *)(param_2 + 0x60) + 2);
  if (bVar1 < 0xec) {
    if (bVar1 == 8) {
      *(undefined1 *)(param_2 + 0x46) = 0;
      *(undefined2 *)(param_2 + 0x44) = 0;
      *(undefined4 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined1 *)(param_2 + 0x3c) = 1;
      *(undefined1 *)(param_2 + 0x3d) = 1;
      *(undefined1 *)(param_2 + 0x3e) = 0x14;
      *(undefined1 *)(param_2 + 0x3f) = 0xeb;
      *(undefined1 *)(param_2 + 0x39) = 1;
      goto LAB_100292d72;
    }
    if (bVar1 == 0xa1) {
      FUN_1002927c0(param_1,param_2);
      return;
    }
  }
  else {
    if (bVar1 == 0xef) {
      if (((*(char *)(param_2 + 0x39) == '\x10') && (DAT_101115f28 != 0)) &&
         (*(char *)(param_2 + 0x3c) == '\x05')) {
        lVar3 = (ulong)*(ushort *)(param_1 + 0xfee) * 0x300 + *(long *)(param_1 + 0x1000);
        lVar2 = (ulong)*(ushort *)(param_1 + 0xff0) * 0x80;
        *(uint *)(lVar2 + 0x470c + lVar3) = (uint)(*(int *)(lVar2 + 0x470c + lVar3) == 0);
      }
      *(undefined2 *)(param_2 + 0x38) = 0x40;
      goto LAB_100292d72;
    }
    if (bVar1 == 0xec) {
      *(undefined1 *)(param_2 + 0x38) = 0x41;
      *(undefined1 *)(param_2 + 0x3c) = 1;
      *(undefined1 *)(param_2 + 0x3d) = 1;
      *(undefined1 *)(param_2 + 0x3e) = 0x14;
      *(undefined1 *)(param_2 + 0x3f) = 0xeb;
      *(undefined1 *)(param_2 + 0x39) = 4;
      goto LAB_100292d72;
    }
  }
  FUN_100291670(param_2);
LAB_100292d72:
                    /* WARNING: Could not recover jumptable at 0x000100292d81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x50))(param_2,0);
  return;
}

