
void FUN_1002daad0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  undefined8 uVar2;
  long *plVar3;
  QString *this;
  long lVar4;
  QArrayData *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  QString local_28;
  undefined1 local_19;
  
  FUN_1002dbac0();
  *param_1 = &PTR_FUN_100bb4300;
  local_2c = 0x409;
  uVar2 = FUN_1002e4d40(param_1 + 6,&local_2c);
  local_30 = 2;
  plVar3 = (long *)FUN_1002e4ea0(uVar2,&local_30);
  if (*(int *)(*plVar3 + 4) == 0) {
    local_34 = 0x409;
    uVar2 = FUN_1002e4d40(param_1 + 6,&local_34);
    local_38 = 2;
    this = (QString *)FUN_1002e4ea0(uVar2,&local_38);
    QString::fromUtf8_helper((char *)&local_28,0xa1be99);
    QString::operator=(this,&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_19 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1002dabaa;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
LAB_1002dabaa:
  lVar4 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar4 * 4 + 0x3a) = 0x100;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x1f);
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  if (DAT_1011c568c < 1) {
    return;
  }
  pQVar1 = *(QArrayData **)(param_1[1] + 0x20);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_19 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toUtf8();
  FUN_1008e3970("","USB",0,"[HUB] Constructed <%s> (%d ports)",local_40 + *(long *)(local_40 + 0x10)
                ,DAT_101116bca);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002dacb4;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1002dacb4:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

