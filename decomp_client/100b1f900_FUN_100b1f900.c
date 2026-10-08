
void FUN_100b1f900(long param_1)

{
  int *piVar1;
  uid_t uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  local_58 = *(int **)(param_1 + 0x68);
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar3 = local_58[2];
      if (iVar3 != local_58[3]) {
        lVar4 = *(long *)(param_1 + 0x68);
        puVar5 = (undefined8 *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8);
        piVar6 = local_58 + (long)iVar3 * 2 + 4;
        lVar4 = (long)local_58[3] * 8 + (long)iVar3 * -8;
        do {
          piVar1 = (int *)*puVar5;
          *(int **)piVar6 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
  }
  piVar6 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_50 = piVar6;
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      local_50 = piVar6;
      uVar2 = _geteuid();
      if (uVar2 == 0) {
        QString::toUtf8();
        FUN_100df99c0("","dimg",0,"Re-mount \"%s\" directly",local_60 + *(long *)(local_60 + 0x10));
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b1fb2a;
          }
          QArrayData::deallocate(local_60,1,8);
        }
LAB_100b1fb2a:
        iVar3 = FUN_100dd6480(piVar6);
        if (iVar3 < 0) {
          QString::toUtf8();
          FUN_100df99c0("","dimg",0,"Re-mount \"%s\" failed (direct)",
                        local_68 + *(long *)(local_68 + 0x10));
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b1fc70;
            }
            QArrayData::deallocate(local_68,1,8);
          }
        }
        else {
          QString::toUtf8();
          FUN_100df99c0("","dimg",0,"Re-mount \"%s\" succeed (direct)",
                        local_70 + *(long *)(local_70 + 0x10));
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b1fc70;
            }
            QArrayData::deallocate(local_70,1,8);
          }
        }
      }
      else {
        QString::toUtf8();
        FUN_100df99c0("","dimg",0,"Re-mount \"%s\" via dispatcher",
                      local_78 + *(long *)(local_78 + 0x10));
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b1fa53;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_100b1fa53:
        iVar3 = FUN_100b351b0(piVar6);
        if (iVar3 < 0) {
          QString::toUtf8();
          FUN_100df99c0("","dimg",0,"Re-mount \"%s\" failed (dispatcher): 0x%x",
                        local_80 + *(long *)(local_80 + 0x10),iVar3);
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b1fc70;
            }
            QArrayData::deallocate(local_80,1,8);
          }
        }
        else {
          QString::toUtf8();
          FUN_100df99c0("","dimg",0,"Re-mount \"%s\" succeed (dispatcher)",
                        local_88 + *(long *)(local_88 + 0x10));
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b1fc70;
            }
            QArrayData::deallocate(local_88,1,8);
          }
        }
      }
LAB_100b1fc70:
      piVar6 = local_50 + 2;
      local_50 = piVar6;
    } while (piVar6 != local_48);
  }
  local_40 = 1;
  FUN_100039a80(&local_58);
  FUN_100094f70((long *)(param_1 + 0x68));
  return;
}

