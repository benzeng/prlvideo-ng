
int FUN_100573ed0(long *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  char **ppcVar5;
  ulong uVar6;
  QArrayData *local_90;
  QArrayData *local_88;
  undefined1 local_7a;
  undefined1 local_79;
  char *local_78;
  char *local_70 [5];
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_88 = (QArrayData *)PTR_shared_null_100ba20d0;
  pcVar4 = "DupBlocksCnt";
  local_78 = "DupBlocksCnt";
  ppcVar5 = local_70 + 1;
  local_70[1] = "CorruptBlocksCnt";
  local_70[3] = "UnrefBlocksCnt";
  local_48 = "OutOfDiskBlocksCnt";
  uVar6 = 0;
  local_70[0] = param_2;
  local_70[2] = (char *)param_3;
  local_70[4] = (char *)param_4;
  local_40 = param_5;
  do {
    pcVar1 = *(code **)(*param_1 + 0x140);
    iVar2 = -1;
    if (pcVar4 != (char *)0x0) {
      sVar3 = _strlen(pcVar4);
      iVar2 = (int)sVar3;
    }
    local_90 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar2);
    iVar2 = (*pcVar1)(param_1,&local_90,&local_88);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_79 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_79) goto LAB_100573fd0;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100573fd0:
    if (iVar2 < 0) {
      if (iVar2 != -0x7ffdd000) break;
      pcVar4 = ppcVar5[-1];
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
    }
    else {
      iVar2 = QString::toUInt((bool *)&local_88,(int)&local_7a);
      *(int *)ppcVar5[-1] = *(int *)ppcVar5[-1] + iVar2;
    }
    uVar6 = uVar6 + 1;
    iVar2 = 0;
    if (3 < uVar6) break;
    pcVar4 = *ppcVar5;
    ppcVar5 = ppcVar5 + 2;
  } while( true );
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      UNLOCK();
      local_78 = (char *)CONCAT71(local_78._1_7_,*(int *)local_88 != 0);
      if (*(int *)local_88 != 0) goto LAB_100574042;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100574042:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

