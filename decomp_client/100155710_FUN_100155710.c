
void FUN_100155710(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  QArrayData *local_30;
  undefined1 local_22;
  
  lVar3 = QObject::sender();
  if ((lVar3 == 0) ||
     (lVar3 = ___dynamic_cast(lVar3,PTR_typeinfo_1021e1720,&PTR_vtable_1021fcf70,0), lVar3 == 0)) {
    FUN_100df99c0("[SERVER_MNG]","prl_client_app",0,"(!)Error: can\'t get server instance");
    return;
  }
  iVar2 = FUN_10015a6e0(lVar3);
  if (iVar2 != 0) {
    iVar2 = FUN_10015a6e0();
    if (iVar2 != 1) {
      return;
    }
    cVar1 = FUN_10015aa00(lVar3);
    if (cVar1 == '\0') {
      FUN_100153200(param_1,lVar3,1);
    }
    iVar2 = FUN_100154d50(param_1);
    FUN_100801d30(param_1,iVar2,iVar2 + 1);
    return;
  }
  cVar1 = FUN_10015aa00(lVar3);
  if (cVar1 != '\0') goto LAB_10015583a;
  FUN_10015aa10(lVar3,1);
  FUN_10015aab0(&local_30,lVar3);
  FUN_100801bf0(param_1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10015582a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10015582a:
  FUN_100801ba0(param_1,lVar3);
  FUN_100153430();
LAB_10015583a:
  iVar2 = FUN_100154d50(param_1);
  FUN_100801d30(param_1,iVar2,iVar2 + -1);
  return;
}

