
undefined8 FUN_1003e4d40(long param_1,long *param_2,QVariant *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *param_2;
    iVar2 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                       PTR_s_DoNotBackupVm_102273e40,0xffffffff,1);
    if (iVar2 == 0) {
      QVariant::operator=((QVariant *)(param_1 + 0x68),param_3);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

