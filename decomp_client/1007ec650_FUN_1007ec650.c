
void FUN_1007ec650(long param_1,QString *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  
  if ((param_3 == '\0') && (*(QString **)(param_1 + 0x40) == param_2)) {
    if (param_2 == (QString *)0x0) {
      return;
    }
    iVar2 = CAntivirusInfo::developer(param_2);
    iVar1 = CAntivirusInfo::developer(param_2);
    if (iVar2 == iVar1) {
      return;
    }
  }
  else if (param_2 == (QString *)0x0) {
    uVar4 = 0;
    goto LAB_1007ec6f5;
  }
  iVar2 = CAntivirusInfo::installationType();
  uVar4 = 1;
  if (iVar2 == 0) {
    if (DAT_102310a08 == (void *)0x0) {
      pvVar3 = operator_new(0x220);
      FUN_1007cc3f0(pvVar3);
      DAT_102273890 = 1;
      DAT_102310a08 = pvVar3;
    }
    FUN_1007d05e0(DAT_102310a08);
  }
LAB_1007ec6f5:
  *(QString **)(param_1 + 0x40) = param_2;
  FUN_100867f10(*(undefined8 *)(param_1 + 0x10),uVar4);
  FUN_100867f70(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40));
  return;
}

