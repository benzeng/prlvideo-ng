
int FUN_100597910(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  int local_38;
  undefined1 local_31;
  
  local_38 = 0;
  if (2 < DAT_1011b55f8) {
    FUN_1007d6a70(&local_48,param_2);
    QString::toUtf8();
    FUN_1008e3970("","vdisk",3,"Invoked with state %s",local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005979b8;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1005979b8:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005979e8;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1005979e8:
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x28);
    plVar5 = (long *)(param_1 + 0x28);
    do {
      while (plVar6 = plVar4, iVar3 = FUN_1007ea6f0(plVar6 + 4,param_2), -1 < iVar3) {
        plVar5 = plVar6;
        plVar4 = (long *)*plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_100597a30;
      }
      plVar4 = (long *)plVar6[1];
    } while ((long *)plVar6[1] != (long *)0x0);
LAB_100597a30:
    if ((plVar5 != (long *)(param_1 + 0x28)) &&
       (iVar3 = FUN_1007ea6f0(param_2,plVar5 + 4), -1 < iVar3)) {
      FUN_100585d90(&local_60,param_1,plVar5 + 7);
      if (2 < DAT_1011b55f8) {
        FUN_1007d6a70(&local_70,param_2);
        QString::toUtf8();
        pQVar2 = local_68;
        lVar1 = *(long *)(local_68 + 0x10);
        QString::toUtf8();
        FUN_1008e3970("","vdisk",3,"open uid %s name %s",pQVar2 + lVar1,
                      local_78 + *(long *)(local_78 + 0x10));
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100597afb;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_100597afb:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100597b2b;
          }
          QArrayData::deallocate(local_68,1,8);
        }
LAB_100597b2b:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100597b5b;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
LAB_100597b5b:
      plVar4 = (long *)FUN_100684400(&local_60,param_3,(int)plVar5[6],&local_38,param_1);
      if (plVar4 == (long *)0x0) {
        FUN_1007d6a70(&local_88,param_2);
        QString::toUtf8();
        pQVar2 = local_80;
        lVar1 = *(long *)(local_80 + 0x10);
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Can\'t open uid %s name %s Error 0x%x",pQVar2 + lVar1,
                      local_90 + *(long *)(local_90 + 0x10),local_38);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100597d25;
          }
          QArrayData::deallocate(local_90,1,8);
        }
LAB_100597d25:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100597d55;
          }
          QArrayData::deallocate(local_80,1,8);
        }
LAB_100597d55:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100597d85;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_100597d85:
        iVar3 = local_38;
        if (((param_3 & 2) != 0) &&
           (plVar5 = (long *)FUN_100684400(&local_60,1,(int)plVar5[6],0,param_1), iVar3 = local_38,
           plVar5 != (long *)0x0)) {
          FUN_1008e3970("","vdisk",0,"But can open it as read-only");
          (**(code **)(*plVar5 + 0x28))(plVar5);
          (**(code **)(*plVar5 + 0x20))(plVar5);
          iVar3 = 0;
        }
      }
      else {
        local_38 = FUN_100586100(param_1,plVar4,1);
        iVar3 = 0;
        if (local_38 < 0) {
          FUN_1008e3970("","vdisk",0,"Error adding image to list at switch");
          (**(code **)(*plVar4 + 0x28))(plVar4);
          (**(code **)(*plVar4 + 0x20))(plVar4);
          iVar3 = local_38;
        }
      }
      if (*(int *)local_60 == -1) {
        return iVar3;
      }
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) {
          return iVar3;
        }
        local_31 = 0;
      }
      goto LAB_100597e53;
    }
  }
  FUN_1007d6a70(&local_58,param_2);
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,"Can\'t find uid in images %s",local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100597c4e;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100597c4e:
  iVar3 = -0x7ffe6fed;
  if (*(int *)local_58 == -1) {
    return -0x7ffe6fed;
  }
  local_60 = local_58;
  if (*(int *)local_58 != 0) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + -1;
    UNLOCK();
    if (*(int *)local_58 != 0) {
      return -0x7ffe6fed;
    }
    local_31 = 0;
  }
LAB_100597e53:
  QArrayData::deallocate(local_60,2,8);
  return iVar3;
}

