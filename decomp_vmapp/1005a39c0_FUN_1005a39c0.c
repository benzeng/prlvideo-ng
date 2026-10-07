
int FUN_1005a39c0(undefined8 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  int local_b8;
  undefined1 local_b1;
  undefined1 local_b0 [32];
  long local_90;
  undefined1 local_88 [8];
  undefined1 *local_80;
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_b8 = -0x7ffffff7;
  local_38 = lVar5;
  plVar3 = (long *)FUN_10059ac80(param_1,8,&local_b8);
  iVar6 = local_b8;
  if (local_b8 < 0) goto LAB_1005a3d88;
  cVar2 = (**(code **)(*plVar3 + 0x1d8))(plVar3);
  if (cVar2 != '\0') {
    local_b8 = FUN_1005a2800(plVar3);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    iVar6 = local_b8;
    goto LAB_1005a3d88;
  }
  FUN_100098d30(local_b0);
  local_b8 = (**(code **)(*plVar3 + 0x90))(plVar3,local_b0);
  if (local_b8 < 0) {
    FUN_1008e3970("","vdisk",0,"Error getting disk parameters at disk check. Error 0x%x",local_b8);
  }
  else {
    for (puVar1 = local_80; puVar1 != local_88; puVar1 = *(undefined1 **)(puVar1 + 8)) {
      cVar2 = FUN_100768c70(puVar1 + 0x28);
      if (cVar2 == '\0') {
        local_d0 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
        QString::arg(&local_c8,&local_d0,param_1,0,0x20);
        QString::arg(&local_c0,&local_c8,puVar1 + 0x28,0,0x20);
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_b1 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_b1) goto LAB_1005a3b50;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
LAB_1005a3b50:
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_b1 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_b1) goto LAB_1005a3b8c;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_1005a3b8c:
        uVar4 = FUN_100769470(&local_c0);
        iVar6 = 0;
        if (uVar4 < (ulong)(*(long *)(puVar1 + 0x20) * local_90)) {
          QString::toUtf8();
          if ((1 < *(uint *)local_d8) || (*(long *)(local_d8 + 0x10) != 0x18)) {
            QByteArray::reallocData
                      (&local_d8,*(uint *)(local_d8 + 4) + 1,*(uint *)(local_d8 + 8) >> 0x1f);
          }
          FUN_1008e3970("","vdisk",0,
                        "File %s is placed on FS with maximum file size %llu with possible size %llu"
                        ,local_d8 + *(long *)(local_d8 + 0x10),uVar4,
                        *(long *)(puVar1 + 0x20) * local_90);
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              local_b1 = *(int *)local_d8 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_1005a3c6a;
            }
            QArrayData::deallocate(local_d8,1,8);
          }
LAB_1005a3c6a:
          local_b8 = -0x7ffdefa8;
          iVar6 = 5;
        }
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_b1 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_b1) goto LAB_1005a3cbd;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_1005a3cbd:
        if (iVar6 != 0) break;
      }
    }
  }
  (**(code **)(*plVar3 + 0x10))();
  iVar6 = local_b8;
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_b1 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_1005a3d49;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005a3d49:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_b1 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_1005a3d7f;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1005a3d7f:
  FUN_100098f20(local_88);
LAB_1005a3d88:
  if (lVar5 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

