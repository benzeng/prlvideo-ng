
char * FUN_10074a700(char *param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  undefined4 uVar2;
  int iVar3;
  QArrayData *local_348;
  undefined1 local_340 [216];
  int *local_268;
  QArrayData *local_40;
  undefined1 local_31;
  
  QString::trimmed();
  iVar3 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_340[0] = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_340[0]) goto LAB_10074a75c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10074a75c:
  if (iVar3 == 0) {
    *(undefined **)param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  FUN_100ce2a10(local_340);
  uVar2 = FUN_100ce0640(param_2);
  iVar3 = FUN_100ce4100(local_340,param_2,uVar2);
  if (iVar3 == 0x8000000) {
    *(int **)param_1 = local_268;
    if (1 < *local_268 + 1U) {
      LOCK();
      *local_268 = *local_268 + 1;
      local_31 = *local_268 != 0;
      UNLOCK();
    }
    goto LAB_10074a8b7;
  }
  pQVar1 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,
                "Error : failed to parse Vm config \'%s\' as vendor type %d, error 0x%X",
                local_348 + *(long *)(local_348 + 0x10),uVar2,iVar3);
  if (*(int *)local_348 != -1) {
    if (*(int *)local_348 != 0) {
      LOCK();
      *(int *)local_348 = *(int *)local_348 + -1;
      local_31 = *(int *)local_348 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10074a860;
    }
    QArrayData::deallocate(local_348,1,8);
  }
LAB_10074a860:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10074a896;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10074a896:
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,(int)PTR_s_Third_party_VM_10226fe08);
LAB_10074a8b7:
  FUN_100ce40c0(local_340);
  return param_1;
}

