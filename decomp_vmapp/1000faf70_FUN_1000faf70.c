
void FUN_1000faf70(long param_1,long *param_2)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  QArrayData *local_150;
  long *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  CVmEvent local_130 [224];
  QEvent local_50 [32];
  long *local_30;
  undefined1 local_21;
  
  local_30 = (long *)param_2[0xc];
  if (local_30 != (long *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  iVar5 = 0;
  if (*(long *)(local_30[2] + 0x80) != 0) {
    pcVar2 = *(char **)(*(long *)(local_30[2] + 0x80) + 0x10);
    iVar5 = 0;
    if (pcVar2 != (char *)0x0) {
      _strlen(pcVar2);
      iVar5 = (int)pcVar2;
    }
  }
  QString::fromUtf8_helper((char *)&local_140,iVar5);
  QString::normalized(&local_138,&local_140,1,0);
  CVmEvent::CVmEvent(local_130,(QTypedArrayData<unsigned_short> *)&local_138);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_21 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000fb03c;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1000fb03c:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_21 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000fb072;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1000fb072:
  uVar4 = CVmEventBase::getEventType();
  uVar6 = FUN_1007e7840(uVar4);
  FUN_1008e3970("","vm",0,"event %s, code = [%u]",uVar6,uVar4);
  iVar5 = CVmEventBase::getRespRequired();
  if (iVar5 != 1) goto LAB_1000fb183;
  FUN_100542de0(&local_148,param_1 + 0x60,&local_30);
  FUN_1008e3970("","vm",0,"send answer");
  uVar6 = 0;
  if (*param_2 != 0) {
    uVar6 = *(undefined8 *)(*param_2 + 0x10);
  }
  local_150 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_100796540(uVar6,0,&local_150,&local_148);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_21 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000fb15f;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1000fb15f:
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar1 = local_148 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_148 + 0x10))();
    }
  }
LAB_1000fb183:
  QEvent::~QEvent(local_50);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_130);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  return;
}

