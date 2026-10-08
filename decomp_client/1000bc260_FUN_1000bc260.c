
undefined8 FUN_1000bc260(long param_1,CVmTools *param_2)

{
  undefined8 uVar1;
  long lVar2;
  CVmTools *pCVar3;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_10018c2b0(lVar2);
    lVar2 = CVmConfiguration::getVmSettings();
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      pCVar3 = (CVmTools *)CVmSettings::getVmTools();
      if (pCVar3 == (CVmTools *)0x0) {
        uVar1 = 0;
      }
      else {
        CVmTools::operator=(param_2,pCVar3);
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

