
int FUN_1005697c0(long *param_1,char param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  QFileInfo local_50 [8];
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  plVar4 = (long *)0x0;
  if (param_1[1] != 0) {
    plVar4 = *(long **)(param_1[1] + 0x10);
  }
  cVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_40);
  iVar3 = -0x7ffdd000;
  if (cVar2 != '\0') {
    QFileInfo::QFileInfo(local_50,&local_40);
    QFileInfo::absolutePath();
    QFileInfo::~QFileInfo(local_50);
    lVar1 = param_1[0x228];
    lVar5 = 0;
    if (param_2 != '\0') {
      lVar5 = param_1[0x236];
      param_1[0x236] = 0;
    }
    (**(code **)(*param_1 + 0x3f0))(param_1);
    iVar3 = (**(code **)(*param_1 + 0x2f0))(param_1,&local_48,(int)lVar1,param_3);
    if (iVar3 < 0) {
      FUN_1008e3970("","vdisk",0,"Error 0x%x at disk reopen",iVar3);
      if (param_2 != '\0') {
        param_1[0x236] = lVar5;
        (**(code **)(*param_1 + 0x3b0))(param_1);
      }
    }
    else {
      iVar3 = 0;
      if (param_2 != '\0') {
        (**(code **)(*param_1 + 0x3b0))(param_1);
        param_1[0x236] = lVar5;
      }
    }
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10056990f;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10056990f:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return iVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return iVar3;
}

