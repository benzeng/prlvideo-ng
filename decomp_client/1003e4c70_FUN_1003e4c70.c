
QVariant * FUN_1003e4c70(QVariant *param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  QVariant local_28;
  
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    lVar1 = *param_3;
    iVar2 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                       PTR_s_DoNotBackupVm_102273e40,0xffffffff,1);
    if (iVar2 == 0) {
      if ((*(uint *)(param_2 + 0x70) & 0x3fffffff) == 0) {
        QVariant::QVariant(&local_28,false);
        QVariant::operator=(param_1,&local_28);
        QVariant::~QVariant(&local_28);
      }
      else {
        QVariant::operator=(param_1,(QVariant *)(param_2 + 0x68));
      }
    }
  }
  return param_1;
}

