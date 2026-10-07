
void FUN_1005786c0(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  QArrayData *local_30;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar3 = 0;
  if ((ulong)*(uint *)(param_1 + 0x40) != 0) {
    lVar3 = (ulong)*(uint *)(lVar1 + 0x1120) * (ulong)*(uint *)(param_1 + 0x40) -
            (ulong)*(uint *)(lVar1 + 0x1158);
  }
  if (3 < DAT_1011b55f8) {
    QString::toUtf8();
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Starting bat idx %u, lba 0x%llX",lVar1,
                  local_30 + *(long *)(local_30 + 0x10),*(undefined8 *)(param_1 + 0x28),
                  *(undefined4 *)(param_1 + 0x40),lVar3);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) goto LAB_100578785;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_100578785:
  cVar2 = FUN_1005abdf0(*(long *)(param_1 + 0x20) + 0x10,lVar3);
  if (cVar2 == '\0') {
    FUN_1005abf40(*(long *)(param_1 + 0x20) + 0x10,FUN_10057ac20,param_1,0xffffffff,lVar3);
  }
  else {
    FUN_10057ac20(param_1,0);
  }
  return;
}

