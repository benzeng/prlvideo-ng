
long FUN_100536d50(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  bool bVar9;
  long *local_50;
  undefined8 *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar5 = operator_new(0x808);
  plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  bVar9 = plVar6 == (long *)0x0;
  if (bVar9) {
    operator_delete(puVar5);
    plVar6 = (long *)0x0;
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *(undefined4 *)(plVar6 + 1) = 1;
    plVar6[2] = (long)puVar5;
    *plVar6 = (long)&PTR_FUN_10111d6c8;
  }
  ___bzero(puVar5,0x808);
  puVar5[1] = 0xffffffff;
  *puVar5 = 0x102;
  uVar3 = *(int *)(*param_2 + 4) * 2;
  if (uVar3 < 0x800) {
    pvVar7 = (void *)QString::utf16();
    _memcpy(puVar5 + 2,pvVar7,(ulong)uVar3);
    local_48 = operator_new(0x10);
    *local_48 = param_3;
    local_48[1] = param_4;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    if (!bVar9) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_50 = plVar6;
    lVar8 = FUN_100536ff0(uVar2,&local_50,FUN_1005371a0,&local_48);
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    if ((lVar8 == 0) && (lVar8 = 0, local_48 != (undefined8 *)0x0)) {
      operator_delete(local_48);
      lVar8 = 0;
    }
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","InvSharingHost",0,"the path \"%s\" is too long",
                  local_40 + *(long *)(local_40 + 0x10));
    lVar8 = 0;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        lVar8 = 0;
        if ((bool)local_31) goto LAB_100536f1b;
      }
      lVar8 = 0;
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_100536f1b:
  if (!bVar9) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return lVar8;
}

