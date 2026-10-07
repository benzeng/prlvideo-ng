
undefined4 FUN_1005eabb0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  uVar4 = 0x80021006;
  if ((*(long *)(param_1 + 0x68) == 0) || (*(long *)(*(long *)(param_1 + 0x68) + 0x10) == 0))
  goto LAB_1005ead23;
  plVar1 = (long *)(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x28);
  plVar6 = plVar1;
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
LAB_1005eac59:
    plVar6 = plVar1;
  }
  else {
    do {
      while (plVar5 = plVar2, iVar3 = FUN_1007ea6f0(plVar5 + 4,param_2), iVar3 < 0) {
        plVar2 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) goto LAB_1005eac40;
      }
      plVar6 = plVar5;
      plVar2 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_1005eac40:
    if ((plVar6 == plVar1) || (iVar3 = FUN_1007ea6f0(param_2,plVar6 + 4), iVar3 < 0))
    goto LAB_1005eac59;
  }
  if (plVar1 != plVar6) {
    uVar4 = FUN_1005d8320(param_1 + 0x68,plVar6 + 6,param_1 + 0x70);
    goto LAB_1005ead23;
  }
  FUN_1007d6a70(&local_48,param_2);
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"Error: can\'t find snapshot by uid \'%s\'",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005eacee;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1005eacee:
  uVar4 = 0x80023000;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ead23;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005ead23:
  QMutex::unlock();
  return uVar4;
}

