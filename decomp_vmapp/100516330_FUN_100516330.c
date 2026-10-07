
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100516330(undefined8 param_1,QDateTime *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  QDateTime local_20 [8];
  
  QDateTime::QDateTime(local_20,param_2);
  puVar1 = PTR__OBJC_CLASS___NSDate_100bedc40;
  lVar2 = QDateTime::toMSecsSinceEpoch();
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    ((double)lVar2 * _DAT_100b46250,puVar1,
                     PTR_s_dateWithTimeIntervalSince1970__100beda10);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_100ba25f0)(uVar3);
  QDateTime::~QDateTime(local_20);
  return uVar3;
}

