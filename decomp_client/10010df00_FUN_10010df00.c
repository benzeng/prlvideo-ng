
long FUN_10010df00(undefined8 param_1,ulong param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  Data *pDVar3;
  long lVar4;
  long lVar5;
  Data *pDVar6;
  long lVar7;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  lVar4 = CVmConfiguration::getVmHardwareList();
  plVar2 = *(long **)(lVar4 + 0xa8 + (param_2 & 0xffffffff) * 8);
  local_40 = (Data *)*plVar2;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar5 = (long)*(int *)(local_40 + 8);
      lVar4 = *plVar2;
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_40 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_40 + 0xc) - lVar5, lVar7 != 0 && lVar5 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar5 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  lVar5 = (long)*(int *)(local_40 + 8);
  iVar1 = *(int *)(local_40 + 0xc);
  local_30 = local_40 + (long)iVar1 * 8 + 0x10;
  lVar4 = 0;
  local_38 = local_40 + lVar5 * 8 + 0x10;
  if (*(int *)(local_40 + 8) != iVar1) {
    lVar7 = (long)iVar1 * 8 + lVar5 * -8;
    pDVar3 = local_40 + lVar5 * 8 + 0x18;
    do {
      pDVar6 = pDVar3;
      lVar4 = *(long *)(pDVar6 + -8);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x68) == param_3)) break;
      lVar7 = lVar7 + -8;
      lVar4 = 0;
      pDVar3 = pDVar6 + 8;
      local_38 = pDVar6;
    } while (lVar7 != 0);
  }
  local_28 = 1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return lVar4;
      }
      local_19 = 0;
    }
    QListData::dispose(local_40);
  }
  return lVar4;
}

