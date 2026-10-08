
int FUN_1001aecc0(QString *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  iVar7 = 0;
  lVar5 = FUN_100154790(uVar4,0);
  if (lVar5 != 0) {
    iVar2 = FUN_10015d3a0(lVar5);
    iVar7 = 0;
    if (0 < iVar2) {
      iVar7 = 0;
      iVar2 = 0;
      do {
        lVar6 = FUN_10015d330(lVar5,iVar2);
        if ((lVar6 != 0) && (cVar1 = FUN_1001aec10(lVar6,param_2), cVar1 != '\0')) {
          FUN_100188480(&local_48,lVar6);
          QString::operator=(param_1,&local_48);
          iVar7 = iVar7 + 1;
          if (*(int *)local_48.field0_0x0 != -1) {
            if (*(int *)local_48.field0_0x0 != 0) {
              LOCK();
              *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
              local_31 = *(int *)local_48.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001aed90;
            }
            QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
          }
        }
LAB_1001aed90:
        iVar2 = iVar2 + 1;
        iVar3 = FUN_10015d3a0(lVar5);
      } while (iVar2 < iVar3);
      if (iVar7 == 1) {
        return 1;
      }
    }
    QString::fromUtf8_helper((char *)&local_40,0x1e41978);
    QString::operator=(param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_40.field0_0x0 != 0) {
          return iVar7;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  return iVar7;
}

