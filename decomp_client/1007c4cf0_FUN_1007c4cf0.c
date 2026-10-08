
void FUN_1007c4cf0(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  int local_60;
  int *local_58;
  long *local_50;
  long *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  FUN_1007c5b80(&local_58,param_1 + 0x38);
  puVar1 = PTR_typeinfo_1021e1718;
  local_50 = (long *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (long *)(local_58 + (long)local_58[3] * 2 + 4);
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      lVar3 = *(long *)*local_50;
      if ((((lVar3 != 0) && (*(int *)(lVar3 + 4) != 0)) &&
          (lVar3 = ((long *)*local_50)[1], lVar3 != 0)) &&
         (iVar2 = FUN_1007b57b0(lVar3), iVar2 == 1)) {
        QAction::menu();
        QWidget::actions();
        local_78 = local_80;
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 == 0) {
            QListData::detach((int)&local_78);
            lVar3 = (long)*(int *)(local_78 + 8);
            if ((local_80 + (long)*(int *)(local_80 + 8) * 8 != local_78 + lVar3 * 8) &&
               (lVar4 = *(int *)(local_78 + 0xc) - lVar3,
               lVar4 != 0 && lVar3 <= *(int *)(local_78 + 0xc))) {
              _memcpy(local_78 + lVar3 * 8 + 0x10,local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10
                      ,lVar4 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + 1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
          }
        }
        local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
        local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
        local_60 = 1;
        if (*(int *)local_80 == -1) {
LAB_1007c4e73:
          for (; local_70 != local_68; local_70 = local_70 + 8) {
            if (((*(long *)local_70 != 0) &&
                (lVar3 = ___dynamic_cast(*(long *)local_70,puVar1,&PTR_vtable_10222da30,0),
                lVar3 != 0)) && (iVar2 = FUN_1007b5c70(lVar3), iVar2 == param_2)) {
              FUN_1001324d0(lVar3,0);
            }
            local_60 = 1;
          }
        }
        else {
          if (*(int *)local_80 == 0) {
LAB_1007c4e43:
            QListData::dispose(local_80);
          }
          else {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_1007c4e43;
          }
          if (local_60 != 0) goto LAB_1007c4e73;
        }
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c4ee0;
          }
          QListData::dispose(local_78);
        }
      }
LAB_1007c4ee0:
      local_50 = local_50 + 1;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_1007c5ae0(&local_58,local_58);
  }
  return;
}

