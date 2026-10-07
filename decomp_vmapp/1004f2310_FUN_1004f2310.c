
undefined8
FUN_1004f2310(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined8 param_5,char param_6)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  size_t sVar4;
  undefined4 extraout_var;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  QString local_a80;
  undefined8 local_a78;
  undefined8 local_a70;
  undefined1 local_a60 [520];
  QString local_858;
  QString local_850;
  char local_848 [1024];
  char local_448 [1024];
  char local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QString::toUtf8_helper(&local_850);
  _strcpy(local_448,(char *)(local_850.field0_0x0 + *(long *)(local_850.field0_0x0 + 0x10)));
  if (*(int *)local_850.field0_0x0 != -1) {
    if (*(int *)local_850.field0_0x0 != 0) {
      LOCK();
      *(int *)local_850.field0_0x0 = *(int *)local_850.field0_0x0 + -1;
      local_848[0] = *(int *)local_850.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_848[0]) goto LAB_1004f23a6;
    }
    QArrayData::deallocate((QArrayData *)local_850.field0_0x0,1,8);
  }
LAB_1004f23a6:
  QString::toUtf8_helper(&local_858);
  uVar6 = 0;
  if (param_6 != '\0') {
    uVar6 = 0x7e;
  }
  iVar1 = FUN_1004f1c20(local_448,
                        (QArrayData *)
                        (local_858.field0_0x0 + *(long *)(local_858.field0_0x0 + 0x10)),local_48,
                        uVar6);
  if (*(int *)local_858.field0_0x0 != -1) {
    if (*(int *)local_858.field0_0x0 != 0) {
      LOCK();
      *(int *)local_858.field0_0x0 = *(int *)local_858.field0_0x0 + -1;
      local_848[0] = *(int *)local_858.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_848[0]) goto LAB_1004f2418;
    }
    QArrayData::deallocate((QArrayData *)local_858.field0_0x0,1,8);
  }
LAB_1004f2418:
  if (iVar1 == -1) {
    uVar5 = 0;
    lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
    goto LAB_1004f256f;
  }
  ___bzero(&local_a78,0x220);
  local_a78 = 1;
  lVar7 = *param_3;
  local_a70 = param_4;
  _memcpy(local_a60,(void *)(*(long *)(lVar7 + 0x10) + lVar7),(long)*(int *)(lVar7 + 4) * 2);
  sVar3 = _write(iVar1,&local_a78,0x220);
  if ((int)sVar3 == 0x220) {
    local_48[1] = 0x52;
    sVar4 = _strlen(local_448);
    (local_448 + sVar4)[0] = '/';
    (local_448 + sVar4)[1] = '\0';
    _strcat(local_448,local_48);
    QString::toUtf8_helper(&local_a80);
    iVar2 = FUN_1004f0b70((QArrayData *)
                          (local_a80.field0_0x0 + *(long *)(local_a80.field0_0x0 + 0x10)),local_448)
    ;
    if (*(int *)local_a80.field0_0x0 != -1) {
      if (*(int *)local_a80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a80.field0_0x0 = *(int *)local_a80.field0_0x0 + -1;
        local_848[0] = *(int *)local_a80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_848[0]) goto LAB_1004f250a;
      }
      QArrayData::deallocate((QArrayData *)local_a80.field0_0x0,1,8);
    }
LAB_1004f250a:
    if (iVar2 != -1) {
      iVar1 = _close(iVar1);
      uVar5 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
      lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto LAB_1004f256f;
    }
  }
  iVar2 = _fcntl(iVar1,0x32,local_848);
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (iVar2 != -1) {
    _unlink(local_848);
  }
  _close(iVar1);
  uVar5 = 0;
LAB_1004f256f:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

