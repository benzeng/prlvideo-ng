
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007a9800(QSize *param_1,QSize *param_2,undefined8 param_3,QSize *param_4,
                  undefined1 param_5,undefined8 param_6)

{
  QSize QVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  QFontMetrics local_40 [15];
  undefined1 local_31;
  
  QLabel::QLabel((QLabel *)param_1,param_3,0xd);
  *param_1 = (QSize)&PTR_metaObject_1021f7610;
  param_1[2] = (QSize)&PTR_FUN_1021f77c0;
  param_1[7].field0_0x0 = 0;
  param_1[7].field1_0x4 = 0;
  param_1[6].field0_0x0 = 0;
  param_1[6].field1_0x4 = 0;
  param_1[8].field0_0x0 = 0xffffffff;
  param_1[8].field1_0x4 = 0xffffffff;
  QVar1 = *param_2;
  param_1[9] = QVar1;
  if (1 < *(int *)QVar1 + 1U) {
    LOCK();
    *(int *)QVar1 = *(int *)QVar1 + 1;
    local_31 = *(int *)QVar1 != 0;
    UNLOCK();
  }
  QVar1 = param_2[1];
  param_1[10] = QVar1;
  if (1 < *(int *)QVar1 + 1U) {
    LOCK();
    *(int *)QVar1 = *(int *)QVar1 + 1;
    local_31 = *(int *)QVar1 != 0;
    UNLOCK();
  }
  QVar1 = param_2[2];
  param_1[0xb] = QVar1;
  if (1 < *(int *)QVar1 + 1U) {
    LOCK();
    *(int *)QVar1 = *(int *)QVar1 + 1;
    local_31 = *(int *)QVar1 != 0;
    UNLOCK();
  }
  QVar1 = param_2[3];
  param_1[0xc] = QVar1;
  if (1 < *(int *)QVar1 + 1U) {
    LOCK();
    *(int *)QVar1 = *(int *)QVar1 + 1;
    local_31 = *(int *)QVar1 != 0;
    UNLOCK();
  }
  QVar1 = param_2[4];
  param_1[0xd] = QVar1;
  if (1 < *(int *)QVar1 + 1U) {
    LOCK();
    *(int *)QVar1 = *(int *)QVar1 + 1;
    local_31 = *(int *)QVar1 != 0;
    UNLOCK();
  }
  param_1[0xe].field0_0x0 = param_2[5].field0_0x0;
  QVar1 = param_2[6];
  param_1[0xf] = QVar1;
  if (1 < *(int *)QVar1 + 1U) {
    LOCK();
    *(int *)QVar1 = *(int *)QVar1 + 1;
    local_31 = *(int *)QVar1 != 0;
    UNLOCK();
  }
  iVar3 = (int)param_1;
  QVar1 = param_2[7];
  param_1[0x11] = param_2[8];
  param_1[0x10] = QVar1;
  *(undefined1 *)&param_1[0x12].field0_0x0 = param_5;
  lVar7 = (long)DAT_1023109f8;
  if (DAT_1023109f8 != (QSize *)0x0) {
    QWidget::hide();
    QBasicTimer::start((int)lVar7 + 0x34,(QObject *)0x32);
  }
  DAT_1023109f8 = param_1;
  plVar4 = (long *)QWidget::style();
  (**(code **)(*plVar4 + 0xe0))(plVar4,0x45,0,param_1);
  QLabel::setMargin(iVar3);
  QFrame::setFrameStyle(iVar3);
  QLabel::setIndent(iVar3);
  QWidget::ensurePolished();
  QVar1 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = QVar1;
  QFontMetrics::QFontMetrics(local_40,(QFont *)((long)param_1[5] + 0x38));
  iVar2 = QFontMetrics::descent();
  lVar7 = 0;
  if (iVar2 == 2) {
    iVar2 = QFontMetrics::ascent();
    lVar7 = (ulong)(10 < iVar2) << 0x20;
  }
  lVar5 = (**(code **)((long)*param_1 + 0x70))(param_1);
  uVar6 = (ulong)((int)lVar5 + 1) | lVar7 + lVar5 & 0xffffffff00000000U;
  QWidget::resize(param_1);
  QObject::installEventFilter(*(QObject **)PTR_self_1021e1388);
  QBasicTimer::start(iVar3 + 0x30,(QObject *)0x2710);
  plVar4 = (long *)QWidget::style();
  iVar3 = (**(code **)(*plVar4 + 0xf0))(plVar4,0x2e,0,param_1,0,param_6,uVar6);
  QWidget::setWindowOpacity((double)iVar3 / _DAT_100e29e10);
  QFontMetrics::~QFontMetrics(local_40);
  return;
}

