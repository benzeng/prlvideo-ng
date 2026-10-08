
void FUN_1005eacc0(long param_1,char *param_2)

{
  QMapNodeBase *pQVar1;
  undefined8 uVar2;
  QVariant *pQVar3;
  long *plVar4;
  QGraphicsItem *this;
  QGraphicsItem *pQVar5;
  QArrayData *local_158;
  QVariant local_150;
  QVariant local_140;
  QArrayData *local_130;
  QVariant local_128;
  QArrayData *local_118;
  QVariant local_110;
  QArrayData *local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QMapNodeBase *local_b0;
  undefined1 local_a8 [8];
  QString local_a0 [8];
  QString local_60 [2];
  QString local_50;
  QString local_48;
  QString local_40 [2];
  QString local_30;
  undefined1 local_21;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  uVar2 = FUN_1005ec990(param_1 + 0x38);
  FUN_1005b69c0(local_a8,uVar2);
  local_b0 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_b8 = (QArrayData *)QString::fromAscii_helper("orderId",7);
  pQVar3 = (QVariant *)FUN_10008c590(&local_b0,&local_b8);
  QVariant::QVariant(&local_c8,&local_50);
  QVariant::operator=(pQVar3,&local_c8);
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005ead91;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1005ead91:
  local_d0 = (QArrayData *)QString::fromAscii_helper("orderDate",9);
  pQVar3 = (QVariant *)FUN_10008c590(&local_b0,&local_d0);
  QVariant::QVariant(&local_e0,&local_48);
  QVariant::operator=(pQVar3,&local_e0);
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_21 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005eae20;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1005eae20:
  local_e8 = (QArrayData *)QString::fromAscii_helper("orderTotal",10);
  pQVar3 = (QVariant *)FUN_10008c590(&local_b0,&local_e8);
  QVariant::QVariant(&local_f8,local_40);
  QVariant::operator=(pQVar3,&local_f8);
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_21 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005eaeaf;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1005eaeaf:
  local_100 = (QArrayData *)QString::fromAscii_helper("productKey",10);
  pQVar3 = (QVariant *)FUN_10008c590(&local_b0,&local_100);
  QVariant::QVariant(&local_110,local_60);
  QVariant::operator=(pQVar3,&local_110);
  QVariant::~QVariant(&local_110);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_21 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005eaf3e;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1005eaf3e:
  local_118 = (QArrayData *)QString::fromAscii_helper("productName",0xb);
  pQVar3 = (QVariant *)FUN_10008c590(&local_b0,&local_118);
  QVariant::QVariant(&local_128,local_a0);
  QVariant::operator=(pQVar3,&local_128);
  QVariant::~QVariant(&local_128);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_21 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005eafd0;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1005eafd0:
  local_130 = (QArrayData *)QString::fromAscii_helper("orderReferenceId",0x10);
  pQVar3 = (QVariant *)FUN_10008c590(&local_b0,&local_130);
  QVariant::QVariant(&local_140,&local_30);
  QVariant::operator=(pQVar3,&local_140);
  QVariant::~QVariant(&local_140);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_21 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005eb05f;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1005eb05f:
  QVariant::QVariant(&local_150,(QMap *)&local_b0);
  QObject::setProperty(param_2,(QVariant *)"orderData");
  QVariant::~QVariant(&local_150);
  local_158 = (QArrayData *)QString::fromAscii_helper("orderInfo",9);
  plVar4 = (long *)qt_qFindChild_helper(param_2,&local_158,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_21 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005eb100;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1005eb100:
  this = operator_new(0x10);
  pQVar5 = (QGraphicsItem *)0x0;
  if (plVar4 != (long *)0x0) {
    pQVar5 = (QGraphicsItem *)(**(code **)(*plVar4 + 8))(plVar4,"org.qt-project.Qt.QGraphicsItem");
  }
  QGraphicsItem::QGraphicsItem(this,pQVar5);
  *(undefined ***)this = &PTR_FUN_1021f4880;
  QGraphicsItem::installSceneEventFilter(pQVar5);
  pQVar1 = local_b0;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_21 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005eb198;
    }
    if (*(long *)(local_b0 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_1005eb198:
  FUN_100252c80(&local_50);
  FUN_100252e70(local_a8);
  return;
}

