
undefined8 FUN_1002d08f0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  
  pcVar4 = (char *)(param_1 + 0x2f58);
  cVar1 = '\x01';
  lVar5 = 4;
  do {
    if (pcVar4[-0xf30] == '\0') {
      bVar2 = (char)lVar5 - 3;
      goto LAB_1002d095e;
    }
    bVar2 = cVar1 + 1;
    if (((pcVar4[-0xa20] == '\0') || (bVar2 = cVar1 + 2, pcVar4[-0x510] == '\0')) ||
       (bVar2 = cVar1 + 3, *pcVar4 == '\0')) goto LAB_1002d095e;
    cVar1 = cVar1 + '\x04';
    pcVar4 = pcVar4 + 0x1440;
    uVar6 = lVar5 + 1;
    lVar5 = lVar5 + 4;
  } while (uVar6 < 0x21);
  bVar2 = 0;
LAB_1002d095e:
  param_3[1] = 0;
  *param_3 = 0;
  *(uint *)((long)param_3 + 0xc) = (uint)bVar2 << 0x18 | 0x8400;
  uVar3 = 0x9000000;
  if (bVar2 != 0) {
    uVar3 = 0x1000000;
  }
  *(undefined4 *)(param_3 + 1) = uVar3;
  if (bVar2 == 0) {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[XHC][SLOT?] Enable Slot -> failed");
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1b18 + (ulong)bVar2 * 0x510) = 0xff;
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[XHC][SLOT%d] Enable Slot -> ok");
    }
  }
  return 0x2c00;
}

