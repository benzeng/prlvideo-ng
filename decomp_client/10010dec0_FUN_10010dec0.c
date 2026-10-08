
undefined8 FUN_10010dec0(undefined8 param_1,ulong param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = CVmConfiguration::getVmHardwareList();
  lVar1 = **(long **)(lVar1 + 0xa8 + (param_2 & 0xffffffff) * 8);
  uVar2 = 0;
  if (param_3 < (uint)(*(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8))) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10 + ((long)*(int *)(lVar1 + 8) + (long)(int)param_3) * 8);
  }
  return uVar2;
}

