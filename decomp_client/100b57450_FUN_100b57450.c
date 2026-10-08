
void FUN_100b57450(long param_1,QString *param_2,undefined8 param_3,uint param_4,int param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar2 = *(long *)(param_1 + 8);
  if (0 < *(int *)(lVar2 + 4)) {
    lVar4 = 0;
    do {
      cVar1 = operator==((QString *)(*(long *)(lVar2 + *(long *)(lVar2 + 0x10) + lVar4 * 8) + 8),
                         param_2);
      if (cVar1 != '\0') {
        lVar2 = *(long *)(*(long *)(param_1 + 8) + *(long *)(*(long *)(param_1 + 8) + 0x10) +
                         lVar4 * 8);
        local_40 = (QArrayData *)PTR_shared_null_1021e1288;
        if (lVar2 != 0) goto LAB_100b574e7;
        break;
      }
      lVar4 = lVar4 + 1;
      lVar2 = *(long *)(param_1 + 8);
    } while (lVar4 < *(int *)(lVar2 + 4));
  }
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  lVar2 = FUN_100b57070(param_1,param_2);
LAB_100b574e7:
  if (param_5 == 10) {
    uVar3 = QString::sprintf((char *)&local_40,"%d",(ulong)param_4);
    FUN_100b58060(lVar2,param_3,uVar3);
  }
  else {
    uVar3 = QString::sprintf((char *)&local_40,"0x%08x",(ulong)param_4);
    FUN_100b58060(lVar2,param_3,uVar3);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

