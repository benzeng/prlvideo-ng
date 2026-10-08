
void FUN_1002204f0(long *param_1,undefined8 param_2,int param_3,bool *param_4)

{
  int iVar1;
  uint uVar2;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_3 == 1) {
    iVar1 = CAbstractTask::getCurrentSubTask();
    if (iVar1 == 0xb) {
      CAbstractTask::removeSubTask((int)param_1);
    }
    local_28 = (QArrayData *)QString::fromAscii_helper("Hardware.Video.VideoMemorySize",0x1e);
    uVar2 = QVariant::toUInt(param_4);
    QVariant::QVariant(&local_38,uVar2);
    FUN_10008d1b0(param_1 + 0xc,&local_28,&local_38);
    QVariant::~QVariant(&local_38);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100220598;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
LAB_100220598:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

