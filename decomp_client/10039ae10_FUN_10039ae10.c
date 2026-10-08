
void FUN_10039ae10(long param_1)

{
  QPoint *pQVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  QWidget *pQVar6;
  QRect *pQVar7;
  QString local_80;
  QImage local_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  pQVar2 = operator_new(0x30);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0xe2;
  local_3c = 0x90;
  local_58 = 0;
  local_50 = 0x10e000001c4;
  local_80.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(":/Balalaika.jpg",0xf);
  QImage::QImage(local_78,&local_80,(char *)0x0);
  FUN_10039b630(pQVar2,&local_48,&local_58,local_78);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar4 = *(int **)(param_1 + 0xa0);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      local_38 = CONCAT31(local_38._1_3_,*piVar3 != 0);
      piVar4 = *(int **)(param_1 + 0xa0);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      local_38 = CONCAT31(local_38._1_3_,*piVar4 != 0);
      if ((*piVar4 == 0) && (*(void **)(param_1 + 0xa0) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0xa0));
      }
    }
    *(int **)(param_1 + 0xa0) = piVar3;
    *(QObject **)(param_1 + 0xa8) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    local_38 = CONCAT31(local_38._1_3_,*piVar3 != 0);
    if (*piVar3 == 0) {
      operator_delete(piVar3);
    }
  }
  QImage::~QImage(local_78);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      UNLOCK();
      local_38 = CONCAT31(local_38._1_3_,*(int *)local_80.field0_0x0 != 0);
      if (*(int *)local_80.field0_0x0 != 0) goto LAB_10039af56;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10039af56:
  pQVar1 = *(QPoint **)(param_1 + 0x10);
  QWidget::mapToGlobal(*(QPoint **)(param_1 + 0x88));
  uVar5 = QWidget::mapFromGlobal(pQVar1);
  pQVar6 = (QWidget *)0x0;
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (pQVar6 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) {
    pQVar6 = *(QWidget **)(param_1 + 0xa8);
  }
  QWidget::setParent(pQVar6);
  pQVar7 = (QRect *)0x0;
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (pQVar7 = (QRect *)0x0, *(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) {
    pQVar7 = *(QRect **)(param_1 + 0xa8);
  }
  local_38 = (int)uVar5;
  local_34 = (int)((ulong)uVar5 >> 0x20);
  local_30 = local_38 + 0xe2;
  local_2c = local_34 + 0x90;
  QWidget::setGeometry(pQVar7);
  QWidget::show();
  return;
}

