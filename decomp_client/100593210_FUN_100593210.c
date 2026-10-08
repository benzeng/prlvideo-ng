
QVariant * FUN_100593210(QVariant *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *in_R8;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221b640);
  if (lVar3 != 0) {
    lVar1 = *in_R8;
    iVar2 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                       PTR_s_Profiles_1022744b0,0xffffffff,1);
    if (iVar2 == 0) {
      FUN_100557980(local_28,lVar3);
      if (DAT_102274378 == 0) {
        DAT_102274378 = FUN_100581170("Remaps::ProfilesList",0xffffffffffffffff,1);
      }
      QVariant::QVariant(param_1,DAT_102274378,local_28,0);
      FUN_1000fe670(local_28);
      return param_1;
    }
    lVar1 = *in_R8;
    iVar2 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                       PTR_s_ProfileAssignments_1022744b8,0xffffffff,1);
    if (iVar2 == 0) {
      FUN_1005579a0(local_30,lVar3);
      if (DAT_1022743a0 == 0) {
        DAT_1022743a0 = FUN_10024fc20("GUI::StringPairList",0xffffffffffffffff,1);
      }
      QVariant::QVariant(param_1,DAT_1022743a0,local_30,0);
      FUN_1001e3400(local_30);
      return param_1;
    }
  }
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
  return param_1;
}

