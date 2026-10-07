
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100403830(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x130) == 0) {
    return;
  }
  FUN_1008e3970("","HddUtils",0,"HDD[#%u] Request dump:",*(undefined4 *)(param_1 + 0x40));
  if (*(long *)(param_1 + 0x130) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x128);
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x110) + (uVar6 / 0x49) * 8);
      lVar5 = (uVar6 % 0x49) * 0x38;
      uVar6 = *(ulong *)(lVar7 + 8 + lVar5);
      uVar1 = *(ulong *)(lVar7 + 0x10 + lVar5);
      uVar2 = *(ulong *)(lVar7 + 0x18 + lVar5);
      uVar3 = *(ulong *)(lVar7 + 0x20 + lVar5);
      pcVar4 = "";
      if ((long)*(ulong *)(lVar7 + lVar5) < (long)uVar2) {
        pcVar4 = "expired";
      }
      FUN_1008e3970("","HddUtils",0,
                    "%8llu %s ms: h:%10llu:%10llu (%8llu) g:%8llu:%8llu (%8llu) dl: %8llu %s",
                    *(undefined8 *)(lVar7 + 0x28 + lVar5),*(undefined8 *)(lVar7 + 0x30 + lVar5),
                    uVar1 / 1000,uVar3 / 1000,(uVar3 - uVar1) / 1000,uVar6 / 1000,uVar2 / 1000,
                    (uVar2 - uVar6) / 1000,*(ulong *)(lVar7 + lVar5) / 1000,pcVar4);
      uVar6 = *(long *)(param_1 + 0x128) + _DAT_100b409c0;
      lVar7 = *(long *)(param_1 + 0x130) + _UNK_100b409c8;
      *(ulong *)(param_1 + 0x128) = uVar6;
      *(long *)(param_1 + 0x130) = lVar7;
      if (0x91 < uVar6) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x110));
        *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + 8;
        uVar6 = *(long *)(param_1 + 0x128) - 0x49;
        *(ulong *)(param_1 + 0x128) = uVar6;
        lVar7 = *(long *)(param_1 + 0x130);
      }
    } while (lVar7 != 0);
  }
  FUN_1008e3970("","HddUtils",0,"==========================");
  return;
}

