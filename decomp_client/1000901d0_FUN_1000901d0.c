
void FUN_1000901d0(undefined8 param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  lVar6 = *param_2;
  iVar5 = *(int *)(lVar6 + 8);
  iVar7 = *(int *)(lVar6 + 0xc) - iVar5;
  if (iVar7 == 0 || *(int *)(lVar6 + 0xc) < iVar5) {
    return;
  }
  iVar4 = 0;
  do {
    uVar3 = QDir::separator();
    QString::QString(&local_48,uVar3);
    local_40.field0_0x0 =
         *(QTypedArrayData<unsigned_short> **)(lVar6 + 0x10 + ((long)iVar4 + (long)iVar5) * 8);
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_40);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100090288;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100090288:
    iVar5 = 0;
    if (0 < iVar7) {
      do {
        iVar1 = iVar5;
        if (iVar4 != iVar5) {
          lVar6 = *param_2;
          iVar1 = *(int *)(lVar6 + 8);
          uVar3 = QDir::separator();
          QString::QString(&local_58,uVar3);
          local_50.field0_0x0 =
               *(QTypedArrayData<unsigned_short> **)(lVar6 + 0x10 + ((long)iVar1 + (long)iVar5) * 8)
          ;
          if (1 < *(int *)local_50.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_50);
          if (*(int *)local_58.field0_0x0 != -1) {
            if (*(int *)local_58.field0_0x0 != 0) {
              LOCK();
              *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
              local_31 = *(int *)local_58.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100090328;
            }
            QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
          }
LAB_100090328:
          cVar2 = QString::startsWith(&local_50,&local_40,1);
          if (cVar2 != '\0') {
            FUN_100094da0(param_2,iVar5);
            iVar7 = iVar7 + -1;
            iVar4 = iVar4 - (uint)(iVar5 < iVar4);
            iVar5 = iVar5 + -1;
          }
          iVar1 = iVar4;
          if (*(int *)local_50.field0_0x0 != -1) {
            if (*(int *)local_50.field0_0x0 != 0) {
              LOCK();
              *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
              local_31 = *(int *)local_50.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100090390;
            }
            QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
          }
        }
LAB_100090390:
        iVar4 = iVar1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar7);
    }
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000903d0;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1000903d0:
    iVar4 = iVar4 + 1;
    if (iVar7 <= iVar4) {
      return;
    }
    lVar6 = *param_2;
    iVar5 = *(int *)(lVar6 + 8);
  } while( true );
}

