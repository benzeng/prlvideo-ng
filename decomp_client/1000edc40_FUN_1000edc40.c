
void FUN_1000edc40(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  QArrayData *local_a0;
  QString local_98;
  undefined *local_90;
  undefined1 local_88 [32];
  QArrayData *local_68;
  QString local_60;
  undefined1 local_58 [39];
  undefined1 local_31;
  
  local_90 = PTR_shared_null_1021e15e8;
  iVar1 = FUN_100a68200(local_88,param_2,param_3,0x14);
  while (iVar1 == 0) {
    iVar1 = FUN_100a683a0(local_88);
    if (iVar1 == 0x200a) {
      local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      uVar4 = FUN_100a68370(local_88);
      uVar2 = FUN_100a68390(local_88);
      iVar1 = FUN_100a68200(local_58,uVar4,uVar2,0);
      while (iVar1 == 0) {
        iVar1 = FUN_100a683a0(local_58);
        if (iVar1 == 0x200b) {
          pcVar5 = (char *)FUN_100a68370(local_58);
          iVar1 = FUN_100a68390(local_58);
          if ((pcVar5 != (char *)0x0) && (iVar1 == -1)) {
            _strlen(pcVar5);
          }
          QString::fromUtf8_helper((char *)&local_68,(int)pcVar5);
          QString::normalized(&local_60,&local_68,1);
          QString::operator=(&local_98,&local_60);
          if (*(int *)local_60.field0_0x0 != -1) {
            if (*(int *)local_60.field0_0x0 != 0) {
              LOCK();
              *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
              local_31 = *(int *)local_60.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000edd8e;
            }
            QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
          }
LAB_1000edd8e:
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000ede08;
            }
            QArrayData::deallocate(local_68,2,8);
          }
        }
        else if (1 < DAT_10230ffd0) {
          uVar2 = FUN_100a683a0(local_58);
          uVar3 = FUN_100a68390(local_58);
          FUN_100df99c0("SGACMD","prl_client_app",2,"Unsupported data skipped, type=%u, size=%u",
                        uVar2,uVar3);
        }
LAB_1000ede08:
        iVar1 = FUN_100a682f0(local_58);
      }
      if (iVar1 == -7) {
        iVar1 = 5;
        if (*(int *)(local_98.field0_0x0 + 4) != 0) {
          if (1 < DAT_10230ffd0) {
            QString::toUtf8();
            FUN_100df99c0("SGACMD","prl_client_app",2,"AppPath removed: \"%s\"",
                          local_a0 + *(long *)(local_a0 + 0x10));
            if (*(int *)local_a0 != -1) {
              if (*(int *)local_a0 != 0) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + -1;
                local_31 = *(int *)local_a0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000edf20;
              }
              QArrayData::deallocate(local_a0,1,8);
            }
          }
LAB_1000edf20:
          FUN_1000341d0(&local_90,&local_98);
        }
      }
      else {
        iVar1 = 1;
        FUN_100df99c0("SGACMD","prl_client_app",0);
      }
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000edf99;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_1000edf99:
      if (iVar1 != 5) goto LAB_1000edfd6;
    }
    else if (1 < DAT_10230ffd0) {
      uVar2 = FUN_100a683a0(local_88);
      uVar3 = FUN_100a68390(local_88);
      FUN_100df99c0("SGACMD","prl_client_app",2,"Unsupported data skipped, type=%u, size=%u",uVar2,
                    uVar3);
    }
    iVar1 = FUN_100a682f0(local_88);
  }
  FUN_1000d9060(*(undefined8 *)(param_1 + 0x10),&local_90);
LAB_1000edfd6:
  FUN_100039a80(&local_90);
  return;
}

