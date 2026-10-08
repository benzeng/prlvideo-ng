
undefined1 FUN_1000e8740(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  long lVar6;
  QString QVar7;
  QArrayData *local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  int local_64;
  QArrayData *local_60;
  undefined1 local_58 [39];
  undefined1 local_31;
  
  QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_60 = (QArrayData *)PTR_shared_null_1021e1288;
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar3 = FUN_100a67f70(local_58,0x428);
  if (iVar3 == 0) {
    QString::toUtf8();
    QByteArray::operator=((QByteArray *)&local_60,(QByteArray *)&local_80);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000e87d0;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_1000e87d0:
    iVar3 = FUN_100a68060(local_58,local_60 + *(long *)(local_60 + 0x10),
                          *(undefined4 *)(local_60 + 4),0x200b);
    if (iVar3 == 0) {
      lVar6 = param_2[1];
      if (*(int *)(lVar6 + 0xc) != *(int *)(lVar6 + 8)) {
        lVar6 = lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8;
        do {
          QString::toUtf8();
          QByteArray::operator=((QByteArray *)&local_60,(QByteArray *)&local_88);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000e8866;
            }
            QArrayData::deallocate(local_88,1,8);
          }
LAB_1000e8866:
          iVar3 = FUN_100a68060(local_58,local_60 + *(long *)(local_60 + 0x10),
                                *(undefined4 *)(local_60 + 4),0x2016);
          if (iVar3 != 0) goto LAB_1000e89a0;
          lVar6 = lVar6 + 8;
        } while (lVar6 != param_2[1] + 0x10 + (long)*(int *)(param_2[1] + 0xc) * 8);
      }
      iVar3 = FUN_100a68060(local_58,param_2 + 4,4,0x200f);
      if (iVar3 != 0) goto LAB_1000e89a0;
      if (*(int *)(param_2[3] + 4) != 0) {
        QString::toUtf8();
        QByteArray::operator=((QByteArray *)&local_60,(QByteArray *)&local_90);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000e8929;
          }
          QArrayData::deallocate(local_90,1,8);
        }
LAB_1000e8929:
        iVar3 = FUN_100a68060(local_58,local_60 + *(long *)(local_60 + 0x10),
                              *(undefined4 *)(local_60 + 4),0x201a);
        if (iVar3 != 0) goto LAB_1000e89a0;
      }
      if (*(int *)((long)param_2 + 0x14) != 0 || (int)param_2[2] != 0) {
        local_64 = (int)param_2[2];
        iVar3 = FUN_100a68060(local_58,&local_64,4,0x200c);
        if (iVar3 == 0) {
          local_64 = *(int *)((long)param_2 + 0x14);
          iVar3 = FUN_100a68060(local_58,&local_64,4,0x200d);
          if (iVar3 == 0) goto LAB_1000e8a54;
        }
        goto LAB_1000e89a0;
      }
LAB_1000e8a54:
      puVar4 = (undefined4 *)FUN_100a67f30(local_58);
      ___bzero(puVar4,0x428);
      if (*(int *)(*param_2 + 4) != 0) {
        QString::normalized(&local_98,param_2,1,0);
        QString::operator=(&local_70,&local_98);
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000e8ad7;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_1000e8ad7:
        uVar1 = (long)*(int *)(local_70.field0_0x0 + 4) * 2 + 2;
        if (uVar1 < 0x20b) {
          pvVar5 = (void *)QString::utf16();
          _memcpy(puVar4 + 5,pvVar5,uVar1);
        }
        else if (0 < DAT_10230ffd0) {
          QString::toUtf8();
          FUN_100df99c0("SGAGC","prl_client_app",1,"OpenDoc appPath=\"%s\" is too long (%u bytes)",
                        local_a0 + *(long *)(local_a0 + 0x10),uVar1 & 0xffffffff);
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000e8b8b;
            }
            QArrayData::deallocate(local_a0,1,8);
          }
        }
      }
LAB_1000e8b8b:
      lVar6 = param_2[1];
      iVar3 = *(int *)(lVar6 + 8);
      if ((*(int *)(lVar6 + 0xc) != iVar3) &&
         (*(int *)(*(long *)(lVar6 + 0x10 + (long)iVar3 * 8) + 4) != 0)) {
        QString::normalized(&local_a8,lVar6 + 0x10 + (long)iVar3 * 8,1,0);
        QString::operator=(&local_78,&local_a8);
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000e8c0a;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
        }
LAB_1000e8c0a:
        uVar1 = (long)*(int *)(local_78.field0_0x0 + 4) * 2 + 2;
        if (uVar1 < 0x20b) {
          pvVar5 = (void *)QString::utf16();
          _memcpy((void *)((long)puVar4 + 0x21e),pvVar5,uVar1);
        }
        else if (0 < DAT_10230ffd0) {
          QString::toUtf8();
          FUN_100df99c0("SGAGC","prl_client_app",1,"OpenDoc docPath=\"%s\" is too long (%u bytes)",
                        local_b0 + *(long *)(local_b0 + 0x10),uVar1 & 0xffffffff);
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000e8cc4;
            }
            QArrayData::deallocate(local_b0,1,8);
          }
        }
      }
LAB_1000e8cc4:
      *puVar4 = 0x6a;
      iVar3 = FUN_100a67f40(local_58);
      puVar4[4] = iVar3 + -0x14;
      puVar4[2] = 0;
      puVar4[1] = 2;
      uVar2 = FUN_1000e85b0(param_1,puVar4);
    }
    else {
LAB_1000e89a0:
      uVar2 = 0;
    }
    FUN_100a681d0(local_58);
    QVar7.field0_0x0 = local_78.field0_0x0;
  }
  else {
    uVar2 = 0;
  }
  if (*(int *)QVar7.field0_0x0 != -1) {
    if (*(int *)QVar7.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar7.field0_0x0 = *(int *)QVar7.field0_0x0 + -1;
      local_31 = *(int *)QVar7.field0_0x0 != 0;
      UNLOCK();
      QVar7.field0_0x0 = local_78.field0_0x0;
      if ((bool)local_31) goto LAB_1000e89df;
    }
    QArrayData::deallocate((QArrayData *)QVar7.field0_0x0,2,8);
  }
LAB_1000e89df:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000e8a0f;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1000e8a0f:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return uVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_60,1,8);
  }
  return uVar2;
}

