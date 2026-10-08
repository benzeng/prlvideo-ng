
void FUN_100db4480(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  QMutex::lock();
  if ((int)plVar1[3] != 0 || *(int *)((long)plVar1 + 0x14) != 0) {
    FUN_100df99c0("","AbstractFile",0,"Disk id %u removing with not all handles cleaned up [%u, %u]"
                  ,(int)plVar1[2],*(int *)((long)plVar1 + 0x14),(int)plVar1[3]);
  }
  lVar2 = *plVar1;
  plVar3 = (long *)plVar1[1];
  *(long **)(lVar2 + 8) = plVar3;
  *plVar3 = lVar2;
  *plVar1 = 0x112233;
  plVar1[1] = (long)&DAT_00445566;
  DAT_1023119b0 = DAT_1023119b0 + -1;
  QMutex::unlock();
  QMutex::~QMutex((QMutex *)(plVar1 + 6));
  operator_delete(plVar1);
  *param_1 = 0;
  return;
}

