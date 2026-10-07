
void FUN_10069cd40(long *param_1)

{
  uint uVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar5;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar5 = (undefined4)((ulong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((DAT_1011b55f8 < 4) ||
     (FUN_1008e3970("Compact","dimg",4,"[%p]=== BatEntryMaxList ===\n",*param_1), DAT_1011b55f8 < 4)
     ) goto LAB_10069ce80;
  plVar2 = (long *)*param_1;
  (**(code **)(*(long *)((long)plVar2 + *(long *)(*plVar2 + -0x18)) + 0xd0))
            (&local_40,(long)plVar2 + *(long *)(*plVar2 + -0x18));
  QString::toUtf8();
  FUN_1008e3970("Compact","dimg",4,"[%p] Path: %s",plVar2,local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10069ce1a;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10069ce1a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10069ce4a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10069ce4a:
  if (3 < DAT_1011b55f8) {
    FUN_1008e3970("Compact","dimg",4,"[%p] used: %u of %u\n",*param_1,(int)param_1[5],
                  CONCAT44(uVar5,0x1000));
  }
LAB_10069ce80:
  plVar2 = (long *)param_1[1];
  if (plVar2 == param_1 + 1) {
    if (DAT_1011b55f8 < 4) {
      return;
    }
    lVar4 = *param_1;
    pcVar3 = "[%p] No entries in list\n";
  }
  else {
    if (DAT_1011b55f8 < 4) {
      return;
    }
    FUN_1008e3970("Compact","dimg",4,"[%p] minimal: [%u] = %llu (%u)\n",*param_1,(int)plVar2[2],
                  (ulong)*(uint *)((long)plVar2 + 0x14) /
                  (ulong)*(uint *)(*(long *)(*param_1 + 0x20) + 0x10),*(uint *)((long)plVar2 + 0x14)
                 );
    if (DAT_1011b55f8 < 4) {
      return;
    }
    uVar1 = *(uint *)(param_1[2] + 0x14);
    FUN_1008e3970("Compact","dimg",4,"[%p] maximal: [%u] = %llu (%u)\n",*param_1,
                  *(undefined4 *)(param_1[2] + 0x10),
                  (ulong)uVar1 / (ulong)*(uint *)(*(long *)(*param_1 + 0x20) + 0x10),uVar1);
    if (DAT_1011b55f8 < 4) {
      return;
    }
    lVar4 = *param_1;
    pcVar3 = "[%p]====================\n";
  }
  FUN_1008e3970("Compact","dimg",4,pcVar3,lVar4);
  return;
}

