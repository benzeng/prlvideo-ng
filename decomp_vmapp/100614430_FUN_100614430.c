
int FUN_100614430(long *param_1,long *param_2,long *param_3,char param_4)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  QArrayData *pQVar5;
  long lVar6;
  QArrayData *local_98;
  QArrayData *local_90;
  undefined1 local_81;
  undefined1 local_80 [64];
  uint local_40;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar6;
  if (param_1 == (long *)0x0) {
    FUN_1008e3970("","crypt",0,"Encryption engine is NULL at call of block operation");
    iVar2 = -0x7ffffffd;
    goto LAB_1006146a2;
  }
  if (*(int *)(*param_2 + 4) == 0) {
    FUN_1008e3970("","crypt",0,"Incoming parameters are incorrect [%u]",0);
    iVar2 = -0x7ffffffd;
    goto LAB_1006146a2;
  }
  iVar2 = (**(code **)(*param_1 + 0x58))(param_1,local_80);
  if (iVar2 < 0) {
    FUN_1008e3970("","crypt",0,"Unable to determine block size (0x%x)",iVar2);
    goto LAB_1006146a2;
  }
  uVar4 = *(uint *)(*param_2 + 4) % local_40;
  if (uVar4 != 0) {
    QByteArray::QByteArray((QByteArray *)&local_90,local_40 - uVar4,'\0');
    QByteArray::append((QByteArray *)param_2);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_81 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_81) goto LAB_1006144f1;
      }
      QArrayData::deallocate(local_90,1,8);
    }
  }
LAB_1006144f1:
  local_98 = (QArrayData *)PTR_shared_null_100ba20d0;
  pQVar5 = (QArrayData *)0x0;
  if (*(int *)(*param_3 + 4) != 0) {
    FUN_100613fc0(param_3,&local_98,local_40);
    if ((1 < *(uint *)local_98) || (*(long *)(local_98 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_98,*(uint *)(local_98 + 4) + 1,*(uint *)(local_98 + 8) >> 0x1f)
      ;
    }
    pQVar5 = local_98 + *(long *)(local_98 + 0x10);
  }
  if (param_4 == '\0') {
    pcVar1 = *(code **)(*param_1 + 0x40);
    puVar3 = (uint *)*param_2;
    if ((1 < *puVar3) || (*(long *)(puVar3 + 4) != 0x18)) {
      QByteArray::reallocData(param_2,puVar3[1] + 1,puVar3[2] >> 0x1f);
      puVar3 = (uint *)*param_2;
    }
    iVar2 = (*pcVar1)(param_1,(long)puVar3 + *(long *)(puVar3 + 4),puVar3[1],pQVar5);
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x38);
    puVar3 = (uint *)*param_2;
    if ((1 < *puVar3) || (*(long *)(puVar3 + 4) != 0x18)) {
      QByteArray::reallocData(param_2,puVar3[1] + 1,puVar3[2] >> 0x1f);
      puVar3 = (uint *)*param_2;
    }
    iVar2 = (*pcVar1)(param_1,(long)puVar3 + *(long *)(puVar3 + 4),puVar3[1],pQVar5);
  }
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_81 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_81) goto LAB_1006146a2;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_1006146a2:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

