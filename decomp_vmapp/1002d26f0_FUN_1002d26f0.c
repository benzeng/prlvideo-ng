
uint FUN_1002d26f0(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  undefined4 uVar5;
  ulong uVar6;
  
  uVar6 = (ulong)param_2;
  puVar1 = (uint *)(*(long *)(param_1 + 0x40) + 0x480 + uVar6 * 0x10);
  if (2 < DAT_1011c568c) {
    uVar2 = *puVar1;
    pcVar4 = "disabled";
    if ((uVar2 & 2) != 0) {
      pcVar4 = "enabled";
    }
    lVar3 = *(long *)(param_1 + 0x60 + uVar6 * 8);
    uVar5 = 0;
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x1c);
    }
    FUN_1008e3970("","USB",0,"[XHC] PORTSC[%d] = %08x is %s (dev:%p, addr:%d)",uVar6,uVar2,pcVar4,
                  lVar3,uVar5);
  }
  return *puVar1 >> 1 & 1;
}

