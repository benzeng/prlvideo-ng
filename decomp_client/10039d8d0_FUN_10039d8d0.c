
void FUN_10039d8d0(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  QArrayData *local_48;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  param_1 = param_1 + 0x20;
  lVar2 = FUN_1003b0a30(param_1);
  if (lVar2 == 0) {
    FUN_100df99c0("[CFG_ED]","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  uVar3 = FUN_100370280();
  uVar4 = FUN_1003b0a30(param_1);
  FUN_100188480(&local_30,uVar4);
  lVar2 = FUN_1003704b0(uVar3,&local_30,DAT_100e152b8);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10039d95b;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10039d95b:
  if (lVar2 == 0) {
    return;
  }
  cVar1 = FUN_10036c790(lVar2);
  if (cVar1 == '\0') {
    return;
  }
  uVar3 = FUN_1003b0af0(param_1);
  local_48 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.Modality.Opacity",0x1f);
  FUN_1003e1800(&local_40,uVar3,&local_48,0);
  dVar5 = (double)QVariant::toDouble((bool *)&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10039d9ef;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10039d9ef:
  dVar6 = DAT_100e151c8;
  if (DAT_100e151c8 <= dVar5) {
    dVar6 = dVar5;
  }
  QWidget::setWindowOpacity(dVar6);
  return;
}

