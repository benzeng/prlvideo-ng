
void FUN_1000ec510(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  int *local_80;
  QString local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined1 local_60 [32];
  QString local_40;
  undefined1 local_31;
  
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_70 = PTR_shared_null_1021e15e8;
  local_80 = (int *)PTR_shared_null_1021e15e8;
  iVar1 = FUN_100a68200(local_60,param_2,param_3,0x14);
  while (iVar1 != -7) {
    if (iVar1 != 0) {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("SGACMD","prl_client_app",1,"Waring: bitbox parsing error %i",iVar1);
      }
      goto LAB_1000ec88f;
    }
    iVar1 = FUN_100a683a0(local_60);
    uVar2 = FUN_100a68390(local_60);
    pcVar3 = (char *)FUN_100a68370(local_60);
    if (iVar1 == 4) {
      if ((uVar2 == 0xffffffff) && (pcVar3 != (char *)0x0)) {
        _strlen(pcVar3);
      }
      QString::fromUtf8_helper((char *)&local_90,(int)pcVar3);
      QString::normalized(&local_88,&local_90,1,0);
      QString::operator=(&local_78,&local_88);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000ec6fe;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_1000ec6fe:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000ec734;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1000ec734:
      FUN_1000ee1e0(&local_80,&local_78);
      if (local_78.field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
        local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        QString::operator=(&local_78,&local_40);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000ec796;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
      }
LAB_1000ec796:
      FUN_100094f70(&local_70);
      local_68 = 0;
    }
    else if (iVar1 == 0x2028) {
      if ((uVar2 == 0xffffffff) && (pcVar3 != (char *)0x0)) {
        _strlen(pcVar3);
      }
      QString::fromUtf8_helper((char *)&local_a0,(int)pcVar3);
      QString::normalized(&local_98,&local_a0,1,0);
      FUN_1000341d0(&local_70,&local_98);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000ec630;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1000ec630:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000ec800;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
    }
    else if (iVar1 == 0x2029) {
      if (3 < uVar2) {
        local_68 = *(undefined4 *)pcVar3;
      }
    }
    else if (2 < DAT_10230ffd0) {
      FUN_100df99c0("SGACMD","prl_client_app",3,"Unsupported data skipped, type=%u, size=%u",iVar1,
                    uVar2);
    }
LAB_1000ec800:
    iVar1 = FUN_100a682f0(local_60);
  }
  FUN_1000cd650(*(undefined8 *)(param_1 + 0x10),&local_80);
LAB_1000ec88f:
  if (*local_80 != -1) {
    if (*local_80 != 0) {
      LOCK();
      *local_80 = *local_80 + -1;
      local_31 = *local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ec8b9;
    }
    FUN_1000ee5e0(&local_80,local_80);
  }
LAB_1000ec8b9:
  FUN_100039a80(&local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_78.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
  return;
}

