
int FUN_100573a70(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  char *pcVar5;
  char **ppcVar6;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_79;
  char *local_78;
  char *local_70 [5];
  char *local_48;
  undefined4 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_98 = (QArrayData *)PTR_shared_null_100ba20d0;
  pcVar5 = "DupBlocksCnt";
  local_78 = "DupBlocksCnt";
  local_70[0] = (char *)&local_80;
  ppcVar6 = local_70 + 1;
  local_70[1] = "CorruptBlocksCnt";
  local_70[2] = (char *)&local_84;
  local_70[3] = "UnrefBlocksCnt";
  local_70[4] = (char *)&local_88;
  local_48 = "OutOfDiskBlocksCnt";
  local_40 = &local_8c;
  uVar4 = 0;
  local_8c = param_5;
  local_88 = param_4;
  local_84 = param_3;
  local_80 = param_2;
  do {
    pcVar1 = *(code **)(*param_1 + 0x140);
    iVar2 = -1;
    if (pcVar5 != (char *)0x0) {
      sVar3 = _strlen(pcVar5);
      iVar2 = (int)sVar3;
    }
    local_a0 = (QArrayData *)QString::fromAscii_helper(pcVar5,iVar2);
    iVar2 = (*pcVar1)(param_1,&local_a0,&local_98);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_79 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_79) goto LAB_100573b9c;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100573b9c:
    if (iVar2 < 0) {
      if (iVar2 != -0x7ffdd000) break;
    }
    else {
      iVar2 = QString::toUInt((bool *)&local_98,(int)&local_8d);
      *(int *)ppcVar6[-1] = *(int *)ppcVar6[-1] + iVar2;
    }
    pcVar1 = *(code **)(*param_1 + 0x138);
    iVar2 = -1;
    if (pcVar5 != (char *)0x0) {
      sVar3 = _strlen(pcVar5);
      iVar2 = (int)sVar3;
    }
    local_a8 = (QArrayData *)QString::fromAscii_helper(pcVar5,iVar2);
    local_b8 = (QArrayData *)QString::fromAscii_helper("%1",2);
    QString::arg(&local_b0,&local_b8,*(undefined4 *)ppcVar6[-1],0,10,0x20);
    iVar2 = (*pcVar1)(param_1,&local_a8,&local_b0);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_79 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_79) goto LAB_100573ca1;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100573ca1:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_79 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_79) goto LAB_100573cd7;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100573cd7:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_79 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_79) goto LAB_100573d0d;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_100573d0d:
    if (iVar2 < 0) break;
    uVar4 = uVar4 + 1;
    iVar2 = 0;
    if (3 < uVar4) break;
    pcVar5 = *ppcVar6;
    ppcVar6 = ppcVar6 + 2;
  } while( true );
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      local_78 = (char *)CONCAT71(local_78._1_7_,*(int *)local_98 != 0);
      if (*(int *)local_98 != 0) goto LAB_100573d58;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100573d58:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

