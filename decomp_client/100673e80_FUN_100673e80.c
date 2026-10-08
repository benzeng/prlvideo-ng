
void FUN_100673e80(CAbstractWizardModel *param_1,QObject *param_2,undefined4 param_3,
                  CAbstractWizardModel param_4,QObject *param_5)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  QTimer *this;
  CAbstractWizardModel CVar5;
  undefined1 auVar6 [16];
  QVariant local_60;
  QVariant local_50;
  undefined *local_40;
  undefined1 local_31;
  
  CAbstractWizardModel::CAbstractWizardModel(param_1,param_5);
  *(undefined ***)param_1 = &PTR_FUN_102224230;
  uVar4 = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (param_2 != (QObject *)0x0) {
    uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(QObject **)(param_1 + 0x60) = param_2;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x78) = param_3;
  puVar1 = PTR_shared_null_1021e1288;
  local_40 = PTR_shared_null_1021e1288;
  FUN_1002f6080(param_1 + 0x80,&local_40);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100673f66;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100673f66:
  *(undefined4 *)(param_1 + 0x100) = 0;
  auVar6._8_4_ = (int)puVar1;
  auVar6._0_8_ = puVar1;
  auVar6._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x108) = auVar6;
  *(undefined **)(param_1 + 0x118) = puVar1;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined **)(param_1 + 0x140) = puVar1;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  param_1[0x15c] = param_4;
  *(undefined2 *)(param_1 + 0x161) = 0;
  *(undefined4 *)(param_1 + 0x15d) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
  if (param_2 == (QObject *)0x0) {
    CVar5 = (CAbstractWizardModel)0x0;
  }
  else {
    uVar4 = FUN_10016f500(param_2);
    FUN_10061abe0(&local_50,uVar4,0);
    iVar3 = QVariant::toInt((bool *)&local_50);
    CVar5 = (CAbstractWizardModel)0x1;
    if (iVar3 != 0) {
      uVar4 = FUN_10016f500(param_2);
      FUN_10061abe0(&local_60,uVar4,0);
      iVar3 = QVariant::toInt((bool *)&local_60);
      CVar5 = (CAbstractWizardModel)(iVar3 == -0x7ffeefa8);
      QVariant::~QVariant(&local_60);
    }
    QVariant::~QVariant(&local_50);
  }
  param_1[0x168] = CVar5;
  param_1[0x169] = (CAbstractWizardModel)0x0;
  param_1[0x16a] = (CAbstractWizardModel)0x0;
  *(undefined **)(param_1 + 0x170) = puVar1;
  *(undefined8 *)(param_1 + 0x178) = 0;
  this = operator_new(0x20);
  QTimer::QTimer(this,(QObject *)param_1);
  *(QTimer **)(param_1 + 0x180) = this;
  param_1[0x198] = (CAbstractWizardModel)0x0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  param_1[0x199] = (CAbstractWizardModel)0x1;
  bVar2 = FUN_100626bf0();
  param_1[0x19a] = (CAbstractWizardModel)(bVar2 ^ 1);
  FUN_100674390(param_1);
  return;
}

