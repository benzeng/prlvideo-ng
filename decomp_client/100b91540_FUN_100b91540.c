
uint FUN_100b91540(QString *param_1)

{
  long lVar1;
  QMapNodeBase *pQVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  QString local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QMapNodeBase *local_38;
  undefined1 local_29;
  
  local_38 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  FUN_100b7c6f0(&local_38);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100b90a60(&local_48,param_1);
  iVar4 = *(int *)(local_48 + 4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b915ac;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b915ac:
  uVar7 = 1;
  if (iVar4 == 0) {
    QString::trimmed();
    iVar4 = *(int *)(local_50 + 4);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b915f9;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100b915f9:
    if (iVar4 < 0x23) {
      FUN_100b90700(&local_58,param_1);
      QString::operator=(&local_40,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_29 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100b91655;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
    }
    else {
      QString::operator=(&local_40,param_1);
    }
LAB_100b91655:
    QString::toLatin1();
    iVar4 = FUN_100b90e60(local_60 + *(long *)(local_60 + 0x10),&local_38);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b916a6;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_100b916a6:
    uVar7 = 0xffffffff;
    if (iVar4 == 0) {
      local_68.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("graceperiod",0xb);
      pQVar2 = local_38;
      if (*(long *)(local_38 + 0x10) == 0) {
LAB_100b91732:
        lVar5 = 0;
      }
      else {
        lVar1 = *(long *)(local_38 + 0x10);
        lVar6 = 0;
        do {
          while (lVar5 = lVar1, cVar3 = operator<((QString *)(lVar5 + 0x18),&local_68),
                cVar3 == '\0') {
            lVar1 = *(long *)(lVar5 + 8);
            lVar6 = lVar5;
            if (*(long *)(lVar5 + 8) == 0) goto LAB_100b91721;
          }
          lVar1 = *(long *)(lVar5 + 0x10);
        } while (*(long *)(lVar5 + 0x10) != 0);
        lVar5 = lVar6;
        if (lVar6 == 0) goto LAB_100b91732;
LAB_100b91721:
        cVar3 = operator<(&local_68,(QString *)(lVar5 + 0x18));
        if (cVar3 != '\0') goto LAB_100b91732;
      }
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_29 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100b91764;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_100b91764:
      uVar7 = 0;
      if (lVar5 == 0) {
        local_70.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("keyserver_host",0xe);
        lVar1 = *(long *)(pQVar2 + 0x10);
        if (lVar1 == 0) {
LAB_100b917e2:
          lVar5 = 0;
        }
        else {
          lVar6 = 0;
          do {
            while (lVar5 = lVar1, cVar3 = operator<((QString *)(lVar5 + 0x18),&local_70),
                  cVar3 == '\0') {
              lVar1 = *(long *)(lVar5 + 8);
              lVar6 = lVar5;
              if (*(long *)(lVar5 + 8) == 0) goto LAB_100b917d1;
            }
            lVar1 = *(long *)(lVar5 + 0x10);
          } while (*(long *)(lVar5 + 0x10) != 0);
          lVar5 = lVar6;
          if (lVar6 == 0) goto LAB_100b917e2;
LAB_100b917d1:
          cVar3 = operator<(&local_70,(QString *)(lVar5 + 0x18));
          if (cVar3 != '\0') goto LAB_100b917e2;
        }
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_29 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100b91814;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_100b91814:
        uVar7 = 0;
        if (lVar5 == 0) {
          local_78.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("valid_period",0xc);
          lVar1 = *(long *)(pQVar2 + 0x10);
          if (lVar1 == 0) {
LAB_100b91892:
            lVar5 = 0;
          }
          else {
            lVar6 = 0;
            do {
              while (lVar5 = lVar1, cVar3 = operator<((QString *)(lVar5 + 0x18),&local_78),
                    cVar3 == '\0') {
                lVar1 = *(long *)(lVar5 + 8);
                lVar6 = lVar5;
                if (*(long *)(lVar5 + 8) == 0) goto LAB_100b91881;
              }
              lVar1 = *(long *)(lVar5 + 0x10);
            } while (*(long *)(lVar5 + 0x10) != 0);
            lVar5 = lVar6;
            if (lVar6 == 0) goto LAB_100b91892;
LAB_100b91881:
            cVar3 = operator<(&local_78,(QString *)(lVar5 + 0x18));
            if (cVar3 != '\0') goto LAB_100b91892;
          }
          if (*(int *)local_78.field0_0x0 != -1) {
            if (*(int *)local_78.field0_0x0 != 0) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
              local_29 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100b918c4;
            }
            QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
          }
LAB_100b918c4:
          uVar7 = -(uint)(lVar5 == 0) | 1;
        }
      }
    }
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b918ff;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100b918ff:
  pQVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return uVar7;
      }
    }
    if (*(long *)(local_38 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
  return uVar7;
}

