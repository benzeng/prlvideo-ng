
void FUN_10003a260(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  size_t sVar5;
  int *piVar6;
  QString local_448;
  undefined1 local_439;
  char local_438 [1032];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  FUN_10008fe00();
  *param_1 = &PTR_FUN_1021ed350;
  puVar2 = PTR_shared_null_1021e1288;
  param_1[8] = PTR_shared_null_1021e1288;
  param_1[10] = puVar2;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x59) = 0;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  param_1[0xe] = PTR_shared_null_1021e15e8;
  param_1[0x10] = puVar2;
  puVar3 = operator_new(8);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(PTR_CMacDragSource_10226a930,PTR_s_alloc_102268b58)
  ;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_initWithManager__102269988,param_1);
  *puVar3 = uVar4;
  param_1[9] = puVar3;
  ___bzero(local_438,0x400);
  sVar5 = _confstr(0x10001,local_438,0x400);
  if (sVar5 == 0) {
    if (0 < DAT_10230ffd0) {
      piVar6 = ___error();
      FUN_100df99c0("","prl_client_app",1,"Failed to get system temp dir with errno=%d",*piVar6);
    }
  }
  else {
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",3,"System apps temp path is %s",local_438);
    }
    _strlen(local_438);
    QString::fromUtf8_helper((char *)&local_448,(int)local_438);
    QString::operator=((QString *)(param_1 + 8),&local_448);
    if (*(int *)local_448.field0_0x0 != -1) {
      if (*(int *)local_448.field0_0x0 != 0) {
        LOCK();
        *(int *)local_448.field0_0x0 = *(int *)local_448.field0_0x0 + -1;
        local_439 = *(int *)local_448.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_10003a40a;
      }
      QArrayData::deallocate((QArrayData *)local_448.field0_0x0,2,8);
    }
  }
LAB_10003a40a:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

