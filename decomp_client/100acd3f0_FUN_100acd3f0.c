
undefined8 * FUN_100acd3f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  QObject *pQVar2;
  
  uVar1 = FUN_100319390(*(undefined8 *)(param_2 + 0x70));
  FUN_10018c2b0(uVar1);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  pQVar2 = (QObject *)CVmTools::getVmCoherence();
  uVar1 = 0;
  if (pQVar2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  }
  *param_1 = uVar1;
  param_1[1] = pQVar2;
  return param_1;
}

