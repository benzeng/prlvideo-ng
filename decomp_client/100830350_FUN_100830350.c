
void FUN_100830350(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  void **ppvVar6;
  int iVar7;
  long lVar8;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  undefined8 local_170;
  void *local_168;
  void **local_160;
  void *local_48;
  undefined8 *local_40;
  void **local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar8 = plVar3[1];
    if ((pcVar5 == FUN_100830780) && (lVar8 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar5 == FUN_1008307d0) && (lVar8 == 0)) {
      *puVar2 = 1;
    }
    goto switchD_100830404_default;
  }
  if (param_2 != 0) goto switchD_100830404_default;
  switch(param_3) {
  case 0:
    local_48 = (void *)CONCAT71(local_48._1_7_,*(undefined1 *)param_4[1]);
    local_168 = (void *)0x0;
    local_160 = &local_48;
    ppvVar6 = &local_168;
    iVar7 = 0;
    goto LAB_100830484;
  case 1:
    uVar4 = *(undefined8 *)param_4[1];
    _memmove(&local_168,(void *)param_4[2],0x114);
    local_48 = (void *)0x0;
    local_40 = &local_170;
    ppvVar6 = &local_48;
    iVar7 = 1;
    local_170 = uVar4;
    local_38 = &local_168;
LAB_100830484:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220d1a0,iVar7,ppvVar6);
    break;
  case 2:
    local_178 = *(long *)param_4[1];
    if (local_178 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_100346940(param_1,&local_178);
    if (local_178 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 3:
    local_180 = *(long *)param_4[1];
    if (local_180 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_100346a00(param_1,&local_180,*(undefined4 *)param_4[2]);
    if (local_180 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 4:
    local_188 = *(long *)param_4[1];
    if (local_188 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_100346a40(param_1,&local_188);
    if (local_188 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 5:
    local_190 = *(long *)param_4[1];
    if (local_190 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_100346a50(param_1,&local_190,*(undefined4 *)param_4[2]);
    if (local_190 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 6:
    FUN_100346eb0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 7:
    FUN_100346a80(param_1,param_4[1]);
    return;
  case 8:
    FUN_100346c50(param_1,param_4[1]);
    return;
  case 9:
    FUN_100346e70(param_1,param_4[1]);
    return;
  case 10:
    FUN_100346e90(param_1,param_4[1]);
    return;
  case 0xb:
    FUN_100346c70(param_1,param_4[1]);
    return;
  case 0xc:
    FUN_100346c90(param_1,param_4[1]);
    return;
  case 0xd:
    FUN_100347380(param_1,param_4[1],*(undefined1 *)param_4[2],*(undefined4 *)param_4[3]);
    return;
  }
switchD_100830404_default:
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

