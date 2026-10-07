
undefined8 FUN_1002d6b90(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_20;
  
  uVar6 = 0;
  uVar5 = 0;
  if (((*(char *)(param_2 + 5) == '\b') && (*(char *)(param_2 + 6) == '\x06')) &&
     (*(char *)(param_2 + 7) == 'P')) {
    local_20 = 0;
    lVar3 = 9;
    do {
      lVar1 = *(long *)(param_1 + lVar3 * 8);
      if ((lVar1 != 0) && (*(uint *)(lVar1 + 0xb0) == (uint)*(byte *)(param_2 + 2))) {
        uVar4 = lVar3 - 8U >> 7 & 0x1ffffff;
        if ((*(int *)((long)&local_20 + uVar4 * 4) != 0) || ((*(byte *)(lVar1 + 0xcb) & 3) != 2)) {
          *(undefined4 *)((long)&local_20 + uVar4 * 4) = 0;
          break;
        }
        *(int *)((long)&local_20 + uVar4 * 4) = (int)(lVar3 - 8U);
      }
      uVar4 = lVar3 - 7;
      lVar3 = lVar3 + 1;
    } while (uVar4 < 0xff);
    uVar6 = uVar5;
    if ((((int)local_20 != 0) && (iVar2 = (int)((ulong)local_20 >> 0x20), iVar2 != 0)) &&
       ((lVar3 = *(long *)(param_1 + 0x40 + (long)(int)local_20 * 8),
        (*(byte *)(lVar3 + 0x90) & 0x80) == 0 &&
        (lVar1 = *(long *)(param_1 + 0x40 + (local_20 >> 0x20) * 8),
        (*(byte *)(lVar1 + 0x90) & 0x80) == 0)))) {
      *(char *)(lVar3 + 0xb4) = (char)((ulong)local_20 >> 0x20);
      *(char *)(lVar1 + 0xb4) = (char)local_20;
      uVar6 = 1;
      if (0 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] Canonical USB mass storage detected: ep0 = %02X  ep1 = %02X",
                      param_1 + 0x838,local_20,iVar2);
      }
    }
  }
  return uVar6;
}

