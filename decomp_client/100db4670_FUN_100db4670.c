
undefined8 FUN_100db4670(long param_1,char param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  QArrayData *local_38;
  
  QMutex::lock();
  if (*(long *)(param_1 + 0x10) == 0) {
    plVar5 = (long *)FUN_100db2560(0xffffffff,*(undefined4 *)(param_1 + 0x30));
    *(long **)(param_1 + 0x10) = plVar5;
    if (plVar5 == (long *)0x0) {
      uVar6 = 0;
      FUN_100df99c0("","AbstractFile",0,"Error allocating file abstraction in handle pool");
      goto LAB_100db4800;
    }
    if ((param_2 == '\0') &&
       (iVar3 = (**(code **)(*plVar5 + 0x18))
                          (plVar5,param_1 + 0x18,*(undefined4 *)(param_1 + 0x20),
                           *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                           *(undefined4 *)(param_1 + 0x2c)), iVar3 == -1)) {
      QString::toUtf8();
      lVar2 = *(long *)(local_38 + 0x10);
      uVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))();
      FUN_100df99c0("","AbstractFile",0,
                    "[%p]OpenHandle: Error opening file %s with error %u in handle pool",param_1,
                    local_38 + lVar2,uVar4);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          UNLOCK();
          if (*(int *)local_38 != 0) goto LAB_100db47a1;
        }
        QArrayData::deallocate(local_38,1,8);
      }
LAB_100db47a1:
      FUN_100df99c0("","AbstractFile",0,
                    "[%p]OpenHandle: Access = 0x%X, Share = 0x%X, Disp = 0x%X, Add = 0x%X",param_1,
                    *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                    *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
      FUN_100db5180(param_1);
    }
    piVar1 = (int *)(*(long *)(param_1 + 0x50) + 0x14);
    *piVar1 = *piVar1 + 1;
    LOCK();
    DAT_1023119b4 = DAT_1023119b4 + 1;
    UNLOCK();
  }
  else {
    QMutex::lock();
    lVar2 = *(long *)(param_1 + 0x38);
    plVar5 = *(long **)(param_1 + 0x40);
    *(long **)(lVar2 + 8) = plVar5;
    *plVar5 = lVar2;
    *(long *)(param_1 + 0x38) = param_1 + 0x38;
    *(long *)(param_1 + 0x40) = param_1 + 0x38;
    QMutex::unlock();
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
LAB_100db4800:
  QMutex::unlock();
  return uVar6;
}

