
void FUN_100051220(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  char *pcVar6;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_100bef390;
  param_1[2] = PTR_shared_null_100ba2188;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  QString::toUtf8();
  lVar3 = _opendir_INODE64(local_40 + *(long *)(local_40 + 0x10));
  if (lVar3 == 0) {
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
  }
  else {
LAB_1000512a0:
    lVar4 = _readdir_INODE64(lVar3);
    if (lVar4 != 0) {
      pcVar6 = (char *)(lVar4 + 0x15);
      iVar2 = _strcmp(pcVar6,".");
      if ((iVar2 != 0) && (iVar2 = _strcmp(pcVar6,".."), iVar2 != 0)) {
        uVar1 = QDir::separator();
        local_50 = (QArrayData *)*param_2;
        if (1 < *(uint *)local_50 + 1) {
          LOCK();
          *(uint *)local_50 = *(uint *)local_50 + 1;
          local_31 = *(uint *)local_50 != 0;
          UNLOCK();
        }
        uVar5 = *(uint *)(local_50 + 4);
        if ((1 < *(uint *)local_50) || ((*(uint *)(local_50 + 8) & 0x7fffffff) < uVar5 + 2)) {
          QString::reallocData((uint)&local_50,SUB41(uVar5 + 2,0));
          uVar5 = *(uint *)(local_50 + 4);
        }
        *(uint *)(local_50 + 4) = uVar5 + 1;
        *(undefined2 *)(local_50 + (long)(int)uVar5 * 2 + *(long *)(local_50 + 0x10)) = uVar1;
        *(undefined2 *)
         (local_50 + (long)(int)*(uint *)(local_50 + 4) * 2 + *(long *)(local_50 + 0x10)) = 0;
        _strlen(pcVar6);
        QString::fromUtf8_helper((char *)&local_58,(int)pcVar6);
        local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
        if (1 < *(uint *)local_50 + 1) {
          LOCK();
          *(uint *)local_50 = *(uint *)local_50 + 1;
          local_31 = *(uint *)local_50 != 0;
          UNLOCK();
        }
        QString::append(&local_48);
        FUN_10000c490(param_1 + 2,&local_48);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000513d5;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
LAB_1000513d5:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100051405;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_100051405:
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000512a0;
          }
          QArrayData::deallocate(local_50,2,8);
        }
      }
      goto LAB_1000512a0;
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return;
}

