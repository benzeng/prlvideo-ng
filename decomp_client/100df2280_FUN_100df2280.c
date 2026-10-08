
undefined8 * FUN_100df2280(undefined8 *param_1,long *param_2,QString *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  iVar3 = -2;
LAB_100df22aa:
  do {
    do {
      iVar7 = iVar3 + 2;
      lVar6 = *param_2;
      iVar5 = *(int *)(lVar6 + 0xc) - *(int *)(lVar6 + 8);
      if ((iVar3 < -2) && (iVar7 = iVar7 + iVar5, iVar7 < 0)) {
        iVar7 = 0;
      }
      if (iVar5 <= iVar7) {
        return param_1;
      }
      lVar4 = (long)(iVar7 + -1) + (long)*(int *)(lVar6 + 8);
      lVar8 = lVar6 + 0x10 + lVar4 * 8;
      lVar6 = (long)*(int *)(lVar6 + 0xc) * 8 + -8 + lVar4 * -8;
      do {
        if (lVar6 == 0) {
          return param_1;
        }
        cVar1 = operator==((QString *)(lVar8 + 8),param_3);
        lVar8 = lVar8 + 8;
        lVar6 = lVar6 + -8;
      } while (cVar1 == '\0');
      lVar6 = *param_2;
      iVar5 = *(int *)(lVar6 + 8);
      uVar9 = lVar8 - (lVar6 + 0x10 + (long)iVar5 * 8);
      iVar7 = (int)(uVar9 >> 3);
      iVar3 = 0;
    } while (iVar7 == 0);
    if ((iVar7 == -1) || ((*(int *)(lVar6 + 0xc) + -1) - iVar5 == iVar7)) {
      return param_1;
    }
    local_40 = *(QArrayData **)
                (lVar6 + 0x10 +
                ((long)iVar5 + ((long)(uVar9 * 0x20000000 + 0x100000000) >> 0x20)) * 8);
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
    local_48 = (QArrayData *)QString::fromAscii_helper("-",1);
    cVar1 = QString::startsWith(&local_40,&local_48,1);
    cVar2 = '\x01';
    if (cVar1 == '\0') {
      local_50 = (QArrayData *)QString::fromAscii_helper("--",2);
      cVar2 = QString::startsWith(&local_40,&local_50,1);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100df2404;
        }
        QArrayData::deallocate(local_50,2,8);
      }
    }
LAB_100df2404:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100df2434;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100df2434:
    if (cVar2 == '\0') {
      FUN_1000341d0(param_1,&local_40);
    }
    iVar3 = iVar7;
  } while (*(int *)local_40 == -1);
  if (*(int *)local_40 != 0) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
    if ((bool)local_31) goto LAB_100df22aa;
  }
  QArrayData::deallocate(local_40,2,8);
  goto LAB_100df22aa;
}

