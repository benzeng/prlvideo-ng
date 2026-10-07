
undefined4 FUN_1004f5620(long *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined4 local_5c;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_5c = 0;
  do {
    do {
      lVar1 = *param_1;
      iVar4 = *(int *)(lVar1 + 4);
      if (iVar4 <= param_2) {
        return local_5c;
      }
      uVar6 = (ulong)param_2;
      do {
        if (((long)*(int *)(lVar1 + 4) <= (long)uVar6) ||
           (*(short *)(*(long *)(lVar1 + 0x10) + lVar1 + uVar6 * 2) != 0x2f)) break;
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)iVar4);
      iVar5 = (int)uVar6;
      if (iVar5 == iVar4) {
        return local_5c;
      }
      iVar2 = QString::indexOf(param_1,0x2f,uVar6 & 0xffffffff,1);
      param_2 = iVar4;
      if (-1 < iVar2) {
        param_2 = iVar2;
      }
    } while (7 < (param_2 - iVar5) - 5U);
    QString::mid((int)&local_40,(int)param_1);
    FUN_1004f4bb0(&local_48,&local_40);
    if (*(int *)(local_48 + 4) == 0) {
      iVar4 = 4;
    }
    else {
      QString::left((int)&local_50);
      FUN_1004f4d10(&local_58,&local_50,&local_40,&local_48);
      iVar4 = 2;
      if (*(int *)(local_58 + 4) != 0) {
        uVar3 = QString::replace((int)param_1,iVar5,(QString *)(ulong)(uint)(param_2 - iVar5));
        param_2 = iVar5 + *(int *)(local_58 + 4);
        iVar4 = 0;
        local_5c = (undefined4)CONCAT71((int7)((ulong)uVar3 >> 8),1);
      }
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004f5768;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1004f5768:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004f579f;
        }
        QArrayData::deallocate(local_50,2,8);
      }
    }
LAB_1004f579f:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004f57cf;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1004f57cf:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004f57ff;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1004f57ff:
    if (iVar4 == 2) {
      return local_5c;
    }
  } while( true );
}

