
void FUN_10085fe30(QObject *param_1,int param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  undefined1 local_39;
  void *local_38;
  undefined1 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 < 2) {
    if (param_2 == 0) {
      switch(param_3) {
      case 0:
        local_39 = *(undefined1 *)param_4[1];
        iVar7 = 0;
        break;
      case 1:
        local_39 = *(undefined1 *)param_4[1];
        iVar7 = 1;
        break;
      case 2:
        local_39 = *(undefined1 *)param_4[1];
        iVar7 = 2;
        break;
      case 3:
        local_39 = *(undefined1 *)param_4[1];
        iVar7 = 3;
        break;
      case 4:
        local_39 = *(undefined1 *)param_4[1];
        iVar7 = 4;
        break;
      case 5:
        local_39 = *(undefined1 *)param_4[1];
        iVar7 = 5;
        break;
      case 6:
        local_39 = *(undefined1 *)param_4[1];
        iVar7 = 6;
        break;
      case 7:
        FUN_100790620();
        return;
      case 8:
        FUN_1007906d0();
        return;
      case 9:
        FUN_100790780();
        return;
      case 10:
        FUN_100790830();
        return;
      case 0xb:
        FUN_1007908e0();
        return;
      case 0xc:
        FUN_100790990();
        return;
      case 0xd:
        FUN_100790a40();
        return;
      case 0xe:
        FUN_100790b60();
        return;
      case 0xf:
        FUN_100790680();
        return;
      case 0x10:
        FUN_100790730();
        return;
      case 0x11:
        FUN_1007907e0();
        return;
      case 0x12:
        FUN_100790890();
        return;
      case 0x13:
        FUN_100790940();
        return;
      case 0x14:
        FUN_1007909f0();
        return;
      case 0x15:
        FUN_100790aa0();
        return;
      case 0x16:
        puVar5 = (undefined1 *)param_4[1];
switchD_10085febb_caseD_0:
        FUN_1007904d0(param_1,*puVar5);
        return;
      case 0x17:
        puVar5 = (undefined1 *)param_4[1];
switchD_10085febb_caseD_1:
        FUN_100790500(param_1,*puVar5);
        return;
      case 0x18:
        puVar5 = (undefined1 *)param_4[1];
switchD_10085febb_caseD_2:
        FUN_100790530(param_1,*puVar5);
        return;
      case 0x19:
        puVar5 = (undefined1 *)param_4[1];
switchD_10085febb_caseD_3:
        FUN_100790560(param_1,*puVar5);
        return;
      case 0x1a:
        puVar5 = (undefined1 *)param_4[1];
switchD_10085febb_caseD_4:
        FUN_100790590(param_1,*puVar5);
        return;
      case 0x1b:
        puVar5 = (undefined1 *)param_4[1];
switchD_10085febb_caseD_5:
        FUN_1007905c0(param_1,*puVar5);
        return;
      case 0x1c:
        puVar5 = (undefined1 *)param_4[1];
switchD_10085febb_caseD_6:
        FUN_1007905f0(param_1,*puVar5);
        return;
      default:
        goto switchD_10085fe6d_default;
      }
      local_30 = &local_39;
      local_38 = (void *)0x0;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222bc20,iVar7,&local_38);
    }
    else if ((param_2 == 1) && (param_3 < 7)) {
      puVar5 = (undefined1 *)*param_4;
      switch(param_3) {
      case 0:
        uVar4 = FUN_100790410();
        *puVar5 = uVar4;
        break;
      case 1:
        uVar4 = FUN_100790420();
        *puVar5 = uVar4;
        break;
      case 2:
        uVar4 = FUN_100790430();
        *puVar5 = uVar4;
        break;
      case 3:
        uVar4 = FUN_100790440();
        *puVar5 = uVar4;
        break;
      case 4:
        uVar4 = FUN_100790450();
        *puVar5 = uVar4;
        break;
      case 5:
        uVar4 = FUN_100790460();
        *puVar5 = uVar4;
        break;
      case 6:
        uVar4 = FUN_100790470();
        *puVar5 = uVar4;
      }
    }
  }
  else if (param_2 == 2) {
    if (param_3 < 7) {
      puVar5 = (undefined1 *)*param_4;
      switch(param_3) {
      case 1:
        goto switchD_10085febb_caseD_1;
      case 2:
        goto switchD_10085febb_caseD_2;
      case 3:
        goto switchD_10085febb_caseD_3;
      case 4:
        goto switchD_10085febb_caseD_4;
      case 5:
        goto switchD_10085febb_caseD_5;
      case 6:
        goto switchD_10085febb_caseD_6;
      }
      goto switchD_10085febb_caseD_0;
    }
  }
  else if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar6 = (code *)*plVar3;
    lVar8 = plVar3[1];
    if ((pcVar6 == FUN_1008604a0) && (lVar8 == 0)) {
      *puVar2 = 0;
      pcVar6 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar6 == FUN_1008604f0) && (lVar8 == 0)) {
      *puVar2 = 1;
      pcVar6 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar6 == FUN_100860550) && (lVar8 == 0)) {
      *puVar2 = 2;
      pcVar6 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar6 == FUN_1008605b0) && (lVar8 == 0)) {
      *puVar2 = 3;
      pcVar6 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar6 == FUN_100860610) && (lVar8 == 0)) {
      *puVar2 = 4;
      pcVar6 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar6 == FUN_100860670) && (lVar8 == 0)) {
      *puVar2 = 5;
      pcVar6 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar6 == FUN_1008606d0) && (lVar8 == 0)) {
      *puVar2 = 6;
    }
  }
switchD_10085fe6d_default:
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

