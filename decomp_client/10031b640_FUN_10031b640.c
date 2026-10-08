
undefined1 FUN_10031b640(QObject *param_1,byte param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  QObject *this;
  QMapNodeBase *pQVar4;
  ulong *puVar5;
  QMapNodeBase *pQVar6;
  undefined1 uVar7;
  Data_conflict local_88;
  undefined4 local_80;
  QArrayData *local_78;
  int *local_70 [4];
  QVariant local_50 [2];
  int local_38;
  undefined1 local_31;
  
  cVar2 = FUN_100330a50(*(undefined8 *)(param_1 + 0x98));
  if (cVar2 != '\0') {
    FUN_100331600(*(undefined8 *)(param_1 + 0x98),param_2 ^ 1);
    return 1;
  }
  if ((((param_1[0x160] != (QObject)0x0) && (*(long *)(param_1 + 0x168) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x168) + 4) != 0)) &&
     (((lVar1 = *(long *)(param_1 + 0x170), lVar1 != 0 && (*(long *)(lVar1 + 0x10) != 0)) &&
      ((*(int *)(*(long *)(lVar1 + 0x10) + 4) != 0 && (*(long *)(lVar1 + 0x18) != 0)))))) {
    FUN_100118790(*(long *)(lVar1 + 0x18),0);
    return 1;
  }
  cVar2 = FUN_10033fc40(*(undefined8 *)(param_1 + 0xd8),&local_38,0);
  if ((cVar2 != '\0') && (local_38 == 3)) {
    return 1;
  }
  if (param_2 != 0) {
    MacUtils::bringProcessToFront();
  }
  this = operator_new(0x18);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_102237950;
  *(undefined **)(this + 0x10) = PTR_shared_null_1021e15e8;
  pQVar4 = *(QMapNodeBase **)(param_1 + 0x48);
  if (*(int *)pQVar4 == 0) {
    pQVar4 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(*(long *)(param_1 + 0x48) + 0x10) != 0) {
      puVar5 = (ulong *)FUN_1000340b0(*(long *)(*(long *)(param_1 + 0x48) + 0x10),pQVar4);
      *(ulong **)(pQVar4 + 0x10) = puVar5;
      *puVar5 = *puVar5 & 3 | (ulong)(pQVar4 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar4 != -1) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
    pQVar4 = *(QMapNodeBase **)(param_1 + 0x48);
  }
  if (*(long *)(pQVar4 + 0x10) == 0) {
LAB_10031b8ed:
    uVar7 = 0;
  }
  else {
    pQVar6 = *(QMapNodeBase **)(pQVar4 + 0x20);
    if (pQVar6 == pQVar4 + 8) goto LAB_10031b8ed;
    uVar7 = 0;
    do {
      if ((((*(long *)(pQVar6 + 0x20) != 0) && (*(int *)(*(long *)(pQVar6 + 0x20) + 4) != 0)) &&
          (lVar1 = *(long *)(pQVar6 + 0x28), lVar1 != 0)) &&
         (iVar3 = FUN_100325aa0(lVar1), iVar3 != 0)) {
        local_78 = (QArrayData *)QString::fromAscii_helper("1bringToFront()",0xf);
        local_80 = 0x80000000;
        local_88.field7 = 0;
        FUN_100a1c600(local_70,lVar1,&local_78,&local_88);
        FUN_100322010(this + 0x10,local_70);
        QVariant::~QVariant(local_50);
        if (local_70[0] != (int *)0x0) {
          LOCK();
          *local_70[0] = *local_70[0] + -1;
          local_31 = *local_70[0] != 0;
          UNLOCK();
          if ((!(bool)local_31) && (local_70[0] != (int *)0x0)) {
            operator_delete(local_70[0]);
          }
        }
        QVariant::~QVariant((QVariant *)&local_88);
        uVar7 = 1;
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10031b8c0;
          }
          QArrayData::deallocate(local_78,2,8);
        }
      }
LAB_10031b8c0:
      pQVar6 = (QMapNodeBase *)QMapNodeBase::nextNode();
    } while (pQVar6 != pQVar4 + 8);
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031b937;
    }
    if (*(long *)(pQVar4 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_10031b937:
  FUN_100322530(this);
  return uVar7;
}

