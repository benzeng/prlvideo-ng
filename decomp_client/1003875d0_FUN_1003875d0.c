
void FUN_1003875d0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  QVariant local_88;
  QArrayData *local_78;
  undefined1 local_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar3 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (lVar3 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    lVar3 = *(long *)(param_1 + 0x50);
  }
  lVar11 = lVar3 + 0x10;
  if (lVar3 == 0) {
    lVar11 = 0;
  }
  FUN_100384cb0(*(undefined8 *)(param_1 + 0x90),lVar11,1);
  lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x60);
  if (*(int *)(lVar3 + 0x38) != 4) {
    *(undefined4 *)(lVar3 + 0x38) = 4;
    QObject::blockSignals(SUB81(*(undefined8 *)(lVar3 + 0x30),0));
    QAbstractAnimation::stop();
    QObject::blockSignals(SUB81(*(undefined8 *)(lVar3 + 0x30),0));
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    QGraphicsItem::update((QRectF *)(lVar3 + 0x10));
  }
  uVar4 = QGuiApplication::keyboardModifiers();
  *(byte *)(param_1 + 0x68) = (byte)(uVar4 >> 0x1b) & 1;
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    lVar3 = *(long *)(param_1 + 0x40);
    lVar11 = (long)*(int *)(lVar3 + 8);
    iVar12 = -1;
    if (*(int *)(lVar3 + 8) < *(int *)(lVar3 + 0xc)) {
      lVar10 = lVar3 + 8 + lVar11 * 8;
      lVar7 = (long)*(int *)(lVar3 + 0xc) * 8 + lVar11 * -8;
      do {
        if (lVar7 == 0) goto LAB_10038771a;
        lVar9 = **(long **)(lVar10 + 8);
        lVar5 = 0;
        if ((lVar9 != 0) && (lVar5 = 0, *(int *)(lVar9 + 4) != 0)) {
          lVar5 = (*(long **)(lVar10 + 8))[1];
        }
        lVar9 = 0;
        if ((*(long *)(param_1 + 0x58) != 0) &&
           (lVar9 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
          lVar9 = *(long *)(param_1 + 0x60);
        }
        lVar10 = lVar10 + 8;
        lVar7 = lVar7 + -8;
      } while (lVar5 != lVar9);
      iVar12 = (int)((ulong)(lVar10 - (lVar3 + 0x10 + lVar11 * 8)) >> 3);
    }
LAB_10038771a:
    iVar8 = iVar12;
    if (iVar12 < 0) {
      iVar8 = 0;
    }
    (**(code **)(*plVar1 + 0x60))(local_70,plVar1,iVar8,0,param_1 + 0x20);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x90))
              (&local_88,*(long **)(param_1 + 0x10),local_70,0x100);
    QVariant::toString();
    QVariant::~QVariant(&local_88);
    FUN_1008354e0(param_1,&local_78,-1 < iVar12 && (uVar4 >> 0x1b & 1) != 0);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        UNLOCK();
        local_58 = CONCAT71(local_58._1_7_,*(int *)local_78 != 0);
        if (*(int *)local_78 != 0) goto LAB_1003877b8;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_1003877b8:
  lVar3 = *(long *)(param_1 + 0x38);
  QAbstractAnimation::start(*(undefined8 *)(lVar3 + 0x60),0);
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  uVar6 = QGraphicsItem::scene();
  QObject::connect((Connection *)&local_58,uVar2,"2finished()",uVar6,"2finished()",0);
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  return;
}

