
void FUN_10044b350(long param_1,QWidget *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar3 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x28));
  if (lVar3 != 0) {
    iVar1 = FUN_10044b4d0(*(undefined8 *)(param_1 + 0x10));
    uVar4 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x28));
    iVar2 = FUN_10015aae0(uVar4);
    WidgetUtils::Adjuster::adjustWidget(param_2,iVar1,iVar2);
  }
  QObject::objectName();
  local_38 = (QArrayData *)QString::fromAscii_helper("m_fakeControl",0xd);
  iVar1 = QString::indexOf(&local_30,&local_38,0,1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10044b400;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10044b400:
  if (iVar1 != -1) {
    QObject::installEventFilter((QObject *)param_2);
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

