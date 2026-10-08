
QDateTime * FUN_100df93b0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  QDateTime *this;
  QDateTime local_28;
  QDateTime local_20;
  
  QDateTime::QDateTime(&local_20);
  if (param_2 != 0) {
    uVar1 = (*(code *)PTR__objc_retain_1021e1c78)(param_2);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_timeIntervalSince1970_10226a750);
    QDateTime::fromMSecsSinceEpoch((longlong)&local_28);
    QDateTime::operator=(&local_20,&local_28);
    QDateTime::~QDateTime(&local_28);
    (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  }
  this = operator_new(8);
  QDateTime::QDateTime(this,&local_20);
  QDateTime::~QDateTime(&local_20);
  return this;
}

