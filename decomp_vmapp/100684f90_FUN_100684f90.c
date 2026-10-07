
undefined8 FUN_100684f90(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  
  uVar2 = 0;
  if ((*(byte *)(param_1 + 3) & 2) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x150))(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100684fca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)param_1[1] + 0x68))();
      return uVar2;
    }
    QString::toUtf8();
    FUN_1008e3970("","dimg",0,"Disk is not opened when trying to flush cache for %s. [%p]",
                  local_28 + *(long *)(local_28 + 0x10),param_1[1]);
    uVar2 = 0x80021021;
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return 0x80021021;
        }
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
  return uVar2;
}

