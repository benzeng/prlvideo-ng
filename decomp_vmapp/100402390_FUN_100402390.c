
void FUN_100402390(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(long *)(param_2 + 0x78) = param_1;
  *(code **)(param_2 + 0x80) = FUN_1004026f0;
  *(ulong *)(param_2 + 0x88) = *(ulong *)(param_2 + 0x18);
  *(ulong *)(param_2 + 0x90) = *(ulong *)(param_2 + 0x20);
  *(uint *)(param_2 + 0xa8) = *(uint *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0xac) = 1;
  *(long *)(param_2 + 0xb0) = param_2 + 0xb0;
  *(long *)(param_2 + 0xb8) = param_2 + 0xb0;
  *(undefined4 *)(param_2 + 0x98) = 1;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  if (DAT_1011ccc18 != (code *)0x0) {
    (*DAT_1011ccc18)(*(undefined4 *)(param_1 + 0x40),(*(uint *)(param_2 + 0x30) & 1) * 2 + 0x17,
                     *(ulong *)(param_2 + 0x18) |
                     *(ulong *)(param_2 + 0x20) / *(ulong *)(param_1 + 0x48) << 0x20);
  }
  if ((DAT_1011c8490 != 0) && (*(long *)(*(long *)(param_1 + 0xa8) + 0xf0) == 0)) {
    QTime::restart();
  }
  plVar1 = (long *)(*(long *)(param_1 + 0xa8) + 0xf0);
  *plVar1 = *plVar1 + 1;
  if ((*(byte *)(param_2 + 0xa8) & 1) == 0) {
    if (*(long *)(param_1 + 0xb8) == *(long *)(param_2 + 0x90)) {
      plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0xf0);
      *plVar1 = *plVar1 + 1;
    }
    *(long *)(param_1 + 0xb8) = *(long *)(param_2 + 0x88) + *(long *)(param_2 + 0x20);
    if (*(long *)(param_1 + 0x160) != 0) {
      uVar3 = FUN_100405610(*(long *)(param_1 + 0x160),param_2);
      *(undefined4 *)(param_2 + 0xac) = uVar3;
    }
  }
  else {
    if (*(long *)(param_1 + 0xc0) == *(long *)(param_2 + 0x90)) {
      plVar1 = (long *)(*(long *)(param_1 + 0x90) + 0xf0);
      *plVar1 = *plVar1 + 1;
    }
    *(long *)(param_1 + 0xc0) = *(long *)(param_2 + 0x88) + *(long *)(param_2 + 0x20);
    lVar5 = *(long *)(param_1 + 8);
    if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x18) & 1) != 0)) {
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      iVar4 = _rand();
      lVar5 = ((ulong)(long)iVar4 % (*(ulong *)(param_2 + 0x88) / *(ulong *)(param_1 + 0x48))) *
              *(ulong *)(param_1 + 0x48);
      *(long *)(param_2 + 0x88) = lVar5;
      FUN_1008e3970("","HddUtils",0,
                    "hdd: WRITE request shrinked by DFE. disk offset %llx, old size %llx, new size %llx"
                    ,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x18),lVar5);
    }
  }
  uVar2 = DAT_1011c3650;
  if ((((*(byte *)(param_1 + 0x16c) & 1) != 0) && ((*(byte *)(param_2 + 0xa8) & 1) != 0)) &&
     (*(long *)(param_2 + 0x20) == 0)) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_58 = (void *)0x0;
    pvStack_50 = (void *)0x0;
    local_48 = 0;
    FUN_10002ddb0(local_88,&local_38);
    FUN_10006a5d0(local_70,local_88);
    FUN_1000648b0(uVar2,0x80021059,&local_58,local_70);
    FUN_10006a680(local_70);
    FUN_10002d9d0(local_88);
    if (local_58 != (void *)0x0) {
      if (pvStack_50 != local_58) {
        pvStack_50 = (void *)((~((long)pvStack_50 + (-4 - (long)local_58)) & 0xfffffffffffffffcU) +
                             (long)pvStack_50);
      }
      operator_delete(local_58);
    }
    FUN_10002d9d0(&local_38);
  }
  return;
}

