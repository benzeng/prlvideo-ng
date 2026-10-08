
void FUN_100445c50(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  if (((((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
       (*(long *)(param_1 + 0x78) != 0)) &&
      ((*(long *)(param_1 + 0x80) != 0 && (*(int *)(*(long *)(param_1 + 0x80) + 4) != 0)))) &&
     (*(long *)(param_1 + 0x88) != 0)) {
    QDeclarativeView::rootObject();
    QObject::property((char *)&local_38);
    uVar1 = QVariant::toInt((bool *)&local_38);
    QVariant::~QVariant(&local_38);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x78);
    }
    FUN_1001bc010(uVar1,uVar3,*(undefined8 *)(param_1 + 0x68));
    uVar2 = FUN_100370280();
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x80) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x80) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x88);
    }
    FUN_100188480(&local_40,uVar3);
    uVar1 = FUN_100358a60(uVar1);
    FUN_100375300(uVar2,&local_40,uVar1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100445d7a;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100445d7a:
  QDialog::accept();
  return;
}

