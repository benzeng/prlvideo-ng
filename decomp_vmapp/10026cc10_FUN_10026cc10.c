
int FUN_10026cc10(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  QArrayData *local_40;
  
  lVar2 = *(long *)(param_1 + 8);
  QMutex::lock();
  plVar3 = *(long **)(lVar2 + 0x18);
  if (plVar3 == (long *)0x0) {
    QMutex::unlock();
    uVar6 = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    QMutex::unlock();
    uVar6 = 0;
    if (plVar3[2] != 0) {
      uVar6 = ___dynamic_cast(plVar3[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba21f8,0);
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  iVar7 = -1;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_10026cd5c;
  iVar4 = FUN_10026c2a0(param_1,uVar6);
  iVar7 = 0;
  if (iVar4 == 0) goto LAB_10026cd5c;
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,
                "[DVDROM] Deferred conection. Can not connect device \"%s\". Device Disconnected (%d)"
                ,local_40 + *(long *)(local_40 + 0x10),iVar4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_10026cd20;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10026cd20:
  uVar6 = ___dynamic_cast(param_1,&PTR_vtable_100baf260,&PTR_vtable_100baea70,0xfffffffffffffffe);
  FUN_10025c290(uVar6);
  uVar5 = CVmDevice::getIndex();
  FUN_1003f9010(uVar5,0x80000263);
  iVar7 = iVar4;
LAB_10026cd5c:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return iVar7;
}

