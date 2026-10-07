
void FUN_1004bb040(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  bVar3 = false;
  QMutex::QMutex((QMutex *)(param_1 + 4),0);
  puVar1 = PTR_shared_null_100ba20d0;
  auVar4._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar4._0_8_ = PTR_shared_null_100ba20d0;
  auVar4._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x45) = auVar4;
  param_1[0x47] = puVar1;
  param_1[0x48] = 0x3ff0000000000000;
  *(undefined1 *)((long)param_1 + 0x24a) = 1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  ___bzero(param_1 + 5,0x200);
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar2 = CVmCommonOptions::getOsVersion();
    bVar3 = iVar2 == 0x80c;
  }
  *(bool *)(param_1 + 0x49) = bVar3;
  iVar2 = FUN_1007da300("tools.coherence.oldcgdraw",0);
  bVar3 = true;
  if (((((iVar2 == 0) && (DAT_1011cceb8 != 0)) && (DAT_1011cced8 != 0)) &&
      ((DAT_1011ccee0 != 0 && (DAT_1011ccf10 != 0)))) &&
     ((DAT_1011ccef0 != 0 && ((DAT_1011ccee8 != 0 && (DAT_1011ccef8 != 0)))))) {
    bVar3 = DAT_1011ccf00 == 0;
  }
  *(bool *)((long)param_1 + 0x249) = bVar3;
  return;
}

