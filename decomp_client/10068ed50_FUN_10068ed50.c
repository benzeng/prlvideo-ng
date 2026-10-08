
undefined8
FUN_10068ed50(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  QArrayData *pQVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar1 = FUN_1006915d0();
  lVar2 = FUN_100691620(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    uVar1 = FUN_10068e430(lVar2,param_3,param_4,param_5);
    return uVar1;
  }
  FUN_1006946e0(&local_48,param_1);
  QString::toLocal8Bit();
  pQVar4 = local_40 + *(long *)(local_40 + 0x10);
  if (param_2 == (undefined8 *)0x0) {
    pcVar3 = "null";
  }
  else {
    (**(code **)*param_2)(param_2);
    pcVar3 = (char *)QMetaObject::className();
  }
  FUN_100df99c0("[ACTION_HELPERS]","prl_client_app",0,
                "(!)Error: couldn\'t get action %s for context %s",pQVar4,pcVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10068ee3a;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10068ee3a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10068ee6a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10068ee6a:
  FUN_100df99c0("[ACTION_HELPERS]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != a",
                "ActionManager/ActionHelpers.cpp",0xf0,"cloneAction");
  return 0;
}

