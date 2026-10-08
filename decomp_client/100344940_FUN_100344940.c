
void FUN_100344940(QObject *param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  QKeySequence local_80 [8];
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  QVariant local_40 [2];
  undefined1 local_21;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220d060;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x10) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_60 = *piVar1 != 0;
    UNLOCK();
  }
  local_68 = (QArrayData *)QString::fromAscii_helper("1onCtrlAltDelPressed()",0x16);
  local_70 = 0x80000000;
  local_78.field7 = 0;
  FUN_100a1c600(&local_60,param_1,&local_68);
  QVariant::~QVariant((QVariant *)&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003449f1;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003449f1:
  if (DAT_102310998 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1006faf60(pvVar2);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar2;
  }
  pvVar2 = DAT_102310998;
  QKeySequence::QKeySequence(local_80,0xd000007,0,0,0);
  FUN_1006fb0a0(pvVar2,local_80,&local_60,1);
  QKeySequence::~QKeySequence(local_80);
  QVariant::~QVariant(local_40);
  piVar1 = (int *)CONCAT71(uStack_5f,local_60);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_21) && ((void *)CONCAT71(uStack_5f,local_60) != (void *)0x0)) {
      operator_delete((void *)CONCAT71(uStack_5f,local_60));
    }
  }
  return;
}

