
void FUN_1004cf4e0(long param_1,QString *param_2)

{
  QString QVar1;
  undefined2 uVar2;
  QArrayData *pQVar3;
  long *plVar4;
  long lVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  QString::normalized(&local_38,param_2,0,0);
  local_40 = (QArrayData *)QString::fromAscii_helper("\\",1);
  local_48 = (QArrayData *)QString::fromAscii_helper("/",1);
  QString::replace(&local_38,&local_40,&local_48,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004cf572;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004cf572:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004cf5a2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004cf5a2:
  if ((1 < *(uint *)local_38.field0_0x0) || (*(long *)(local_38.field0_0x0 + 0x10) != 0x18)) {
    QString::reallocData((uint)&local_38,(bool)((char)*(uint *)(local_38.field0_0x0 + 4) + '\x01'));
  }
  lVar5 = (long)(int)*(uint *)(local_38.field0_0x0 + 4) * 2;
  if (lVar5 != 0) {
    pQVar3 = (QArrayData *)(local_38.field0_0x0 + *(long *)(local_38.field0_0x0 + 0x10));
    do {
      uVar2 = FUN_100541f50();
      *(undefined2 *)pQVar3 = uVar2;
      pQVar3 = pQVar3 + 2;
      lVar5 = lVar5 + -2;
    } while (lVar5 != 0);
  }
  plVar4 = (long *)0x0;
  if (*(long *)(param_1 + 0x80) != 0) {
    plVar4 = *(long **)(*(long *)(param_1 + 0x80) + 0x10);
  }
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_38);
  if (DAT_10111cc6c != 0) {
    FUN_1004f5980(&local_50,param_1 + 0x18,&local_38);
    QVar1.field0_0x0 = local_38.field0_0x0;
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
    local_50 = (QArrayData *)QVar1.field0_0x0;
    if (*(int *)QVar1.field0_0x0 != -1) {
      if (*(int *)QVar1.field0_0x0 != 0) {
        LOCK();
        *(int *)QVar1.field0_0x0 = *(int *)QVar1.field0_0x0 + -1;
        local_29 = *(int *)QVar1.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004cf66d;
      }
      QArrayData::deallocate((QArrayData *)QVar1.field0_0x0,2,8);
    }
  }
LAB_1004cf66d:
  QString::operator=(param_2,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

