
undefined8 *
FUN_100370e30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  QObject *pQVar3;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_3);
  if (lVar2 != 0) {
    uVar1 = FUN_10018c280(lVar2);
    lVar2 = FUN_1003192a0(uVar1,param_4);
    if (lVar2 != 0) {
      uVar1 = 0;
      pQVar3 = (QObject *)FUN_100323e30(lVar2,0);
      if (pQVar3 != (QObject *)0x0) {
        uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
      }
      *param_1 = uVar1;
      param_1[1] = pQVar3;
      return param_1;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  return param_1;
}

