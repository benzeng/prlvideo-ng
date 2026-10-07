
undefined1 FUN_100549800(long param_1)

{
  size_t sVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  QArrayData *local_40;
  QArrayData *local_38;
  
  sVar4 = 0x100000;
  if (*(ulong *)(param_1 + 0xd8) < 0x100001) {
    sVar4 = *(ulong *)(param_1 + 0xd8) & 0xffffffff;
  }
  sVar1 = FUN_100761880(param_1 + 0x68,FUN_1007617a0,0,*(undefined8 *)(param_1 + 200),sVar4);
  if (sVar1 == sVar4) {
    _memcpy(*(void **)(param_1 + 0xd0),*(void **)(param_1 + 200),sVar4);
    *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + sVar4;
    lVar2 = *(long *)(param_1 + 0xd8) - sVar4;
    *(long *)(param_1 + 0xd8) = lVar2;
    if (lVar2 != 0) {
      return 1;
    }
    _free(*(void **)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
    lVar2 = *(long *)(param_1 + 0x18);
    lVar3 = FUN_100761880(param_1 + 0x68,FUN_1007617a0,0,*(undefined8 *)(param_1 + 0x28),lVar2);
    if (lVar2 == lVar3) {
      *(undefined1 *)(param_1 + 0xb8) = 1;
      return 1;
    }
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,
                  "Anonymous guest memory prepare (%s): failed to read video memory from image",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_10054995c;
      }
      QArrayData::deallocate(local_40,1,8);
    }
    goto LAB_10054995c;
  }
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,
                "Anonymous guest memory prepare (%s): failed to read guest memory image",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100549943;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100549943:
  _free(*(void **)(param_1 + 200));
  *(undefined8 *)(param_1 + 200) = 0;
LAB_10054995c:
  FUN_100549720(param_1);
  return 0;
}

