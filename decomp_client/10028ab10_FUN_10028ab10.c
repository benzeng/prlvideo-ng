
undefined8 FUN_10028ab10(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  QObject *pQVar3;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_40 = 0x80000009;
  local_20 = lVar1;
  iVar2 = _PrlJob_GetRetCode(param_1,&local_40);
  if (iVar2 < 0) {
    FUN_100df99c0("","prl_client_app",0,"Error! Can\'t get job ret code!");
  }
  pQVar3 = (QObject *)0x0;
  if (param_2 != 0) {
    pQVar3 = (QObject *)___dynamic_cast(param_2,PTR_typeinfo_1021e1720,&DAT_1021ef600,0);
  }
  local_3c = local_40;
  local_38 = (void *)0x0;
  local_30 = &local_3c;
  QMetaObject::activate(pQVar3,(QMetaObject *)&DAT_1021ef560,0,&local_38);
  if (lVar1 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

