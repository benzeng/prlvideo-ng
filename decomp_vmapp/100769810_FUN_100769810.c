
undefined8 * FUN_100769810(undefined8 *param_1)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  long lVar5;
  long local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_100ba20d8;
  FUN_100769bc0(&local_40,1);
  if (*(int *)local_40 == -1) {
LAB_100769889:
    local_48 = local_40;
    pQVar3 = local_40;
  }
  else {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      goto LAB_100769889;
    }
    if ((int)*(uint *)(local_40 + 8) < 0) {
      pQVar3 = (QArrayData *)QArrayData::allocate(0x878,8,*(uint *)(local_40 + 8) & 0x7fffffff,0);
      local_48 = pQVar3;
      if (pQVar3 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      pQVar3[0xb] = (QArrayData)((byte)pQVar3[0xb] | 0x80);
      pQVar3 = local_48;
    }
    else {
      local_48 = (QArrayData *)QArrayData::allocate(0x878,8,(long)*(int *)(local_40 + 4),0);
      pQVar3 = local_48;
      if (local_48 == (QArrayData *)0x0) {
        qBadAlloc();
        pQVar3 = (QArrayData *)0x0;
      }
    }
    pQVar1 = local_40;
    if ((*(uint *)(pQVar3 + 8) & 0x7fffffff) != 0) {
      lVar5 = (long)*(int *)(local_40 + 4) * 0x878;
      if (lVar5 != 0) {
        pQVar2 = pQVar3 + *(long *)(pQVar3 + 0x10);
        pQVar4 = local_40 + *(long *)(local_40 + 0x10);
        do {
          _memcpy(pQVar2,pQVar4,0x878);
          lVar5 = lVar5 + -0x878;
          pQVar2 = pQVar2 + 0x878;
          pQVar4 = pQVar4 + 0x878;
        } while (lVar5 != 0);
      }
      *(int *)(pQVar3 + 4) = *(int *)(pQVar1 + 4);
    }
  }
  lVar5 = (long)*(int *)(pQVar3 + 4) * 0x878;
  if (lVar5 != 0) {
    pQVar3 = pQVar3 + *(long *)(pQVar3 + 0x10) + 0x458;
    do {
      _strlen((char *)pQVar3);
      QString::fromUtf8_helper((char *)&local_58,(int)pQVar3);
      QString::normalized(&local_50,&local_58,1,0);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007699a7;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1007699a7:
      local_60 = -1;
      if ((*(long *)(pQVar3 + -0x440) != -1) && ((ulong)*(uint *)(pQVar3 + -0x458) != 0xffffffff)) {
        local_60 = (ulong)*(uint *)(pQVar3 + -0x458) * *(long *)(pQVar3 + -0x440);
      }
      FUN_10077c1e0(param_1,&local_50,&local_60);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100769a13;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100769a13:
      pQVar3 = pQVar3 + 0x878;
      lVar5 = lVar5 + -0x878;
    } while (lVar5 != 0);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100769a53;
    }
    QArrayData::deallocate(local_48,0x878,8);
  }
LAB_100769a53:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    QArrayData::deallocate(local_40,0x878,8);
  }
  return param_1;
}

