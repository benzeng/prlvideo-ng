
undefined8 * FUN_1003af220(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  QVariant local_1c0;
  QVariant local_1b0;
  QArrayData *local_1a0;
  const_iterator local_198 [120];
  const_iterator local_120 [120];
  undefined1 local_a8 [119];
  undefined1 local_31;
  
  iVar2 = QVariant::userType();
  if ((iVar2 != 8) && (iVar2 != 0x1c)) {
    if (DAT_102273e30 == 0) {
      DAT_102273e30 =
           FUN_1003af8d0("QtMetaTypePrivate::QAssociativeIterableImpl",0xffffffffffffffff,1);
    }
    cVar1 = QMetaType::hasRegisteredConverterFunction(iVar2,DAT_102273e30);
    if (cVar1 == '\0') {
      FUN_1003aff90(param_1,param_2);
      return param_1;
    }
  }
  FUN_1003af4c0(local_a8,param_2);
  *param_1 = PTR_shared_null_1021e15d0;
  uVar3 = QAssociativeIterable::size();
  FUN_1003af840(param_1,uVar3);
  QAssociativeIterable::begin();
  QAssociativeIterable::end();
  do {
    cVar1 = QAssociativeIterable::const_iterator::operator!=(local_120,local_198);
    if (cVar1 == '\0') {
      QAssociativeIterable::const_iterator::~const_iterator(local_198);
      QAssociativeIterable::const_iterator::~const_iterator(local_120);
      return param_1;
    }
    QAssociativeIterable::const_iterator::key();
    QVariant::toString();
    QAssociativeIterable::const_iterator::value();
    FUN_10007af00(param_1,&local_1a0,&local_1c0);
    QVariant::~QVariant(&local_1c0);
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_31 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003af394;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
LAB_1003af394:
    QVariant::~QVariant(&local_1b0);
    QAssociativeIterable::const_iterator::operator++(local_120);
  } while( true );
}

