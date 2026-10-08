
void FUN_100153200(long param_1,QObject *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *local_58;
  QObject *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 == (QObject *)0x0) {
    return;
  }
  cVar1 = FUN_10015aa00(param_2);
  if (cVar1 != '\0') {
    FUN_100801c40(param_1,param_2);
    FUN_10015aab0(&local_40,param_2);
    FUN_100801c90(param_1,&local_40);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100153288;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100153288:
  FUN_10015aab0(&local_48,param_2);
  iVar2 = FUN_10015a6e0(param_2);
  if (iVar2 == 2) {
    FUN_100df99c0("[SERVER_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                  "CServerManager.cpp",0xae,"removeServerInstantly");
    FUN_10015e050(param_2);
  }
  else {
    FUN_10015e110(param_2);
  }
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  local_58 = piVar3;
  local_50 = param_2;
  FUN_100157210(param_1 + 0x10,&local_58);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar3);
    }
  }
  QObject::deleteLater();
  if ((cVar1 != '\0') && (FUN_100801ce0(param_1,&local_48), param_3 != '\0')) {
    FUN_100153430();
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

