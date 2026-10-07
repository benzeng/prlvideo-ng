
undefined1 FUN_1005af060(long *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  QArrayData *local_30;
  int local_28;
  undefined1 local_22;
  
  cVar2 = FUN_1005ae930();
  if (cVar2 == '\0') {
    pcVar4 = "Unable to write LRU";
  }
  else {
    lVar3 = *param_1;
    for (puVar5 = *(undefined8 **)(lVar3 + 0x20); puVar5 != (undefined8 *)(lVar3 + 0x20);
        puVar5 = (undefined8 *)*puVar5) {
      cVar2 = FUN_1005ab890(param_1,puVar5 + -5);
      if (cVar2 == '\0') {
        FUN_1008e3970("","vdisk",0,"Failed to write group %u",*(undefined4 *)(puVar5 + 2));
        return 0;
      }
      lVar3 = *param_1;
    }
    local_28 = 0;
    cVar2 = FUN_1007080a0(param_1 + 5,param_1[0x217],*(undefined4 *)((long)param_1 + 0x10b4),
                          &local_28,0x3000);
    if (cVar2 == '\0') {
      iVar1 = *(int *)((long)param_1 + 0x10b4);
    }
    else {
      iVar1 = *(int *)((long)param_1 + 0x10b4);
      if (iVar1 == local_28) {
        if (DAT_1011b55f8 < 3) {
          return 1;
        }
        QString::toUtf8();
        FUN_1008e3970("","vdisk",3,"Writed [%s]",local_30 + *(long *)(local_30 + 0x10));
        if (*(int *)local_30 == -1) {
          return 1;
        }
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          UNLOCK();
          if (*(int *)local_30 != 0) {
            return 1;
          }
          local_22 = 0;
        }
        QArrayData::deallocate(local_30,1,8);
        return 1;
      }
    }
    FUN_1008e3970("","vdisk",0,"Unable to write bitmap (written %u, expected %u), err = %u",local_28
                  ,iVar1,*(undefined4 *)((long)param_1 + 0x3c));
    pcVar4 = "Unable to write bitmap";
  }
  FUN_1008e3970("","vdisk",0,pcVar4);
  return 0;
}

