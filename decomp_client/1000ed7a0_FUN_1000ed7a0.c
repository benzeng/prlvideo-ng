
void FUN_1000ed7a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  undefined1 local_58 [39];
  undefined1 local_31;
  
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar1 = FUN_100a68200(local_58,param_2,param_3,0x24);
  while (iVar1 != -7) {
    if (iVar1 != 0) {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("SGACMD","prl_client_app",1,"Bitbox parsing error %i",iVar1);
      }
      goto LAB_1000eda89;
    }
    iVar1 = FUN_100a683a0(local_58);
    if (iVar1 == 0x201a) {
      pcVar4 = (char *)FUN_100a68370(local_58);
      iVar1 = FUN_100a68390(local_58);
      if ((pcVar4 != (char *)0x0) && (iVar1 == -1)) {
        _strlen(pcVar4);
      }
      QString::fromUtf8_helper((char *)&local_78,(int)pcVar4);
      QString::normalized(&local_70,&local_78,1,0);
      QString::operator=(&local_60,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000ed896;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_1000ed896:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000ed9f0;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
    else if (iVar1 == 0x201e) {
      pcVar4 = (char *)FUN_100a68370(local_58);
      iVar1 = FUN_100a68390(local_58);
      if ((pcVar4 != (char *)0x0) && (iVar1 == -1)) {
        _strlen(pcVar4);
      }
      QString::fromUtf8_helper((char *)&local_88,(int)pcVar4);
      QString::normalized(&local_80,&local_88,1,0);
      QString::operator=(&local_68,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000ed96d;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_1000ed96d:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000ed9f0;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
    else if (1 < DAT_10230ffd0) {
      uVar2 = FUN_100a683a0(local_58);
      uVar3 = FUN_100a68390(local_58);
      FUN_100df99c0("SGACMD","prl_client_app",2,"Unsupported data skipped, type=%u, size=%u",uVar2,
                    uVar3);
    }
LAB_1000ed9f0:
    iVar1 = FUN_100a682f0(local_58);
  }
  FUN_1000cfe10(*(undefined8 *)(param_1 + 0x10),&local_60,&local_68);
LAB_1000eda89:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000edab9;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1000edab9:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_60.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
  return;
}

