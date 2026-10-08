
undefined8
FUN_100058d10(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4,long param_5)

{
  short sVar1;
  int iVar2;
  undefined1 uVar3;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  undefined **local_a0 [2];
  uint local_90;
  undefined1 local_89;
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  FUN_10005ae70(local_a0);
  local_a0[0] = &PTR_FUN_10226c2e0;
  local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar2 = FUN_10005ba00(param_1,&local_90);
  if (iVar2 == 0) {
    if (1 < local_90) goto LAB_100058e85;
    iVar2 = FUN_10005bb40(param_1,local_a0);
    if (iVar2 == 0) {
      if (((param_3 == 0) || (iVar2 = FUN_10005b3f0(local_a0,local_88), iVar2 - 9U < 2)) ||
         (iVar2 == 6)) {
        iVar2 = FUN_10005b160(local_a0,&local_a8);
        if ((iVar2 == 9) || (iVar2 == 6)) {
          iVar2 = FUN_10005afe0(local_a0,&local_a8);
          if ((iVar2 == 9) || (iVar2 == 6)) goto LAB_100058e85;
          if (iVar2 == 0) {
            MacUtils::localPathForUrlString(&local_b8);
            if (*(int *)(local_b8.field0_0x0 + 4) == 0) {
              QString::operator=(&local_b8,&local_a8);
            }
            iVar2 = QString::compare(param_2,&local_b8,1);
            *param_4 = iVar2 == 0;
            if ((param_5 != 0) && (iVar2 == 0)) {
              FUN_10005b500(local_a0,param_5);
            }
            uVar3 = 1;
            if (*(int *)local_b8.field0_0x0 != -1) {
              if (*(int *)local_b8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
                local_89 = *(int *)local_b8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_89) goto LAB_100058e8d;
              }
              QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
            }
          }
          else if (DAT_10230ffd0 < 1) {
            uVar3 = 0;
          }
          else {
            uVar3 = 0;
            FUN_100df99c0("SGAC","prl_client_app",1,"Failed to get alias path, err %i",iVar2);
          }
        }
        else if (iVar2 == 0) {
          MacUtils::localPathForUrlString(&local_b0);
          if (*(int *)(local_b0.field0_0x0 + 4) == 0) {
            QString::operator=(&local_b0,&local_a8);
          }
          iVar2 = QString::compare(param_2,&local_b0,1);
          *param_4 = iVar2 == 0;
          if ((param_5 != 0) && (iVar2 == 0)) {
            FUN_10005b500(local_a0,param_5);
          }
          uVar3 = 1;
          if (*(int *)local_b0.field0_0x0 != -1) {
            if (*(int *)local_b0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
              local_89 = *(int *)local_b0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_89) goto LAB_100058e8d;
            }
            QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
          }
        }
        else if (DAT_10230ffd0 < 1) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          FUN_100df99c0("SGAC","prl_client_app",1,"Failed to get alias path, err %i",iVar2);
        }
      }
      else if (iVar2 == 0) {
        sVar1 = _FSCompareFSRefs(param_3,local_88);
        *param_4 = sVar1 == 0;
        uVar3 = 1;
        if ((param_5 != 0) && (sVar1 == 0)) {
          FUN_10005b500(local_a0);
        }
      }
      else if (DAT_10230ffd0 < 1) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        FUN_100df99c0("SGAC","prl_client_app",1,"Failed to resolve alias, err %i",iVar2);
      }
    }
    else {
      if ((iVar2 == 6) || (iVar2 == 9)) goto LAB_100058e85;
      uVar3 = 0;
      FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get persistent-others item tile, err %i",
                    iVar2);
    }
  }
  else {
    if ((iVar2 != 6) && (iVar2 != 9)) {
      uVar3 = 0;
      FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get persistent-others item type, err %i",
                    iVar2);
      goto LAB_100058e8d;
    }
LAB_100058e85:
    *param_4 = 0;
    uVar3 = 1;
  }
LAB_100058e8d:
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_89 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100058ec9;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_100058ec9:
  FUN_10005aeb0(local_a0);
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_1021e1840 >> 8),uVar3);
}

