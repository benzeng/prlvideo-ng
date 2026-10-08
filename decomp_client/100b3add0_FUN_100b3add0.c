
long FUN_100b3add0(long param_1,long param_2,uint param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  QArrayData *local_40;
  
  lVar4 = 0;
  if (param_4 < param_3) {
    plVar5 = *(long **)(param_1 + 0x18);
    lVar4 = 0;
    if (plVar5 != (long *)(param_1 + 0x18)) {
      lVar4 = 0;
      do {
        QString::toUtf8();
        uVar2 = *(uint *)(local_40 + 4);
        lVar1 = lVar4 + (ulong)param_4;
        uVar3 = (ulong)uVar2 + lVar1;
        if (param_3 < uVar3) {
          uVar2 = (int)uVar3 - param_3;
        }
        _memcpy((void *)(lVar1 + param_2),local_40 + *(long *)(local_40 + 0x10),(ulong)uVar2);
        lVar4 = lVar4 + (ulong)uVar2;
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            UNLOCK();
            if (*(int *)local_40 != 0) goto LAB_100b3aea3;
          }
          QArrayData::deallocate(local_40,1,8);
        }
LAB_100b3aea3:
      } while ((lVar4 + (ulong)param_4 < (ulong)param_3) &&
              (plVar5 = (long *)*plVar5, plVar5 != (long *)(param_1 + 0x18)));
    }
    *(undefined1 *)(param_2 + (ulong)(param_3 - 1)) = 0;
  }
  return lVar4;
}

