
void FUN_1000cd650(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  QArrayData *pQVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  undefined1 local_98 [8];
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  AnonymousUnion0 local_70;
  long *local_68;
  undefined *local_60;
  undefined1 local_58 [39];
  undefined1 local_31;
  
  local_60 = PTR_shared_null_1021e15e8;
  iVar5 = FUN_100a67f70(local_58,0x14);
  if (iVar5 == 0) {
    QMutex::lock();
    lVar12 = *param_2;
    iVar5 = *(int *)(lVar12 + 8);
    iVar7 = 0;
    if (iVar5 != *(int *)(lVar12 + 0xc)) {
      plVar13 = (long *)(lVar12 + 0x10 + (long)iVar5 * 8);
      lVar12 = (long)*(int *)(lVar12 + 0xc) * 8 + (long)iVar5 * -8;
      iVar7 = 0;
      do {
        FUN_1000f8c40(&local_68,param_1 + 0x34,*plVar13);
        if ((local_68 == (long *)0x0) || (lVar11 = local_68[2], lVar11 == 0)) {
          if ((*(byte *)(*plVar13 + 0x11) & 0x20) != 0) {
            QString::toUpper();
            FUN_1000341d0(param_1 + 0x49,&local_78);
            if (*(int *)local_78 != -1) {
              if (*(int *)local_78 != 0) {
                LOCK();
                *(int *)local_78 = *(int *)local_78 + -1;
                local_31 = *(int *)local_78 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000cd8b0;
              }
              QArrayData::deallocate(local_78,2,8);
            }
          }
LAB_1000cd8b0:
          if (2 < DAT_10230ffd0) {
            QString::toUtf8();
            FUN_100df99c0("SGAC","prl_client_app",3,"Helper not found for guestApp=\"%s\"",
                          local_80 + *(long *)(local_80 + 0x10));
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000cd930;
              }
              QArrayData::deallocate(local_80,1,8);
            }
          }
LAB_1000cd930:
          QString::normalized(&local_90,*plVar13,1,0);
          QString::toUtf8();
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000cd98c;
            }
            QArrayData::deallocate(local_90,2,8);
          }
LAB_1000cd98c:
          iVar6 = FUN_100a68060(local_58,local_88 + *(long *)(local_88 + 0x10),
                                *(undefined4 *)(local_88 + 4));
          if (iVar6 == 0) {
            iVar7 = iVar7 + 1;
            iVar5 = 0;
          }
          else {
            iVar5 = 0xd;
            if (0 < DAT_10230ffd0) {
              FUN_100df99c0("SGAC","prl_client_app",1,"bbPut() err %i",iVar6);
            }
          }
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000cda33;
            }
            QArrayData::deallocate(local_88,1,8);
          }
        }
        else {
          lVar2 = *plVar13;
          pQVar8 = (QArrayData *)QString::fromAscii_helper(",",1);
          QtPrivate::QStringList_join
                    ((QStringList *)&local_70.field0,(QChar *)(lVar2 + 8),
                     (int)*(undefined8 *)(pQVar8 + 0x10) + (int)pQVar8);
          cVar3 = operator==((QString *)(lVar11 + 0x28),(QString *)&local_70.field0);
          bVar4 = 1;
          if (cVar3 == '\0') {
            lVar11 = 0;
            if (local_68 != (long *)0x0) {
              lVar11 = local_68[2];
            }
            bVar4 = operator==((QString *)(lVar11 + 0x20),(QString *)&DAT_102310840);
            bVar4 = bVar4 ^ 1;
          }
          if (*(int *)local_70.field1 != -1) {
            if (*(int *)local_70.field1 != 0) {
              LOCK();
              *(int *)local_70.field1 = *(int *)local_70.field1 + -1;
              local_31 = *(int *)local_70.field1 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000cd80f;
            }
            QArrayData::deallocate((QArrayData *)local_70.field1,2,8);
          }
LAB_1000cd80f:
          if (*(int *)pQVar8 != -1) {
            if (*(int *)pQVar8 != 0) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000cd83e;
            }
            QArrayData::deallocate(pQVar8,2,8);
          }
LAB_1000cd83e:
          iVar5 = 6;
          if (bVar4 == 0) goto LAB_1000cd8b0;
        }
LAB_1000cda33:
        if (local_68 != (long *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
        if (iVar5 == 0xd) goto LAB_1000cdcc7;
        plVar13 = plVar13 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    FUN_1000f8fa0(local_98,param_1 + 0x34,&DAT_102310840);
    FUN_1000e5fc0(&local_60,local_98);
    FUN_100039a80(local_98);
    if (*(int *)(local_60 + 0xc) != *(int *)(local_60 + 8)) {
      puVar14 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
      do {
        if (2 < DAT_10230ffd0) {
          QString::toUtf8();
          FUN_100df99c0("SGAC","prl_client_app",3,"Helper for guestApp=\"%s\" has incorrect version"
                        ,local_a0 + *(long *)(local_a0 + 0x10));
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000cdb50;
            }
            QArrayData::deallocate(local_a0,1,8);
          }
        }
LAB_1000cdb50:
        QString::normalized(&local_b0,puVar14,1,0);
        QString::toUtf8();
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000cdba7;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_1000cdba7:
        iVar5 = FUN_100a68060(local_58,local_a8 + *(long *)(local_a8 + 0x10),
                              *(undefined4 *)(local_a8 + 4),4);
        if (iVar5 == 0) {
          iVar7 = iVar7 + 1;
          iVar6 = 0;
        }
        else {
          iVar6 = 0xd;
          if (0 < DAT_10230ffd0) {
            FUN_100df99c0("SGAC","prl_client_app",1,"bbPut() err %i",iVar5);
          }
        }
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000cdc49;
          }
          QArrayData::deallocate(local_a8,1,8);
        }
LAB_1000cdc49:
        if (iVar6 != 0) goto LAB_1000cdcc7;
        puVar14 = puVar14 + 8;
      } while (puVar14 != local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10);
    }
    puVar9 = (undefined4 *)FUN_100a67f30(local_58);
    puVar9[1] = 2;
    *puVar9 = 0x7c;
    puVar9[2] = 0;
    iVar5 = FUN_100a67f40(local_58);
    puVar9[4] = iVar5 + -0x14;
    puVar9[3] = (uint)(iVar7 != 0) << 4;
    uVar10 = (**(code **)(*param_1 + 0x68))();
    FUN_1000e85b0(uVar10,puVar9);
LAB_1000cdcc7:
    FUN_100a681d0(local_58);
    QMutex::unlock();
  }
  else if (0 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",1,"bbCompose() err %i",iVar5);
  }
  FUN_100039a80(&local_60);
  return;
}

