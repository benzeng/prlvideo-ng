
/* Function Stack Size: 0x10 bytes */

ID PDLFeedbackButtonDelegate::defaultEmail(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  QVariant local_30;
  QArrayData *local_20;
  undefined1 local_11;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001554a0(uVar1);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = FUN_10016f500(lVar2);
    FUN_10061abe0(&local_30,uVar1,0x12);
    ::QVariant::toString();
    ::QVariant::~QVariant(&local_30);
    uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                       &local_20);
    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        local_11 = *(int *)local_20 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10002ad65;
      }
      QArrayData::deallocate(local_20,2,8);
    }
  }
LAB_10002ad65:
  IVar3 = _objc_autoreleaseReturnValue(uVar1);
  return IVar3;
}

