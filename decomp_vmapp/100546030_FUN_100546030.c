
void * FUN_100546030(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                    undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  void *pvVar6;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  
  cVar2 = FUN_100545710();
  if (cVar2 == '\0') {
    cVar2 = FUN_1005457d0(param_1,param_2,param_3,param_4);
    if (cVar2 != '\0') {
      pvVar6 = (void *)FUN_100550e80(param_1,param_2,param_3,param_4,param_5);
      return pvVar6;
    }
    cVar2 = FUN_100545970(param_1,param_2,param_3,param_4);
    if (cVar2 == '\0') goto LAB_100546256;
    plVar5 = operator_new(0x50,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar4 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      *plVar5 = (long)&PTR_FUN_100bc54a8;
      piVar1 = (int *)*param_1;
      plVar5[1] = (long)piVar1;
      if (1 < *piVar1 + 1U) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      plVar5[2] = param_2;
      plVar5[3] = param_3;
      plVar5[9] = 0;
      plVar5[8] = 0;
      plVar5[7] = 0;
      plVar5[6] = 0;
      plVar5[5] = 0;
      plVar5[4] = 0;
      *plVar5 = (long)&PTR_FUN_10111d830;
      plVar4 = plVar5;
    }
    if (plVar4 == (long *)0x0) goto LAB_100546256;
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"crypt_transaction(%s,%#llx,%#llx) valid plain image",
                  local_40 + *(long *)(local_40 + 0x10),param_2,param_3);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_1005460d1;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1005460d1:
    plVar4 = operator_new(0x70,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (plVar4 == (long *)0x0) {
LAB_100546256:
      QString::toUtf8();
      FUN_1008e3970("","TransMem",0,"crypt_transaction(%s,%#llx,%#llx) invalid",
                    local_48 + *(long *)(local_48 + 0x10),param_2,param_3);
      if (*(int *)local_48 == -1) {
        return (void *)0x0;
      }
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return (void *)0x0;
        }
      }
      QArrayData::deallocate(local_48,1,8);
      return (void *)0x0;
    }
    FUN_100546a30(plVar4,param_1,param_2,param_3,0,0);
    iVar3 = (**(code **)(*plVar4 + 0xa8))(plVar4);
    if (iVar3 != 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
      goto LAB_100546256;
    }
  }
  pvVar6 = operator_new(0x80,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pvVar6 != (void *)0x0) {
    FUN_100551b60(pvVar6,plVar4,param_4,param_5);
    return pvVar6;
  }
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,"crypt_transaction(%s,%#llx,%#llx) failed to create transaction",
                local_50 + *(long *)(local_50 + 0x10),param_2,param_3);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_100546340;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100546340:
  (**(code **)(*plVar4 + 8))(plVar4);
  return (void *)0x0;
}

