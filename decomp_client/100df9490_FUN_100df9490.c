
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100df9490(undefined8 param_1,QDateTime *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  QDateTime local_20;
  
  QDateTime::QDateTime(&local_20,param_2);
  puVar1 = PTR__OBJC_CLASS___NSDate_10226ab40;
  lVar2 = QDateTime::toMSecsSinceEpoch();
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    ((double)lVar2 * _DAT_101db3a38,puVar1,
                     PTR_s_dateWithTimeIntervalSince1970__10226a758);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  QDateTime::~QDateTime(&local_20);
  return uVar3;
}

