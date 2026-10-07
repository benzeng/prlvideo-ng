
int FUN_100614f10(long *param_1,long *param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  undefined1 local_81;
  undefined1 local_80 [64];
  undefined4 local_40;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar4 = -0x7ffffffd;
  local_38 = lVar6;
  if (((param_2 == (long *)0x0) || (*(int *)(*param_1 + 4) < 0x300)) ||
     (iVar4 = (**(code **)(*param_2 + 0x58))(param_2,local_80), iVar4 < 0)) goto LAB_1006150eb;
  local_90 = (QArrayData *)PTR_shared_null_100ba20d0;
  QByteArray::QByteArray((QByteArray *)&local_98,&DAT_100b47be0,0x10);
  FUN_100613fc0(&local_98,&local_90,local_40);
  pcVar2 = *(code **)(*param_2 + 0x40);
  puVar5 = (uint *)*param_1;
  if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
    QByteArray::reallocData(param_1,puVar5[1] + 1,puVar5[2] >> 0x1f);
    puVar5 = (uint *)*param_1;
  }
  iVar4 = (*pcVar2)(param_2,(long)puVar5 + *(long *)(puVar5 + 4),puVar5[1],&DAT_100b47be0);
  if (iVar4 < 0) {
    FUN_1008e3970("","crypt",0,"Failed to decrypt with code 0x%x",iVar4);
    goto LAB_10061507f;
  }
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + *(long *)(lVar3 + 0x10));
  if (((long)iVar1 < 4) || (*(int *)(lVar3 + 4) + -0x30 < iVar1)) {
LAB_10061502b:
    iVar4 = -0x7ffbcfff;
    FUN_1008e3970("","crypt",0,"The key is wrong [%d]",iVar1);
    lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  else {
    lVar7 = *(long *)(lVar3 + 0x10) + (long)iVar1;
    iVar4 = _memcmp((void *)(lVar3 + lVar7),&DAT_100b47bd0,0x10);
    if (iVar4 != 0) goto LAB_10061502b;
    QByteArray::QByteArray((QByteArray *)&local_a0,(char *)(lVar3 + 0x10 + lVar7),0x10);
    lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
    QByteArray::QByteArray((QByteArray *)&local_a8,(char *)(lVar3 + 0x20 + lVar7),0x10);
    FUN_100613fc0(&local_a0,&local_90,local_40);
    pcVar2 = *(code **)(*param_2 + 0x48);
    if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_90,*(uint *)(local_90 + 4) + 1,*(uint *)(local_90 + 8) >> 0x1f)
      ;
    }
    iVar4 = (*pcVar2)(param_2,local_90 + *(long *)(local_90 + 0x10));
    if (-1 < iVar4) {
      FUN_100613fc0(&local_a8,&local_90,local_40);
      pcVar2 = *(code **)(*param_2 + 0x50);
      if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_90,*(uint *)(local_90 + 4) + 1,*(uint *)(local_90 + 8) >> 0x1f);
      }
      iVar4 = (*pcVar2)(param_2,local_90 + *(long *)(local_90 + 0x10));
    }
    QByteArray::fill((char)&local_a0,0x78);
    QByteArray::fill((char)param_1,0x78);
    QByteArray::fill((char)&local_a8,0x7a);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_81 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_81) goto LAB_10061526b;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_10061526b:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_81 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_81) goto LAB_10061507f;
      }
      QArrayData::deallocate(local_a0,1,8);
    }
  }
LAB_10061507f:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_81 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_81) goto LAB_1006150b5;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_1006150b5:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_81 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_81) goto LAB_1006150eb;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_1006150eb:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

