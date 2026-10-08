
void FUN_1007b5f30(QAction *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  Data *pDVar4;
  Connection local_70 [8];
  Connection local_68 [8];
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  if (*(int *)(param_2 + 0x14) != 1) goto LAB_1007b60f4;
  lVar2 = QAction::menu();
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get menu instance.");
    return;
  }
  QWidget::actions();
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar2 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_58 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar2 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 == -1) {
LAB_1007b6051:
    puVar1 = PTR_typeinfo_1021e1718;
    if (local_50 != local_48) {
      do {
        pDVar4 = local_50;
        if ((*(long *)local_50 != 0) &&
           (lVar2 = ___dynamic_cast(*(long *)local_50,puVar1,&PTR_vtable_10222d910,0), lVar2 != 0))
        {
          QObject::connect(local_68,lVar2,"2stateIsChanged(bool)",param_1,
                           "1updateDevActionStates(bool)",0);
          QMetaObject::Connection::~Connection(local_68);
          pDVar4 = local_50;
        }
        local_50 = pDVar4 + 8;
        local_40 = 1;
      } while (local_50 != local_48);
    }
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_1007b6042:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1007b6042;
    }
    if (local_40 != 0) goto LAB_1007b6051;
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b60f4;
    }
    QListData::dispose(local_58);
  }
LAB_1007b60f4:
  QObject::connect(local_70,param_2,"2stateIsChanged(bool)",param_1,"1updateDevActionStates(bool)",0
                  );
  QMetaObject::Connection::~Connection(local_70);
  QActionGroup::addAction(param_1);
  return;
}

