
QString * FUN_1003e1800(QString *param_1,QString *param_2)

{
  undefined *puVar1;
  size_t sVar2;
  QArrayData *pQVar3;
  int iVar4;
  
  puVar1 = PTR_s_VmConfig_1021f1e00;
  iVar4 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar4 = (int)sVar2;
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar4);
  CMappingController::getValue(param_1,param_2,true);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return param_1;
}

