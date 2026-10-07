
undefined8 FUN_100110bf0(void)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  CVmEvent local_120 [8];
  undefined1 local_118 [216];
  QEvent local_40 [32];
  QArrayData *local_20;
  undefined1 local_11;
  
  local_20 = (QArrayData *)QString::fromAscii_helper("12.2.1 41615",0xc);
  cVar2 = FUN_100110950(&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100110c4c;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_100110c4c:
  if (cVar2 != '\0') {
    return 1;
  }
  local_128 = *(QArrayData **)(DAT_1011c3650 + 0x18);
  if (1 < *(int *)local_128 + 1U) {
    LOCK();
    *(int *)local_128 = *(int *)local_128 + 1;
    local_11 = *(int *)local_128 != 0;
    UNLOCK();
  }
  local_130 = (QArrayData *)QString::fromAscii_helper("",0);
  CVmEvent::CVmEvent(local_120,0x18896,&local_128,0,0x80000430,0,&local_130,0);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_11 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100110d00;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100110d00:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_11 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100110d36;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100110d36:
  lVar1 = DAT_1011c3650;
  CBaseNode::toString(SUB81(&local_138,0),SUB81(local_118,0));
  plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_140 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 1) = 1;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_100bef0d0;
    local_140 = plVar3;
  }
  FUN_100063e20(lVar1,&local_138,0xbbb,&local_140,0);
  if (local_140 != (long *)0x0) {
    LOCK();
    plVar3 = local_140 + 1;
    lVar1 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_140 + 0x10))();
    }
  }
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_11 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100110e03;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100110e03:
  FUN_1008e3970("","vm",0,"VM will not start because drivers on host work incorrect.");
  QEvent::~QEvent(local_40);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_120);
  return 0;
}

