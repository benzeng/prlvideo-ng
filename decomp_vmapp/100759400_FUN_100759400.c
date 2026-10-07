
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100759400(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  
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
  uVar2 = *(ulong *)(param_2 + 0x740);
  if (10 < uVar2 >> 0x1c) {
    uVar2 = 0xb0000000;
  }
  FUN_100759180(param_1,1,0,uVar2,param_2,"Data segment 1");
  if (0xb0000000 < *(ulong *)(param_2 + 0x740)) {
    FUN_100759180();
  }
  uVar2 = 0;
  lVar5 = 0x28;
  lVar1 = DAT_1011bf930;
  lVar3 = DAT_1011bf938;
  if (DAT_1011bf938 != DAT_1011bf930) {
    do {
      if (2 < DAT_1011b55f8) {
        lVar3 = *(long *)(lVar1 + -0x10 + lVar5);
        uVar4 = 0;
        if (lVar3 != 0) {
          uVar4 = *(undefined4 *)(lVar3 + 0x5b8);
        }
        FUN_1008e3970("","dbgdump",3,
                      "is_pa: %u, size: %llx, lin_addr: %llx, owning_vcpu: %x, file_off: %llx, name: %s"
                      ,*(undefined1 *)(lVar1 + -0x28 + lVar5),*(undefined8 *)(lVar1 + -0x20 + lVar5)
                      ,*(undefined8 *)(lVar1 + -0x18 + lVar5),uVar4,
                      *(undefined8 *)(lVar1 + -8 + lVar5),lVar1 + lVar5);
        lVar1 = DAT_1011bf930;
        lVar3 = DAT_1011bf938;
      }
      uVar2 = uVar2 + 1;
      lVar5 = lVar5 + 0x40;
    } while (uVar2 < (ulong)(lVar3 - lVar1 >> 6));
  }
  return;
}

