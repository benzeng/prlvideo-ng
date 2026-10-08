
ulong FUN_100a66f00(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  CTaskGenericId *pCVar4;
  long lVar5;
  ulong uVar6;
  CTaskGenericId local_38 [24];
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar6 = 0;
  }
  else if (*(char *)(param_1 + 0x39) == '\0') {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar3 = FUN_100319390(uVar3);
    iVar2 = FUN_10018a9d0(uVar3);
    if (iVar2 == 0x30000004) {
      cVar1 = FUN_10018ffc0(uVar3);
      if (cVar1 == '\0') {
        pCVar4 = (CTaskGenericId *)CTaskManager::instance();
        FUN_100033dd0(local_38,param_1 + 0x30);
        CTaskManager::getTaskById(pCVar4);
        CTaskGenericId::~CTaskGenericId(local_38);
        lVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102202660);
        if (lVar5 == 0) {
          uVar3 = 0;
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
            uVar3 = *(undefined8 *)(param_1 + 0x28);
          }
          uVar3 = FUN_100319d10(uVar3);
          uVar6 = FUN_10034d070(uVar3);
          uVar6 = uVar6 ^ 1;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

