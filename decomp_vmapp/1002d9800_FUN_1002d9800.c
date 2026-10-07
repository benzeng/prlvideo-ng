
ulong FUN_1002d9800(long param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] Bulk/Interrupt",*(long *)(param_1 + 0x10) + 0xcf);
  }
  *(undefined4 *)(param_2 + 0x468) = 6;
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x10);
  uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if ((int)uVar6 == 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    if ((1 < DAT_1011c568c) && (*(int *)(param_2 + 0x450) == 0x69)) {
      FUN_1002da980(2,param_2);
    }
    uVar3 = *(uint *)(param_2 + 0x470);
    *(undefined4 *)(param_2 + 0x464) = 1;
    LOCK();
    piVar1 = (int *)(*(long *)(lVar5 + 0xc0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    LOCK();
    puVar2 = (uint *)(lVar5 + 8);
    uVar6 = (ulong)*puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 4) != 0) {
      uVar6 = FUN_1002c9070(param_2);
    }
  }
  if (2 < DAT_1011c568c) {
    uVar6 = FUN_1008e3970("","USB",0,"[%s] BulkInterrupt finished",*(long *)(param_1 + 0x10) + 0xcf)
    ;
    return uVar6;
  }
  return uVar6;
}

