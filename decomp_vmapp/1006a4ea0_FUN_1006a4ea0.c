
int FUN_1006a4ea0(long *param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_38 [15];
  undefined1 local_29;
  
  iVar6 = (**(code **)(*param_1 + 0x38))();
  if (iVar6 < 0) {
    QString::toUtf8();
    FUN_1008e3970("","dimg",0,"Error: initializing for the \'%s\' VMDK image",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return iVar6;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return iVar6;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
    return iVar6;
  }
  plVar1 = param_1 + 0x301f;
  iVar6 = FUN_10069d720(param_1,plVar1,0x200);
  if (iVar6 < 0) {
    FUN_1008e3970("","dimg",0,"Error: read metadata failed");
    iVar6 = -0x7ffdefd7;
    goto LAB_1006a51a3;
  }
  if (((int)*plVar1 == 0x564d444b) && (*(int *)((long)param_1 + 0x180fc) == 1)) {
    if ((((*(char *)((long)param_1 + 0x18141) == '\n') &&
         (*(char *)((long)param_1 + 0x18142) == ' ')) &&
        (*(char *)((long)param_1 + 0x18143) == '\r')) &&
       (*(char *)((long)param_1 + 0x18144) == '\n')) {
      if (((*(int *)((long)param_1 + 0x18124) == 0) || (*(long *)((long)param_1 + 0x1810c) == 0)) ||
         ((*(long *)((long)param_1 + 0x18104) == 0 ||
          ((param_1[0x3025] == 0 && (param_1[0x3026] == 0)))))) {
        QString::toUtf8();
        FUN_1008e3970("","dimg",0,"Error: VMDK image %s has invalid header",
                      local_60 + *(long *)(local_60 + 0x10));
        iVar6 = -0x7ffdefcd;
        if (*(int *)local_60 == -1) goto LAB_1006a51a3;
        local_70 = local_60;
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          iVar3 = *(int *)local_60;
          UNLOCK();
          local_50 = local_60;
          goto joined_r0x0001006a50fd;
        }
      }
      else if (*(int *)((long)param_1 + 0x18124) == 0x200) {
        if (((*(byte *)((long)param_1 + 0x18102) & 1) == 0) &&
           (*(short *)((long)param_1 + 0x18145) == 0)) {
          iVar6 = (**(code **)(*param_1 + 0x50))(param_1);
          if (iVar6 < 0) {
            FUN_1008e3970("","dimg",0,
                          "Error: structured disk data memory allocation failed at open after init."
                         );
            iVar6 = -0x7ffdefe0;
            goto LAB_1006a51a3;
          }
          iVar6 = FUN_1006a55d0(param_1,local_38,&local_40);
          if (iVar6 < 0) {
            FUN_1008e3970("","dimg",0,"Error: can\'t get correct offsets");
            goto LAB_1006a51a3;
          }
          if ((param_3 & 2) == 0) {
LAB_1006a52f7:
            *(undefined1 *)(*(long *)(*param_1 + -0x18) + 0x48 + (long)param_1) = 1;
            (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x180))
                      ((long)param_1 + *(long *)(*param_1 + -0x18),local_40 << 9);
            lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
            lVar4 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18));
            pcVar5 = *(code **)(lVar4 + 0x188);
            uVar7 = (**(code **)(lVar4 + 0x160))(lVar2);
            (*pcVar5)(lVar2,uVar7);
            return 0;
          }
          *(undefined1 *)(param_1 + 0x3028) = 1;
          iVar6 = FUN_10069d810(param_1,plVar1,0x200);
          if (-1 < iVar6) goto LAB_1006a52f7;
          QString::toUtf8();
          FUN_1008e3970("","dimg",0,"Error: write to VMDK \'%s\' failed, err %x",
                        local_78 + *(long *)(local_78 + 0x10),iVar6);
          iVar6 = -0x7ffdefd9;
          if (*(int *)local_78 == -1) goto LAB_1006a51a3;
          local_70 = local_78;
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            iVar3 = *(int *)local_78;
            UNLOCK();
            goto joined_r0x0001006a50fd;
          }
        }
        else {
          QString::toUtf8();
          FUN_1008e3970("","dimg",0,"Error: VMDK image %s is compressed",
                        local_70 + *(long *)(local_70 + 0x10));
          iVar6 = -0x7ffdefcd;
          if (*(int *)local_70 == -1) goto LAB_1006a51a3;
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            iVar3 = *(int *)local_70;
            UNLOCK();
            goto joined_r0x0001006a50fd;
          }
        }
      }
      else {
        QString::toUtf8();
        FUN_1008e3970("","dimg",0,"Error: VMDK image %s has invalid header, wrong NumGTEsPerGT=%d",
                      local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)((long)param_1 + 0x18124)
                     );
        iVar6 = -0x7ffdefcd;
        if (*(int *)local_68 == -1) goto LAB_1006a51a3;
        local_70 = local_68;
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          iVar3 = *(int *)local_68;
          UNLOCK();
          local_50 = local_68;
          goto joined_r0x0001006a50fd;
        }
      }
    }
    else {
      QString::toUtf8();
      FUN_1008e3970("","dimg",0,"Error: VMDK image %s was corrupted",
                    local_58 + *(long *)(local_58 + 0x10));
      iVar6 = -0x7ffdefcd;
      if (*(int *)local_58 == -1) goto LAB_1006a51a3;
      local_70 = local_58;
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        iVar3 = *(int *)local_58;
        UNLOCK();
        local_50 = local_58;
        goto joined_r0x0001006a50fd;
      }
    }
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","dimg",0,"Error: VMDK image %s has invalid format",
                  local_50 + *(long *)(local_50 + 0x10));
    iVar6 = -0x7ffdefcd;
    if (*(int *)local_50 == -1) goto LAB_1006a51a3;
    local_70 = local_50;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      iVar3 = *(int *)local_50;
      UNLOCK();
joined_r0x0001006a50fd:
      iVar6 = -0x7ffdefcd;
      local_70 = local_50;
joined_r0x0001006a50fd:
      local_29 = iVar3 != 0;
      if ((bool)local_29) goto LAB_1006a51a3;
    }
  }
  QArrayData::deallocate(local_70,1,8);
LAB_1006a51a3:
  (**(code **)(*param_1 + 0x178))(param_1);
  return iVar6;
}

