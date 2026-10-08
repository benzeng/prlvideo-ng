
void * FUN_100d214a0(QDomDocument *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long *local_90;
  QDomDocument local_88 [8];
  long *local_80;
  QDomDocument local_78 [8];
  long *local_70;
  QDomDocument local_68 [8];
  long *local_60;
  QDomDocument local_58 [8];
  QArrayData *local_50;
  undefined4 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100d23870(&local_40,param_1);
  local_48 = 0xffffffff;
  FUN_100d2ad10(&local_48,&local_40);
  if ((short)local_48 == -1) {
    QString::toUtf8();
    FUN_100df99c0("","VBoxVmModel",0,"VBox: Failed to parse config version \'%s\'",
                  local_50 + *(long *)(local_50 + 0x10));
    pvVar3 = (void *)0x0;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        pvVar3 = (void *)0x0;
        if ((bool)local_31) goto LAB_100d21769;
      }
      pvVar3 = (void *)0x0;
      QArrayData::deallocate(local_50,1,8);
    }
  }
  else {
    if (0 < (short)local_48) {
      if (((local_48 & 0xffff) != 1) || (3 < local_48._2_2_)) {
        if (((local_48 & 0xffff) == 1) && (local_48._2_2_ < 8)) {
          pvVar3 = operator_new(0x28);
          QDomDocument::QDomDocument(local_68,param_1);
          local_70 = (long *)*param_3;
          if (local_70 != (long *)0x0) {
            LOCK();
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
            UNLOCK();
          }
          FUN_100d2dc40(pvVar3,local_68,&local_70);
          if (local_70 != (long *)0x0) {
            LOCK();
            plVar1 = local_70 + 1;
            lVar2 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)(*local_70 + 0x10))();
            }
          }
          QDomDocument::~QDomDocument(local_68);
        }
        else if (((short)local_48 == 1) && (local_48._2_2_ < 0xb)) {
          pvVar3 = operator_new(0x28);
          QDomDocument::QDomDocument(local_78,param_1);
          local_80 = (long *)*param_3;
          if (local_80 != (long *)0x0) {
            LOCK();
            *(int *)(local_80 + 1) = (int)local_80[1] + 1;
            UNLOCK();
          }
          FUN_100d2de30(pvVar3,local_78,&local_80);
          if (local_80 != (long *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            lVar2 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)(*local_80 + 0x10))();
            }
          }
          QDomDocument::~QDomDocument(local_78);
        }
        else {
          pvVar3 = operator_new(0x48);
          QDomDocument::QDomDocument(local_88,param_1);
          local_90 = (long *)*param_3;
          if (local_90 != (long *)0x0) {
            LOCK();
            *(int *)(local_90 + 1) = (int)local_90[1] + 1;
            UNLOCK();
          }
          FUN_100d2e480(pvVar3,local_88,param_2,&local_90);
          if (local_90 != (long *)0x0) {
            LOCK();
            plVar1 = local_90 + 1;
            lVar2 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)(*local_90 + 0x10))();
            }
          }
          QDomDocument::~QDomDocument(local_88);
        }
        goto LAB_100d21769;
      }
    }
    pvVar3 = operator_new(0x28);
    QDomDocument::QDomDocument(local_58,param_1);
    local_60 = (long *)*param_3;
    if (local_60 != (long *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    FUN_100d2d7d0(pvVar3,local_58,&local_60);
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    QDomDocument::~QDomDocument(local_58);
  }
LAB_100d21769:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return pvVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return pvVar3;
}

