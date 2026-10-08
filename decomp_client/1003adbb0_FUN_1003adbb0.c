
void FUN_1003adbb0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_39;
  void *local_38;
  undefined1 *local_30;
  long local_28;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar2;
  if (param_2 == 0xc) {
    switch(param_3) {
    case 1:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    default:
switchD_1003adc2f_caseD_2:
      *(undefined4 *)*param_4 = 0xffffffff;
      break;
    case 3:
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
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    case 7:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    case 8:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    case 0xb:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        if (*(int *)param_4[1] != 1) goto switchD_1003adc2f_caseD_2;
        if (DAT_10226db58 == 0) {
          DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
        }
        *(int *)*param_4 = DAT_10226db58;
      }
      break;
    case 0xc:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    case 0xd:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
  }
  else if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_1003a6a60) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_39 = *(undefined1 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_39;
      QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f1cb0,0,&local_38);
      break;
    case 1:
      FUN_1003a5b50(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_1003a64a0(param_1,param_4[1]);
      return;
    case 3:
      FUN_1003a6700(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_1003a6cd0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_1003a7450(param_1,*(undefined4 *)param_4[1]);
      return;
    case 6:
      FUN_1003a7c00(param_1);
      return;
    case 7:
      FUN_1003a9b10(param_1,*(undefined4 *)param_4[1]);
      return;
    case 8:
      FUN_1003ab020(param_1,*(undefined4 *)param_4[1]);
      return;
    case 9:
      FUN_1008367d0(*(undefined8 *)(param_1 + 0x10),*(int *)param_4[1] == 1);
      return;
    case 10:
      FUN_1003aa1e0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0xb:
      if (*(int *)param_4[2] != 2) {
        uVar4 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
        FUN_1003b5610(uVar4,0xf,0);
        uVar4 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
        FUN_1003b6570(uVar4,0xf);
        if (lVar2 == local_28) {
          FUN_100836910(*(undefined8 *)(param_1 + 0x10),0xf,0);
          return;
        }
        goto LAB_1003ae05c;
      }
      break;
    case 0xc:
      iVar1 = *(int *)param_4[1];
      QObject::sender();
      lVar5 = QMetaObject::cast((QObject *)&PTR_PTR_1022084c0);
      if (((-1 < iVar1) && (lVar5 != 0)) &&
         ((*(char *)(lVar5 + 0x68) != '\0' || (cVar3 = FUN_1002bed30(lVar5), cVar3 != '\0')))) {
        if (lVar2 == local_28) {
          FUN_1008369c0(*(undefined8 *)(param_1 + 0x10));
          return;
        }
        goto LAB_1003ae05c;
      }
      break;
    case 0xd:
      iVar1 = *(int *)param_4[1];
      QObject::sender();
      lVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220a1e0);
      if ((-1 < iVar1) && (lVar5 != 0)) {
        if (lVar2 == local_28) {
          FUN_1008369e0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(lVar5 + 0x28));
          return;
        }
        goto LAB_1003ae05c;
      }
    }
  }
  if (lVar2 == local_28) {
    return;
  }
LAB_1003ae05c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

