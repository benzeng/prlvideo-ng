
void FUN_1001f3180(long *param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  QString local_20;
  undefined1 local_12;
  
  if ((((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) &&
     (param_2 != 0)) {
    if (param_2 == 2) {
      FUN_10018c2b0();
      iVar1 = CVmConfiguration::getValidRc();
      *(uint *)(param_1 + 7) = (iVar1 == -0x7ffffbac) + 1;
      local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      QString::operator=((QString *)(param_1 + 8),&local_20);
      if (*(int *)local_20.field0_0x0 != -1) {
        if (*(int *)local_20.field0_0x0 != 0) {
          LOCK();
          *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
          local_12 = *(int *)local_20.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_12) goto LAB_1001f3226;
        }
        QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
      }
LAB_1001f3226:
      CAbstractTask::appendSubTask((int)param_1);
      (**(code **)(*param_1 + 0xb0))(param_1,0);
      return;
    }
    if (param_2 != 3) {
      if (param_2 == 1) {
        CAbstractTask::appendSubTask((int)param_1);
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
        uVar2 = 0;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
        uVar2 = 0x80000009;
      }
      goto LAB_1001f325c;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  uVar2 = 0x80000275;
LAB_1001f325c:
                    /* WARNING: Could not recover jumptable at 0x0001001f3265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2);
  return;
}

