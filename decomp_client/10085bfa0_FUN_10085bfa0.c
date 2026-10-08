
int FUN_10085bfa0(QObject *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 local_49;
  void *local_48;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  iVar4 = QObject::qt_metacall();
  if (-1 < iVar4) {
    switch(param_2) {
    case 0:
      if (iVar4 < 1) {
        local_49 = *(undefined1 *)param_4[1];
        local_48 = (void *)0x0;
        local_40 = &local_49;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022299e0,0,&local_48);
      }
      break;
    case 1:
      if (iVar4 == 0) {
        puVar2 = (undefined1 *)*param_4;
        uVar3 = FUN_10076b500(param_1);
        *puVar2 = uVar3;
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xb:
      break;
    default:
      goto switchD_10085bfea_caseD_9;
    case 0xc:
      if (iVar4 < 1) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    iVar4 = iVar4 + -1;
  }
switchD_10085bfea_caseD_9:
  if (lVar1 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

