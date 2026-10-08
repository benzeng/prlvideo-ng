
void * FUN_100752570(long param_1,QString *param_2)

{
  QArrayData *pQVar1;
  char cVar2;
  long lVar3;
  void *pvVar4;
  QFileInfo local_78 [8];
  QDateTime local_70;
  void *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  if ((*(int *)(param_2->field0_0x0 + 4) == 0) ||
     (cVar2 = FUN_100753790(param_1,param_2), cVar2 == '\0')) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: path to VM config is invalid.");
    return (void *)0x0;
  }
  FUN_10074a700(&local_38,param_2);
  if (*(int *)(local_38.field0_0x0 + 4) == 0) {
    pvVar4 = (void *)0x0;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: VM name is empy.");
    goto LAB_100752858;
  }
  lVar3 = FUN_1007537f0(param_1,&local_38);
  if (lVar3 != 0) {
    FUN_100753ca0(&local_40,param_1,&local_38);
    QString::operator=(&local_38,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10075261a;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_10075261a:
  lVar3 = FUN_100753f20(param_1,param_2);
  if (lVar3 != 0) {
    pvVar4 = (void *)0x0;
    FUN_100df99c0("","prl_client_app",0,"(!)Warning: the virtual machine is already registered.");
    goto LAB_100752858;
  }
  local_48 = (QArrayData *)local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_29 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("/",1);
  QString::remove(&local_48,&local_50,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10075270c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10075270c:
  QString::toUtf8();
  pQVar1 = local_58;
  lVar3 = *(long *)(local_58 + 0x10);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Registering third party VM. VM path = %s, VM name = %s",
                pQVar1 + lVar3,local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10075278c;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10075278c:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007527bc;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1007527bc:
  pvVar4 = operator_new(0x20);
  QFileInfo::QFileInfo(local_78,param_2);
  QFileInfo::lastModified();
  FUN_1001e35f0(pvVar4,param_2,&local_38,&local_70);
  QDateTime::~QDateTime(&local_70);
  QFileInfo::~QFileInfo(local_78);
  local_68 = pvVar4;
  FUN_100754440(param_1 + 0x10,&local_68);
  FUN_1007541e0(param_1,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100752858;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100752858:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return pvVar4;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return pvVar4;
}

