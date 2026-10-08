
void FUN_1007c47a0(long param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 extraout_RDX;
  long lVar9;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  int local_70;
  int *local_68;
  long *local_60;
  long *local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001547d0(uVar4,param_1 + 0x30);
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance.");
    return;
  }
  FUN_1001241b0(&local_40,lVar5);
  if (param_3 == 0) {
    local_44 = 0;
    plVar6 = (long *)FUN_100129b20(&local_40,&local_44);
    if ((param_2 == 0xffffffff) && (1 < *(int *)(*plVar6 + 0xc) - *(int *)(*plVar6 + 8))) {
      local_48 = 0;
      puVar7 = (undefined8 *)FUN_100129b20(&local_40,&local_48);
      if (1 < *(uint *)*puVar7) {
        FUN_1003deff0(puVar7,((uint *)*puVar7)[1]);
      }
      param_2 = CHwNetAdapter::getSysIndex();
    }
  }
  FUN_1007c5b80(&local_68,param_1 + 0x38);
  puVar1 = PTR_typeinfo_1021e1718;
  local_60 = (long *)(local_68 + (long)local_68[2] * 2 + 4);
  local_58 = (long *)(local_68 + (long)local_68[3] * 2 + 4);
  if (local_68[2] != local_68[3]) {
    do {
      local_50 = 1;
      lVar5 = *(long *)*local_60;
      if (((lVar5 != 0) && (*(int *)(lVar5 + 4) != 0)) &&
         (lVar5 = ((long *)*local_60)[1], lVar5 != 0)) {
        iVar2 = FUN_1007b57b0(lVar5);
        if (iVar2 < 8) {
          if (iVar2 == 1) {
            lVar5 = QAction::menu();
            if (lVar5 != 0) {
              QAction::menu();
              QWidget::actions();
              local_88 = local_90;
              if (*(int *)local_90 != -1) {
                if (*(int *)local_90 == 0) {
                  QListData::detach((int)&local_88);
                  lVar5 = (long)*(int *)(local_88 + 8);
                  if ((local_90 + (long)*(int *)(local_90 + 8) * 8 != local_88 + lVar5 * 8) &&
                     (lVar9 = *(int *)(local_88 + 0xc) - lVar5,
                     lVar9 != 0 && lVar5 <= *(int *)(local_88 + 0xc))) {
                    _memcpy(local_88 + lVar5 * 8 + 0x10,
                            local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10,lVar9 * 8);
                  }
                }
                else {
                  LOCK();
                  *(int *)local_90 = *(int *)local_90 + 1;
                  local_31 = *(int *)local_90 != 0;
                  UNLOCK();
                }
              }
              local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
              local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
              local_70 = 1;
              if (*(int *)local_90 == -1) {
LAB_1007c4a63:
                for (; local_80 != local_78; local_80 = local_80 + 8) {
                  if ((*(long *)local_80 == 0) ||
                     (lVar5 = ___dynamic_cast(*(long *)local_80,puVar1,&PTR_vtable_10222dac0,0),
                     lVar5 == 0)) {
                    FUN_100df99c0("","prl_client_app",0);
                  }
                  else {
                    uVar3 = FUN_1007b5ec0(lVar5);
                    if ((((uVar3 ^ param_2) & 0xfffffff) == 0) &&
                       (((iVar2 = FUN_1007b57b0(lVar5), param_3 == 2 && (iVar2 == 6)) ||
                        ((iVar2 = FUN_1007b57b0(lVar5), param_3 < 2 && (iVar2 == 9)))))) {
                      FUN_1001324d0(lVar5,1);
                    }
                    else {
                      FUN_1001324d0(lVar5,0);
                    }
                  }
                  local_70 = 1;
                }
              }
              else {
                if (*(int *)local_90 == 0) {
LAB_1007c4a36:
                  QListData::dispose(local_90);
                }
                else {
                  LOCK();
                  *(int *)local_90 = *(int *)local_90 + -1;
                  local_31 = *(int *)local_90 != 0;
                  UNLOCK();
                  if (!(bool)local_31) goto LAB_1007c4a36;
                }
                if (local_70 != 0) goto LAB_1007c4a63;
              }
              if (*(int *)local_88 != -1) {
                if (*(int *)local_88 != 0) {
                  LOCK();
                  *(int *)local_88 = *(int *)local_88 + -1;
                  local_31 = *(int *)local_88 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1007c49c0;
                }
                QListData::dispose(local_88);
              }
            }
          }
          else {
            bVar8 = param_3 == 0;
            if (iVar2 == 7) goto LAB_1007c49b3;
          }
        }
        else {
          bVar8 = param_3 == 1;
          if ((iVar2 == 8) || (bVar8 = param_3 == 5, iVar2 == 0xe)) {
LAB_1007c49b3:
            FUN_1001324d0(lVar5,bVar8,extraout_RDX,bVar8);
          }
        }
      }
LAB_1007c49c0:
      local_60 = local_60 + 1;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*local_68 != -1) {
    if (*local_68 != 0) {
      LOCK();
      *local_68 = *local_68 + -1;
      local_31 = *local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c4b84;
    }
    FUN_1007c5ae0(&local_68,local_68);
  }
LAB_1007c4b84:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_10012bff0();
      QMapDataBase::freeTree(local_40,(int)*(undefined8 *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_40);
  }
  return;
}

