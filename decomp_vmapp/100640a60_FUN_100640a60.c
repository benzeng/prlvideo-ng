
long FUN_100640a60(undefined8 *param_1,QDateTime *param_2)

{
  char cVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_38;
  undefined1 local_2a;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    FUN_100641480(param_1);
    puVar2 = (uint *)*param_1;
  }
  lVar3 = *(long *)(puVar2 + 4);
  lVar5 = 0;
  if (*(long *)(puVar2 + 4) != 0) {
    do {
      while (lVar4 = lVar3, cVar1 = QDateTime::operator<((QDateTime *)(lVar4 + 0x18),param_2),
            cVar1 == '\0') {
        lVar3 = *(long *)(lVar4 + 8);
        lVar5 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_100640ad6;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    lVar4 = lVar5;
    if (lVar5 != 0) {
LAB_100640ad6:
      cVar1 = QDateTime::operator<(param_2,(QDateTime *)(lVar4 + 0x18));
      if (cVar1 == '\0') {
        return lVar4 + 0x20;
      }
    }
  }
  local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
  lVar3 = FUN_1006413a0(param_1,param_2,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return lVar3 + 0x20;
      }
      local_2a = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return lVar3 + 0x20;
}

