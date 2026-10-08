
undefined8 *
FUN_1007bd9d0(undefined8 *param_1,long param_2,QString *param_3,int param_4,byte param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  QString local_a0;
  long local_98;
  QString local_90;
  long local_88;
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
  
  *param_1 = PTR_shared_null_1021e15e8;
  FUN_1007c5b80(&local_58,param_2 + 0x38);
  local_50 = (long *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (long *)(local_58 + (long)local_58[3] * 2 + 4);
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      lVar4 = *(long *)*local_50;
      if (((lVar4 != 0) && (*(int *)(lVar4 + 4) != 0)) &&
         (lVar4 = ((long *)*local_50)[1], lVar4 != 0)) {
        iVar3 = FUN_1007b57b0(lVar4);
        if (iVar3 == 1) {
          QAction::menu();
          QWidget::actions();
          local_78 = local_80;
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 == 0) {
              QListData::detach((int)&local_78);
              lVar4 = (long)*(int *)(local_78 + 8);
              if ((local_80 + (long)*(int *)(local_80 + 8) * 8 != local_78 + lVar4 * 8) &&
                 (lVar5 = *(int *)(local_78 + 0xc) - lVar4,
                 lVar5 != 0 && lVar4 <= *(int *)(local_78 + 0xc))) {
                _memcpy(local_78 + lVar4 * 8 + 0x10,
                        local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10,lVar5 * 8);
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
LAB_1007bdc23:
            for (; local_70 != local_68; local_70 = local_70 + 8) {
              if (*(long *)local_70 == 0) {
                local_88 = 0;
              }
              else {
                lVar4 = ___dynamic_cast(*(long *)local_70,PTR_typeinfo_1021e1718,
                                        &PTR_vtable_10222da30,0);
                local_88 = lVar4;
                if (lVar4 != 0) {
                  FUN_1007b5c80(&local_90,lVar4);
                  cVar1 = operator==(&local_90,param_3);
                  if (cVar1 == '\0') {
                    bVar2 = 0;
                  }
                  else {
                    iVar3 = FUN_1007b5c70(lVar4);
                    if (iVar3 == param_4) {
                      bVar2 = FUN_1007b5ce0(lVar4);
                      bVar2 = bVar2 ^ param_5 ^ 1;
                    }
                    else {
                      bVar2 = 0;
                    }
                  }
                  if (*(int *)local_90.field0_0x0 != -1) {
                    if (*(int *)local_90.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
                      local_31 = *(int *)local_90.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1007bdce9;
                    }
                    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
                  }
LAB_1007bdce9:
                  if (bVar2 != 0) {
                    FUN_1007c5780(param_1,&local_88);
                  }
                }
              }
              local_60 = 1;
            }
          }
          else {
            if (*(int *)local_80 == 0) {
LAB_1007bdbec:
              QListData::dispose(local_80);
            }
            else {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if (!(bool)local_31) goto LAB_1007bdbec;
            }
            if (local_60 != 0) goto LAB_1007bdc23;
          }
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007bdd90;
            }
            QListData::dispose(local_78);
          }
        }
        else {
          iVar3 = FUN_1007b57b0(lVar4);
          if ((iVar3 == 4) &&
             (lVar4 = ___dynamic_cast(lVar4,&PTR_vtable_10222d910,&PTR_vtable_10222da30,0),
             local_98 = lVar4, lVar4 != 0)) {
            FUN_1007b5c80(&local_a0,lVar4);
            cVar1 = operator==(&local_a0,param_3);
            if (cVar1 == '\0') {
              bVar2 = 0;
            }
            else {
              iVar3 = FUN_1007b5c70(lVar4);
              if (iVar3 == param_4) {
                bVar2 = FUN_1007b5ce0(lVar4);
                bVar2 = bVar2 ^ param_5 ^ 1;
              }
              else {
                bVar2 = 0;
              }
            }
            if (*(int *)local_a0.field0_0x0 != -1) {
              if (*(int *)local_a0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
                local_31 = *(int *)local_a0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1007bdd6f;
              }
              QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
            }
LAB_1007bdd6f:
            if (bVar2 != 0) {
              FUN_1007c5780(param_1,&local_98);
            }
          }
        }
      }
LAB_1007bdd90:
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
        return param_1;
      }
      local_31 = 0;
    }
    FUN_1007c5ae0(&local_58,local_58);
  }
  return param_1;
}

