
undefined8 * FUN_10061ac60(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  QArrayData *local_a8;
  undefined4 local_a0;
  undefined1 local_99;
  char local_98 [104];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  iVar3 = FUN_10061aab0(param_2);
  if ((((iVar3 == 0) || (iVar3 = FUN_10061aab0(param_2), iVar3 == -0x7ffeefa8)) ||
      (iVar3 = FUN_10061aab0(param_2), iVar3 == -0x7ffeefff)) ||
     (((iVar3 = FUN_10061aab0(param_2), iVar3 == -0x7ffeef8c ||
       (iVar3 = FUN_10061aab0(param_2), iVar3 == -0x7ffeef89)) ||
      (iVar3 = FUN_10061aab0(param_2), iVar3 == -0x7ffeef9b)))) {
    local_a0 = 100;
    lVar2 = *(long *)(param_2 + 0x28);
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    iVar3 = _PrlLic_GetUserName(lVar2,local_98,&local_a0);
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (-1 < iVar3) {
      _strlen(local_98);
      QString::fromUtf8_helper((char *)&local_a8,(int)local_98);
      QString::normalized(param_1,&local_a8,1,0);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_99 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_99) goto LAB_10061adc6;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
      goto LAB_10061adc6;
    }
    FUN_100df99c0("[LICENSE]","prl_client_app",0,
                  "Couldn\'t extract dispatcher license info (user name). Error code: %.8X",iVar3);
  }
  *param_1 = PTR_shared_null_1021e1288;
LAB_10061adc6:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

