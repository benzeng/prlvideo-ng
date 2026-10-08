
void FUN_100107c80(long param_1,long *param_2,uint param_3)

{
  int *piVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  QArrayData *pQVar6;
  int *piVar7;
  int iVar8;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QDataStream local_58 [32];
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_3 < 0x10) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    piVar7 = (int *)0x0;
    if (*param_2 != 0) {
      piVar7 = *(int **)(*param_2 + 0x10);
    }
    iVar8 = 0x10;
    pcVar5 = "Warning: bad size of SHAShellExt request: ptr=%p, size=%u (<%u)";
LAB_100107d8b:
    FUN_100df99c0("GSHEXT","prl_client_app",1,pcVar5,piVar7,param_3,iVar8);
    return;
  }
  piVar1 = *(int **)(*param_2 + 0x10);
  iVar8 = *piVar1;
  if (iVar8 != 1) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    piVar7 = (int *)0x0;
    if (*param_2 != 0) {
      piVar7 = piVar1;
    }
    pcVar5 = 
    "Warning: unsupported SHAShellExt request: ptr=%p, size=%u, ver={%u, %u} (must be {%u, [%u]})";
    goto LAB_100107d8b;
  }
  if (piVar1[2] != 2) {
    return;
  }
  if (param_3 < 0x50) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    FUN_100df99c0("GSHEXT","prl_client_app",1,"Warning: VIRTEX_REQ_FCTL request bad size: %u (<%u)",
                  param_3,0x50);
    return;
  }
  QByteArray::fromRawData((char *)&local_38,(int)piVar1);
  QDataStream::QDataStream(local_58,(QByteArray *)&local_38);
  QDataStream::skipRawData((int)local_58);
  puVar2 = PTR_shared_null_1021e1288;
  if (piVar1[4] == 3) {
    local_60 = (QArrayData *)PTR_shared_null_1021e1288;
    operator>>(local_58,(QByteArray *)&local_60);
    if (*(int *)(local_60 + 4) == 4) {
      uVar3 = FUN_100152280();
      lVar4 = FUN_1001548f0(uVar3,param_1 + 0x20);
      if (lVar4 != 0) {
        if (local_60[*(long *)(local_60 + 0x10)] != (QArrayData)0xff) {
          FUN_100122530(lVar4,5,local_60[*(long *)(local_60 + 0x10)],
                        local_60[*(long *)(local_60 + 0x10) + 1]);
        }
      }
    }
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100108030;
      }
      QArrayData::deallocate(local_60,1,8);
    }
    goto LAB_100108030;
  }
  local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  operator>>(local_58,(QByteArray *)&local_68);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  pQVar6 = local_68 + *(long *)(local_68 + 0x10);
  if (pQVar6 != (QArrayData *)0x0) {
    _strlen((char *)pQVar6);
  }
  QString::fromUtf8_helper((char *)&local_80,(int)pQVar6);
  QString::normalized(&local_78,&local_80,1,0);
  QString::operator=(&local_70,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100107f11;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100107f11:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100107f41;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100107f41:
  QDir::toNativeSeparators(&local_88);
  QString::operator=(&local_70,&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100107f8b;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100107f8b:
  if (*(int *)(local_70.field0_0x0 + 4) == 0) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("GSHEXT","prl_client_app",1,"Warning: empty path in FCTL request");
    }
  }
  else {
    FUN_100108220();
  }
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100108000;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100108000:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100108030;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_100108030:
  QDataStream::~QDataStream(local_58);
  if (*(int *)local_38 == -1) {
    return;
  }
  if (*(int *)local_38 != 0) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + -1;
    UNLOCK();
    if (*(int *)local_38 != 0) {
      return;
    }
    local_29 = 0;
  }
  QArrayData::deallocate(local_38,1,8);
  return;
}

