
undefined8 FUN_1009c8300(undefined8 param_1,long *param_2)

{
  long lVar1;
  QArrayData *pQVar2;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  undefined4 local_38;
  undefined4 local_34;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_20;
  undefined7 uStack_1f;
  
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  lVar1 = *param_2;
  local_58 = *(long *)(lVar1 + 0x10) + lVar1;
  lStack_50 = local_58;
  FUN_100c8abb0(&lStack_50,&local_20,&local_38,&local_34,(long)*(int *)(lVar1 + 4));
  local_48 = CONCAT71(uStack_1f,local_20) + lStack_50;
  lStack_40 = lStack_50;
  FUN_1009c7cb0(&local_30,&local_58);
  pQVar2 = local_30 + *(long *)(local_30 + 0x10);
  if ((pQVar2 != (QArrayData *)0x0) && (*(uint *)(local_30 + 4) != 0)) {
    lVar1 = 0;
    do {
      if (pQVar2[lVar1] == (QArrayData)0x0) break;
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(local_30 + 4));
    if ((int)lVar1 == -1) {
      _strlen((char *)pQVar2);
    }
  }
  QString::fromUtf8_helper((char *)&local_28,(int)pQVar2);
  QString::normalized(param_1,&local_28,1,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_20 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_20) goto LAB_1009c83fc;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1009c83fc:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_20 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return param_1;
}

