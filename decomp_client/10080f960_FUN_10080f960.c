
void FUN_10080f960(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined1 uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  void *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  long local_38;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 0xc) {
    switch(param_3) {
    case 0:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    case 1:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    case 2:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    case 4:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    case 5:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
        break;
      }
      if (*(int *)param_4[1] == 1) {
        if (DAT_10226db58 == 0) {
          DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
        }
        *(int *)*param_4 = DAT_10226db58;
        break;
      }
    default:
      *(undefined4 *)*param_4 = 0xffffffff;
      break;
    case 6:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
  }
  else {
    if (param_2 == 10) {
      puVar2 = (undefined4 *)*param_4;
      plVar3 = (long *)param_4[1];
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
      if ((pcVar5 == FUN_10080fd50) && (lVar7 == 0)) {
        *puVar2 = 0;
        pcVar5 = (code *)*plVar3;
        lVar7 = plVar3[1];
      }
      if ((pcVar5 == FUN_10080fdc0) && (lVar7 == 0)) {
        *puVar2 = 1;
      }
      goto switchD_10080fa4e_default;
    }
    if (param_2 != 0) goto switchD_10080fa4e_default;
    switch(param_3) {
    case 0:
      local_5c = *(undefined4 *)param_4[1];
      local_60 = *(undefined4 *)param_4[2];
      local_64 = *(undefined4 *)param_4[3];
      iVar6 = 0;
      break;
    case 1:
      local_5c = *(undefined4 *)param_4[1];
      local_60 = *(undefined4 *)param_4[2];
      local_64 = *(undefined4 *)param_4[3];
      local_38 = param_4[4];
      iVar6 = 1;
      break;
    case 2:
      FUN_100211830(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_100211250(param_1);
      return;
    case 4:
      FUN_1002125d0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_100212630(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 6:
      FUN_100211080(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      local_70 = *(long *)param_4[1];
      if (local_70 != 0) {
        _PrlHandle_AddRef();
      }
      uVar4 = FUN_1002112a0(param_1,&local_70);
      if (local_70 != 0) {
        _PrlHandle_Free();
      }
      if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
        *(undefined1 *)*param_4 = uVar4;
      }
    default:
      goto switchD_10080fa4e_default;
    }
    local_40 = &local_64;
    local_48 = &local_60;
    local_50 = &local_5c;
    local_58 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102200d70,iVar6,&local_58);
  }
switchD_10080fa4e_default:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

