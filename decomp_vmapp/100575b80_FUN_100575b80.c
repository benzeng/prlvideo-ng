
undefined8 FUN_100575b80(long *param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *in_stack_ffffffffffffff88;
  undefined4 uVar12;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  
  cVar2 = (**(code **)(*(long *)param_1[0x242] + 0x50))();
  if (cVar2 == '\0') {
    FUN_1008e3970("Compact","vdisk",0,"[%p] Terminated by AsyncDev state changing",param_1);
    return 0;
  }
  if (param_1[0x25b] == 0) {
    in_stack_ffffffffffffff88 =
         (char *)CONCAT44((int)((ulong)in_stack_ffffffffffffff88 >> 0x20),0x134c);
    FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "disk->m_CompactContext != NULL","DiskStatesImp.cpp",in_stack_ffffffffffffff88,
                  "StartCompactBlocksCb");
  }
  cVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if (cVar2 == '\0') {
    QMutex::lock();
    lVar7 = param_1[0x239];
    QMutex::unlock();
    if (lVar7 == 0) {
      uVar1 = *(uint *)(param_1[0x25b] + 0x30);
      if ((uVar1 < 10) && ((0x301U >> (uVar1 & 0x1f) & 1) != 0)) {
        if ((uVar1 == 9) && (FUN_100576710(), 3 < DAT_1011b55f8)) {
          QString::toUtf8();
          iVar5 = *(int *)(param_1[0x25b] + 0x30);
          if ((long)iVar5 == -1) {
            in_stack_ffffffffffffff88 = "Invalid";
          }
          else if (iVar5 == -2) {
            in_stack_ffffffffffffff88 = "Disabled";
          }
          else {
            in_stack_ffffffffffffff88 = (&PTR_s_None_100bc6390)[iVar5];
          }
          FUN_1008e3970("Compact","vdisk",4,"[%p]%s: Terminated state [%s] restored",param_1,
                        local_48 + *(long *)(local_48 + 0x10),in_stack_ffffffffffffff88);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              UNLOCK();
              if (*(int *)local_48 != 0) goto LAB_100575ee2;
            }
            QArrayData::deallocate(local_48,1,8);
          }
        }
LAB_100575ee2:
        uVar12 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
        lVar7 = param_1[0x225];
        uVar10 = 0;
        if (param_1[0x226] == lVar7) {
LAB_100575f51:
          lVar7 = param_1[0x25b];
          iVar5 = *(int *)(lVar7 + 0x30);
          if ((long)iVar5 < 0) {
            if (iVar5 == -2) {
              pcVar6 = "Disabled";
            }
            else {
              if (iVar5 != -1) goto LAB_100575f90;
              pcVar6 = "Invalid";
            }
LAB_100575f9b:
            FUN_1008e3970("Compact","vdisk",0,"Wrong state [%s] on compacting start",pcVar6);
            FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0",
                          "DiskStatesImp.cpp",CONCAT44(uVar12,0x1391),"StartCompactBlocksCb");
            lVar7 = param_1[0x25b];
            iVar5 = *(int *)(lVar7 + 0x30);
          }
          else if ((iVar5 != 0) && (iVar5 != 8)) {
LAB_100575f90:
            pcVar6 = (&PTR_s_None_100bc6390)[iVar5];
            goto LAB_100575f9b;
          }
          if (iVar5 == 8) {
            FUN_100576ac0(lVar7);
            if (DAT_1011b55f8 < 4) {
              return 0;
            }
            QString::toUtf8();
            iVar5 = *(int *)(param_1[0x25b] + 0x30);
            if ((long)iVar5 == -1) {
              pcVar6 = "Invalid";
            }
            else if (iVar5 == -2) {
              pcVar6 = "Disabled";
            }
            else {
              pcVar6 = (&PTR_s_None_100bc6390)[iVar5];
            }
            uVar11 = 0;
            FUN_1008e3970("Compact","vdisk",4,"[%p]%s: Done in state [%s]",param_1,
                          local_50 + *(long *)(local_50 + 0x10),pcVar6);
            if (*(int *)local_50 == -1) {
              return 0;
            }
            local_30 = local_50;
            if (*(int *)local_50 == 0) goto LAB_10057633f;
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            iVar5 = *(int *)local_50;
            UNLOCK();
            uVar11 = 0;
            goto joined_r0x000100575e62;
          }
        }
        else {
          bVar4 = 0;
          do {
            bVar3 = FUN_100597100(*(undefined8 *)(lVar7 + uVar10 * 8));
            uVar12 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
            bVar4 = bVar3 | bVar4;
            uVar10 = uVar10 + 1;
            lVar7 = param_1[0x225];
          } while (uVar10 < (ulong)(param_1[0x226] - lVar7 >> 3));
          if (bVar4 == 0) goto LAB_100575f51;
          lVar7 = param_1[0x25b];
          *(undefined4 *)(lVar7 + 0x30) = 0;
          *(undefined1 *)(lVar7 + 0x48) = 1;
          *(undefined8 *)(lVar7 + 0x28) = 0xffffffffffffffff;
        }
        do {
          uVar10 = *(long *)(lVar7 + 0x28) + 1;
          *(ulong *)(lVar7 + 0x28) = uVar10;
          lVar8 = *(long *)(*(long *)(lVar7 + 0x20) + 0x1128);
          lVar9 = *(long *)(*(long *)(lVar7 + 0x20) + 0x1130);
          if ((ulong)(lVar9 - lVar8 >> 3) <= uVar10) goto LAB_1005760ac;
          cVar2 = FUN_100595b70(*(undefined8 *)(lVar8 + uVar10 * 8));
        } while (cVar2 == '\0');
        uVar10 = *(ulong *)(lVar7 + 0x28);
        lVar8 = *(long *)(*(long *)(lVar7 + 0x20) + 0x1128);
        lVar9 = *(long *)(*(long *)(lVar7 + 0x20) + 0x1130);
LAB_1005760ac:
        if (lVar9 - lVar8 >> 3 == uVar10) {
          if (3 < DAT_1011b55f8) {
            QString::toUtf8();
            iVar5 = *(int *)(param_1[0x25b] + 0x30);
            if ((long)iVar5 == -1) {
              pcVar6 = "Invalid";
            }
            else if (iVar5 == -2) {
              pcVar6 = "Disabled";
            }
            else {
              pcVar6 = (&PTR_s_None_100bc6390)[iVar5];
            }
            FUN_1008e3970("Compact","vdisk",4,"[%p]%s: No storages. Done in state [%s]",param_1,
                          local_58 + *(long *)(local_58 + 0x10),pcVar6);
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 != 0) {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + -1;
                UNLOCK();
                if (*(int *)local_58 != 0) goto LAB_100576278;
              }
              QArrayData::deallocate(local_58,1,8);
            }
          }
LAB_100576278:
          *(undefined8 *)(param_1[0x25b] + 0x28) = 0xffffffffffffffff;
          return 0;
        }
        *(undefined4 *)(param_1[0x25b] + 0x30) = 1;
        FUN_100576cd0();
        if (2 < DAT_1011b55f8) {
          QString::toUtf8();
          FUN_1008e3970("Compact","vdisk",3,"[%p] === ConsistencyCheck started for disk [%s]",
                        param_1,local_60 + *(long *)(local_60 + 0x10));
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              UNLOCK();
              if (*(int *)local_60 != 0) goto LAB_10057618c;
            }
            QArrayData::deallocate(local_60,1,8);
          }
        }
LAB_10057618c:
        uVar11 = QDateTime::currentMSecsSinceEpoch();
        *(undefined8 *)(param_1[0x25b] + 0x50) = uVar11;
        if (DAT_1011b55f8 < 4) {
          return 0;
        }
        QString::toUtf8();
        iVar5 = *(int *)(param_1[0x25b] + 0x30);
        if ((long)iVar5 == -1) {
          pcVar6 = "Invalid";
        }
        else if (iVar5 == -2) {
          pcVar6 = "Disabled";
        }
        else {
          pcVar6 = (&PTR_s_None_100bc6390)[iVar5];
        }
        uVar11 = 0;
        FUN_1008e3970("Compact","vdisk",4,"[%p]%s: Done in state [%s]",param_1,
                      local_68 + *(long *)(local_68 + 0x10),pcVar6);
        if (*(int *)local_68 == -1) {
          return 0;
        }
        local_30 = local_68;
        if (*(int *)local_68 == 0) goto LAB_10057633f;
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        iVar5 = *(int *)local_68;
        UNLOCK();
        uVar11 = 0;
      }
      else {
        uVar11 = 0x80021017;
        if (DAT_1011b55f8 < 4) {
          return 0x80021017;
        }
        QString::toUtf8();
        iVar5 = *(int *)(param_1[0x25b] + 0x30);
        if ((long)iVar5 == -1) {
          pcVar6 = "Invalid";
        }
        else if (iVar5 == -2) {
          pcVar6 = "Disabled";
        }
        else {
          pcVar6 = (&PTR_s_None_100bc6390)[iVar5];
        }
        FUN_1008e3970("Compact","vdisk",4,"[%p]%s: Compact is in progress, state [%s]",param_1,
                      local_40 + *(long *)(local_40 + 0x10),pcVar6);
        if (*(int *)local_40 == -1) {
          return 0x80021017;
        }
        local_30 = local_40;
        if (*(int *)local_40 == 0) goto LAB_10057633f;
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        iVar5 = *(int *)local_40;
        UNLOCK();
      }
    }
    else {
      QString::toUtf8();
      FUN_1008e3970("Compact","vdisk",0,"[%p]%s: There is transaction in progress",param_1,
                    local_38 + *(long *)(local_38 + 0x10));
      uVar11 = 0x80021017;
      if (*(int *)local_38 == -1) {
        return 0x80021017;
      }
      local_30 = local_38;
      if (*(int *)local_38 == 0) goto LAB_10057633f;
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      iVar5 = *(int *)local_38;
      UNLOCK();
    }
  }
  else {
    uVar11 = 0x80021017;
    if (DAT_1011b55f8 < 4) {
      return 0x80021017;
    }
    QString::toUtf8();
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s: There are another online operations in progress",
                  param_1,local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 == -1) {
      return 0x80021017;
    }
    if (*(int *)local_30 == 0) goto LAB_10057633f;
    LOCK();
    *(int *)local_30 = *(int *)local_30 + -1;
    iVar5 = *(int *)local_30;
    UNLOCK();
  }
joined_r0x000100575e62:
  if (iVar5 != 0) {
    return uVar11;
  }
LAB_10057633f:
  QArrayData::deallocate(local_30,1,8);
  return uVar11;
}

