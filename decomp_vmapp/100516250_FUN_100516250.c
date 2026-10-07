
QDateTime * FUN_100516250(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  QDateTime *this;
  QDateTime local_28 [8];
  QDateTime local_20 [8];
  
  QDateTime::QDateTime(local_20);
  if (param_2 != 0) {
    uVar1 = (*(code *)PTR__objc_retain_100ba25f8)(param_2);
    (*(code *)PTR__objc_msgSend_100ba25e8)(uVar1,PTR_s_timeIntervalSince1970_100beda08);
    QDateTime::fromMSecsSinceEpoch((longlong)local_28);
    QDateTime::operator=(local_20,local_28);
    QDateTime::~QDateTime(local_28);
    (*(code *)PTR__objc_release_100ba25f0)(uVar1);
  }
  this = operator_new(8);
  QDateTime::QDateTime(this,local_20);
  QDateTime::~QDateTime(local_20);
  return this;
}

