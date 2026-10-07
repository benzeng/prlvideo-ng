
int FUN_1000b29f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_41;
  undefined1 local_40 [16];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  FUN_1000b2920(local_40,param_1);
  FUN_1000b26c0(&local_50,param_1);
  QByteArray::QByteArray((QByteArray *)&local_58,"1jwwh1kjxhqw4yr83cwjehc8q4f",-1);
  iVar3 = FUN_100611180(param_2,param_3,local_40,&local_50,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_41 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_1000b2a8e;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1000b2a8e:
  if (iVar3 < 0) {
    QString::toUtf8();
    lVar2 = *(long *)(local_60 + 0x10);
    uVar4 = FUN_1007dd120(iVar3);
    FUN_1008e3970("","vm",0,"Unable to encrypt file %s by error %s",local_60 + lVar2,uVar4);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_41 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_41) goto LAB_1000b2b09;
      }
      QArrayData::deallocate(local_60,1,8);
    }
  }
LAB_1000b2b09:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_41 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_1000b2b39;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1000b2b39:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

