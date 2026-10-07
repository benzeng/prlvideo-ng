
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100759830(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  
  DAT_1011bf918 = 0;
  DAT_1011bf928 = 0;
  DAT_1011bf920 = 0;
  if (DAT_1011bf938 != DAT_1011bf930) {
    DAT_1011bf938 =
         (~((DAT_1011bf938 + -0x40) - DAT_1011bf930) & 0xffffffffffffffc0U) + DAT_1011bf938;
  }
  _DAT_1011bf980 = 0;
  DAT_1011bf978 = 0;
  DAT_1011bf970 = 0;
  DAT_1011bf968 = 0;
  DAT_1011bf960 = 0;
  _DAT_1011bf958 = 0;
  DAT_1011bf950 = 0;
  DAT_1011bf948 = 0;
  uVar5 = 0;
  FUN_100759180(param_1,0,
                (*(ulong *)(param_2 + 0x28) & 0xfffffffffffff000) + *(long *)(param_2 + 0x640),
                0x4000,param_2,"Stack");
  FUN_100759180();
  FUN_100759180();
  FUN_100759180();
  FUN_100759180();
  FUN_100759180();
  FUN_100759180();
  FUN_100759180();
  FUN_1007595e0();
  FUN_1007595e0();
  lVar4 = 0x28;
  lVar1 = DAT_1011bf930;
  lVar2 = DAT_1011bf938;
  if (DAT_1011bf938 != DAT_1011bf930) {
    do {
      if (2 < DAT_1011b55f8) {
        lVar2 = *(long *)(lVar1 + -0x10 + lVar4);
        uVar3 = 0;
        if (lVar2 != 0) {
          uVar3 = *(undefined4 *)(lVar2 + 0x5b8);
        }
        FUN_1008e3970("","dbgdump",3,
                      "is_pa: %u, size: %llx, lin_addr: %llx, owning_vcpu: %x, file_off: %llx, name: %s"
                      ,*(undefined1 *)(lVar1 + -0x28 + lVar4),*(undefined8 *)(lVar1 + -0x20 + lVar4)
                      ,*(undefined8 *)(lVar1 + -0x18 + lVar4),uVar3,
                      *(undefined8 *)(lVar1 + -8 + lVar4),lVar1 + lVar4);
        lVar1 = DAT_1011bf930;
        lVar2 = DAT_1011bf938;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x40;
    } while (uVar5 < (ulong)(lVar2 - lVar1 >> 6));
  }
  return;
}

